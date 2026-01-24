module tb_controlunit;

  // Inputs
  logic       Zero, Negative, Carry, Overflow;
  logic       funct7;     // instr[30]
  logic [2:0] funct3;
  logic [6:0] opcode;

  // Outputs
  logic       regWriteEnable;
  logic       load, store;
  logic       word;
  logic [3:0] ALUControl;

  logic       JALR;
  logic       sel_mux_pcnext;
  logic       sel_mux_srcB;
  logic [1:0] sel_mux_srcA;
  logic [1:0] sel_mux_writeback;

  // DUT
  ControlUnit Dut (
    .Zero(Zero), .Negative(Negative), .Carry(Carry), .Overflow(Overflow),
    .funct7(funct7), .funct3(funct3), .opcode(opcode),

    .regWriteEnable(regWriteEnable),
    .load(load), .store(store),
    .word(word),
    .ALUControl(ALUControl),

    .JALR(JALR),
    .sel_mux_pcnext(sel_mux_pcnext),
    .sel_mux_srcB(sel_mux_srcB),
    .sel_mux_srcA(sel_mux_srcA),
    .sel_mux_writeback(sel_mux_writeback)
  );

  // -----------------------------
  // Constantes (iguais ao ControlUnit.sv)
  // -----------------------------
  localparam logic [6:0] OP        = 7'b0110011;
  localparam logic [6:0] OP_IMM    = 7'b0010011;
  localparam logic [6:0] OP_32     = 7'b0111011;
  localparam logic [6:0] OP_IMM_32 = 7'b0011011;

  localparam logic [6:0] LOAD_OP   = 7'b0000011;
  localparam logic [6:0] STORE_OP  = 7'b0100011;
  localparam logic [6:0] BRANCH_OP = 7'b1100011;

  localparam logic [6:0] JALR_OP   = 7'b1100111;
  localparam logic [6:0] JAL_OP    = 7'b1101111;

  localparam logic [6:0] LUI_OP    = 7'b0110111;
  localparam logic [6:0] AUIPC_OP  = 7'b0010111;

  localparam logic [3:0] ALU_ADD  = 4'b0000;
  localparam logic [3:0] ALU_SUB  = 4'b1000;
  localparam logic [3:0] ALU_SLL  = 4'b0001;
  localparam logic [3:0] ALU_SLT  = 4'b0010;
  localparam logic [3:0] ALU_SLTU = 4'b0011;
  localparam logic [3:0] ALU_XOR  = 4'b0100;
  localparam logic [3:0] ALU_SRL  = 4'b0101;
  localparam logic [3:0] ALU_OR   = 4'b0110;
  localparam logic [3:0] ALU_AND  = 4'b0111;
  localparam logic [3:0] ALU_SRA  = 4'b1101;

  int errors = 0;

  task automatic apply_inputs(
    input logic [6:0] opcode_i,
    input logic [2:0] funct3_i,
    input logic       funct7b30_i,
    input logic       Z, N, C, V
  );
  begin
    opcode     = opcode_i;
    funct3     = funct3_i;
    funct7  = funct7b30_i;
    Zero       = Z;
    Negative   = N;
    Carry      = C;
    Overflow   = V;
    #1; // settle (verilator --timing)
  end
  endtask

  task automatic expect_outputs(
    input string      name,

    input logic       exp_regWriteEnable,
    input logic       exp_load,
    input logic       exp_store,
    input logic       exp_word,
    input logic [3:0] exp_ALUControl,

    input logic       exp_JALR,
    input logic       exp_sel_mux_pcnext,
    input logic       exp_sel_mux_srcB,
    input logic [1:0] exp_sel_mux_srcA,
    input logic [1:0] exp_sel_mux_writeback
  );
    bit ok;
  begin
    ok = 1;

    if (regWriteEnable !== exp_regWriteEnable) ok = 0;
    if (load           !== exp_load)           ok = 0;
    if (store          !== exp_store)          ok = 0;
    if (word           !== exp_word)           ok = 0;
    if (ALUControl     !== exp_ALUControl)     ok = 0;

    if (JALR           !== exp_JALR)           ok = 0;
    if (sel_mux_pcnext !== exp_sel_mux_pcnext) ok = 0;
    if (sel_mux_srcB   !== exp_sel_mux_srcB)   ok = 0;
    if (sel_mux_srcA   !== exp_sel_mux_srcA)   ok = 0;
    if (sel_mux_writeback !== exp_sel_mux_writeback) ok = 0;

    if (ok) begin
      $display("[ OK ] %s", name);
    end else begin
      errors++;
      $display("[FAIL] %s", name);
      $display("  got : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b",
               regWriteEnable, load, store, word, ALUControl,
               JALR, sel_mux_pcnext, sel_mux_srcB, sel_mux_srcA, sel_mux_writeback);
      $display("  exp : regW=%0b load=%0b store=%0b word=%0b ALU=%b  JALR=%0b pcnext=%0b srcB=%0b srcA=%b wb=%b",
               exp_regWriteEnable, exp_load, exp_store, exp_word, exp_ALUControl,
               exp_JALR, exp_sel_mux_pcnext, exp_sel_mux_srcB, exp_sel_mux_srcA, exp_sel_mux_writeback);
    end
  end
  endtask

  // Helpers para branches
  task automatic run_branch_case(
    input string name,
    input logic [2:0] funct3_i,
    input logic Z, N, C, V,
    input logic exp_take
  );
  begin
    apply_inputs(BRANCH_OP, funct3_i, 1'b0, Z, N, C, V);

    // Branch sempre: ALU=SUB, SrcA=RD1, SrcB=RD2; pcnext = take/not take
    expect_outputs(name,
      /*regW*/ 1'b0, /*load*/ 1'b0, /*store*/ 1'b0, /*word*/ 1'b0,
      /*ALU*/  ALU_SUB,
      /*JALR*/ 1'b0,
      /*pcnext*/ exp_take,
      /*srcB*/ 1'b0,
      /*srcA*/ 2'b00,
      /*wb*/   2'b00
    );
  end
  endtask

  initial begin
    // -----------------------------
    // Defaults
    // -----------------------------
    apply_inputs(7'h00, 3'b000, 1'b0, 0,0,0,0);
    expect_outputs("DEFAULT/UNKNOWN opcode",
      0,0,0,0, ALU_ADD,
      0,0,0,2'b00,2'b00
    );

    // -----------------------------
    // OP (R-type)
    // -----------------------------
    apply_inputs(OP, 3'b000, 1'b0, 0,0,0,0); // ADD
    expect_outputs("OP ADD",
      1,0,0,0, ALU_ADD,
      0,0,0,2'b00,2'b00
    );

    apply_inputs(OP, 3'b000, 1'b1, 0,0,0,0); // SUB
    expect_outputs("OP SUB",
      1,0,0,0, ALU_SUB,
      0,0,0,2'b00,2'b00
    );

    apply_inputs(OP, 3'b101, 1'b0, 0,0,0,0); // SRL
    expect_outputs("OP SRL",
      1,0,0,0, ALU_SRL,
      0,0,0,2'b00,2'b00
    );

    apply_inputs(OP, 3'b101, 1'b1, 0,0,0,0); // SRA
    expect_outputs("OP SRA",
      1,0,0,0, ALU_SRA,
      0,0,0,2'b00,2'b00
    );

    apply_inputs(OP, 3'b010, 1'b0, 0,0,0,0); // SLT
    expect_outputs("OP SLT",
      1,0,0,0, ALU_SLT,
      0,0,0,2'b00,2'b00
    );

    apply_inputs(OP, 3'b011, 1'b0, 0,0,0,0); // SLTU
    expect_outputs("OP SLTU",
      1,0,0,0, ALU_SLTU,
      0,0,0,2'b00,2'b00
    );

    // -----------------------------
    // OP-IMM (I-type ALU)
    // -----------------------------
    apply_inputs(OP_IMM, 3'b000, 1'b0, 0,0,0,0); // ADDI
    expect_outputs("OP-IMM ADDI",
      1,0,0,0, ALU_ADD,
      0,0,1,2'b00,2'b00
    );

    apply_inputs(OP_IMM, 3'b101, 1'b0, 0,0,0,0); // SRLI
    expect_outputs("OP-IMM SRLI",
      1,0,0,0, ALU_SRL,
      0,0,1,2'b00,2'b00
    );

    apply_inputs(OP_IMM, 3'b101, 1'b1, 0,0,0,0); // SRAI
    expect_outputs("OP-IMM SRAI",
      1,0,0,0, ALU_SRA,
      0,0,1,2'b00,2'b00
    );

    // -----------------------------
    // LOAD / STORE
    // -----------------------------
    apply_inputs(LOAD_OP, 3'b010, 1'b0, 0,0,0,0);
    expect_outputs("LOAD",
      1,1,0,0, ALU_ADD,
      0,0,1,2'b00,2'b01
    );

    apply_inputs(STORE_OP, 3'b010, 1'b0, 0,0,0,0);
    expect_outputs("STORE",
      0,0,1,0, ALU_ADD,
      0,0,1,2'b00,2'b00
    );

    // -----------------------------
    // LUI / AUIPC
    // -----------------------------
    apply_inputs(LUI_OP, 3'b000, 1'b0, 0,0,0,0);
    expect_outputs("LUI",
      1,0,0,0, ALU_ADD,
      0,0,1,2'b10,2'b00
    );

    apply_inputs(AUIPC_OP, 3'b000, 1'b0, 0,0,0,0);
    expect_outputs("AUIPC",
      1,0,0,0, ALU_ADD,
      0,0,1,2'b01,2'b00
    );

    // -----------------------------
    // JAL / JALR
    // -----------------------------
    apply_inputs(JAL_OP, 3'b000, 1'b0, 0,0,0,0);
    expect_outputs("JAL",
      1,0,0,0, ALU_ADD,
      0,1,1,2'b01,2'b10
    );

    apply_inputs(JALR_OP, 3'b000, 1'b0, 0,0,0,0);
    expect_outputs("JALR",
      1,0,0,0, ALU_ADD,
      1,1,1,2'b00,2'b10
    );

    // -----------------------------
    // OP-32 / OP-IMM-32 (word=1)
    // -----------------------------
    apply_inputs(OP_32, 3'b000, 1'b0, 0,0,0,0); // ADDW
    expect_outputs("OP-32 ADDW",
      1,0,0,1, ALU_ADD,
      0,0,0,2'b00,2'b00
    );

    apply_inputs(OP_32, 3'b000, 1'b1, 0,0,0,0); // SUBW
    expect_outputs("OP-32 SUBW",
      1,0,0,1, ALU_SUB,
      0,0,0,2'b00,2'b00
    );

    apply_inputs(OP_IMM_32, 3'b000, 1'b0, 0,0,0,0); // ADDIW
    expect_outputs("OP-IMM-32 ADDIW",
      1,0,0,1, ALU_ADD,
      0,0,1,2'b00,2'b00
    );

    apply_inputs(OP_IMM_32, 3'b101, 1'b0, 0,0,0,0); // SRLIW
    expect_outputs("OP-IMM-32 SRLIW",
      1,0,0,1, ALU_SRL,
      0,0,1,2'b00,2'b00
    );

    apply_inputs(OP_IMM_32, 3'b101, 1'b1, 0,0,0,0); // SRAIW
    expect_outputs("OP-IMM-32 SRAIW",
      1,0,0,1, ALU_SRA,
      0,0,1,2'b00,2'b00
    );

    // -----------------------------
    // BRANCHES
    // signed_lt   = N ^ V
    // unsigned_lt = ~Carry
    // -----------------------------
    run_branch_case("BEQ taken",      3'b000, 1,0,1,0, 1);
    run_branch_case("BEQ not taken",  3'b000, 0,0,1,0, 0);

    run_branch_case("BNE taken",      3'b001, 0,0,1,0, 1);
    run_branch_case("BNE not taken",  3'b001, 1,0,1,0, 0);

    run_branch_case("BLT taken",      3'b100, 0,1,1,0, 1); // N^V=1
    run_branch_case("BLT not taken",  3'b100, 0,0,1,0, 0);

    run_branch_case("BGE taken",      3'b101, 0,0,1,0, 1); // N^V=0
    run_branch_case("BGE not taken",  3'b101, 0,1,1,0, 0); // N^V=1

    run_branch_case("BLTU taken",     3'b110, 0,0,0,0, 1); // Carry=0 => ~Carry=1
    run_branch_case("BLTU not taken", 3'b110, 0,0,1,0, 0);

    run_branch_case("BGEU taken",     3'b111, 0,0,1,0, 1); // Carry=1 => ~Carry=0
    run_branch_case("BGEU not taken", 3'b111, 0,0,0,0, 0);

    // -----------------------------
    // Resultado final
    // -----------------------------
    if (errors == 0) begin
      $display("\n==============================");
      $display("ALL CONTROL UNIT TESTS PASSED");
      $display("==============================\n");
      $finish;
    end else begin
      $display("\n=========================");
      $display("CONTROL UNIT TESTS FAILED : %0d", errors);
      $display("===========================\n");
      $fatal(1);
    end
  end

endmodule

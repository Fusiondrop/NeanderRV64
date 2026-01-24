module tb_datapath;

  localparam int N = 64;

  // -----------------------------
  // Clock / Reset
  // -----------------------------
  logic clk;
  logic rst;

  // -----------------------------
  // Sinais de controle (stub CU)
  // -----------------------------
  logic        regWriteEnable;
  logic        load, store;
  logic        word;
  logic [3:0]  ALUControl;

  logic        JALR;
  logic        sel_mux_pcnext;
  logic        sel_mux_srcB;
  logic [1:0]  sel_mux_srcA;
  logic [1:0]  sel_mux_writeback;

  // -----------------------------
  // Saídas do Datapath
  // -----------------------------
  wire Overflow, Carry, Zero, Negative;
  wire funct7;          // (comentário: é o bit instr[30], usado como "funct7[5]" para diferenciar add/sub, srl/sra, etc.)
  wire [2:0] funct3;
  wire [6:0] opcode;

  // -----------------------------
  // DUT
  // -----------------------------
  Datapath #(.N(N)) dut (
    .clk(clk),
    .rst(rst),

    .regWriteEnable(regWriteEnable),
    .load(load),
    .store(store),
    .word(word),
    .ALUControl(ALUControl),

    .JALR(JALR),
    .sel_mux_pcnext(sel_mux_pcnext),
    .sel_mux_srcB(sel_mux_srcB),
    .sel_mux_srcA(sel_mux_srcA),
    .sel_mux_writeback(sel_mux_writeback),

    .Overflow(Overflow),
    .Carry(Carry),
    .Zero(Zero),
    .Negative(Negative),

    .funct7(funct7),
    .funct3(funct3),
    .opcode(opcode)
  );

  // -----------------------------
  // Constantes de opcode
  // -----------------------------
  localparam logic [6:0] OP_IMM     = 7'b0010011;
  localparam logic [6:0] OP         = 7'b0110011;
  localparam logic [6:0] LUI_OP     = 7'b0110111;
  localparam logic [6:0] AUIPC_OP   = 7'b0010111;
  localparam logic [6:0] JAL_OP     = 7'b1101111;
  localparam logic [6:0] JALR_OP    = 7'b1100111;
  localparam logic [6:0] BRANCH_OP  = 7'b1100011;
  localparam logic [6:0] LOAD_OP    = 7'b0000011;
  localparam logic [6:0] STORE_OP   = 7'b0100011;

  // RV64I word ops
  localparam logic [6:0] OP_IMM_32  = 7'b0011011; // *IW
  localparam logic [6:0] OP_32      = 7'b0111011; // *W

  // -----------------------------
  // ALUControl (conforme sua ULA.sv)
  // -----------------------------
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

  // -----------------------------
  // Helpers: NOP (addi x0,x0,0)
  // -----------------------------
  function automatic logic [31:0] enc_nop();
    return 32'h0000_0013;
  endfunction

  // -----------------------------
  // Helpers: encoder de instruções
  // -----------------------------
  function automatic logic [31:0] enc_r(
    input logic [6:0] f7,
    input logic [4:0] rs2,
    input logic [4:0] rs1,
    input logic [2:0] f3,
    input logic [4:0] rd,
    input logic [6:0] opc
  );
    return {f7, rs2, rs1, f3, rd, opc};
  endfunction

  function automatic logic [31:0] enc_i(
    input logic [11:0] imm,
    input logic [4:0]  rs1,
    input logic [2:0]  f3,
    input logic [4:0]  rd,
    input logic [6:0]  opc
  );
    return {imm, rs1, f3, rd, opc};
  endfunction

  function automatic logic [31:0] enc_s(
    input logic [11:0] imm,
    input logic [4:0]  rs2,
    input logic [4:0]  rs1,
    input logic [2:0]  f3,
    input logic [6:0]  opc
  );
    return {imm[11:5], rs2, rs1, f3, imm[4:0], opc};
  endfunction

  // imm_b é offset em bytes (múltiplo de 2). bit0 sempre 0.
  function automatic logic [31:0] enc_b(
    input int          imm_b,
    input logic [4:0]  rs2,
    input logic [4:0]  rs1,
    input logic [2:0]  f3,
    input logic [6:0]  opc
  );
    logic [12:0] imm;
    begin
      imm = imm_b[12:0];
      return {imm[12], imm[10:5], rs2, rs1, f3, imm[4:1], imm[11], opc};
    end
  endfunction

  function automatic logic [31:0] enc_u(
    input logic [19:0] imm20,
    input logic [4:0]  rd,
    input logic [6:0]  opc
  );
    return {imm20, rd, opc};
  endfunction

  // imm_j é offset em bytes (múltiplo de 2). bit0 sempre 0.
  function automatic logic [31:0] enc_j(
    input int          imm_j,
    input logic [4:0]  rd,
    input logic [6:0]  opc
  );
    logic [20:0] imm;
    begin
      imm = imm_j[20:0];
      return {imm[20], imm[10:1], imm[11], imm[19:12], rd, opc};
    end
  endfunction

  // -----------------------------
  // Clock tick
  // -----------------------------
  task automatic tick();
    #1 clk = 1'b1;
    #1 clk = 1'b0;
    #1;
  endtask

  // -----------------------------
  // Init via hierarquia
  // -----------------------------
  task automatic init_imem(input logic [31:0] fill);
    int i;
    begin
      // sobrescreve o conteúdo carregado por program.hex
      for (i = 0; i < 1024; i++) begin
        dut.instr_mem.I_mem[i] = fill;
      end
    end
  endtask

  task automatic init_regs();
    int i;
    begin
      for (i = 0; i < 32; i++) begin
        dut.reg_file.Registers[i] = '0;
      end
      dut.reg_file.Registers[0] = '0;
    end
  endtask

  task automatic init_dmem();
    int i;
    begin
      for (i = 0; i < 1024; i++) begin
        dut.data_mem.D_mem[i] = '0;
      end
    end
  endtask

  task automatic set_reg(input int r, input logic [N-1:0] v);
    if (r != 0) dut.reg_file.Registers[r] = v;
  endtask

  function automatic logic [N-1:0] get_reg(input int r);
    if (r == 0) return '0;
    return dut.reg_file.Registers[r];
  endfunction

  // endereço em bytes -> index na DataMemory (N=64 => >>3)
  // máscara para 1024 entradas (10 bits)
  function automatic int unsigned dmem_index(input logic [N-1:0] addr_bytes);
    logic [N-1:0] shifted;
    logic [9:0]   idx10;
    begin
      shifted = (addr_bytes >> 3);
      idx10   = shifted[9:0];      // pega só os 10 bits necessários
      return int'({22'b0, idx10}); // 32 bits
    end
  endfunction

  // -----------------------------
  // Checks
  // -----------------------------
  task automatic expect_reg(input int r, input logic [N-1:0] exp, input string tag);
    logic [N-1:0] got;
    begin
      got = get_reg(r);
      if (got !== exp) begin
        $display("[FAIL] %s | x%0d got=0x%016h exp=0x%016h", tag, r, got, exp);
        $fatal;
      end else begin
        $display("[ OK ] %s | x%0d = 0x%016h", tag, r, got);
      end
    end
  endtask

  task automatic expect_pc(input logic [N-1:0] exp, input string tag);
    logic [N-1:0] got;
    begin
      got = dut.pc_index;
      if (got !== exp) begin
        $display("[FAIL] %s | PC got=0x%016h exp=0x%016h", tag, got, exp);
        $fatal;
      end else begin
        $display("[ OK ] %s | PC = 0x%016h", tag, got);
      end
    end
  endtask

  // -----------------------------
  // ControlUnit STUB (decode)
  // -----------------------------
  logic [N-1:0] rs1_val, rs2_val;
  logic branch_taken;

  always_comb begin
    // pega operandos atuais (via fios internos do Datapath)
    rs1_val = dut.RD1;
    rs2_val = dut.RD2;

    // defaults seguros
    regWriteEnable    = 1'b0;
    load              = 1'b0;
    store             = 1'b0;
    word              = 1'b0;
    ALUControl        = ALU_ADD;

    JALR              = 1'b0;
    sel_mux_pcnext    = 1'b0;       // 0: PC+4
    sel_mux_srcB      = 1'b0;       // 0: RD2
    sel_mux_srcA      = 2'b00;      // 00: RD1
    sel_mux_writeback = 2'b00;      // 00: ALUResult

    branch_taken      = 1'b0;

    unique case (opcode)

      // ---------------- OP (R-type) ----------------
      OP: begin
        regWriteEnable    = 1'b1;
        sel_mux_srcA      = 2'b00;  // RD1
        sel_mux_srcB      = 1'b0;   // RD2
        sel_mux_writeback = 2'b00;  // ALUResult

        unique case (funct3)
          3'b000: ALUControl = (funct7 ? ALU_SUB : ALU_ADD); // add/sub
          3'b001: ALUControl = ALU_SLL;
          3'b010: ALUControl = ALU_SLT;
          3'b011: ALUControl = ALU_SLTU;
          3'b100: ALUControl = ALU_XOR;
          3'b101: ALUControl = (funct7 ? ALU_SRA : ALU_SRL); // sra/srl
          3'b110: ALUControl = ALU_OR;
          3'b111: ALUControl = ALU_AND;
          default: ALUControl = ALU_ADD;
        endcase
      end

      // -------------- OP-IMM (I-type) --------------
      OP_IMM: begin
        regWriteEnable    = 1'b1;
        sel_mux_srcA      = 2'b00;  // RD1
        sel_mux_srcB      = 1'b1;   // imm
        sel_mux_writeback = 2'b00;  // ALUResult

        unique case (funct3)
          3'b000: ALUControl = ALU_ADD; // addi
          3'b001: ALUControl = ALU_SLL; // slli
          3'b010: ALUControl = ALU_SLT; // slti
          3'b011: ALUControl = ALU_SLTU;// sltiu
          3'b100: ALUControl = ALU_XOR; // xori
          3'b101: ALUControl = (funct7 ? ALU_SRA : ALU_SRL); // srai/srli
          3'b110: ALUControl = ALU_OR;  // ori
          3'b111: ALUControl = ALU_AND; // andi
          default: ALUControl = ALU_ADD;
        endcase
      end

      // ------------------- LUI ---------------------
      LUI_OP: begin
        regWriteEnable    = 1'b1;
        sel_mux_srcA      = 2'b10;  // 0
        sel_mux_srcB      = 1'b1;   // imm
        ALUControl        = ALU_ADD; // 0 + imm
        sel_mux_writeback = 2'b00;
      end

      // ------------------ AUIPC --------------------
      AUIPC_OP: begin
        regWriteEnable    = 1'b1;
        sel_mux_srcA      = 2'b01;  // PC
        sel_mux_srcB      = 1'b1;   // imm
        ALUControl        = ALU_ADD;
        sel_mux_writeback = 2'b00;
      end

      // ------------------- LOAD --------------------
      LOAD_OP: begin
        regWriteEnable    = 1'b1;
        load              = 1'b1;
        sel_mux_srcA      = 2'b00;  // rs1
        sel_mux_srcB      = 1'b1;   // imm
        ALUControl        = ALU_ADD; // endereço
        sel_mux_writeback = 2'b01;   // loadedData
      end

      // ------------------- STORE -------------------
      STORE_OP: begin
        store             = 1'b1;
        sel_mux_srcA      = 2'b00;  // rs1
        sel_mux_srcB      = 1'b1;   // imm
        ALUControl        = ALU_ADD; // endereço
      end

      // ------------------ BRANCH -------------------
      BRANCH_OP: begin
        // usa ALU para calcular PC+imm (pc_target)
        sel_mux_srcA   = 2'b01; // PC
        sel_mux_srcB   = 1'b1;  // imm
        ALUControl     = ALU_ADD;

        // condição do branch via comparação direta (no stub)
        unique case (funct3)
          3'b000: branch_taken = (rs1_val == rs2_val); // beq
          3'b001: branch_taken = (rs1_val != rs2_val); // bne
          3'b100: branch_taken = ($signed(rs1_val) <  $signed(rs2_val)); // blt
          3'b101: branch_taken = ($signed(rs1_val) >= $signed(rs2_val)); // bge
          3'b110: branch_taken = (rs1_val <  rs2_val); // bltu
          3'b111: branch_taken = (rs1_val >= rs2_val); // bgeu
          default: branch_taken = 1'b0;
        endcase

        sel_mux_pcnext = branch_taken; // 1: pc_target
      end

      // -------------------- JAL --------------------
      JAL_OP: begin
        regWriteEnable    = 1'b1;
        sel_mux_writeback = 2'b10;  // PC+4
        sel_mux_pcnext    = 1'b1;   // jump
        sel_mux_srcA      = 2'b01;  // PC
        sel_mux_srcB      = 1'b1;   // imm
        ALUControl        = ALU_ADD; // pc_target = PC + imm
      end

      // ------------------- JALR --------------------
      JALR_OP: begin
        regWriteEnable    = 1'b1;
        sel_mux_writeback = 2'b10;  // PC+4
        sel_mux_pcnext    = 1'b1;   // jump
        JALR              = 1'b1;   // máscara bit0 no pc_target dentro do Datapath
        sel_mux_srcA      = 2'b00;  // rs1
        sel_mux_srcB      = 1'b1;   // imm
        ALUControl        = ALU_ADD; // pc_target = rs1 + imm
      end

      // ------------- RV64I OP-IMM-32 (*IW) ---------
      OP_IMM_32: begin
        regWriteEnable    = 1'b1;
        word              = 1'b1;
        sel_mux_srcA      = 2'b00;  // rs1
        sel_mux_srcB      = 1'b1;   // imm
        sel_mux_writeback = 2'b00;

        unique case (funct3)
          3'b000: ALUControl = ALU_ADD;                 // addiw
          3'b001: ALUControl = ALU_SLL;                 // slliw
          3'b101: ALUControl = (funct7 ? ALU_SRA : ALU_SRL); // sraiw/srliw
          default: ALUControl = ALU_ADD;
        endcase
      end

      // --------------- RV64I OP-32 (*W) ------------
      OP_32: begin
        regWriteEnable    = 1'b1;
        word              = 1'b1;
        sel_mux_srcA      = 2'b00;  // rs1
        sel_mux_srcB      = 1'b0;   // rs2
        sel_mux_writeback = 2'b00;

        unique case (funct3)
          3'b000: ALUControl = (funct7 ? ALU_SUB : ALU_ADD); // addw/subw
          3'b001: ALUControl = ALU_SLL;                      // sllw
          3'b101: ALUControl = (funct7 ? ALU_SRA : ALU_SRL); // sraw/srlw
          default: ALUControl = ALU_ADD;
        endcase
      end

      default: begin end
    endcase
  end

  // -----------------------------
  // Reset helper
  // -----------------------------
  task automatic do_reset();
    begin
      rst = 1'b1;
      tick();      // 1 posedge com rst=1 => PC_out vira 0
      rst = 1'b0;   // solta o reset sem dar outro tick
      #1;           // só dá um tempo para a lógica combinacional estabilizar
    end
  endtask


  // -----------------------------
  // Testes
  // -----------------------------
  initial begin
    clk = 1'b0;
    rst = 1'b0;

    // sobrescreve memórias após o initial $readmemh do InstructionMemory
    #2;

    // =============================
    // Grupo 1: R-type
    // =============================
    init_imem(enc_nop());
    init_regs();
    init_dmem();
    do_reset();

    set_reg(1, 64'd10);
    set_reg(2, 64'd20);
    dut.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b000, 5'd3, OP); // add x3,x1,x2
    tick();
    expect_reg(3, 64'd30, "ADD");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'd10);
    set_reg(2, 64'd20);
    dut.instr_mem.I_mem[0] = enc_r(7'b0100000, 5'd2, 5'd1, 3'b000, 5'd3, OP); // sub
    tick();
    expect_reg(3, 64'hFFFF_FFFF_FFFF_FFF6, "SUB (10-20)");

    // AND/OR/XOR
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hFF00_FF00_FF00_FF00);
    set_reg(2, 64'h0F0F_0F0F_0F0F_0F0F);
    dut.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b111, 5'd3, OP); // and
    tick();
    expect_reg(3, 64'h0F00_0F00_0F00_0F00, "AND");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hF000_0000_0000_0000);
    set_reg(2, 64'h0FFF_FFFF_FFFF_FFFF);
    dut.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b110, 5'd3, OP); // or
    tick();
    expect_reg(3, 64'hFFFF_FFFF_FFFF_FFFF, "OR");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hAAAA_AAAA_AAAA_AAAA);
    set_reg(2, 64'hFFFF_0000_FFFF_0000);
    dut.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b100, 5'd3, OP); // xor
    tick();
    expect_reg(3, 64'h5555_AAAA_5555_AAAA, "XOR");

    // Shift: SLL, SRL, SRA
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'd1);
    set_reg(2, 64'd3);
    dut.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b001, 5'd3, OP); // sll
    tick();
    expect_reg(3, 64'd8, "SLL");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h8000_0000_0000_0000);
    set_reg(2, 64'd1);
    dut.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b101, 5'd3, OP); // srl
    tick();
    expect_reg(3, 64'h4000_0000_0000_0000, "SRL");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h8000_0000_0000_0000);
    set_reg(2, 64'd1);
    dut.instr_mem.I_mem[0] = enc_r(7'b0100000, 5'd2, 5'd1, 3'b101, 5'd3, OP); // sra
    tick();
    expect_reg(3, 64'hC000_0000_0000_0000, "SRA");

    // SLT/SLTU
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hFFFF_FFFF_FFFF_FFFF); // -1
    set_reg(2, 64'd1);
    dut.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b010, 5'd3, OP); // slt (signed)
    tick();
    expect_reg(3, 64'd1, "SLT signed (-1 < 1)");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hFFFF_FFFF_FFFF_FFFF); // unsigned max
    set_reg(2, 64'd1);
    dut.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b011, 5'd3, OP); // sltu
    tick();
    expect_reg(3, 64'd0, "SLTU (max < 1) false");

    // =============================
    // Grupo 2: I-type
    // =============================
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'd10);
    dut.instr_mem.I_mem[0] = enc_i(12'd20, 5'd1, 3'b000, 5'd3, OP_IMM); // addi x3,x1,20
    tick();
    expect_reg(3, 64'd30, "ADDI");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h00FF);
    dut.instr_mem.I_mem[0] = enc_i(12'h0F0, 5'd1, 3'b111, 5'd3, OP_IMM); // andi
    tick();
    expect_reg(3, 64'h00F0, "ANDI");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h00F0);
    dut.instr_mem.I_mem[0] = enc_i(12'h00F, 5'd1, 3'b110, 5'd3, OP_IMM); // ori
    tick();
    expect_reg(3, 64'h00FF, "ORI");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h00AA);
    dut.instr_mem.I_mem[0] = enc_i(12'h0FF, 5'd1, 3'b100, 5'd3, OP_IMM); // xori
    tick();
    expect_reg(3, 64'h0055, "XORI");

    // slli (imm[11:6]=0, shamt=3)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'd1);
    dut.instr_mem.I_mem[0] = enc_i({6'b000000, 6'd3}, 5'd1, 3'b001, 5'd3, OP_IMM);
    tick();
    expect_reg(3, 64'd8, "SLLI");

    // srli (funct7b5=0, shamt=1)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h8000_0000_0000_0000);
    dut.instr_mem.I_mem[0] = enc_i({6'b000000, 6'd1}, 5'd1, 3'b101, 5'd3, OP_IMM);
    tick();
    expect_reg(3, 64'h4000_0000_0000_0000, "SRLI");

    // srai (imm[11:6]=010000, shamt=1) => bit30=1
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h8000_0000_0000_0000);
    dut.instr_mem.I_mem[0] = enc_i({6'b010000, 6'd1}, 5'd1, 3'b101, 5'd3, OP_IMM);
    tick();
    expect_reg(3, 64'hC000_0000_0000_0000, "SRAI");

    // slti / sltiu
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hFFFF_FFFF_FFFF_FFFF); // -1
    dut.instr_mem.I_mem[0] = enc_i(12'd1, 5'd1, 3'b010, 5'd3, OP_IMM);
    tick();
    expect_reg(3, 64'd1, "SLTI (-1 < 1)");

    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hFFFF_FFFF_FFFF_FFFF); // unsigned max
    dut.instr_mem.I_mem[0] = enc_i(12'd1, 5'd1, 3'b011, 5'd3, OP_IMM);
    tick();
    expect_reg(3, 64'd0, "SLTIU (max < 1) false");

    // =============================
    // Grupo 3: LUI / AUIPC
    // =============================
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    dut.instr_mem.I_mem[0] = enc_u(20'h12345, 5'd3, LUI_OP); // lui x3,0x12345
    tick();
    expect_reg(3, 64'h0000_0000_1234_5000, "LUI");

    // AUIPC com PC conhecido: roda 2 nops (PC=8), depois auipc
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    dut.instr_mem.I_mem[0] = enc_nop(); // pc=0
    dut.instr_mem.I_mem[1] = enc_nop(); // pc=4
    dut.instr_mem.I_mem[2] = enc_u(20'h00001, 5'd3, AUIPC_OP); // auipc x3,0x1 => 0x1000 + PC(8)=0x1008
    tick(); tick(); tick();
    expect_reg(3, 64'h0000_0000_0000_1008, "AUIPC (PC=8)");

    // =============================
    // Grupo 4: Loads / Stores (base 0x100)
    // =============================
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h0000_0000_0000_0100); // x1 = base
    // coloca uma palavra em memória: 0xABCD1234_80000000 (bytes: 00 00 00 80 34 12 CD AB)
    dut.data_mem.D_mem[dmem_index(64'h100)] = 64'hABCD_1234_8000_0000;

    // LB (offset 3 -> byte 0x80 => sign-ext)
    dut.instr_mem.I_mem[0] = enc_i(12'd3, 5'd1, 3'b000, 5'd3, LOAD_OP); // lb x3,3(x1)
    tick();
    expect_reg(3, 64'hFFFF_FFFF_FFFF_FF80, "LB");

    // LBU (offset 3 -> 0x80 => zero-ext)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h100);
    dut.data_mem.D_mem[dmem_index(64'h100)] = 64'hABCD_1234_8000_0000;
    dut.instr_mem.I_mem[0] = enc_i(12'd3, 5'd1, 3'b100, 5'd3, LOAD_OP); // lbu
    tick();
    expect_reg(3, 64'h0000_0000_0000_0080, "LBU");

    // LH (offset 2 -> half=0x8000 => sign-ext)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h100);
    dut.data_mem.D_mem[dmem_index(64'h100)] = 64'hABCD_1234_8000_0000;
    dut.instr_mem.I_mem[0] = enc_i(12'd2, 5'd1, 3'b001, 5'd3, LOAD_OP); // lh
    tick();
    expect_reg(3, 64'hFFFF_FFFF_FFFF_8000, "LH");

    // LHU (offset 2 -> 0x8000 => zero-ext)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h100);
    dut.data_mem.D_mem[dmem_index(64'h100)] = 64'hABCD_1234_8000_0000;
    dut.instr_mem.I_mem[0] = enc_i(12'd2, 5'd1, 3'b101, 5'd3, LOAD_OP); // lhu
    tick();
    expect_reg(3, 64'h0000_0000_0000_8000, "LHU");

    // LW (offset 0 -> 0x80000000 => esperado: sign-ext em RV64)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h100);
    dut.data_mem.D_mem[dmem_index(64'h100)] = 64'hABCD_1234_8000_0000;
    dut.instr_mem.I_mem[0] = enc_i(12'd0, 5'd1, 3'b010, 5'd3, LOAD_OP); // lw
    tick();
    expect_reg(3, 64'hFFFF_FFFF_8000_0000, "LW (RV64 sign-ext)");

    // LD (funct3=011)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h100);
    dut.data_mem.D_mem[dmem_index(64'h100)] = 64'h1122_3344_5566_7788;
    dut.instr_mem.I_mem[0] = enc_i(12'd0, 5'd1, 3'b011, 5'd3, LOAD_OP); // ld
    tick();
    expect_reg(3, 64'h1122_3344_5566_7788, "LD");

    // LWU (RV64 extra: funct3=110) => zero-ext do word baixo
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h100);
    dut.data_mem.D_mem[dmem_index(64'h100)] = 64'hABCD_1234_8000_0000;
    dut.instr_mem.I_mem[0] = enc_i(12'd0, 5'd1, 3'b110, 5'd3, LOAD_OP); // lwu
    tick();
    expect_reg(3, 64'h0000_0000_8000_0000, "LWU");

    // Stores: SB/SH/SW/SD
    // SD: store doubleword (funct3=011)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h100);
    set_reg(2, 64'hDEAD_BEEF_CAFE_BABE);
    dut.instr_mem.I_mem[0] = enc_s(12'd0, 5'd2, 5'd1, 3'b011, STORE_OP); // sd x2,0(x1)
    tick();
    if (dut.data_mem.D_mem[dmem_index(64'h100)] !== 64'hDEAD_BEEF_CAFE_BABE) begin
      $display("[FAIL] SD mem got=0x%016h exp=0x%016h", dut.data_mem.D_mem[dmem_index(64'h100)], 64'hDEAD_BEEF_CAFE_BABE);
      $fatal;
    end else $display("[ OK ] SD");

    // SW: store word (funct3=010) em offset 0
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h100);
    set_reg(2, 64'hFFFF_FFFF_A1B2_C3D4);
    dut.instr_mem.I_mem[0] = enc_s(12'd0, 5'd2, 5'd1, 3'b010, STORE_OP); // sw
    tick();
    if (dut.data_mem.D_mem[dmem_index(64'h100)][31:0] !== 32'hA1B2_C3D4) begin
      $display("[FAIL] SW low32 got=0x%08h exp=0x%08h", dut.data_mem.D_mem[dmem_index(64'h100)][31:0], 32'hA1B2_C3D4);
      $fatal;
    end else $display("[ OK ] SW");
    // SB: store byte (funct3=000) em offset 5 (testa máscara de byte)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h100);
    set_reg(2, 64'h0000_0000_0000_00EE); // byte a armazenar = 0xEE
    dut.data_mem.D_mem[dmem_index(64'h100)] = 64'h1122_3344_5566_7788;
    dut.instr_mem.I_mem[0] = enc_s(12'd5, 5'd2, 5'd1, 3'b000, STORE_OP); // sb  x2,5(x1)
    tick();
    if (dut.data_mem.D_mem[dmem_index(64'h100)] !== 64'h1122_EE44_5566_7788) begin
      $display("[FAIL] SB got=0x%016h exp=0x%016h",
               dut.data_mem.D_mem[dmem_index(64'h100)], 64'h1122_EE44_5566_7788);
      $fatal;
    end else $display("[ OK ] SB");

    // SH: store halfword (funct3=001) em offset 2 (testa máscara de halfword)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h100);
    set_reg(2, 64'h0000_0000_0000_BEEF); // halfword a armazenar = 0xBEEF
    dut.data_mem.D_mem[dmem_index(64'h100)] = 64'h1122_3344_5566_7788;
    dut.instr_mem.I_mem[0] = enc_s(12'd2, 5'd2, 5'd1, 3'b001, STORE_OP); // sh  x2,2(x1)
    tick();
    if (dut.data_mem.D_mem[dmem_index(64'h100)] !== 64'h1122_3344_BEEF_7788) begin
      $display("[FAIL] SH got=0x%016h exp=0x%016h",
               dut.data_mem.D_mem[dmem_index(64'h100)], 64'h1122_3344_BEEF_7788);
      $fatal;
    end else $display("[ OK ] SH");

    // =============================
    // Grupo 5: Branches (toma / não toma)
    // =============================
    // BEQ taken: x1==x2 -> PC salta pra +8 e executa addi x3,2
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'd5); set_reg(2, 64'd5);
    dut.instr_mem.I_mem[0] = enc_b(8, 5'd2, 5'd1, 3'b000, BRANCH_OP); // beq x1,x2,+8
    dut.instr_mem.I_mem[1] = enc_i(12'd1, 5'd0, 3'b000, 5'd3, OP_IMM); // addi x3,1
    dut.instr_mem.I_mem[2] = enc_i(12'd2, 5'd0, 3'b000, 5'd3, OP_IMM); // addi x3,2
    tick(); // branch decide PC
    tick(); // executa a instrução do destino
    expect_reg(3, 64'd2, "BEQ taken");

    // BNE not taken: x1==x2 -> cai em addi x3,1
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'd5); set_reg(2, 64'd5);
    dut.instr_mem.I_mem[0] = enc_b(8, 5'd2, 5'd1, 3'b001, BRANCH_OP); // bne
    dut.instr_mem.I_mem[1] = enc_i(12'd1, 5'd0, 3'b000, 5'd3, OP_IMM);
    dut.instr_mem.I_mem[2] = enc_i(12'd2, 5'd0, 3'b000, 5'd3, OP_IMM);
    tick(); tick();
    expect_reg(3, 64'd1, "BNE not taken");

    // BLT taken: -1 < 1
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hFFFF_FFFF_FFFF_FFFF);
    set_reg(2, 64'd1);
    dut.instr_mem.I_mem[0] = enc_b(8, 5'd2, 5'd1, 3'b100, BRANCH_OP); // blt
    dut.instr_mem.I_mem[1] = enc_i(12'd1, 5'd0, 3'b000, 5'd3, OP_IMM);
    dut.instr_mem.I_mem[2] = enc_i(12'd2, 5'd0, 3'b000, 5'd3, OP_IMM);
    tick(); tick();
    expect_reg(3, 64'd2, "BLT taken");
    // BGE taken: 1 >= -1 (signed) => toma
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'd1);
    set_reg(2, 64'hFFFF_FFFF_FFFF_FFFF); // -1
    dut.instr_mem.I_mem[0] = enc_b(8, 5'd2, 5'd1, 3'b101, BRANCH_OP); // bge
    dut.instr_mem.I_mem[1] = enc_i(12'd1, 5'd0, 3'b000, 5'd3, OP_IMM);
    dut.instr_mem.I_mem[2] = enc_i(12'd2, 5'd0, 3'b000, 5'd3, OP_IMM);
    tick(); tick();
    expect_reg(3, 64'd2, "BGE taken");

    // BGE not taken: -2 >= 1 (signed) => não toma
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hFFFF_FFFF_FFFF_FFFE); // -2
    set_reg(2, 64'd1);
    dut.instr_mem.I_mem[0] = enc_b(8, 5'd2, 5'd1, 3'b101, BRANCH_OP); // bge
    dut.instr_mem.I_mem[1] = enc_i(12'd1, 5'd0, 3'b000, 5'd3, OP_IMM);
    dut.instr_mem.I_mem[2] = enc_i(12'd2, 5'd0, 3'b000, 5'd3, OP_IMM);
    tick(); tick();
    expect_reg(3, 64'd1, "BGE not taken");

    // BLTU taken: 1 < 2 (unsigned) => toma
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'd1);
    set_reg(2, 64'd2);
    dut.instr_mem.I_mem[0] = enc_b(8, 5'd2, 5'd1, 3'b110, BRANCH_OP); // bltu
    dut.instr_mem.I_mem[1] = enc_i(12'd1, 5'd0, 3'b000, 5'd3, OP_IMM);
    dut.instr_mem.I_mem[2] = enc_i(12'd2, 5'd0, 3'b000, 5'd3, OP_IMM);
    tick(); tick();
    expect_reg(3, 64'd2, "BLTU taken");

    // BLTU not taken: max < 1 (unsigned) => não toma
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hFFFF_FFFF_FFFF_FFFF);
    set_reg(2, 64'd1);
    dut.instr_mem.I_mem[0] = enc_b(8, 5'd2, 5'd1, 3'b110, BRANCH_OP); // bltu
    dut.instr_mem.I_mem[1] = enc_i(12'd1, 5'd0, 3'b000, 5'd3, OP_IMM);
    dut.instr_mem.I_mem[2] = enc_i(12'd2, 5'd0, 3'b000, 5'd3, OP_IMM);
    tick(); tick();
    expect_reg(3, 64'd1, "BLTU not taken");

    // BGEU taken: max >= 1 (unsigned) => toma
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hFFFF_FFFF_FFFF_FFFF);
    set_reg(2, 64'd1);
    dut.instr_mem.I_mem[0] = enc_b(8, 5'd2, 5'd1, 3'b111, BRANCH_OP); // bgeu
    dut.instr_mem.I_mem[1] = enc_i(12'd1, 5'd0, 3'b000, 5'd3, OP_IMM);
    dut.instr_mem.I_mem[2] = enc_i(12'd2, 5'd0, 3'b000, 5'd3, OP_IMM);
    tick(); tick();
    expect_reg(3, 64'd2, "BGEU taken");

    // BGEU not taken: 1 >= 2 (unsigned) => não toma
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'd1);
    set_reg(2, 64'd2);
    dut.instr_mem.I_mem[0] = enc_b(8, 5'd2, 5'd1, 3'b111, BRANCH_OP); // bgeu
    dut.instr_mem.I_mem[1] = enc_i(12'd1, 5'd0, 3'b000, 5'd3, OP_IMM);
    dut.instr_mem.I_mem[2] = enc_i(12'd2, 5'd0, 3'b000, 5'd3, OP_IMM);
    tick(); tick();
    expect_reg(3, 64'd1, "BGEU not taken");

    // =============================
    // Grupo 6: JAL / JALR
    // =============================
    // JAL: pula +8 e grava link (PC+4) em x1
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    dut.instr_mem.I_mem[0] = enc_j(8, 5'd1, JAL_OP); // jal x1,+8
    dut.instr_mem.I_mem[1] = enc_i(12'd1, 5'd0, 3'b000, 5'd3, OP_IMM); // addi x3,1 (não executa)
    dut.instr_mem.I_mem[2] = enc_i(12'd2, 5'd0, 3'b000, 5'd3, OP_IMM); // addi x3,2
    tick(); // jal
    expect_reg(1, 64'd4, "JAL link x1=PC+4");
    tick(); // executa destino
    expect_reg(3, 64'd2, "JAL jump target");

    // JALR: rs1=9, imm=0 => target=(9)&~1=8, link em x1=4
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(2, 64'd9); // x2 = 9
    dut.instr_mem.I_mem[0] = enc_i(12'd0, 5'd2, 3'b000, 5'd1, JALR_OP); // jalr x1,0(x2)
    dut.instr_mem.I_mem[1] = enc_i(12'd1, 5'd0, 3'b000, 5'd3, OP_IMM);
    dut.instr_mem.I_mem[2] = enc_i(12'd2, 5'd0, 3'b000, 5'd3, OP_IMM);
    tick();
    expect_reg(1, 64'd4, "JALR link");
    tick();
    expect_reg(3, 64'd2, "JALR target @8");

    // =============================
    // Grupo 7: RV64I word ops (*W, *IW)
    // =============================
    // ADDW: (0x1_0000_0000 + 0x1_0000_0000) low32=0 => sign-ext=0
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h0000_0001_0000_0000);
    set_reg(2, 64'h0000_0001_0000_0000);
    dut.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b000, 5'd3, OP_32); // addw
    tick();
    expect_reg(3, 64'h0000_0000_0000_0000, "ADDW sign-ext low32");

    // SUBW: 0 - 1 => low32=0xFFFF_FFFF => sign-ext = -1
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'd0);
    set_reg(2, 64'd1);
    dut.instr_mem.I_mem[0] = enc_r(7'b0100000, 5'd2, 5'd1, 3'b000, 5'd3, OP_32); // subw
    tick();
    expect_reg(3, 64'hFFFF_FFFF_FFFF_FFFF, "SUBW -> -1");

    // ADDIW: 0x7FFF_FFFF + 1 => 0x8000_0000 => sign-ext = 0xFFFF_FFFF_8000_0000
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h0000_0000_7FFF_FFFF);
    dut.instr_mem.I_mem[0] = enc_i(12'd1, 5'd1, 3'b000, 5'd3, OP_IMM_32); // addiw
    tick();
    expect_reg(3, 64'hFFFF_FFFF_8000_0000, "ADDIW sign-ext");
    // SLLW: usa apenas low32 e shamt[4:0]. Testa máscara (33 -> 1)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h0000_0000_8000_0001); // low32=0x80000001
    set_reg(2, 64'd33);                  // 33 & 0x1F = 1
    dut.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b001, 5'd3, OP_32); // sllw
    tick();
    expect_reg(3, 64'h0000_0000_0000_0002, "SLLW mask shamt[4:0]");

    // SRLW: logical >> em low32, depois sign-ext (bit31=0 => zera high)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hFFFF_FFFF_8000_0000); // high ones, low32=0x80000000
    set_reg(2, 64'd1);
    dut.instr_mem.I_mem[0] = enc_r(7'b0000000, 5'd2, 5'd1, 3'b101, 5'd3, OP_32); // srlw
    tick();
    expect_reg(3, 64'h0000_0000_4000_0000, "SRLW");

    // SRAW: arithmetic >> em low32, depois sign-ext (bit31=1 => high ones)
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h0000_0000_8000_0000);
    set_reg(2, 64'd1);
    dut.instr_mem.I_mem[0] = enc_r(7'b0100000, 5'd2, 5'd1, 3'b101, 5'd3, OP_32); // sraw
    tick();
    expect_reg(3, 64'hFFFF_FFFF_C000_0000, "SRAW");

    // SLLIW: 0x4000_0000 << 1 => 0x8000_0000 => sign-ext
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h0000_0000_4000_0000);
    dut.instr_mem.I_mem[0] = enc_i(12'h001, 5'd1, 3'b001, 5'd3, OP_IMM_32); // slliw shamt=1
    tick();
    expect_reg(3, 64'hFFFF_FFFF_8000_0000, "SLLIW");

    // SRLIW: 0x8000_0000 >> 1 (logical) => 0x4000_0000 => zera high
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'hFFFF_FFFF_8000_0000);
    dut.instr_mem.I_mem[0] = enc_i(12'h001, 5'd1, 3'b101, 5'd3, OP_IMM_32); // srliw shamt=1 (imm[11:5]=0)
    tick();
    expect_reg(3, 64'h0000_0000_4000_0000, "SRLIW");

    // SRAIW: 0x8000_0000 >> 1 (arith) => 0xC000_0000 => sign-ext
    init_imem(enc_nop()); init_regs(); init_dmem(); do_reset();
    set_reg(1, 64'h0000_0000_8000_0000);
    dut.instr_mem.I_mem[0] = enc_i(12'h401, 5'd1, 3'b101, 5'd3, OP_IMM_32); // sraiw shamt=1 (imm[11:5]=0100000)
    tick();
    expect_reg(3, 64'hFFFF_FFFF_C000_0000, "SRAIW");

    $display("\n========================");
    $display("ALL DATAPATH TESTS PASSED ");
    $display("==========================\n");
    $finish;
  end

endmodule

//------------------------------------------------------------------------------
// ControlUnit.sv
//
// Unidade de controle combinacional para o Datapath NeanderRV64I (single-cycle).
// Gera sinais de controle a partir de opcode/funct3 e instr[30] (funct7),
// e decide branches usando flags da ULA.
//
// IMPORTANTE (branches):
//  - Para branches, a ULA deve executar SUB(rs1, rs2) para gerar flags coerentes.
//  - take_branch é calculado a partir de Zero / (Negative^Overflow) / Carry.
//
// Convenções de mux (conforme seus mux2/mux3):
//  mux_SrcA (mux3): sel=00 RD1, sel=01 PC, sel=10/11 0
//  mux_SrcB (mux2): sel=0 RD2, sel=1 imm_ext
//  mux_writeback (mux3): sel=00 ALUResult, sel=01 loadData, sel=10 pc_plus4
//------------------------------------------------------------------------------


module ControlUnit (
    // Flags da ULA
    input  logic       Zero,
    input  logic       Negative,
    input  logic       Carry,
    input  logic       Overflow,

    // Campos da instrução (vêm do Datapath)
    input  logic       funct7,   // = instr[30]  (bit "funct7[5]" no RV32/64)
    input  logic [2:0] funct3,
    input  logic [6:0] opcode,

    // Sinais para o Datapath
    output logic       regWriteEnable,
    output logic       load,
    output logic       store,
    output logic       word,
    output logic [3:0] ALUControl,

    output logic       JALR,
    output logic       sel_mux_pcnext,
    output logic       sel_mux_srcB,
    output logic [1:0] sel_mux_srcA,
    output logic [1:0] sel_mux_writeback
);

    // -----------------------------
    // Opcodes (RV32/64 base + W)
    // -----------------------------
    localparam logic [6:0] OP        = 7'b0110011; // R-type
    localparam logic [6:0] OP_IMM    = 7'b0010011; // I-type ALU
    localparam logic [6:0] OP_32     = 7'b0111011; // R-type word (RV64)
    localparam logic [6:0] OP_IMM_32 = 7'b0011011; // I-type word (RV64)

    localparam logic [6:0] LOAD_OP   = 7'b0000011;
    localparam logic [6:0] STORE_OP  = 7'b0100011;
    localparam logic [6:0] BRANCH_OP = 7'b1100011;

    localparam logic [6:0] JALR_OP   = 7'b1100111;
    localparam logic [6:0] JAL_OP    = 7'b1101111;

    localparam logic [6:0] LUI_OP    = 7'b0110111;
    localparam logic [6:0] AUIPC_OP  = 7'b0010111;

    // -----------------------------
    // ALUControl (compatível com sua ULA)
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

    logic take_branch;
    logic signed_lt;
    logic unsigned_lt;

    // Para SUB(rs1-rs2):
    //  signed_lt   = N ^ V
    //  unsigned_lt = borrow => ~Carry (assumindo Carry=1 significa "sem borrow")
    always_comb begin
        signed_lt   = (Negative ^ Overflow);
        unsigned_lt = ~Carry;
    end

    always_comb begin
        // -----------------------------
        // Defaults (NOP seguro)
        // -----------------------------
        regWriteEnable    = 1'b0;
        load              = 1'b0;
        store             = 1'b0;
        word              = 1'b0;

        ALUControl        = ALU_ADD;

        JALR              = 1'b0;
        sel_mux_pcnext    = 1'b0;   // 0: PC+4
        sel_mux_srcB      = 1'b0;   // 0: RD2
        sel_mux_srcA      = 2'b00;  // 00: RD1
        sel_mux_writeback = 2'b00;  // 00: ALUResult

        take_branch       = 1'b0;

        // -----------------------------
        // Decode
        // -----------------------------
        unique case (opcode)

            // ---------------------------------
            // R-type (OP) - RV64
            // ---------------------------------
            OP: begin
                regWriteEnable = 1'b1;
                sel_mux_srcA   = 2'b00; // RD1
                sel_mux_srcB   = 1'b0;  // RD2
                sel_mux_writeback = 2'b00; // ALU

                unique case (funct3)
                    3'b000: ALUControl = funct7 ? ALU_SUB : ALU_ADD; // SUB/ADD
                    3'b001: ALUControl = ALU_SLL;
                    3'b010: ALUControl = ALU_SLT;
                    3'b011: ALUControl = ALU_SLTU;
                    3'b100: ALUControl = ALU_XOR;
                    3'b101: ALUControl = funct7 ? ALU_SRA : ALU_SRL; // SRA/SRL
                    3'b110: ALUControl = ALU_OR;
                    3'b111: ALUControl = ALU_AND;
                    default: ALUControl = ALU_ADD;
                endcase
            end

            // ---------------------------------
            // I-type ALU (OP-IMM)
            // ---------------------------------
            OP_IMM: begin
                regWriteEnable = 1'b1;
                sel_mux_srcA   = 2'b00; // RD1
                sel_mux_srcB   = 1'b1;  // imm
                sel_mux_writeback = 2'b00; // ALU

                unique case (funct3)
                    3'b000: ALUControl = ALU_ADD;  // ADDI
                    3'b010: ALUControl = ALU_SLT;  // SLTI
                    3'b011: ALUControl = ALU_SLTU; // SLTIU
                    3'b100: ALUControl = ALU_XOR;  // XORI
                    3'b110: ALUControl = ALU_OR;   // ORI
                    3'b111: ALUControl = ALU_AND;  // ANDI
                    3'b001: ALUControl = ALU_SLL;  // SLLI
                    3'b101: ALUControl = funct7 ? ALU_SRA : ALU_SRL; // SRAI/SRLI
                    default: ALUControl = ALU_ADD;
                endcase
            end

            // ---------------------------------
            // RV64 word R-type (OP-32)
            // ---------------------------------
            OP_32: begin
                regWriteEnable = 1'b1;
                word           = 1'b1;
                sel_mux_srcA   = 2'b00; // RD1
                sel_mux_srcB   = 1'b0;  // RD2
                sel_mux_writeback = 2'b00; // ALU

                unique case (funct3)
                    3'b000: ALUControl = funct7 ? ALU_SUB : ALU_ADD; // SUBW/ADDW
                    3'b001: ALUControl = ALU_SLL; // SLLW
                    3'b101: ALUControl = funct7 ? ALU_SRA : ALU_SRL; // SRAW/SRLW
                    default: ALUControl = ALU_ADD;
                endcase
            end

            // ---------------------------------
            // RV64 word I-type (OP-IMM-32)
            // ---------------------------------
            OP_IMM_32: begin
                regWriteEnable = 1'b1;
                word           = 1'b1;
                sel_mux_srcA   = 2'b00; // RD1
                sel_mux_srcB   = 1'b1;  // imm
                sel_mux_writeback = 2'b00; // ALU

                unique case (funct3)
                    3'b000: ALUControl = ALU_ADD; // ADDIW
                    3'b001: ALUControl = ALU_SLL; // SLLIW
                    3'b101: ALUControl = funct7 ? ALU_SRA : ALU_SRL; // SRAIW/SRLIW
                    default: ALUControl = ALU_ADD;
                endcase
            end

            // ---------------------------------
            // LOAD
            // ---------------------------------
            LOAD_OP: begin
                regWriteEnable    = 1'b1;
                load              = 1'b1;

                sel_mux_srcA      = 2'b00; // rs1
                sel_mux_srcB      = 1'b1;  // imm (endereço)
                ALUControl        = ALU_ADD;

                sel_mux_writeback = 2'b01; // loadData
            end

            // ---------------------------------
            // STORE
            // ---------------------------------
            STORE_OP: begin
                store         = 1'b1;

                sel_mux_srcA  = 2'b00; // rs1
                sel_mux_srcB  = 1'b1;  // imm (endereço)
                ALUControl    = ALU_ADD;
            end

            // ---------------------------------
            // LUI: rd = imm (U-type)
            // (implementado como 0 + imm)
            // ---------------------------------
            LUI_OP: begin
                regWriteEnable    = 1'b1;

                sel_mux_srcA      = 2'b10; // 0
                sel_mux_srcB      = 1'b1;  // imm
                ALUControl        = ALU_ADD;

                sel_mux_writeback = 2'b00; // ALU
            end

            // ---------------------------------
            // AUIPC: rd = PC + imm
            // ---------------------------------
            AUIPC_OP: begin
                regWriteEnable    = 1'b1;

                sel_mux_srcA      = 2'b01; // PC
                sel_mux_srcB      = 1'b1;  // imm
                ALUControl        = ALU_ADD;

                sel_mux_writeback = 2'b00; // ALU
            end

            // ---------------------------------
            // JAL: rd = PC+4, PC = PC + imm
            // ---------------------------------
            JAL_OP: begin
                regWriteEnable    = 1'b1;
                sel_mux_writeback = 2'b10; // PC+4

                sel_mux_pcnext    = 1'b1;  // jump
                JALR              = 1'b0;  // usa PC+imm (no mux do pc_target)

                // (opcional) ALU pode calcular PC+imm também, não atrapalha
                sel_mux_srcA      = 2'b01; // PC
                sel_mux_srcB      = 1'b1;  // imm
                ALUControl        = ALU_ADD;
            end

            // ---------------------------------
            // JALR: rd = PC+4, PC = (rs1+imm) & ~1
            // ---------------------------------
            JALR_OP: begin
                regWriteEnable    = 1'b1;
                sel_mux_writeback = 2'b10; // PC+4

                sel_mux_pcnext    = 1'b1;  // jump
                JALR              = 1'b1;  // usa {ALUResult[63:1],1'b0}

                sel_mux_srcA      = 2'b00; // rs1
                sel_mux_srcB      = 1'b1;  // imm
                ALUControl        = ALU_ADD;
            end

            // ---------------------------------
            // BRANCH: decide PC pela condição
            // ULA precisa executar SUB(rs1-rs2) para flags
            // ---------------------------------
            BRANCH_OP: begin
                sel_mux_srcA = 2'b00; // rs1
                sel_mux_srcB = 1'b0;  // rs2
                ALUControl   = ALU_SUB;

                unique case (funct3)
                    3'b000: take_branch =  Zero;        // BEQ
                    3'b001: take_branch = ~Zero;        // BNE
                    3'b100: take_branch =  signed_lt;   // BLT
                    3'b101: take_branch = ~signed_lt;   // BGE
                    3'b110: take_branch =  unsigned_lt; // BLTU
                    3'b111: take_branch = ~unsigned_lt; // BGEU
                    default: take_branch = 1'b0;
                endcase

                sel_mux_pcnext = take_branch; // 1: pc_target, 0: PC+4
            end

            default: begin
                // mantém defaults
            end
        endcase
    end

endmodule

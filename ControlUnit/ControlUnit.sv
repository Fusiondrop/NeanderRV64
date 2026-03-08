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
    input  logic       Zero,              //! Indica resultado nulo da ULA
    input  logic       Negative,          //! Indica resultado negativo da ULA
    input  logic       Carry,             //! Indica carry-out gerado pela ULA
    input  logic       Overflow,          //! Indica overflow aritmético da ULA

    // Campos da instrução
    input  logic       funct7,            //! Bit instr[30], usado para distinguir operações como ADD/SUB e SRL/SRA
    input  logic [2:0] funct3,            //! Campo funct3 da instrução
    input  logic [6:0] opcode,            //! Campo opcode da instrução

    // Sinais de controle gerados
    output logic       regWriteEnable,    //! Habilita escrita no banco de registradores
    output logic       load,              //! Indica operação de leitura da memória
    output logic       store,             //! Indica operação de escrita na memória
    output logic       word,              //! Indica instruções do tipo *W, operando sobre 32 bits

    output logic [3:0] ALUControl,        //! Seleção da operação executada pela ULA

    output logic       JALR,              //! Indica salto do tipo JALR
    output logic       sel_mux_pcnext,    //! Seleciona a origem do próximo valor do PC
    output logic       sel_mux_srcB,      //! Seleciona a segunda entrada da ULA
    output logic [1:0] sel_mux_srcA,      //! Seleciona a primeira entrada da ULA
    output logic [1:0] sel_mux_writeback  //! Seleciona a origem do dado escrito em rd
);

    // -----------------------------
    // Códigos de opcode
    // -----------------------------
    localparam logic [6:0] OP        = 7'b0110011; //! Instruções aritméticas/lógicas do tipo R
    localparam logic [6:0] OP_IMM    = 7'b0010011; //! Instruções aritméticas/lógicas imediatas do tipo I
    localparam logic [6:0] OP_32     = 7'b0111011; //! Instruções aritméticas/lógicas word do tipo R em RV64
    localparam logic [6:0] OP_IMM_32 = 7'b0011011; //! Instruções aritméticas/lógicas word imediatas em RV64

    localparam logic [6:0] LOAD_OP   = 7'b0000011; //! Instruções de leitura da memória
    localparam logic [6:0] STORE_OP  = 7'b0100011; //! Instruções de escrita na memória
    localparam logic [6:0] BRANCH_OP = 7'b1100011; //! Instruções de desvio condicional

    localparam logic [6:0] JALR_OP   = 7'b1100111; //! Instrução JALR
    localparam logic [6:0] JAL_OP    = 7'b1101111; //! Instrução JAL

    localparam logic [6:0] LUI_OP    = 7'b0110111; //! Instrução LUI
    localparam logic [6:0] AUIPC_OP  = 7'b0010111; //! Instrução AUIPC

    // -----------------------------
    // Codificação da ULA
    // -----------------------------
    localparam logic [3:0] ALU_ADD  = 4'b0000; //! Operação de soma
    localparam logic [3:0] ALU_SUB  = 4'b1000; //! Operação de subtração
    localparam logic [3:0] ALU_SLL  = 4'b0001; //! Deslocamento lógico à esquerda
    localparam logic [3:0] ALU_SLT  = 4'b0010; //! Comparação menor que com sinal
    localparam logic [3:0] ALU_SLTU = 4'b0011; //! Comparação menor que sem sinal
    localparam logic [3:0] ALU_XOR  = 4'b0100; //! Operação XOR
    localparam logic [3:0] ALU_SRL  = 4'b0101; //! Deslocamento lógico à direita
    localparam logic [3:0] ALU_OR   = 4'b0110; //! Operação OR
    localparam logic [3:0] ALU_AND  = 4'b0111; //! Operação AND
    localparam logic [3:0] ALU_SRA  = 4'b1101; //! Deslocamento aritmético à direita

    logic take_branch; //! Indica se a instrução de branch deve atualizar o PC para o alvo
    logic signed_lt;   //! Resultado da comparação rs1 < rs2 com sinal
    logic unsigned_lt; //! Resultado da comparação rs1 < rs2 sem sinal

    // Para a operação SUB(rs1 - rs2):
    // - signed_lt é obtido por Negative ^ Overflow
    // - unsigned_lt é obtido por ~Carry, assumindo Carry = 1 como ausência de borrow
    always_comb begin
        signed_lt   = (Negative ^ Overflow);
        unsigned_lt = ~Carry;
    end

    always_comb begin
        // -----------------------------
        // Valores padrão
        // -----------------------------
        regWriteEnable    = 1'b0;
        load              = 1'b0;
        store             = 1'b0;
        word              = 1'b0;

        ALUControl        = ALU_ADD;

        JALR              = 1'b0;
        sel_mux_pcnext    = 1'b0;   //! 0 -> PC + 4
        sel_mux_srcB      = 1'b0;   //! 0 -> rs2
        sel_mux_srcA      = 2'b00;  //! 00 -> rs1
        sel_mux_writeback = 2'b00;  //! 00 -> resultado da ULA

        take_branch       = 1'b0;

        // -----------------------------
        // Decodificação principal
        // -----------------------------
        unique case (opcode)

            // ---------------------------------
            // OP: instruções do tipo R
            // ---------------------------------
            OP: begin
                regWriteEnable    = 1'b1;
                sel_mux_srcA      = 2'b00; //! rs1
                sel_mux_srcB      = 1'b0;  //! rs2
                sel_mux_writeback = 2'b00; //! resultado da ULA

                unique case (funct3)
                    3'b000: ALUControl = funct7 ? ALU_SUB  : ALU_ADD;  //! SUB / ADD
                    3'b001: ALUControl = ALU_SLL;                       //! SLL
                    3'b010: ALUControl = ALU_SLT;                       //! SLT
                    3'b011: ALUControl = ALU_SLTU;                      //! SLTU
                    3'b100: ALUControl = ALU_XOR;                       //! XOR
                    3'b101: ALUControl = funct7 ? ALU_SRA  : ALU_SRL;  //! SRA / SRL
                    3'b110: ALUControl = ALU_OR;                        //! OR
                    3'b111: ALUControl = ALU_AND;                       //! AND
                    default: ALUControl = ALU_ADD;
                endcase
            end

            // ---------------------------------
            // OP-IMM: instruções do tipo I
            // ---------------------------------
            OP_IMM: begin
                regWriteEnable    = 1'b1;
                sel_mux_srcA      = 2'b00; //! rs1
                sel_mux_srcB      = 1'b1;  //! imediato
                sel_mux_writeback = 2'b00; //! resultado da ULA

                unique case (funct3)
                    3'b000: ALUControl = ALU_ADD;                       //! ADDI
                    3'b010: ALUControl = ALU_SLT;                       //! SLTI
                    3'b011: ALUControl = ALU_SLTU;                      //! SLTIU
                    3'b100: ALUControl = ALU_XOR;                       //! XORI
                    3'b110: ALUControl = ALU_OR;                        //! ORI
                    3'b111: ALUControl = ALU_AND;                       //! ANDI
                    3'b001: ALUControl = ALU_SLL;                       //! SLLI
                    3'b101: ALUControl = funct7 ? ALU_SRA  : ALU_SRL;  //! SRAI / SRLI
                    default: ALUControl = ALU_ADD;
                endcase
            end

            // ---------------------------------
            // OP-32: instruções word do tipo R
            // ---------------------------------
            OP_32: begin
                regWriteEnable    = 1'b1;
                word              = 1'b1;
                sel_mux_srcA      = 2'b00; //! rs1
                sel_mux_srcB      = 1'b0;  //! rs2
                sel_mux_writeback = 2'b00; //! resultado da ULA

                unique case (funct3)
                    3'b000: ALUControl = funct7 ? ALU_SUB  : ALU_ADD;  //! SUBW / ADDW
                    3'b001: ALUControl = ALU_SLL;                       //! SLLW
                    3'b101: ALUControl = funct7 ? ALU_SRA  : ALU_SRL;  //! SRAW / SRLW
                    default: ALUControl = ALU_ADD;
                endcase
            end

            // ---------------------------------
            // OP-IMM-32: instruções word do tipo I
            // ---------------------------------
            OP_IMM_32: begin
                regWriteEnable    = 1'b1;
                word              = 1'b1;
                sel_mux_srcA      = 2'b00; //! rs1
                sel_mux_srcB      = 1'b1;  //! imediato
                sel_mux_writeback = 2'b00; //! resultado da ULA

                unique case (funct3)
                    3'b000: ALUControl = ALU_ADD;                       //! ADDIW
                    3'b001: ALUControl = ALU_SLL;                       //! SLLIW
                    3'b101: ALUControl = funct7 ? ALU_SRA  : ALU_SRL;  //! SRAIW / SRLIW
                    default: ALUControl = ALU_ADD;
                endcase
            end

            // ---------------------------------
            // LOAD: leitura da memória
            // ---------------------------------
            LOAD_OP: begin
                regWriteEnable    = 1'b1;
                load              = 1'b1;

                sel_mux_srcA      = 2'b00; //! rs1
                sel_mux_srcB      = 1'b1;  //! imediato
                ALUControl        = ALU_ADD; //! cálculo do endereço efetivo

                sel_mux_writeback = 2'b01; //! dado lido da memória
            end

            // ---------------------------------
            // STORE: escrita na memória
            // ---------------------------------
            STORE_OP: begin
                store         = 1'b1;

                sel_mux_srcA  = 2'b00; //! rs1
                sel_mux_srcB  = 1'b1;  //! imediato
                ALUControl    = ALU_ADD; //! cálculo do endereço efetivo
            end

            // ---------------------------------
            // LUI: rd = imm
            // ---------------------------------
            LUI_OP: begin
                regWriteEnable    = 1'b1;

                sel_mux_srcA      = 2'b10; //! constante zero
                sel_mux_srcB      = 1'b1;  //! imediato
                ALUControl        = ALU_ADD;

                sel_mux_writeback = 2'b00; //! resultado da ULA
            end

            // ---------------------------------
            // AUIPC: rd = PC + imm
            // ---------------------------------
            AUIPC_OP: begin
                regWriteEnable    = 1'b1;

                sel_mux_srcA      = 2'b01; //! PC
                sel_mux_srcB      = 1'b1;  //! imediato
                ALUControl        = ALU_ADD;

                sel_mux_writeback = 2'b00; //! resultado da ULA
            end

            // ---------------------------------
            // JAL: rd = PC + 4, PC = PC + imm
            // ---------------------------------
            JAL_OP: begin
                regWriteEnable    = 1'b1;
                sel_mux_writeback = 2'b10; //! PC + 4

                sel_mux_pcnext    = 1'b1;  //! seleciona alvo do salto
                JALR              = 1'b0;  //! alvo calculado a partir de PC + imm

                sel_mux_srcA      = 2'b01; //! PC
                sel_mux_srcB      = 1'b1;  //! imediato
                ALUControl        = ALU_ADD;
            end

            // ---------------------------------
            // JALR: rd = PC + 4, PC = (rs1 + imm) & ~1
            // ---------------------------------
            JALR_OP: begin
                regWriteEnable    = 1'b1;
                sel_mux_writeback = 2'b10; //! PC + 4

                sel_mux_pcnext    = 1'b1;  //! seleciona alvo do salto
                JALR              = 1'b1;  //! alvo calculado a partir de rs1 + imm com bit 0 limpo

                sel_mux_srcA      = 2'b00; //! rs1
                sel_mux_srcB      = 1'b1;  //! imediato
                ALUControl        = ALU_ADD;
            end

            // ---------------------------------
            // BRANCH: desvios condicionais
            // ---------------------------------
            BRANCH_OP: begin
                sel_mux_srcA = 2'b00; //! rs1
                sel_mux_srcB = 1'b0;  //! rs2
                ALUControl   = ALU_SUB; //! comparação baseada em rs1 - rs2

                unique case (funct3)
                    3'b000: take_branch =  Zero;        //! BEQ
                    3'b001: take_branch = ~Zero;        //! BNE
                    3'b100: take_branch =  signed_lt;   //! BLT
                    3'b101: take_branch = ~signed_lt;   //! BGE
                    3'b110: take_branch =  unsigned_lt; //! BLTU
                    3'b111: take_branch = ~unsigned_lt; //! BGEU
                    default: take_branch = 1'b0;
                endcase

                sel_mux_pcnext = take_branch; //! seleciona PC alvo quando a condição for verdadeira
            end

            default: begin
                // Mantém os valores padrão
            end
        endcase
    end

endmodule

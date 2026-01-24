// ------------------------------------------------------------
// Módulo: Datapath
// Descrição:
//   Implementa o datapath (caminho de dados) de um processador
//   RISC-V single-cycle, parametrizado por XLEN (N = 32 ou 64).
//
//   Este módulo interliga os blocos principais do processador:
//     1) Program Counter (PC)
//     2) Memória de instruções (InstructionMemory)
//     3) Banco de registradores (RegisterFile)
//     4) Gerador de imediatos (ImmGenerator)
//     5) ULA (ULA) e multiplexadores de operandos
//     6) LSU + DataMemory + LoadExtender (caminho de memória)
//     7) Multiplexador de writeback (retorno ao registrador rd)
//
//   Filosofia do projeto:
//   - Os sinais de controle (em azul no esquemático) são fornecidos
//     externamente por uma Control Unit (não implementada aqui).
//     Ou seja, as entradas são a saída do Control Unit e as saídas
//     são as entradas do Control Unit (representado em vermelho).
//   - O datapath é majoritariamente combinacional entre elementos
//     de estado (PC e RegisterFile), seguindo o modelo clássico de
//     single-cycle.
//
//   Observações importantes:
//   - Instruções RISC-V possuem tamanho fixo de 32 bits. Assim, a
//     InstructionMemory sempre retorna instr[31:0], mesmo em RV64.
//   - O alvo de desvio/salto (pc_target) é produzido pela ULA.
//     Para JALR, o bit 0 do destino deve ser forçado para 0:
//        PC_next = (ALUResult & ~1)
//     garantindo alinhamento conforme a especificação.
//
//   Saídas para a Control Unit:
//   - opcode  = instr[6:0]
//   - funct3  = instr[14:12]
//   - funct7  = instr[30]
//       * Atenção: aqui “funct7” é APENAS o bit 30 (funct7[5]),
//         muito usado para distinguir ADD/SUB, SRL/SRA, etc.
//       * O campo funct7 completo (7 bits) é instr[31:25].
// ------------------------------------------------------------
module Datapath #(
    parameter N = 64 //! Parâmetro do XLEN: 32 para RV32 ou 64 para RV64
)(
    input  logic       clk, rst,             //! Clock e reset do sistema
    input  logic       regWriteEnable,       //! Habilita escrita no RegisterFile
    input  logic       load, store,          //! Controles para LSU (LOAD / STORE)
    input  logic       word,                 //! Flag para operações *W (32b + sign-extend no RV64)
    input  logic [3:0] ALUControl,           //! Seleção da operação da ULA

    input  logic       JALR,                 //! Indica instrução JALR (aplica máscara no pc_target)
    input  logic       sel_mux_pcnext,       //! 0: PC+4  | 1: pc_target
    input  logic       sel_mux_srcB,         //! 0: RD2   | 1: imm_ext
    input  logic [1:0] sel_mux_srcA,         //! 00: RD1  | 01: PC | 10: 0 (11: idem 10)
    input  logic [1:0] sel_mux_writeback,    //! 00: ALU  | 01: loadData | 10: PC+4 (11: reservado)

    // Flags da ULA (úteis para branches na Control Unit)
    output logic       Overflow,
    output logic       Carry,
    output logic       Zero,
    output logic       Negative,

    // Campos da instrução expostos para a Control Unit
    output logic       funct7,               //! Exporta instr[30] (bit 30, não o campo completo instr[31:25])
    output logic [2:0] funct3,               //! Exporta instr[14:12]
    output logic [6:0] opcode                //! Exporta instr[6:0]
);

    // --------------------------------------------------------
    // (1) Caminho do PC / Fetch
    // --------------------------------------------------------
    wire [N-1:0] pc_index;       //! PC atual (PC_out)
    wire [N-1:0] w_pc_plus4;     //! PC + 4
    wire [N-1:0] w_mux_pc_next;  //! PC_next (entrada do registrador PC)
    wire [N-1:0] pc_target;      //! Alvo (branch/jump), vindo da ULA (com máscara p/ JALR)
    wire [31:0]  instr;          //! Instrução lida (sempre 32 bits)

    // --------------------------------------------------------
    // (2) Decode / RegisterFile / Imediatos
    // --------------------------------------------------------
    wire [N-1:0] RD1, RD2;       //! Saídas de leitura do RegisterFile
    wire [N-1:0] imm_ext;        //! Imediato estendido (XLEN)

    // --------------------------------------------------------
    // (3) Execute: seleção de operandos e ULA
    // --------------------------------------------------------
    wire [N-1:0] w_mux_srcA;     //! Operando A selecionado (RD1 / PC / 0)
    wire [N-1:0] w_mux_srcB;     //! Operando B selecionado (RD2 / imm)
    wire [N-1:0] ALUResult;      //! Saída principal da ULA

    // --------------------------------------------------------
    // (4) Memória: LSU / DataMemory / LoadExtender
    // --------------------------------------------------------
    wire         w_memWriteEnable; //! Enable de escrita na DataMemory (STORE)
    wire [N-1:0] w_memAddress;     //! Endereço de memória (gerado/ajustado pela LSU)
    wire [7:0]   w_memWriteMask;   //! Máscara por byte (SB/SH/SW/SD)
    wire [N-1:0] w_memWriteData;   //! Dado preparado para STORE
    wire [N-1:0] w_memToLoadExt;   //! Palavra lida da memória (N bits)
    wire [N-1:0] w_loadData;       //! Dado final para LOAD (após extensão)

    // --------------------------------------------------------
    // (5) WriteBack
    // --------------------------------------------------------
    wire [N-1:0] w_mux_writeBack;  //! Dado final escrito no rd

    /* --------------------------------------------------------
       Regra do JALR para alinhamento do PC

       - O alvo base (ALUResult) vem da ULA:
         * branch/jumps via PC:   ALUResult = PC + imm
         * JALR:                  ALUResult = RS1 + imm

       - Para JALR, o bit 0 do destino deve ser 0:
           pc_target = {ALUResult[N-1:1], 1'b0}
         Caso contrário:
           pc_target = ALUResult
     -------------------------------------------------------- */
    assign pc_target = JALR ? {ALUResult[N-1:1], 1'b0} : ALUResult;

    // --------------------------------------------------------
    // (1) Fetch: PC -> InstructionMemory + PC+4
    // --------------------------------------------------------
    mux2 #(.N(N)) mux_pc_next(
        .data0   (w_pc_plus4),
        .data1   (pc_target),
        .sel     (sel_mux_pcnext),
        .mux_out (w_mux_pc_next)
    );

    ProgramCounter #(.N(N)) pc(
        .clk    (clk),
        .rst    (rst),
        .PC_in  (w_mux_pc_next),
        .PC_out (pc_index)
    );

    ProgramCounter_inc #(.N(N)) pc_plus4(
        .PC_in  (pc_index),
        .PC_out (w_pc_plus4)
    );

    InstructionMemory #(.N(N)) instr_mem(
        .addr  (pc_index),
        .instr (instr)
    );

    // --------------------------------------------------------
    // (2) Decode: RegisterFile + ImmGenerator
    // --------------------------------------------------------
    RegisterFile #(.N(N)) reg_file(
        .clk         (clk),
        .writeEnable (regWriteEnable),
        .rs1         (instr[19:15]),
        .rs2         (instr[24:20]),
        .rd          (instr[11:7]),
        .writerData  (w_mux_writeBack),
        .readData1   (RD1),
        .readData2   (RD2)
    );

    ImmGenerator #(.N(N)) imm_gen(
        .instr   (instr),
        .imm_out (imm_ext)
    );

    // --------------------------------------------------------
    // (3) Execução: seleção de operandos e ULA
    // --------------------------------------------------------
    mux3 #(.N(N)) mux_SrcA(
        .data0   (RD1),
        .data1   (pc_index),
        .data2   ('0),
        .sel     (sel_mux_srcA),
        .mux_out (w_mux_srcA)
    );

    mux2 #(.N(N)) mux_SrcB(
        .data0   (RD2),
        .data1   (imm_ext),
        .sel     (sel_mux_srcB),
        .mux_out (w_mux_srcB)
    );

    ULA #(.N(N)) ula(
        .dataA      (w_mux_srcA),
        .dataB      (w_mux_srcB),
        .word       (word),
        .ALUControl (ALUControl),
        .ALUOut     (ALUResult),
        .Overflow   (Overflow),
        .Carry      (Carry),
        .Negative   (Negative),
        .Zero       (Zero)
    );

    // --------------------------------------------------------
    // (4) Memória: LSU -> DataMemory -> LoadExtender
    // --------------------------------------------------------
    LSU #(.N(N)) lsu(
        .load          (load),
        .store         (store),
        .funct3        (instr[14:12]),
        .addr          (ALUResult),
        .storeData     (RD2),
        .writeEnable   (w_memWriteEnable),
        .mem_address   (w_memAddress),
        .mem_writeData (w_memWriteData),
        .mem_writeMask (w_memWriteMask),
        .exc_valid     (),
        .exc_StLd      (),
        .exc_addr      ()
    );

    DataMemory #(.N(N)) data_mem(
        .clk         (clk),
        .writeEnable (w_memWriteEnable),
        .writeMask   (w_memWriteMask),
        .address     (w_memAddress),
        .writeData   (w_memWriteData),
        .readDatabus (w_memToLoadExt)
    );

    LoadExtender #(.N(N)) load_ext(
        .mem_readData (w_memToLoadExt),
        .funct3       (instr[14:12]),
        .byte_offset  (ALUResult[2:0]),
        .loadedData   (w_loadData)
    );

    // --------------------------------------------------------
    // (5) WriteBack: seleciona o que volta para rd
    // --------------------------------------------------------
    mux3 #(.N(N)) mux_writeback(
        .data0   (ALUResult),
        .data1   (w_loadData),
        .data2   (w_pc_plus4),
        .sel     (sel_mux_writeback),
        .mux_out (w_mux_writeBack)
    );

    // --------------------------------------------------------
    // Campos da instrução para a Control Unit
    // --------------------------------------------------------
    assign funct7 = instr[30];     // bit 30 (funct7[5])
    assign funct3 = instr[14:12];
    assign opcode = instr[6:0];

endmodule

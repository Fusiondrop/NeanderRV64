// ------------------------------------------------------------
// Módulo: RegisterFile
// Descrição:
//   Implementa o banco de registradores de um processador
//   RISC-V RV64I (single-cycle).
//
//   - Possui 32 registradores de uso geral (x0 a x31).
//   - Cada registrador possui largura XLEN parametrizável
//     (32 bits para RV32I ou 64 bits para RV64I).
//   - Disponibiliza duas portas de leitura assíncrona (rs1, rs2)
//     e uma porta de escrita síncrona (rd).
//
//   Observações da ISA RISC-V:
//   - O registrador x0 é constante e sempre retorna zero.
//   - Escritas em x0 não devem alterar seu valor lógico.
//   - Os demais registradores não possuem valor inicial
//     definido após reset/power-on.
// ------------------------------------------------------------
module RegisterFile #(
    parameter N = 64 //! XLEN do processador: 32 para RV32, 64 para RV64
)(
    input  logic        clk, writeEnable,      //! Clock do sistema e habilitação de escrita
    input  logic [4:0]  rs1, rs2, rd,          //! Seletores de registradores (5 bits -> 32 regs)
    input  logic [N-1:0] writerData,           //! Dado a ser escrito no registrador rd
    output logic [N-1:0] readData1, readData2  //! Dados lidos dos registradores rs1 e rs2
);
    logic [N-1:0] Registers[31:0]; //! Banco de registradores: 32 registradores de N bits
    // Índices 0 a 31 correspondem aos registradores x0 a x31

    /* --------------------------------------------------------
       Modos de operação do banco de registradores
       --------------------------------------------------------
       O Register File opera em dois modos distintos:

       1) Leitura:
          - A leitura é puramente combinacional para um processador
            single-cycle.
          - Os registradores rs1 e rs2 são acessados diretamente.
          - O registrador x0 (endereço 0) é tratado como constante
            zero, conforme especificação da ISA RISC-V.
          - Mesmo que exista algum valor físico armazenado em
            Registers[0], ele nunca será propagado às saídas.
          - Esse comportamento permite que os dados sejam
            encaminhados imediatamente para a ULA, sem esperar
            pelo clock.

       2) Escrita:
          - Realizada de forma síncrona, sensível à borda
            de subida do clock.
          - Quando writeEnable está ativo, o dado writerData
            é armazenado no registrador rd.
          - O uso de escrita síncrona garante previsibilidade
            e evita conflitos entre leitura e escrita no mesmo
            ciclo de clock.
       --------------------------------------------------------
    */

    // Escrita síncrona no banco de registradores
    always_ff @(posedge clk) begin
        if (writeEnable && (rd != 5'b00000)) begin
            Registers[rd] <= writerData;
        end
    end

    // Leitura assíncrona do banco de registradores
    assign readData1 = (rs1 != 0) ? Registers[rs1] : '0;
    assign readData2 = (rs2 != 0) ? Registers[rs2] : '0;

endmodule

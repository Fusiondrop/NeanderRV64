// ------------------------------------------------------------
// Módulo: InstructionMemory
// Descrição:
//   Implementa a memória de instruções de um processador
//   RISC-V single-cycle.
//
//   - Armazena as instruções do programa a ser executado.
//   - Cada instrução possui 32 bits, conforme a especificação
//     base do conjunto de instruções RISC-V (RV32I / RV64I).
//   - A memória possui profundidade fixa de 1024 palavras,
//     totalizando 4 KiB de espaço para código.
//
//   Observações importantes:
//   - Embora o processador seja RV64I (XLEN = 64), as instruções
//     continuam tendo tamanho fixo de 32 bits.
//   - O parâmetro N representa o XLEN e afeta apenas a largura
//     do endereço (Program Counter), não a largura da instrução.
//   - A leitura é assíncrona (combinacional), adequada ao modelo
//     de datapath single-cycle clássico, onde a instrução precisa
//     estar disponível no mesmo ciclo.
//
//   O conteúdo da memória é carregado a partir de um arquivo
//   externo ("program.hex"), permitindo simulação e testes.
// ------------------------------------------------------------
module InstructionMemory #(
    parameter N = 64    //! Parâmetro do XLEN: 32 para RV32 ou 64 para RV64
)(
    input  logic [N-1:0] addr, //! Endereço de instrução (Program Counter), em bytes
    output logic [31:0]  instr //! Instrução lida da memória (32 bits)
);
    // --------------------------------------------------------
    // Memória interna de instruções:
    // - 1024 palavras
    // - Cada palavra possui 32 bits (tamanho fixo da instrução)
    //
    // Total de memória:
    //   1024 x 32 bits = 4096 bytes (4 KiB)
    // --------------------------------------------------------
    logic [31:0] I_mem [1023:0];

    // --------------------------------------------------------
    // Inicialização da memória de instruções
    //
    // - O arquivo "program.hex" contém as instruções do programa
    //   em formato hexadecimal.
    // - Cada linha do arquivo corresponde a uma instrução de
    //   32 bits armazenada sequencialmente na memória.
    // --------------------------------------------------------
    initial $readmemh("program.hex", I_mem);

    /* --------------------------------------------------------
     Leitura combinacional da instrução
    
     - O endereço recebido está em bytes.
     - Como cada instrução ocupa 4 bytes, os dois bits menos
       significativos (addr[1:0]) representam o offset do byte
       dentro da instrução e são sempre zero em endereços válidos.
    
     - Para acessar a memória por palavra, esses bits são
       descartados, utilizando addr[11:2] como índice:
    
       * 10 bits → 2^10 = 1024 palavras
    
     - Essa lógica assume instruções alinhadas em 4 bytes,
       conforme a especificação RISC-V sem a extensão C.

       | Endereço real | Endereço em binário | Últimos 2 bits |
       |---------------|---------------------|----------------|
       | 0x00000       | 0000...000000       | 00             |
       | 0x00004       | 0000...000100       | 00             |
       | 0x00008       | 0000...001000       | 00             |
       | 0x0000C       | 0000...001100       | 00             |
       | 0x00010       | 0000...010000       | 00             |
       | 0x00014       | 0000...010100       | 00             |
       -------------------------------------------------------- */
    always_comb begin
        instr = I_mem[addr[11:2]];
    end

endmodule

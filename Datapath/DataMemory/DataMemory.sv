// ------------------------------------------------------------
// Módulo: DataMemory
// Descrição:
//   Implementa a memória de dados de um processador RISC-V
//   single-cycle, com suporte a escrita por byte (byte-enable)
//   e parametrização do tamanho da palavra (XLEN = 32 ou 64).
//
//   - A profundidade da memória é fixa em 1024 palavras.
//   - Cada palavra possui N bits (N = XLEN).
//   - O endereço recebido é em bytes.
//   - A leitura é assíncrona (combinacional).
//   - A escrita é síncrona (na borda de subida do clock).
//
//   A lógica de seleção de bytes (SB, SH, SW, SD) é realizada
//   por meio do sinal writeMask, normalmente gerado pela LSU.
// ------------------------------------------------------------
module DataMemory #(
    parameter N = 64               //! Parâmetro do XLEN: 32 para RV32 ou 64 para RV64
)(
    input  logic             clk,         //! Clock do sistema
    input  logic             writeEnable, //! Habilita operação de escrita (STORE)
    input  logic [(N/8)-1:0] writeMask,   //! Máscara de escrita por byte, cada bit habilita um byte da palavra para a escrita de instruções SB, SH, SW e SD
    input  logic [N-1:0]     address,     //! Endereço de memória
    input  logic [N-1:0]     writeData,   //! Dados a serem escritos na memória
    output logic [N-1:0]     readDatabus  //! Dados lidos em um determinado endereço da memória
);

    // --------------------------------------------------------
    // Memória interna:
    // - 1024 palavras
    // - Cada palavra possui N bits (XLEN)
    //
    // Exemplo:
    //   N = 64  -> 1024 palavras de 64 bits (8 KiB)
    //   N = 32  -> 1024 palavras de 32 bits (4 KiB)
    // --------------------------------------------------------
    logic [N-1:0] D_mem [1023:0];

    // --------------------------------------------------------
    // BYTE_LSB:
    //   Número de bits menos significativos do endereço
    //   que representam o offset do byte dentro da palavra.
    //
    //   N = 64 -> palavra de 8 bytes -> log2(8) = 3 bits
    //   N = 32 -> palavra de 4 bytes -> log2(4) = 2 bits
    //
    // Esses bits são descartados para obter o índice da palavra.
    // --------------------------------------------------------
    localparam BYTE_LSB = $clog2(N/8);

    // --------------------------------------------------------
    // Index:
    //   Índice da palavra dentro da memória.
    //
    //   - A memória possui 1024 palavras
    //   - São necessários 10 bits para endereçá-las (2^10 = 1024)
    //
    //   O índice é extraído do endereço em bytes,
    //   descartando os bits de offset do byte.
    // --------------------------------------------------------
    wire [9:0] Index = address[BYTE_LSB + 9 : BYTE_LSB];

    /* -------------------------------------------------------
       Tabela conceitual da writeMask (byte-enable)

       Cada bit da writeMask controla a escrita de um byte
       específico da palavra.

       | Instrução | Bytes escritos | Exemplo writeMask |
       |-----------|----------------|-------------------|
       | SB        | 1 byte         | 0000_0001        |
       | SH        | 2 bytes        | 0000_0011        |
       | SW        | 4 bytes        | 0000_1111        |
       | SD        | 8 bytes        | 1111_1111        |

       Observação:
       - A LSU é responsável por gerar o writeMask
        corretamente com base no funct3 e no endereço.
       ------------------------------------------------------- */

    // --------------------------------------------------------
    // Escrita síncrona na memória
    //
    // - Ocorre apenas na borda de subida do clock
    // - Só acontece quando writeEnable = 1
    // - Cada byte da palavra é escrito de forma independente,
    //   conforme indicado pela writeMask
    // --------------------------------------------------------
    always_ff @(posedge clk) begin
        if (writeEnable) begin
            // Percorre todos os bytes da palavra (N/8 bytes)
            for (integer i = 0; i < (N/8); i++) begin
                // Se o bit correspondente da máscara estiver ativo,
                // escreve apenas aquele byte específico
                if (writeMask[i]) begin
                    D_mem[Index][8*i +: 8] <= writeData[8*i +: 8];
                end
            end
        end
    end

    // --------------------------------------------------------
    // Leitura assíncrona (combinacional)
    //
    // - Em arquitetura single-cycle, o dado precisa estar
    //   disponível no mesmo ciclo da execução da instrução.
    // - A memória sempre retorna a palavra completa (N bits).
    // --------------------------------------------------------
    assign readDatabus = D_mem[Index];

endmodule

module sra #(
  parameter N = 16 //! Parâmetro do XLEN
)(
  input   logic [$clog2(N)-1:0] shift_amount, //! Quantidade de deslocamento à direita em bits
  input   logic [N-1:0]         dataIn,       //! Vetor de entrada de N bits a ser deslocado
  output  logic [N-1:0]         dataOut       //! Vetor de saída de N bits após o deslocamento aritmético à direita
);

  localparam K = $clog2(N); //! Quantidade de estágios de deslocamento necessários
  wire [N-1:0] s[0:K-1] /* verilator split_var */; //! Vetores intermediários entre os estágios de deslocamento

  // Primeiro estágio: deslocamento possível de 1 bit à direita
  // Se shift_amount[0] = 0, mantém o valor original de dataIn
  // Se shift_amount[0] = 1, desloca dataIn em 1 bit para a direita
  // Como o deslocamento é aritmético, o bit mais significativo é preenchido
  // com a cópia do bit de sinal original dataIn[N-1]
  assign s[0] = (shift_amount[0] == 1'b1)
              ? {{1{dataIn[N-1]}}, dataIn[N-1:1]}
              : dataIn;

  genvar i; //! Variável de geração para os estágios seguintes
  generate
    for(i = 1; i < K; i++)
    begin: arithmetic_shifters
      localparam SHIFT = 1 << i; //! Valor do deslocamento do estágio atual: 2, 4, 8, ...

      // Cada estágio decide entre:
      // - manter o valor produzido pelo estágio anterior
      // - deslocar o valor anterior em SHIFT bits à direita
      //
      // Por se tratar de um deslocamento aritmético, os bits inseridos nas posições
      // mais significativas são preenchidos com réplicas do bit de sinal s[i-1][N-1]
      assign s[i] = (shift_amount[i] == 1'b1)
                  ? {{SHIFT{s[i-1][N-1]}}, s[i-1][N-1:SHIFT]}
                  : s[i-1];
    end
  endgenerate

  // A saída final do módulo corresponde ao resultado do último estágio da cascata
  assign dataOut = s[K-1];

endmodule
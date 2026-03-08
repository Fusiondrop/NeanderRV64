module srl #(
  parameter N = 16 //! Parâmetro do XLEN
) (
  input   logic [$clog2(N)-1:0] shift_amount, //! Quantidade de deslocamento à direita em bits
  input   logic [N-1:0]         dataIn,       //! Vetor de entrada de N bits a ser deslocado
  output  logic [N-1:0]         dataOut       //! Vetor de saída de N bits após o deslocamento lógico à direita
);

  localparam K = $clog2(N); //! Quantidade de estágios de deslocamento necessários
  wire [N-1:0] s[K-1:0];    //! Vetores intermediários entre os estágios de deslocamento

  // Primeiro estágio: deslocamento possível de 1 bit à direita
  // Se shift_amount[0] = 0, mantém o valor original de dataIn
  // Se shift_amount[0] = 1, desloca dataIn em 1 bit para a direita
  // Como o deslocamento é lógico, o bit mais significativo é preenchido com 0
  mux2 #(.N(N)) mux0(
    .data0(dataIn),                //! Caminho sem deslocamento
    .data1({1'b0, dataIn[N-1:1]}), //! Caminho com deslocamento lógico de 1 bit à direita
    .sel(shift_amount[0]),         //! Seleção do primeiro bit da quantidade de deslocamento
    .mux_out(s[0])                 //! Saída do primeiro estágio
  );

  genvar i; //! Variável de geração para os estágios seguintes
  generate
    for (i = 0; i < K-1; i++) begin: shifters
      localparam SHIFT = 2 << i; //! Valor do deslocamento do estágio atual: 2, 4, 8, ...

      // Cada estágio decide entre:
      // - manter o valor produzido pelo estágio anterior
      // - deslocar o valor anterior em SHIFT bits à direita
      //
      // Por se tratar de um deslocamento lógico, os bits inseridos nas posições
      // mais significativas são preenchidos com 0
      mux2 #(.N(N)) mux(
        .data0(s[i]),                           //! Caminho sem novo deslocamento
        .data1({{SHIFT{1'b0}}, s[i][N-1:SHIFT]}), //! Caminho com deslocamento lógico de SHIFT bits
        .sel(shift_amount[i+1]),               //! Bit correspondente da quantidade de deslocamento
        .mux_out(s[i+1])                       //! Saída do estágio atual
      );
    end
  endgenerate

  // A saída final do módulo corresponde ao resultado do último estágio da cascata
  assign dataOut = s[K-1];

endmodule
module sll #(
  parameter N = 4 //! Parâmetro do XLEN
) (
  input   logic [$clog2(N)-1:0] shift_amount, //! Quantidade de deslocamento à esquerda em bits
  input   logic [N-1:0]         dataIn,       //! Vetor de entrada de N bits a ser deslocado
  output  logic [N-1:0]         dataOut       //! Vetor de saída de N bits após o deslocamento lógico à esquerda
);

  localparam K = $clog2(N); //! Quantidade de estágios de deslocamento necessários
  wire [N-1:0] s[K-1:0];    //! Conectores físicos internos entre os estágios de multiplexadores

  // Primeiro estágio: deslocamento possível de 1 bit
  // Se shift_amount[0] = 0, mantém dataIn
  // Se shift_amount[0] = 1, desloca dataIn em 1 bit para a esquerda preenchendo com 0 no LSB
  mux2 #(.N(N)) mux0(
    .data0(dataIn),                     //! Caminho sem deslocamento
    .data1({dataIn[N-2:0], 1'b0}),      //! Caminho com deslocamento lógico de 1 bit à esquerda
    .sel(shift_amount[0]),              //! Seleção do primeiro bit da quantidade de deslocamento
    .mux_out(s[0])                      //! Saída do primeiro estágio
  );

  genvar i; //! Variável de geração para os estágios seguintes
  generate
    for (i = 0; i < K-1; i++) begin: shifters
      localparam SHIFT = 2 << i; //! Valor do deslocamento do estágio atual: 2, 4, 8, ...

      // Cada estágio decide entre:
      // - manter o valor do estágio anterior
      // - deslocar o valor do estágio anterior em SHIFT bits à esquerda
      mux2 #(.N(N)) mux(
        .data0(s[i]),                                     //! Caminho sem novo deslocamento
        .data1({s[i][(N-1)-SHIFT:0], {SHIFT{1'b0}}}),     //! Caminho com deslocamento lógico de SHIFT bits
        .sel(shift_amount[i+1]),                          //! Bit correspondente da quantidade de deslocamento
        .mux_out(s[i+1])                                  //! Saída do estágio atual
      );
    end
  endgenerate

  assign dataOut = s[K-1]; //! Último estágio da cascata conectado à saída final

endmodule

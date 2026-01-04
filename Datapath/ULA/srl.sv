module srl #(
  parameter N = 16
) (
  input   logic [$clog2(N)-1:0]  shift_amount,   // Quantidade de deslocamento (log2(N) bits)
  input   logic [N-1:0] dataIn,         // Dado de entrada por tamanho N do hardware
  output  logic [N-1:0] dataOut         // Dado de saída por tamanho N do hardware
);
  localparam K = $clog2(N);
  wire [N-1:0] s[K-1:0];

  mux2_1 #(.N(N)) mux0(.d0(dataIn), .d1({1'b0, dataIn[N-1:1]}), .sel(shift_amount[0]), .y(s[0]));

  genvar i;
  generate
    for (i = 0;i < K-1; i++) begin: shifters
      localparam SHIFT = 2 << i;
      mux2_1 #(.N(N)) mux(.d0(s[i]), .d1({{SHIFT{1'b0}}, s[i][N-1:SHIFT]}), .sel(shift_amount[i+1]), .y(s[i+1]));
    end
  endgenerate
  assign dataOut = s[K-1];
endmodule

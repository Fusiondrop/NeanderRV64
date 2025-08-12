module sll #(
  parameter N = 16
) (
  input   logic [$clog2(N)-1:0]  amt,   // Quantidade de deslocamento (log2(N) bits)
  input   logic [N-1:0] dataIn,         // Dado de entrada por tamanho N do hardware
  output  logic [N-1:0] dataOut         // Dado de saída por tamanho N do hardware
);
  localparam K = $clog2(N);
  wire [N-1:0] s[K-1:0];

  mux2_1 #(.N(N)) mux0(.d0(dataIn), .d1({dataIn[N-2:0], 1'b0}), .sel(amt[0]), .y(s[0]));

  genvar i;
  generate
    for (i = 0;i < K-1; i++) begin: shifters
      localparam SHIFT = 2 << i;
      mux2_1 #(.N(N)) mux(.d0(s[i]), .d1({s[i][(N-1)-SHIFT:0], {SHIFT{1'b0}}}), .sel(amt[i+1]), .y(s[i+1]));
    end
  endgenerate
  assign dataOut = s[K-1];
endmodule

module mux2_1 #(
  parameter N = 1
)(
  input  logic [N-1:0] d0, d1,
  input  logic sel,
  output logic [N-1:0] y);

  assign y = sel ? d1:d0;

endmodule

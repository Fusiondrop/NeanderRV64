module mux2 #(
  parameter N = 1
)(
  input  logic [N-1:0] data0, data1,
  input  logic         sel,
  output logic [N-1:0] mux_out

  assign mux_out = sel ? data1:data0;

endmodule

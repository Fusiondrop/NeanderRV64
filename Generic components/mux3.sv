module mux3 #(
  parameter N = 1
)(
  input  logic [N-1:0] data0, data1, data2,
  input  logic [1:0]   sel,
  output logic [N-1:0] mux_out);

  assign mux_out = sel[1] ? data2 : (sel[0] ? data1 : data0);

endmodule

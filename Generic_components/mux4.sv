module mux4 #(
  parameter N = 1
)(
  input  logic [N-1:0] data0, data1, data2, data3,
  input  logic [1:0]   sel,
  output logic [N-1:0] mux_out);

    assign mux_out = (sel == 2'b00) ? data0 : (sel == 2'b01) ? data1 : (sel == 2'b10) ? data2 : data3;

endmodule

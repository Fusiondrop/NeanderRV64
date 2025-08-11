module gates #(
    parameter N = 4
)(
    input  logic [N-1:0] a, b,
    output logic [N-1:0] y1, y2, y3, y4, y5
);
  assign y1 = a & b;
  assign y2 = a | b;
  assign y3 = a ^ b;
  assign y4 = ~(a & b);
  assign y5 = ~(a | b);
endmodule

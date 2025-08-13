module sra #(parameter N = 16
)(
    input   logic [N-1:0]           dataIn,
    input   logic [$clog2(N)-1:0]   shift_amount,
    output  logic [N-1:0]           dataOut
);

  localparam K = $clog2(N);
  wire [N-1:0] s[0:K-1] /* verilator split_var */;

  assign s[0] = (shift_amount[0] == 1'b1) ? {{1{dataIn[N-1]}}, dataIn[N-1:1]} : dataIn;

  genvar i;
  generate
    for(i = 1; i < K; i++)
    begin: arithmetic_shifters
      localparam SHIFT = 1 << i;
      assign s[i] = (shift_amount[i] == 1'b1) ? {{SHIFT{s[i-1][N-1]}}, s[i-1][N-1:SHIFT]} : s[i-1];
    end
  endgenerate
  assign dataOut = s[K-1];
endmodule

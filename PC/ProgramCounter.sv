module ProgramCounter #(
    parameter N = 32
)(
    input  logic        clk,
    input  logic        reset,
    input  logic [N-1:0] PC_in,
    output logic [N-1:0] PC_out
);

always_ff @(posedge clk or posedge reset) begin
    if (reset)
        PC_out <= '0;
    else
        PC_out <= PC_in;
end

endmodule

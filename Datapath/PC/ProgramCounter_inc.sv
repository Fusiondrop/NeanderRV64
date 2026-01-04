module ProgramCounter_inc #(
    parameter int N = 64
)(
    input  logic [N-1:0] PC_in,
    output logic [N-1:0] PC_out
);
    // Incrementa o PC em 4 bytes (instruções de 32 bits)
    assign PC_out = PC_in + {{(N-3){1'b0}}, 3'd4};
endmodule

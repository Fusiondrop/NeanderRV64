module rippleAdder #(parameter N = 64)(
    input   logic [N-1:0] A, B,
    input   logic         Cin,
    output  logic [N-1:0] S,
    output  logic         Cout
);
    
    logic [N:0] carry;
    assign carry[0] = Cin;

    genvar i;    
    generate
        for(i = 0; i < N; i++) begin
            fullAdder fa(.a(A[i]), .b(B[i]), .cin(carry[i]), .s(S[i]), .cout(carry[i+1]));
        end
    endgenerate

    assign Cout = carry[N];
endmodule

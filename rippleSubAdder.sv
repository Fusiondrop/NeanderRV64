module rippleSubAdder #(
    parameter N = 4
)(
    input  logic [N-1:0] A,
    input  logic [N-1:0] B,
    input  logic         D,
    output logic [N-1:0] S,
    output logic         Cout
);

    wire [N-1:0] y_mux;
    wire [N-1:0] carry;


    mux2_1 mux0(
        .d0(A[0]),
        .d1(~A[0]),
        .sel(D),
        .y(y_mux[0])
    );
    fullAdder fa0(
        .a(y_mux[0]),
        .b(B[0]),
        .cin(D),
        .s(S[0]),
        .cout(carry[0])
    );

    genvar i;
    generate
        for(i = 1; i < N; i++) begin: full_adder_chain
            mux2_1 mux(
                .d0(A[i]),
                .d1(~A[i]),
                .sel(D),
                .y(y_mux[i])
            );
            fullAdder fa(
                .a(y_mux[i]),
                .b(B[i]),
                .cin(carry[i-1]),
                .s(S[i]),
                .cout(carry[i])
            );
        end
    endgenerate
    assign Cout = carry[N-1];
endmodule

module fullAdder(input logic a, b, cin,
                 output logic s, cout);

    assign s = a^b^cin;
    assign cout = (a & b) | (b & cin) | (a & cin);

endmodule

module mux2_1(input  logic d0, d1,
              input  logic sel,
              output logic y);

  assign y = sel ? d1:d0;

endmodule

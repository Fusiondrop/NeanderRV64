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


    mux2 #(.N(1)) mux0(
        .data0(B[0]),
        .data1(~B[0]),
        .sel(D),
        .mux_out(y_mux[0])
    );
    fullAdder fa0(
        .a(A[0]),
        .b(y_mux[0]),
        .cin(D),
        .s(S[0]),
        .cout(carry[0])
    );

    genvar i;
    generate
        for(i = 1; i < N; i++) begin: full_adder_chain
            mux2 #(.N(1)) mux(
                .data0(B[i]),
                .data1(~B[i]),
                .sel(D),
                .mux_out(y_mux[i])
            );
            fullAdder fa(
                .a(A[i]),
                .b(y_mux[i]),
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

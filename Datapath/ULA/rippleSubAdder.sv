module rippleSubAdder #(
    parameter N = 4 //! Parâmetro do XLEN
)(
    input  logic [N-1:0] A,    //! Primeiro operando de N bits
    input  logic [N-1:0] B,    //! Segundo operando de N bits
    input  logic         D,    //! Sinal de controle da operação: 0 = soma, 1 = subtração
    output logic [N-1:0] S,    //! Resultado da operação aritmética
    output logic         Cout  //! Carry-out final da cadeia de somadores
);

    wire [N-1:0] y_mux;  //! Vetor intermediário que armazena B ou ~B conforme a operação
    wire [N-1:0] carry;  //! Vetor interno de propagação de carry entre os full adders

    // Primeiro bit da cadeia:
    // Se D = 0, y_mux[0] recebe B[0], realizando A + B
    // Se D = 1, y_mux[0] recebe ~B[0], preparando A + ~B + 1 para subtração em complemento de dois
    mux2 #(.N(1)) mux0(
        .data0(B[0]),       //! Caminho para operação de soma
        .data1(~B[0]),      //! Caminho para operação de subtração
        .sel(D),            //! Seleciona entre soma e subtração
        .mux_out(y_mux[0])  //! Saída do multiplexador para o bit menos significativo
    );

    // Primeiro somador completo:
    // Soma A[0] com o valor selecionado de B[0]
    // O carry-in inicial recebe D:
    // - D = 0 -> soma normal: A + B
    // - D = 1 -> completa a subtração: A + ~B + 1
    fullAdder fa0(
        .a(A[0]),         //! Bit menos significativo de A
        .b(y_mux[0]),     //! Bit menos significativo de B ou ~B
        .cin(D),          //! Carry-in inicial da operação
        .s(S[0]),         //! Bit menos significativo do resultado
        .cout(carry[0])   //! Carry propagado para o próximo estágio
    );

    genvar i; //! Variável de geração para os estágios restantes
    generate
        for(i = 1; i < N; i++) begin: full_adder_chain

            // Para cada bit i:
            // Se D = 0, mantém B[i] para soma
            // Se D = 1, inverte B[i] para formar o complemento de dois na subtração
            mux2 #(.N(1)) mux(
                .data0(B[i]),       //! Caminho para operação de soma
                .data1(~B[i]),      //! Caminho para operação de subtração
                .sel(D),            //! Seleção global da operação
                .mux_out(y_mux[i])  //! Saída intermediária para o full adder do estágio i
            );

            // Cada full adder soma:
            // - o bit correspondente de A
            // - o bit correspondente de B ou ~B
            // - o carry propagado do estágio anterior
            fullAdder fa(
                .a(A[i]),           //! Bit i de A
                .b(y_mux[i]),       //! Bit i de B ou ~B
                .cin(carry[i-1]),   //! Carry vindo do estágio anterior
                .s(S[i]),           //! Bit i do resultado
                .cout(carry[i])     //! Carry propagado para o próximo estágio
            );
        end
    endgenerate

    // O carry-out final do último full adder é conectado à saída Cout
    assign Cout = carry[N-1];

endmodule

module fullAdder(input logic a, b, cin,
                 output logic s, cout);

    assign s = a^b^cin;
    assign cout = (a & b) | (b & cin) | (a & cin);

endmodule

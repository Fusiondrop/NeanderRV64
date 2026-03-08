module SignExtender #(
    parameter IN  = 32, //! Largura do barramento de entrada
    parameter OUT = 64  //! Largura do barramento de saída
)(
    input  logic [IN-1:0]  in,  //! Barramento de entrada a ser estendido com sinal
    output logic [OUT-1:0] out  //! Barramento de saída após a extensão de sinal
);

    // Replica o bit mais significativo da entrada, que representa o bit de sinal,
    // nas posições adicionais do barramento de saída
    // Em seguida, concatena o valor original de entrada nas posições menos significativas
    assign out = {{(OUT-IN){in[IN-1]}}, in};

endmodule

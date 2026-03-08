module ZeroExtender #(
    parameter IN  = 32, //! Largura do barramento de entrada
    parameter OUT = 64  //! Largura do barramento de saída
)(
    input  logic [IN-1:0]  in,  //! Barramento de entrada a ser estendido com zeros
    output logic [OUT-1:0] out  //! Barramento de saída após a extensão por zeros
);

    // Preenche as posições mais significativas da saída com zeros
    // e mantém o barramento de entrada nas posições menos significativas
    assign out = {{(OUT-IN){1'b0}}, in};

endmodule

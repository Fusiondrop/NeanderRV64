module ZeroExtender #(
    parameter N = 4
)(
    input   logic in,           // 1 bit de entrada da flag de condição do comparador
    output  logic [N-1:0] out   // Saída N de acordo com o tamanho da saída do comparador
);
    assign out = { {(N-1){1'b0}}, in}; // replicação e concatenação
endmodule

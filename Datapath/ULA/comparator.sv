module comparator #(
    parameter N = 8 //! Parâmetro do XLEN
)(
    input   logic [N-1:0] A,    //! Entrada do vetor de N bits A 
    input   logic [N-1:0] B,    //! Entrada do vetor de N bits B
    input   logic         D,    //! Entrada de seleção do mux para comparação de valores signed ou unsigned 
    output  logic         gt,   //! Flag de saída >
    output  logic         lt,   //! Flag de saída <
    output  logic         eq    //! Flag de saída =
);
    localparam M = N/4;             //! Variável para a geração de i até M comparadores de 4 bits
    wire A_msb = A[N-1];            //! Fio do bit mais significativo da entrada A
    wire B_msb = B[N-1];            //! Fio do bit mais significativo da entrada B
    wire [M-1:0] W_gt, W_lt, W_eq;  //! Conector físico interno entre a saída e entrada do comparador 4 bits

    four_bit_comparator comp0(      // Primeiro comparador dos bits mais significativos
        .i_gt(1'b0),            // Nenhum bit pré-avaliado
        .i_lt(1'b0),            // Nenhum bit pré-avaliado
        .i_eq(1'b1),            // Assume-se primeiramente que são iguais
        .A(A[N-1 -: 4]),        // Porção de 4 bits mais significativo da entrada A
        .B(B[N-1 -: 4]),        // Porção de 4 bits mais significativo da entrada B
        .gt(W_gt[0]),           // Primeira saída do conector físico da saída gt à entrada do próximo comparador
        .lt(W_lt[0]),           // Primeira saída do conector físico da saída lt à entrada do próximo comparador
        .eq(W_eq[0])            // Primeira saída do conector físico da saída eq à entrada do próximo comparador
    );

    genvar i;   //! Variável de geração do segundo comparador até o M comparadores
    generate
        for(i = 1; i < M; i++) begin: cascade_comp  // loop geração de comparadores 4 bits
            four_bit_comparator comp(   // comparador 4 bits instanciado
                .i_gt(W_gt[i-1]),   // Conector físico gt da saída do comparador antecessor na entrada do atual
                .i_lt(W_lt[i-1]),   // Conector físico lt da saída do comparador antecessor na entrada do atual
                .i_eq(W_eq[i-1]),   // Conector físico eq da saída do comparador antecessor na entrada do atual
                // --- Considerando que N seja igual a 12 bits, o primeiro modulo instanciado já obtem o vetor de 4 bits mais significativos '11:7'
                .A(A[N-1 - i*4 -: 4]), // Porções intermediárias de 4 bits da entrada de N bits do vetor A; iteração i = 1: '7:4'
                .B(B[N-1 - i*4 -: 4]), // Porções intermediárias de 4 bits da entrada de N bits do vetor B; iteração i = 2: '3:0'
                // ---
                .gt(W_gt[i]),       // Conector físico gt da saída do comparador atual para a entrada do próximo
                .lt(W_lt[i]),       // Conector físico lt da saída do comparador atual para a entrada do próximo
                .eq(W_eq[i])        // Conector físico eq da saída do comparador atual para a entrada do próximo
            );
        end
    endgenerate

    // Resultados unsigned vindos da cascata MSB->LSB. [M-1] é a saída do comparador do chunk menos significativo, se acontecer de algum anterior
    // for maior ou menor que A ou B, o four bit comparator vai só passar o sinal abaixo até o LSB.
    wire unsigned_gt = W_gt[M-1]; //! saída gt do comparador menos significativo para conector unsigned
    wire unsigned_lt = W_lt[M-1]; //! saída lt do comparador menos significativo para conector unsigned
    wire unsigned_eq = W_eq[M-1]; //! saída eq do comparador menos significativo para conector unsigned

    // Lógica para resultados sinalizados vindo MSB-check
    // A lógica de decisão de sinal pega os bits mais significativo e inverte a entrada para testar se 0 > 1, se sim a entrada A é > B e a flag gt é acionada
    // Se acontecer dos sinais serem iguais, não há razão para ser diferente da lógica do flag eq de igualdade do comparador
    wire signed_gt = (~A_msb & B_msb) ? 1'b1 : (A_msb & ~B_msb) ? 1'b0 : unsigned_gt; //! A_msb pos, B_msb neg => A > B
    wire signed_lt = (A_msb & ~B_msb) ? 1'b1 : (~A_msb & B_msb) ? 1'b0 : unsigned_lt; //! A_msb neg, B_msb pos => A < B

    // Saída final decidido pela instrução com a entrada D
    assign gt = D ? signed_gt : unsigned_gt;  //! Último conector físico gt do comparador 4 bits na saída do comparador top-level. 1 para signed, 0 para unsigned
    assign lt = D ? signed_lt : unsigned_lt;  //! Último conector físico lt do comparador 4 bits na saída do comparador top-level. 1 para signed, 0 para unsigned
    assign eq = unsigned_eq;  //! Último conector físico eq do comparador 4 bits na saída do comparador top-level. Igualdade é bitwise, independe de signed/unsigned

endmodule

module four_bit_comparator(
    input   logic       i_gt,   //! cascading greater_than input
    input   logic       i_lt,   //! cascading lesser_than input
    input   logic       i_eq,   //! cascading equal input
    input   logic [3:0] A,      //! porção de 4 bits da entrada A
    input   logic [3:0] B,      //! porção de 4 bits da entrada B
    output  logic       gt,     //! cascading greater_than output
    output  logic       lt,     //! cascading lesser_than output
    output  logic       eq      //! cascading equal output
  );

  wire [3:0] x; //! Conector físico para o resultado da expressão lógica do XNOR de (NOT A) AND B e A AND (NOT B)

  genvar i;
  generate
    for(i = 0; i < 4; i++)
    begin
      assign x[i] = ~((~A[i] & B[i]) ^ (A[i] & ~B[i])); //! Expressão lógica x[i] = 1 se A[i] == B[i] (bits iguais) ou x[i] = 0 se A[i] != B[i] (bits diferentes)
    end
  endgenerate

  wire eq_bit = &(x);   //! Se o resultado das saídas forem iguais só irá passar para frente
  wire gt_bit = (x[3] & x[2] & x[1] & (A[0] & ~B[0])) ^ (x[3] & x[2] & (A[1] & ~B[1])) ^ (x[3] & (A[2] & ~B[2])) ^ (A[3] & ~B[3]);  //! Expressão lógica bit a bit se A maior que B
  wire lt_bit = (x[3] & x[2] & x[1] & (~A[0] & B[0])) ^ (x[3] & x[2] & (~A[1] & B[1])) ^ (x[3] & (~A[2] & B[2])) ^ (~A[3] & B[3]);  //! Expressão lógica bit a bit se A menor que B

  assign gt = i_gt | (i_eq & gt_bit); //! Se a entrada antecessora tiver sido maior porém a porção de 4 bits for igual, o A continuará sendo maior
  assign lt = i_lt | (i_eq & lt_bit); //! Se a entrada antecessora tiver sido menor porém a porção de 4 bits for igual, o A continuará sendo menor
  assign eq = i_eq & eq_bit;    //! assegurar de que houve igualdade
endmodule

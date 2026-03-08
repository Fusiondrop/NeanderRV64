module ULA #(
    parameter N = 64 //! Parâmetro do tamanho do barramento de dados da ULA (mínimo 8 bits)
)(
    input   logic         word,       //! Flag de controle para instruções RV64I do tipo *W (operações em 32 bits com extensão de sinal)
    input   logic [N-1:0] dataA,      //! Primeiro operando da ULA (normalmente RS1)
    input   logic [N-1:0] dataB,      //! Segundo operando da ULA (normalmente RS2 ou imediato)
    input   logic [3:0]   ALUControl, //! Sinal de controle que seleciona a operação da ULA
    output  logic [N-1:0] ALUOut,     //! Resultado final produzido pela ULA
    output  logic         Overflow,   //! Flag de overflow aritmético para soma/subtração com sinal
    output  logic         Carry,      //! Flag de carry-out para operações de soma/subtração sem word
    output  logic         Negative,   //! Flag que indica resultado negativo (bit mais significativo = 1)
    output  logic         Zero        //! Flag que indica resultado igual a zero
);

    localparam SHIFT_BITS = $clog2(N); //! Quantidade de bits necessários para codificar o deslocamento em N bits
    localparam WORD_N     = 32;        //! Largura fixa usada nas instruções RV64I do tipo *W

    wire [N-1:0] adder_out;       //! Resultado do somador/subtrator no caminho de N bits
    wire         adder_carry_out; //! Carry-out gerado pelo somador/subtrator de N bits

    wire         comp_lt_1bit; //! Saída de 1 bit do comparador para indicar A < B
    wire [N-1:0] comp_lt;      //! Saída do comparador estendida para N bits

    wire unused_gt, unused_eq; //! Saídas do comparador não utilizadas nesta ULA

    wire [N-1:0] sll_out, srl_out, sra_out; //! Resultados das operações de deslocamento em N bits

    // Fios para instruções do tipo Word (*W), que operam apenas sobre 32 bits
    wire [WORD_N-1:0] adder_w_out;       //! Resultado do somador/subtrator de 32 bits
    wire              adder_w_carry_out; //! Carry-out do somador/subtrator de 32 bits
    wire [WORD_N-1:0] sll_w_out;         //! Resultado do deslocamento lógico à esquerda em 32 bits
    wire [WORD_N-1:0] srl_w_out;         //! Resultado do deslocamento lógico à direita em 32 bits
    wire [WORD_N-1:0] sra_w_out;         //! Resultado do deslocamento aritmético à direita em 32 bits
    wire [WORD_N-1:0] word_out32;        //! Resultado final selecionado ainda em 32 bits para instruções *W
    wire [N-1:0]      word_out64;        //! Resultado de 32 bits estendido com sinal para N bits

    // Caminho principal de 64 bits:
    // O rippleSubAdder realiza soma quando ALUControl[3] = 0
    // e subtração quando ALUControl[3] = 1
    rippleSubAdder #(.N(N)) c0(
        .A(dataA),                  //! Primeiro operando
        .B(dataB),                  //! Segundo operando
        .D(ALUControl[3]),          //! Seleciona soma ou subtração
        .S(adder_out),              //! Resultado da operação aritmética
        .Cout(adder_carry_out)      //! Carry-out final
    );

    // Comparador usado para as instruções SLT e SLTU
    // O sinal D define se a comparação será com sinal ou sem sinal
    comparator #(.N(N)) c1(
        .A(dataA),                  //! Primeiro operando da comparação
        .B(dataB),                  //! Segundo operando da comparação
        .D(~ALUControl[0]),         //! D = 1 para SLT e D = 0 para SLTU, conforme codificação usada
        .gt(unused_gt),             //! Saída "maior que" não utilizada
        .lt(comp_lt_1bit),          //! Saída "menor que" utilizada pela ULA
        .eq(unused_eq)              //! Saída "igual" não utilizada
    );

    // Expande a saída de 1 bit do comparador para N bits
    // Isso permite que o resultado da comparação tenha o mesmo tamanho da ULA
    ZeroExtender #(.IN(1), .OUT(N)) ext_lt(
        .in(comp_lt_1bit),          //! Entrada de 1 bit do comparador
        .out(comp_lt)               //! Saída expandida para N bits
    );

    // Blocos de deslocamento no caminho de N bits
    // O campo shift_amount usa apenas os bits menos significativos de dataB
    sll #(.N(N)) c2(
        .shift_amount(dataB[SHIFT_BITS-1:0]), //! Quantidade de deslocamento à esquerda
        .dataIn(dataA),                       //! Dado a ser deslocado
        .dataOut(sll_out)                     //! Resultado do deslocamento lógico à esquerda
    );

    srl #(.N(N)) c3(
        .shift_amount(dataB[SHIFT_BITS-1:0]), //! Quantidade de deslocamento à direita
        .dataIn(dataA),                       //! Dado a ser deslocado
        .dataOut(srl_out)                     //! Resultado do deslocamento lógico à direita
    );

    sra #(.N(N)) c4(
        .shift_amount(dataB[SHIFT_BITS-1:0]), //! Quantidade de deslocamento à direita
        .dataIn(dataA),                       //! Dado a ser deslocado
        .dataOut(sra_out)                     //! Resultado do deslocamento aritmético à direita
    );

    // Caminho de 32 bits para instruções do tipo *W:
    // executa soma ou subtração somente sobre os 32 bits menos significativos
    rippleSubAdder #(.N(WORD_N)) w0(
        .A(dataA[WORD_N-1:0]),     //! Parte baixa de 32 bits de dataA
        .B(dataB[WORD_N-1:0]),     //! Parte baixa de 32 bits de dataB
        .D(ALUControl[3]),         //! Seleciona soma ou subtração
        .S(adder_w_out),           //! Resultado aritmético de 32 bits
        .Cout(adder_w_carry_out)   //! Carry-out de 32 bits
    );

    // Deslocamentos específicos para instruções *W
    // Em RV64I, o shamt das instruções word usa apenas 5 bits
    sll #(.N(WORD_N)) w1(
        .shift_amount(dataB[4:0]),         //! Quantidade de deslocamento em 32 bits
        .dataIn(dataA[WORD_N-1:0]),        //! Operando de 32 bits
        .dataOut(sll_w_out)                //! Resultado SLLW/SLLIW
    );

    srl #(.N(WORD_N)) w2(
        .shift_amount(dataB[4:0]),         //! Quantidade de deslocamento em 32 bits
        .dataIn(dataA[WORD_N-1:0]),        //! Operando de 32 bits
        .dataOut(srl_w_out)                //! Resultado SRLW/SRLIW
    );

    sra #(.N(WORD_N)) w3(
        .shift_amount(dataB[4:0]),         //! Quantidade de deslocamento em 32 bits
        .dataIn(dataA[WORD_N-1:0]),        //! Operando de 32 bits
        .dataOut(sra_w_out)                //! Resultado SRAW/SRAIW
    );

    // Seleciona o resultado correto entre as operações word de 32 bits
    assign word_out32 =
        ((ALUControl == 4'b0000) || (ALUControl == 4'b1000)) ? adder_w_out : //! ADDW/ADDIW e SUBW
        (ALUControl == 4'b0001) ? sll_w_out :                                 //! SLLW/SLLIW
        (ALUControl == 4'b0101) ? srl_w_out :                                 //! SRLW/SRLIW
        (ALUControl == 4'b1101) ? sra_w_out :                                 //! SRAW/SRAIW
        {WORD_N{1'b0}};                                                       //! Valor padrão para códigos não tratados

    // O resultado de 32 bits é estendido com sinal para N bits
    // Isso atende ao comportamento das instruções *W na arquitetura RV64I
    SignExtender #(.IN(WORD_N), .OUT(N)) ext_word(
        .in(word_out32),              //! Resultado de 32 bits
        .out(word_out64)              //! Resultado estendido para N bits
    );

    wire [N-1:0] ALU_mux_out; //! Resultado selecionado do caminho normal de N bits

    // Multiplexação principal das operações da ULA no caminho de N bits
    assign ALU_mux_out =
        (ALUControl == 4'b0000) ? adder_out :       //! ADD
        (ALUControl == 4'b1000) ? adder_out :       //! SUB
        (ALUControl == 4'b0111) ? (dataA & dataB) : //! AND
        (ALUControl == 4'b0110) ? (dataA | dataB) : //! OR
        (ALUControl == 4'b0100) ? (dataA ^ dataB) : //! XOR
        (ALUControl == 4'b0001) ? sll_out :         //! SLL
        (ALUControl == 4'b0101) ? srl_out :         //! SRL
        (ALUControl == 4'b1101) ? sra_out :         //! SRA
        (ALUControl == 4'b0010) ? comp_lt :         //! SLT
        (ALUControl == 4'b0011) ? comp_lt :         //! SLTU
        {N{1'b0}};                                  //! Valor padrão para códigos não tratados

    // Seleção final da saída da ULA:
    // se word = 1, usa o caminho das instruções *W
    // se word = 0, usa o caminho normal de N bits
    assign ALUOut = word ? word_out64 : ALU_mux_out;

    wire is_adder; //! Indica se a operação atual pertence ao grupo soma/subtração
    assign is_adder = (ALUControl[2:0] == 3'b000); //! ADD e SUB compartilham os 3 bits menos significativos

    // Lógica combinacional para geração das flags da ULA
    always_comb begin: flags
        Zero     = (ALUOut == {N{1'b0}}); //! Flag Zero ativa quando o resultado é totalmente nulo
        Negative = ALUOut[N-1];            //! Flag Negative recebe o bit mais significativo do resultado
        Carry    = (adder_carry_out & is_adder) & ~word; //! Carry só é válido para soma/subtração no caminho normal
        Overflow = ((~(ALUControl[3] ^ dataA[N-1] ^ dataB[N-1])) &
                    (dataA[N-1] ^ adder_out[N-1]) &
                    is_adder) & ~word; //! Overflow válido apenas para soma/subtração com sinal no caminho normal
    end

endmodule

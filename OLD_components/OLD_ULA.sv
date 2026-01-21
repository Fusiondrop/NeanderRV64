module OLD_ULA #(
    parameter N = 64 // O parâmetro mínimo deve ser 8
)(
    input   logic         word,       //! Flag de controle para instruções RV64I
    input   logic [N-1:0] dataA,      //! Entrada RS1
    input   logic [N-1:0] dataB,      //! Entrada RS2
    input   logic [3:0]   ALUControl, //! O seletor de instrução
    output  logic [N-1:0] ALUOut,     //! Saída ULA
    output  logic         Overflow,
    output  logic         Carry,
    output  logic         Negative,
    output  logic         Zero
);
    localparam SHIFT_BITS = $clog2(N); // log de 64 na base 2 = 6, 6 casas de bits são necessários para representar um valor até 64.
    localparam WORD_N = 32;            // Instruções RV64 supoem-se que N seje > 32

    wire [N-1:0] adder_out;
    wire         adder_carry_out;

    wire         comp_lt_1bit; //! Fio de saída do comparador para o 'lesser than'
    wire [N-1:0] comp_lt;      //! Fio de saída do comparador para o 'lesser than' zero extendido para o tamanho de saída da ULA

    wire unused_gt, unused_eq; //! Dummy wires! Fios não utilizados que permanecem apenas para evitar avisos de warnings

    wire [N-1:0] sll_out, srl_out, sra_out;

    // Fios para word instruction de RV64
    wire [WORD_N-1:0] adder_w_out;
    wire              adder_w_carry_out;
    wire [WORD_N-1:0] sll_w_out, srl_w_out, sra_w_out;
    wire [WORD_N-1:0] word_out32;
    wire [N-1:0]      word_out64;


    rippleSubAdder #(.N(N)) c0(.A(dataA), .B(dataB), .D(ALUControl[3]), .S(adder_out), .Cout(adder_carry_out));
    comparator     #(.N(N)) c1(.A(dataA), .B(dataB), .D(~ALUControl[0]), .gt(unused_gt), .lt(comp_lt_1bit), .eq(unused_eq));
        // zeroExtender #(.IN(1), .OUT(N)) ext_gt(.in(comp_gt_1bit), .ALUOut(comp_gt));
        ZeroExtender #(.IN(1), .OUT(N)) ext_lt(.in(comp_lt_1bit), .out(comp_lt));
        // zeroExtender #(.IN(1), .OUT(N)) ext_eq(.in(comp_eq_1bit), .ALUOut(comp_eq));
    sll            #(.N(N)) c2(.shift_amount(dataB[SHIFT_BITS-1:0]), .dataIn(dataA), .dataOut(sll_out));
    srl            #(.N(N)) c3(.shift_amount(dataB[SHIFT_BITS-1:0]), .dataIn(dataA), .dataOut(srl_out));
    sra            #(.N(N)) c4(.shift_amount(dataB[SHIFT_BITS-1:0]), .dataIn(dataA), .dataOut(sra_out));

    // Operações Word (32 bits): usa apenas dataA[31:0], dataB[31:0] e shamt[4:0]
    rippleSubAdder #(.N(WORD_N)) w0(.A(dataA[WORD_N-1:0]), .B(dataB[WORD_N-1:0]), .D(ALUControl[3]), .S(adder_w_out), .Cout(adder_w_carry_out));
    sll            #(.N(WORD_N)) w1(.shift_amount(dataB[4:0]), .dataIn(dataA[WORD_N-1:0]), .dataOut(sll_w_out));
    srl            #(.N(WORD_N)) w2(.shift_amount(dataB[4:0]), .dataIn(dataA[WORD_N-1:0]), .dataOut(srl_w_out));
    sra            #(.N(WORD_N)) w3(.shift_amount(dataB[4:0]), .dataIn(dataA[WORD_N-1:0]), .dataOut(sra_w_out));

    always_comb begin: Word_mux
        word_out32 = {WORD_N{1'b0}};
        case (ALUControl)
            4'b0000: word_out32 = adder_w_out; // ADDW / ADDIW
            4'b1000: word_out32 = adder_w_out; // SUBW
            4'b0001: word_out32 = sll_w_out;   // SLLW / SLLIW
            4'b0101: word_out32 = srl_w_out;   // SRLW / SRLIW
            4'b1101: word_out32 = sra_w_out;   // SRAW / SRAIW
            default: word_out32 = {WORD_N{1'b0}};
        endcase
    end
    SignExtender #(.IN(WORD_N), .OUT(N)) ext_word(.in(word_out32), .out(word_out64));

    wire [N-1:0] ALU_mux_out;
    always_comb begin: ULA_mux
        case (ALUControl)
            // Operações aritméticas
            4'b0000: ALU_mux_out = adder_out;   // Add
            4'b1000: ALU_mux_out = adder_out;   // Sub

            // Operalçoes lógicas
            4'b0111: ALU_mux_out = dataA & dataB; // And
            4'b0110: ALU_mux_out = dataA | dataB; // Or
            4'b0100: ALU_mux_out = dataA ^ dataB; // Xor

            // Operações de deslocamento
            4'b0001: ALU_mux_out = sll_out; // shift left logical out
            4'b0101: ALU_mux_out = srl_out; // shift right logical out
            4'b1101: ALU_mux_out = sra_out; // shift right arithmetic out

            // Operações de comparação. Aqui só há somente o comp_lt, pois a tabela de instrução risc-v para os tipo R só possui o SLT e SLTU
            4'b0010: ALU_mux_out = comp_lt; // N saída lesser than signed
            4'b0011: ALU_mux_out = comp_lt; // N saída lesser than unsigned
            default: 
                ALU_mux_out = '0;
        endcase
    end

    assign ALUOut = word ? word_out64 : ALU_mux_out;

    logic is_adder = (ALUControl[2:0] == 3'b000);
    
    always_comb begin: flags
        Zero     = (ALUOut == 0);
        Negative = ALUOut[N-1];
        Carry    = adder_carry_out & is_adder;
        Overflow = (~(ALUControl[3] ^ dataA[N-1] ^ dataB[N-1])) & (dataA[N-1] ^ adder_out[N-1]) & is_adder;
    end
endmodule

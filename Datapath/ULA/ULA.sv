module ULA #(
    parameter N = 64 // O parâmetro mínimo deve ser 8
)(
    input   logic         word,       //! Flag de controle para instruções RV64I (*W)
    input   logic [N-1:0] dataA,      //! Entrada RS1
    input   logic [N-1:0] dataB,      //! Entrada RS2
    input   logic [3:0]   ALUControl, //! O seletor de instrução
    output  logic [N-1:0] ALUOut,     //! Saída ULA
    output  logic         Overflow,
    output  logic         Carry,
    output  logic         Negative,
    output  logic         Zero
);
    localparam SHIFT_BITS = $clog2(N); // log de 64 na base 2 = 6
    localparam WORD_N     = 32;        // Instruções RV64 assumem N >= 32

    wire [N-1:0] adder_out;
    wire         adder_carry_out;

    wire         comp_lt_1bit; //! Saída 1-bit do comparador
    wire [N-1:0] comp_lt;      //! Saída N-bit (zero-extend)

    wire unused_gt, unused_eq;

    wire [N-1:0] sll_out, srl_out, sra_out;

    // Fios para instruções Word (*W)
    wire [WORD_N-1:0] adder_w_out;
    wire              adder_w_carry_out;
    wire [WORD_N-1:0] sll_w_out, srl_w_out, sra_w_out;
    wire [WORD_N-1:0] word_out32;
    wire [N-1:0]      word_out64;

    // 64-bit path
    rippleSubAdder #(.N(N)) c0(
        .A(dataA), .B(dataB), .D(ALUControl[3]),
        .S(adder_out), .Cout(adder_carry_out)
    );

    comparator #(.N(N)) c1(
        .A(dataA), .B(dataB),
        .D(~ALUControl[0]),
        .gt(unused_gt), .lt(comp_lt_1bit), .eq(unused_eq)
    );

    ZeroExtender #(.IN(1), .OUT(N)) ext_lt(.in(comp_lt_1bit), .out(comp_lt));

    sll #(.N(N)) c2(.shift_amount(dataB[SHIFT_BITS-1:0]), .dataIn(dataA), .dataOut(sll_out));
    srl #(.N(N)) c3(.shift_amount(dataB[SHIFT_BITS-1:0]), .dataIn(dataA), .dataOut(srl_out));
    sra #(.N(N)) c4(.shift_amount(dataB[SHIFT_BITS-1:0]), .dataIn(dataA), .dataOut(sra_out));

    // 32-bit Word path (*W) — usa shamt[4:0]
    rippleSubAdder #(.N(WORD_N)) w0(
        .A(dataA[WORD_N-1:0]), .B(dataB[WORD_N-1:0]), .D(ALUControl[3]),
        .S(adder_w_out), .Cout(adder_w_carry_out)
    );
    sll #(.N(WORD_N)) w1(.shift_amount(dataB[4:0]), .dataIn(dataA[WORD_N-1:0]), .dataOut(sll_w_out));
    srl #(.N(WORD_N)) w2(.shift_amount(dataB[4:0]), .dataIn(dataA[WORD_N-1:0]), .dataOut(srl_w_out));
    sra #(.N(WORD_N)) w3(.shift_amount(dataB[4:0]), .dataIn(dataA[WORD_N-1:0]), .dataOut(sra_w_out));

    // Mux 32-bit do modo Word (por assign)
    assign word_out32 =
        ((ALUControl == 4'b0000) || (ALUControl == 4'b1000)) ? adder_w_out : // ADDW/ADDIW e SUBW
        (ALUControl == 4'b0001) ? sll_w_out : // SLLW/SLLIW
        (ALUControl == 4'b0101) ? srl_w_out : // SRLW/SRLIW
        (ALUControl == 4'b1101) ? sra_w_out : // SRAW/SRAIW
        {WORD_N{1'b0}};

    // Sign-extend 32 -> N
    SignExtender #(.IN(WORD_N), .OUT(N)) ext_word(.in(word_out32), .out(word_out64));

    // Mux 64-bit normal (por assign)
    wire [N-1:0] ALU_mux_out;
    assign ALU_mux_out =
        (ALUControl == 4'b0000) ? adder_out :       // ADD
        (ALUControl == 4'b1000) ? adder_out :       // SUB
        (ALUControl == 4'b0111) ? (dataA & dataB) : // AND
        (ALUControl == 4'b0110) ? (dataA | dataB) : // OR
        (ALUControl == 4'b0100) ? (dataA ^ dataB) : // XOR
        (ALUControl == 4'b0001) ? sll_out :         // SLL
        (ALUControl == 4'b0101) ? srl_out :         // SRL
        (ALUControl == 4'b1101) ? sra_out :         // SRA
        (ALUControl == 4'b0010) ? comp_lt :         // SLT
        (ALUControl == 4'b0011) ? comp_lt :         // SLTU
        {N{1'b0}};

    // Saída final
    assign ALUOut = word ? word_out64 : ALU_mux_out;

    // Flags (você usa para branch na UC). Para word=1, Carry/Overflow não devem influenciar nada.
    wire is_adder;
    assign is_adder = (ALUControl[2:0] == 3'b000); // ADD e SUB (1000) caem aqui

    always_comb begin: flags
        Zero     = (ALUOut == {N{1'b0}});
        Negative = ALUOut[N-1];

        // Recomendado: desligar em word=1 pra não “poluir” UC/testes
        Carry    = (adder_carry_out & is_adder) & ~word;
        Overflow = ((~(ALUControl[3] ^ dataA[N-1] ^ dataB[N-1])) &
                    (dataA[N-1] ^ adder_out[N-1]) &
                    is_adder) & ~word;
    end
endmodule

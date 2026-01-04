module ULA #(
    parameter N = 8 // O parâmetro mínimo deve ser 8
)(
    input   logic [N-1:0] dataA,      //! Entrada RS1
    input   logic [N-1:0] dataB,      //! Entrada RS2
    input   logic [3:0]   ALUControl, //! O seletor de instrução
    output  logic [N-1:0] ALUOut,     //! Saída ULA
    output  logic         Overflow,
    output  logic         Carry,
    output  logic         Negative,
    output  logic         Zero
);
    localparam SHIFT_BITS = $clog2(N);
    wire [N-1:0] adder_out;
    wire         adder_carry_out;

    wire         comp_lt_1bit; //! Fio de saída do comparador para o 'lesser than'
    wire [N-1:0] comp_lt;      //! Fio de saída do comparador para o 'lesser than' zero extendido para o tamanho de saída da ULA

    wire unused_gt, unused_eq; //! Dummy wires! Fios não utilizados que permanecem apenas para evitar avisos de warnings

    wire [N-1:0] sll_out, srl_out, sra_out;

    rippleSubAdder #(.N(N)) c0(.A(dataA), .B(dataB), .D(ALUControl[3]), .S(adder_out), .Cout(adder_carry_out));
    comparator     #(.N(N)) c1(.A(dataA), .B(dataB), .D(~ALUControl[0]), .gt(unused_gt), .lt(comp_lt_1bit), .eq(unused_eq));
        // zeroExtender #(.N(N)) ext_gt(.in(comp_gt_1bit), .ALUOut(comp_gt));
        ZeroExtender #(.N(N)) ext_lt(.in(comp_lt_1bit), .out(comp_lt));
        // zeroExtender #(.N(N)) ext_eq(.in(comp_eq_1bit), .ALUOut(comp_eq));
    sll            #(.N(N)) c2(.shift_amount(dataB[SHIFT_BITS-1:0]), .dataIn(dataA), .dataOut(sll_out));
    srl            #(.N(N)) c3(.shift_amount(dataB[SHIFT_BITS-1:0]), .dataIn(dataA), .dataOut(srl_out));
    sra            #(.N(N)) c4(.shift_amount(dataB[SHIFT_BITS-1:0]), .dataIn(dataA), .dataOut(sra_out));

    always_comb begin: ULA_mux
        case (ALUControl)
            // Operações aritméticas
            4'b0000: ALUOut = adder_out;   // Add
            4'b1000: ALUOut = adder_out;   // Sub

            // Operalçoes lógicas
            4'b0111: ALUOut = dataA & dataB; // And
            4'b0110: ALUOut = dataA | dataB; // Or
            4'b0100: ALUOut = dataA ^ dataB; // Xor

            // Operações de deslocamento
            4'b0001: ALUOut = sll_out; // shift left logical out
            4'b0101: ALUOut = srl_out; // shift right logical out
            4'b1101: ALUOut = sra_out; // shift right arithmetic out

            // Operações de comparação. Aqui só há somente o comp_lt, pois a tabela de instrução risc-v para os tipo R só possui o SLT e SLTU
            4'b0010: ALUOut = comp_lt; // N saída lesser than signed
            4'b0011: ALUOut = comp_lt; // N saída lesser than unsigned
            default: 
                ALUOut = '0;
        endcase
    end

    logic is_adder = (ALUControl[2:0] == 3'b000);
    
    always_comb begin: flags
        Zero     = (ALUOut == 0);
        Negative = ALUOut[N-1];
        Carry    = adder_carry_out & is_adder;
        Overflow = (~(ALUControl[3] ^ dataA[N-1] ^ dataB[N-1])) & (dataA[N-1] ^ adder_out[N-1]) & is_adder;
    end
endmodule

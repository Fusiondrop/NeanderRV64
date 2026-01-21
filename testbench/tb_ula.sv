module tb_ula();
    parameter N = 64;

    // sinais de entrada
    logic         word;               // NOVO: modo RV64I *W
    logic [N-1:0] dataA, dataB;
    logic [3:0]   ALUControl;

    // sinais de saída
    wire [N-1:0] ALUOut;
    wire         Overflow;
    wire         Carry;
    wire         Negative;
    wire         Zero;

    // DUT (corrigido: porta ALUOut e adição da porta word)
    ULA #(.N(N)) Dut (
        .word(word),
        .dataA(dataA),
        .dataB(dataB),
        .ALUControl(ALUControl),
        .ALUOut(ALUOut),
        .Overflow(Overflow),
        .Carry(Carry),
        .Negative(Negative),
        .Zero(Zero)
    );

    // Controle das instruções
    localparam [3:0]
        ALU_ADD  = 4'b0000, // Adder
        ALU_SLL  = 4'B0001, // Shift Left Logical
        ALU_SLT  = 4'B0010, // Set Less Than
        ALU_SLTU = 4'B0011, // Set Less Than unsigned
        ALU_XOR  = 4'B0100, // XOR
        ALU_SRL  = 4'B0101, // Shift Right Logical
        ALU_OR   = 4'B0110, // OR
        ALU_AND  = 4'B0111, // AND
        ALU_SUB  = 4'B1000, // Subtractor
        ALU_SRA  = 4'b1101; // Shift Right Arithmetic

    // NOVO: parâmetro word_en para a tarefa
    task automatic run_ula(string name, logic [3:0] code, logic word_en, logic [N-1:0] A, logic [N-1:0] B);
        begin
            ALUControl = code;
            word = word_en;
            dataA = A;
            dataB = B;
            #10;
            $display("%0t | %-18s | ALU=%b | W=%b | A=0x%0h (%0d) | B=0x%0h (%0d) | out=0x%0h (%0d signed %0d unsigned) | Z=%b N=%b C=%b V=%b",
                $time,
                name,
                code,
                word,
                dataA, $signed(dataA),
                dataB, $signed(dataB),
                ALUOut, $signed(ALUOut), ALUOut,
                Zero, Negative, Carry, Overflow
            );
        end
    endtask //automatic

    initial begin
        $display("=== Iniciando teste ULA (N=%0d) ===", N);

        // -------------------------
        // 64-bit (word=0)
        // -------------------------

        // Aritmética
        run_ula("ADD small",    ALU_ADD, 1'b0, 64'd10, 64'd20);
        run_ula("ADD overflow", ALU_ADD, 1'b0, 64'h7FFF_FFFF_FFFF_FFFF, 64'd1);

        // Subtração
        run_ula("SUB small",    ALU_SUB, 1'b0, 64'd20, 64'd10);
        run_ula("SUB overflow", ALU_SUB, 1'b0, 64'h8000_0000_0000_0000, 64'd1);

        // Lógicas
        run_ula("AND", ALU_AND, 1'b0, 64'h0000_0000_0000_00CC, 64'h0000_0000_0000_00AA);
        run_ula("OR",  ALU_OR,  1'b0, 64'h0000_0000_0000_00CC, 64'h0000_0000_0000_00AA);
        run_ula("XOR", ALU_XOR, 1'b0, 64'h0000_0000_0000_00CC, 64'h0000_0000_0000_00AA);

        // Shifts (shift_amount usa dataB[clog2(N)-1:0], então aqui é dataB[5:0])
        run_ula("SLL", ALU_SLL, 1'b0, 64'h1, 64'd3); // 1 << 3 = 8
        run_ula("SRL", ALU_SRL, 1'b0, 64'h8, 64'd3); // 8 >> 3 = 1
        run_ula("SRA", ALU_SRA, 1'b0, 64'h8000_0000_0000_0000, 64'd2);

        // Comparação
        run_ula("SLT  True",  ALU_SLT,  1'b0, 64'hFFFF_FFFF_FFFF_FFFF, 64'h1);
        run_ula("SLTU False", ALU_SLTU, 1'b0, 64'hFFFF_FFFF_FFFF_FFFF, 64'h1);
        run_ula("SLT  False", ALU_SLT,  1'b0, 64'h1, 64'hFFFF_FFFF_FFFF_FFFF);
        run_ula("SLTU True",  ALU_SLTU, 1'b0, 64'h1, 64'hFFFF_FFFF_FFFF_FFFF);

        // -------------------------
        // RV64I *W (word=1)
        // -------------------------
        run_ula("ADDW",      ALU_ADD, 1'b1, 64'd10, 64'd20);
        run_ula("SUBW",      ALU_SUB, 1'b1, 64'd20, 64'd10);

        run_ula("ADDW wrap", ALU_ADD, 1'b1, 64'h0000_0001_FFFF_FFFF, 64'd1);

        run_ula("SLLW",      ALU_SLL, 1'b1, 64'h0000_0000_8000_0001, 64'd1);
        run_ula("SRLW",      ALU_SRL, 1'b1, 64'hFFFF_FFFF_8000_0000, 64'd31);
        run_ula("SRAW",      ALU_SRA, 1'b1, 64'h0000_0000_8000_0000, 64'd31);

        $display("=== FIM DOS TESTES ==="); #10;
        $finish;
    end
endmodule

module tb_ula();
    parameter N = 8;

    // sinais de entrada
    logic [N-1:0] dataA, dataB;
    logic [3:0]   ALUControl;

    // sinais de saída
    wire [N-1:0] ALUOut;
    wire         Overflow;
    wire         Carry;
    wire         Negative;
    wire         Zero;

    ULA #(.N(N)) Dut (.dataA(dataA), .dataB(dataB), .ALUControl(ALUControl), .out(out), .Overflow(Overflow), .Carry(Carry), .Negative(Negative), .Zero(Zero));

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

    task automatic run_ula(string name, logic [3:0] code, logic [N-1:0] A, logic [N-1:0] B);
        begin
            ALUControl = code;
            dataA = A;
            dataB = B;
            #10;
            $display("%0t | %-18s | ALU=%b | A=0x%0h (%0d) | B=0x%0h (%0d) | out=0x%0h (%0d signed %0d unsigned) | Z=%b N=%b C=%b V=%b",
                $time,
                name,
                code,
                dataA, $signed(dataA),
                dataB, $signed(dataB),
                ALUOut, $signed(ALUOut), ALUOut,
                Zero, Negative, Carry, Overflow
            );
        end
    endtask //automatic

    initial begin
        $display("=== Iniciando teste ULA (N=%0d) ===", N);

        // Aritmética
        run_ula("ADD small", ALU_ADD, 8'd10, 8'd20);
        run_ula("ADD overflow", ALU_ADD, 8'd127, 8'd1);

        // Subtração
        run_ula("SUB small", ALU_SUB, 8'd20, 8'd10); 
        run_ula("SUB overflow", ALU_SUB, 8'b1000_0000, 8'd1);

        // Lógicas
        run_ula("AND", ALU_AND, 8'b1100_1100, 8'b1010_1010); // out = 1000_1000
        run_ula("OR",  ALU_OR,  8'b1100_1100, 8'b1010_1010); // out = 1110_1110
        run_ula("XOR", ALU_XOR, 8'b1100_1100, 8'b1010_1010); // out = 0110_0110

        // Shifts
        run_ula("SLL", ALU_SLL, 8'b0000_0001, 8'b0000_0010); // out = 0000_1000
        run_ula("SRL", ALU_SRL, 8'b0000_1000, 8'b0000_0010); // out = 0000_0001
        run_ula("SRA", ALU_SRA, 8'b1000_0000, 8'b0000_0010); // out = ?

        // Comparação
        run_ula("SLT  True",  ALU_SLT,  8'b1111_1111, 8'b0000_0001); // (-1 < 1)
        run_ula("SLTU False", ALU_SLTU, 8'b1111_1111, 8'b0000_0001); // (255 < 1)
        run_ula("SLT  False", ALU_SLT,  8'b0000_0001, 8'b1111_1111); // (1 < -1)
        run_ula("SLTU True",  ALU_SLTU, 8'b0000_0001, 8'b1111_1111); // (1 < 255)

        $display("=== FIM DOS TESTES ==="); #10;
        $finish;
    end
endmodule

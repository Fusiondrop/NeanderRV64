module tb_InstructionMemory;

    // Sinais de teste
    logic [63:0] addr;
    logic [31:0] instr;

    // Instância do DUT
    InstructionMemory dut (
        .addr  (addr),
        .instr (instr)
    );

    integer i;

    initial begin
        $display("==== Início da varredura da InstructionMemory ====");

        // Varre todas as 1024 palavras
        for (i = 0; i < 1024; i = i + 1) begin
            // Cada palavra ocupa 4 bytes → endereço em bytes = i * 4
            addr = 64'(i) << 2;

            $display("[%0t] word_index=%0d addr=0x%016h  instr=0x%08h",
                     $time, i, addr, instr);
        end

        $display("==== Fim da varredura da InstructionMemory ====");
        $finish;
    end

endmodule

module tb_ProgramCounter();
    parameter int N = 64;

    logic clk;
    logic rst;
    logic [N-1:0] PC_in;
    logic [N-1:0] PC_out;

    // DUT
    ProgramCounter #( .N(N) ) DUT (
        .clk   (clk),
        .rst   (rst),
        .PC_in (PC_in),
        .PC_out(PC_out)
    );

    // Clock simples (10 ns)
    initial clk = 0;
    always #5 clk = ~clk;

    // Única rotina auxiliar: aplica PC_in e avança 1 ciclo
    task do_tick(input [N-1:0] next_pc);
        begin
            PC_in = next_pc;
            @(posedge clk);
            #1; // tempo p/ atualizar PC_out (<=)
        end
    endtask

    initial begin
        // init
        rst   = 0;
        PC_in = '0;

        // Teste 1: reset síncrono
        rst = 1;
        do_tick(64'h0000_0000_0000_1234);
        assert (PC_out === '0) else $error("Teste 1 Failed: reset nao colocou PC_out em 0.");
        $display("Teste 1 OK: reset -> PC_out = %h", PC_out);

        // Teste 2: atualização normal
        rst = 0;
        do_tick(64'h0000_0000_0000_0004);
        assert (PC_out === 64'h0000_0000_0000_0004) else $error("Teste 2 Failed: PC_out != 0x4.");
        $display("Teste 2 OK: PC_out = %h", PC_out);

        // Teste 3: outro avanço
        do_tick(64'h0000_0000_0000_0008);
        assert (PC_out === 64'h0000_0000_0000_0008) else $error("Teste 3 Failed: PC_out != 0x8.");
        $display("Teste 3 OK: PC_out = %h", PC_out);

        // Teste 4: reset novamente
        rst = 1;
        do_tick(64'h0000_0000_0000_00FC);
        assert (PC_out === '0) else $error("Teste 4 Failed: reset nao voltou PC_out para 0.");
        $display("Teste 4 OK: reset -> PC_out = %h", PC_out);

        // Teste 5: valor maior (ex.: jump)
        rst = 0;
        do_tick(64'h0000_0001_0000_0040);
        assert (PC_out === 64'h0000_0001_0000_0040) else $error("Teste 5 Failed: PC_out != 0x0000_0001_0000_0040.");
        $display("Teste 5 OK: PC_out = %h", PC_out);

        $display("Todos os testes do ProgramCounter finalizaram.");
        $finish;
    end

endmodule

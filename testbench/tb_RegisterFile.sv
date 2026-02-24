module tb_RegisterFile();
    parameter int N = 64;

    logic clk;
    logic writeEnable;
    logic [4:0] rs1, rs2, rd;
    logic [N-1:0] writerData;
    logic [N-1:0] readData1, readData2;

    // DUT (RegisterFile.sv)
    RegisterFile #( .N(N) ) DUT (
        .clk(clk),
        .writeEnable(writeEnable),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .writerData(writerData),
        .readData1(readData1),
        .readData2(readData2)
    );

    // Clock simples (10 ns)
    initial clk = 0;
    always #5 clk = ~clk;

    // Única rotina auxiliar: faz 1 escrita síncrona no próximo posedge
    task do_write(input [4:0] a, input [N-1:0] d);
        begin
            rd          = a;
            writerData  = d;
            writeEnable = 1'b1;
            @(posedge clk);
            #1;                 // tempo para o não-bloqueante atualizar
            writeEnable = 1'b0;
        end
    endtask

    initial begin
        // init
        writeEnable = 0;
        rs1 = 0; rs2 = 0;
        rd  = 0;
        writerData = '0;

        // Teste 1: x0 sempre retorna zero
        #1;
        assert (readData1 === '0) else $error("Teste 1 Failed: readData1 (x0) != 0");
        assert (readData2 === '0) else $error("Teste 1 Failed: readData2 (x0) != 0");
        $display("Teste 1 OK: x0 = 0");

        // Teste 2: escreve em x1 e lê em rs1
        rs1 = 5'd1; rs2 = 5'd0;
        do_write(5'd1, 64'h0000_0000_0000_00A1);
        #1;
        assert (readData1 === 64'h0000_0000_0000_00A1) else $error("Teste 2 Failed: x1 != 0xA1");
        assert (readData2 === '0) else $error("Teste 2 Failed: x0 != 0");
        $display("Teste 2 OK: x1 escrito e lido");

        // Teste 3: escreve em x2 e lê rs1=x2 / rs2=x1
        rs1 = 5'd2; rs2 = 5'd1;
        do_write(5'd2, 64'h0000_0000_0000_00B2);
        #1;
        assert (readData1 === 64'h0000_0000_0000_00B2) else $error("Teste 3 Failed: x2 != 0xB2");
        assert (readData2 === 64'h0000_0000_0000_00A1) else $error("Teste 3 Failed: x1 mudou");
        $display("Teste 3 OK: dupla leitura (x2 e x1)");

        // Teste 4: tentativa de escrita em x0 deve ser ignorada
        rs1 = 5'd0; rs2 = 5'd2;
        do_write(5'd0, 64'hFFFF_FFFF_FFFF_FFFF);
        #1;
        assert (readData1 === '0) else $error("Teste 4 Failed: x0 nao ficou em 0");
        assert (readData2 === 64'h0000_0000_0000_00B2) else $error("Teste 4 Failed: x2 mudou");
        $display("Teste 4 OK: escrita em x0 ignorada");

        // Teste 5: sobrescrita em x1
        rs1 = 5'd1; rs2 = 5'd2;
        do_write(5'd1, 64'h0000_0000_0000_0C01);
        #1;
        assert (readData1 === 64'h0000_0000_0000_0C01) else $error("Teste 5 Failed: x1 nao sobrescreveu");
        assert (readData2 === 64'h0000_0000_0000_00B2) else $error("Teste 5 Failed: x2 mudou");
        $display("Teste 5 OK: x1 sobrescrito");

        // Teste 6: writeEnable=0 nao altera registrador
        rd = 5'd2;
        writerData = 64'h0000_0000_0000_DEAD;
        writeEnable = 1'b0;
        @(posedge clk);
        #1;
        rs1 = 5'd2;
        #1;
        assert (readData1 === 64'h0000_0000_0000_00B2) else $error("Teste 6 Failed: x2 alterou com writeEnable=0");
        $display("Teste 6 OK: writeEnable=0 nao escreve");

        $display("Todos os testes do RegisterFile finalizaram.");
        $finish;
    end
endmodule

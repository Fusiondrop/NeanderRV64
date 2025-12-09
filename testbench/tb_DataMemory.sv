module tb_DataMemory;

    // Sinais do DUT
    logic        clk;
    logic        writeEnable;
    logic [7:0]  writeMask;
    logic [63:0] address;
    logic [63:0] writeData;
    logic [63:0] readDatabus;

    // Variável para leitura
    logic [63:0] rdata;

    // Índices para loops
    integer i;
    logic [9:0] idx;

    // Instância do DUT
    DataMemory dut (
        .clk        (clk),
        .writeEnable(writeEnable),
        .writeMask  (writeMask),
        .address    (address),
        .writeData  (writeData),
        .readDatabus(readDatabus)
    );

    // Geração de clock
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Tarefas auxiliares
    task automatic do_write(
        input [63:0] addr,
        input [7:0]  mask,
        input [63:0] data
    );
    begin
        address     = addr;
        writeMask   = mask;
        writeData   = data;
        writeEnable = 1'b1;
        @(posedge clk);
        #1;
        writeEnable = 1'b0;
    end
    endtask

    task automatic do_read(
        input  [63:0] addr,
        output [63:0] data
    );
    begin
        address = addr;
        #1;               // leitura combinacional
        data = readDatabus;
    end
    endtask

    // TESTES
    initial begin
        writeEnable = 0;
        writeMask   = 0;
        address     = 0;
        writeData   = 0;

        repeat (2) @(posedge clk);

        // ==============================
        // Teste 1: SD (store doubleword)
        // ==============================
        $display("==== Teste 1: SD (store doubleword) ====");
        do_write(64'h0, 8'hFF, 64'h00112233_44556677);
        do_read(64'h0, rdata);

        $display(" [T1] addr = 0x%016h (index=%0d), escrito = 0x%016h, lido = 0x%016h",
         address, address[12:3], 64'h00112233_44556677, rdata);


        if (rdata !== 64'h00112233_44556677) begin
            $error("Teste 1 FAIL: esperado 0x00112233_44556677, lido 0x%016h", rdata);
        end else begin
            $display("Teste 1 PASS");
        end

        // ==============================
        // Teste 2: SB (store byte)
        // ==============================
        $display("\n==== Teste 2: SB (store byte) ====");
        $display(" [T2] Antes do SB: mem[0] = 0x%016h", rdata);

        // writeMask: só byte 2 (i=2)
        // writeData: AA no byte 2
        do_write(
            64'h0,
            8'b0000_0100,               // apenas byte 2
            64'h00000000_00AA0000
        );
        do_read(64'h0, rdata);

        $display(" [T2] Depois do SB: mem[0] = 0x%016h (esperado 0x00112233_44AA6677)", rdata);

        if (rdata !== 64'h00112233_44AA6677) begin
            $error("Teste 2 FAIL: esperado 0x00112233_44AA6677, lido 0x%016h", rdata);
        end else begin
            $display("Teste 2 PASS");
        end

        // ==============================
        // Teste 3: SW (store word, 4 bytes)
        // ==============================
        $display("\n==== Teste 3: SW (store word, 4 bytes) ====");
        $display(" [T3] Antes do SW: mem[0] = 0x%016h", rdata);

        do_write(
            64'h0,
            8'b0000_1111,              // 4 bytes menos significativos
            64'h00000000_DEADBEEF
        );
        do_read(64'h0, rdata);

        $display(" [T3] Depois do SW: mem[0] = 0x%016h (esperado 0x00112233_DEADBEEF)", rdata);

        if (rdata !== 64'h00112233_DEADBEEF) begin
            $error("Teste 3 FAIL: esperado 0x00112233_DEADBEEF, lido 0x%016h", rdata);
        end else begin
            $display("Teste 3 PASS");
        end

        // ==============================
        // Teste 3b: SH (store half-word, 2 bytes)
        // ==============================
        $display("\n==== Teste 3b: SH (store half-word, 2 bytes) ====");
        $display(" [T3b] Antes do SH: mem[0] = 0x%016h", rdata);

        // SH sobrescrevendo apenas os 2 bytes menos significativos
        // writeMask = 0000_0011 -> bytes 0 e 1
        // writeData com 0xA1B2 em [15:0] (little endian: byte0=B2, byte1=A1)
        do_write(
            64'h0,                       // mesmo endereço
            8'b0000_0011,                // só bytes 0 e 1
            64'h000000000000A1B2
        );
        do_read(64'h0, rdata);

        $display(" [T3b] Depois do SH: mem[0] = 0x%016h (esperado 0x00112233DEADA1B2)", rdata);

        if (rdata !== 64'h00112233DEADA1B2) begin
            $error("Teste 3b FAIL: esperado 0x00112233DEADA1B2, lido 0x%016h", rdata);
        end else begin
            $display("Teste 3b PASS");
        end

        // ========================================
        // Teste 4: Não escrever quando writeEnable=0
        // ========================================
        $display("\n==== Teste 4: Não escrever quando writeEnable=0 ====");
        address     = 64'h0;
        writeMask   = 8'hFF;
        writeData   = 64'hFFFFFFFF_FFFFFFFF;
        writeEnable = 1'b0;

        @(posedge clk);
        do_read(64'h0, rdata);

        $display(" [T4] Tentativa de escrita sem enable, mem[0] = 0x%016h", rdata);

        if (rdata !== 64'h00112233_DEADA1B2) begin
            $error("Teste 4 FAIL: memória foi alterada sem writeEnable!");
        end else begin
            $display("Teste 4 PASS");
        end

        // ========================================
        // Teste 5: Varredura do espaço de memória
        // ========================================
        $display("\n==== Teste 5: Varredura de espaço de memória (primeiras posições) ====");
        $display(" Endereço (bytes) | Index [12:3] | Dado escrito           | Dado lido              | Resultado");

        // Vamos testar, por exemplo, as 16 primeiras palavras (16 * 8 bytes = 128 bytes)
        // Se quiser testar toda a memória, mude para i < 1024.
        for (i = 0; i < 16; i = i + 1) begin
            // endereço em bytes: i * 8
            address = i * 8;
            // índice interno esperado: address[12:3] = i (pois estamos andando em múltiplos de 8)
            idx = address[12:3];

            // padrão de teste: repetimos o índice nos 8 bytes
            // ex: i=3 -> 0x03030303_03030303
            writeData = {8{ i[7:0] }};
            writeMask = 8'hFF;

            // escreve
            do_write(address, writeMask, writeData);

            // lê
            do_read(address, rdata);

            if (rdata !== writeData) begin
                $display(" 0x%016h | %4d        | 0x%016h | 0x%016h | ERRO",
                         address, idx, writeData, rdata);
                $error("Teste 5 FAIL na posição %0d (addr=0x%016h)", i, address);
            end else begin
                $display(" 0x%016h | %4d        | 0x%016h | 0x%016h | OK",
                         address, idx, writeData, rdata);
            end
        end

        $display("\n==== TODOS OS TESTES FINALIZADOS ====");
        $finish;
    end

endmodule

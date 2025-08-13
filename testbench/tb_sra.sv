module tb_sra();
    parameter N = 16;

    logic [N-1:0] dataIn, DataOut;
    logic [$clog2(N)-1:0] amount;


    sra DUT(dataIn, amount,DataOut);
    initial begin
        dataIn = 16'b1000_0001_0000_0000; amount = 4'b0100; #10;
        $display("Test 1: %b >> %b by %d", dataIn, DataOut, amount);
        dataIn = 16'b0000_0001_0000_0000; amount = 4'b0100; #10;
        $display("Test 2: %b >> %b by %d", dataIn, DataOut, amount);
    end
endmodule

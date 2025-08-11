module tb_srl();
    parameter N = 16;

    logic [N-1:0] dataIn, DataOut;
    logic [$clog2(N)-1:0] amount;


    srl DUT(amount, dataIn, DataOut);
    initial begin
        dataIn = 16'b0000_0001_0000_0000; amount = 4'b0100; #10;
        $display("Test 1: %b >> %b by %d", dataIn, DataOut, amount);

    end
endmodule

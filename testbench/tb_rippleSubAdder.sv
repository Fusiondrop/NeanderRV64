module tb_rippleSubAdder();
    parameter N = 4;

    logic [N-1:0] A, B, S;
    logic D, Cout;

    rippleSubAdder DUT(A, B, D, S, Cout);

    initial begin
        // Teste 1: 0+1
        A = 4'b0001; B = 4'b0000; D = 0; #10;
        assert (S === 4'b0001) else $error("Teste 1 Failed.");
        $display("Test 1: %b + %b = %b / Cout= %b", B, A, S, Cout);
        // Teste 2: 0-1
        A = 4'b0001; B = 4'b0000; D = 1; #10;
        assert (S === 4'b1111) else $error("Teste 2 Failed.");
        $display("Test 2: %b - %b = %b / Cout= %b", B, A, S, Cout);
        // Teste 3: 1+0
        A = 4'b0000; B = 4'b0001; D = 0; #10;
        assert (S === 4'b0001) else $error("Teste 3 Failed.");
        $display("Test 3: %b + %b = %b / Cout= %b", B, A, S, Cout);
        // Teste 4: 1-0
        A = 4'b0000; B = 4'b0001; D = 1; #10;
        assert (S === 4'b0001) else $error("Teste 4 Failed.");
        $display("Test 4: %b - %b = %b / Cout= %b", B, A, S, Cout);
        // Teste 5: 0+15
        A = 4'b1111; B = 4'b0000; D = 0; #10;
        assert (S === 4'b1111) else $error("Teste 5 Failed.");
        $display("Test 5: %b + %b = %b / Cout= %b", B, A, S, Cout);
        // Teste 6: 1+15
        A = 4'b1111; B = 4'b0001; D = 0; #10;
        assert (S === 4'b0000) else $error("Teste 6 Failed.");
        $display("Test 6: %b + %b = %b / Cout= %b", B, A, S, Cout);
        // Teste 7: 2+15
        A = 4'b1111; B = 4'b0010; D = 0; #10;
        assert (S === 4'b0001) else $error("Teste 7 Failed.");
        $display("Test 7: %b + %b = %b / Cout= %b", B, A, S, Cout);
        // Teste 8: 2+10
        A = 4'b1010; B = 4'b0010; D = 0; #10;
        assert (S === 4'b1100) else $error("Teste 8 Failed.");
        $display("Test 8: %b + %b = %b / Cout= %b", B, A, S, Cout);
        // Teste 9: 7-15
        A = 4'b1111; B = 4'b0111; D = 1; #10;
        assert (S === 4'b1000) else $error("Teste 9 Failed.");
        $display("Test 9: %b - %b = %b / Cout= %b", B, A, S, Cout);
        // Teste 10: 15-0
        A = 4'b0000; B = 4'b1111; D = 1; #10;
        assert (S === 4'b1111) else $error("Teste 10 Failed.");
        $display("Test 10: %b - %b = %b / Cout= %b", B, A, S, Cout);
        // Teste 11: 0-15
        A = 4'b1111; B = 4'b0000; D = 1; #10;
        assert (S === 4'b0001) else $error("Teste 11 Failed.");
        $display("Test 11: %b - %b = %b / Cout= %b", B, A, S, Cout);
        // Teste 12: 1-1
        A = 4'b0001; B = 4'b0001; D = 1; #10;
        assert (S === 4'b0000) else $error("Teste 12 Failed.");
        $display("Test 12: %b - %b = %b / Cout= %b", B, A, S, Cout);
        
        $display("All testes got completed.");
    end
endmodule

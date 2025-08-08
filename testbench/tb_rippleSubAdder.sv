module tb_rippleSubAdder();
    parameter N = 4;

    logic [N-1:0] A, B, S;
    logic D, Cout;

    rippleSubAdder DUT(A, B, D, S, Cout);

    initial begin
        // Teste 1: 1+0
        A = 4'b0001; B = 4'b0000; D = 0; #10;
        assert (S === 4'b0001) else $error("Teste 1 Failed.");
        $display("Test 1: %b + %b = %b / Cout= %b", A, B, S, Cout);
        // Teste 2: 1-0
        A = 4'b0001; B = 4'b0000; D = 1; #10;
        assert (S === 4'b1111) else $error("Teste 2 Failed.");
        $display("Test 2: %b - %b = %b / Cout= %b", A, B, S, Cout);
        // Teste 3: 0+1
        A = 4'b0000; B = 4'b0001; D = 0; #10;
        assert (S === 4'b0001) else $error("Teste 3 Failed.");
        $display("Test 3: %b + %b = %b / Cout= %b", A, B, S, Cout);
        // Teste 4: 0-1
        A = 4'b0000; B = 4'b0001; D = 1; #10;
        assert (S === 4'b1111) else $error("Teste 4 Failed.");
        $display("Test 4: %b - %b = %b / Cout= %b", A, B, S, Cout);
        // Teste 5: 15+0
        A = 4'b1111; B = 4'b0000; D = 0; #10;
        assert (S === 4'b1111) else $error("Teste 5 Failed.");
        $display("Test 5: %b + %b = %b / Cout= %b", A, B, S, Cout);
        // Teste 6: 15+1
        A = 4'b1111; B = 4'b0001; D = 0; #10;
        assert (S === 4'b0000) else $error("Teste 6 Failed.");
        $display("Test 6: %b + %b = %b / Cout= %b", A, B, S, Cout);
        // Teste 7: 15+2
        A = 4'b1111; B = 4'b0010; D = 0; #10;
        assert (S === 4'b0001) else $error("Teste 7 Failed.");
        $display("Test 7: %b + %b = %b / Cout= %b", A, B, S, Cout);
        // Teste 8: 10+2
        A = 4'b1010; B = 4'b0010; D = 0; #10;
        assert (S === 4'b0001) else $error("Teste 8 Failed.");
        $display("Test 8: %b + %b = %b / Cout= %b", A, B, S, Cout);
        // Teste 9: 15-7
        A = 4'b1111; B = 4'b0111; D = 1; #10;
        assert (S === 4'b0001) else $error("Teste 9 Failed.");
        $display("Test 9: %b + %b = %b / Cout= %b", A, B, S, Cout);
        // Teste 10: 0-15
        A = 4'b0000; B = 4'b1111; D = 1; #10;
        assert (S === 4'b0001) else $error("Teste 10 Failed.");
        $display("Test 10: %b + %b = %b / Cout= %b", A, B, S, Cout);
        
        $display("All testes got completed.");
    end
endmodule

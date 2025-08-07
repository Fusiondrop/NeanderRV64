`timescale 1ns/1ps

module tb_rippleAdder;

    parameter N = 64;
    logic [N-1:0] A, B;
    logic         Cin;
    logic [N-1:0] S;
    logic         Cout;
    logic [N:0]   expected;  // Resultado esperado (N+1 bits)

    rippleAdder #(.N(N)) uut (.*);

    // Seed para reprodutibilidade - FORMA CORRETA
    int seed = 42;  // Variável inteira para armazenar seed
    initial begin
        $urandom(seed);  // Configura seed usando variável
    end

    // Monitoramento opcional (pode ser comentado se não for necessário)
    initial begin
        $monitor("t=%0t A=%h B=%h Cin=%b -> S=%h Cout=%b (Expected: %h)",
                 $time, A, B, Cin, S, Cout, expected);
    end

    initial begin
        // Casos específicos
        test_case(0, 0, 0);
        test_case({{(N-8){1'b0}}, 8'hFF}, {{(N-8){1'b0}}, 8'h01}, 0);  // Overflow 8 bits
        test_case({N{1'b1}}, {N{1'b1}}, 1);  // Carry máximo (A = MAX, B = MAX, Cin=1)
        test_case(1 << (N-1), 1 << (N-1), 0);  // Overflow no MSB

        // Testes aleatórios
        repeat(20) begin
            test_case(
                $urandom_range(0, (1 << N) - 1),
                $urandom_range(0, (1 << N) - 1),
                $urandom_range(0, 1)
            );
        end

        $display("Todos os testes passaram para N=%0d", N);
        $finish;
    end

    task test_case(input logic [N-1:0] a_val, b_val, cin_val);
        A = a_val;
        B = b_val;
        Cin = cin_val;
        expected = A + B + Cin;  // Resultado esperado (N+1 bits)
        #(N * 10);  // Delay proporcional ao tamanho
        
        if ({Cout, S} !== expected) begin
            $error("Falha: A=%0h B=%0h Cin=%0b -> Esperado %0h, Obteve %0h",
                   A, B, Cin, expected, {Cout, S});
        end
    endtask

endmodule

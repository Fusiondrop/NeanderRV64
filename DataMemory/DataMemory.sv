module DataMemory (
    input  logic        clk, writeEnable, // Entrada de clock e controle
    input  logic [7:0]  writeMask,        // Entrada de 8 máscaras
    input  logic [63:0] address,          // Entrada de endereço em bytes
    input  logic [63:0] writeData,        // Entrada de dado de escrita
    output logic [63:0] readDatabus       // Saída de dado de leitura
);
    logic [63:0] D_mem [1023:0]; // Vetor de memória 1024 palavras de 64 bits
    
    wire [9:0] Index = address[12:3]; // em uma memória de 1024 palavras, será necessário 2^(10) bits para endereçar a memória 
/*  Tabela lógica da máscara, usado no loop da escrita síncrona
    | Instrução | Bytes afetados | Exemplo `wstrb` |
    | --------- | -------------- | --------------- |
    | SB        | 1 byte         | 0000_0001       |
    | SH        | 2 bytes        | 0000_0011       |
    | SW        | 4 bytes        | 0000_1111       |
    | SD        | 8 bytes        | 1111_1111       |
*/
    // Escrita síncrona
    always_ff @(posedge clk) begin
        if (writeEnable) begin
            for (integer i = 0; i < 8; i++) begin
                if (writeMask[i]) begin
                    D_mem[Index][8*i +: 8] <= writeData[8*i +: 8];
                end
            end
        end
    end

    // leitura assíncrona
    assign readDatabus = D_mem[Index];
endmodule

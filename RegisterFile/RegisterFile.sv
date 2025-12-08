module RegisterFile #(
    parameter N = 64 //! Parâmetro do XLEN que ditará o tamanho dos registradores, 32 bits ou 64 bits.
)(
    input  logic        clk, writeEnable,     //! inputs 1 bit de clock e um enable para o modo escrita
    input  logic [4:0]  rs1, rs2, rd,         //! inputs 5 bits para escolher entre os 32 registradores, reg 1, reg 2 e registrador destino
    input  logic [N-1:0] writerData,          //! input 32/64 bits para gravar dado em 1 registrador quando writeEnable estiver habilitado em 1
    output logic [N-1:0] readData1, readData2 //! outputs 32/64 bits para puxar os dados dentro dos registradores rs1 e rs2
);
    logic [N-1:0] Registers[31:0];  //! instancia 32 registradores de tamanho N bits

    /* Existem dois modos de operando em um banco de registradores, o de leitura e escrita.
    O banco de registradores (register file), faz a leitura dos dois registradores de entrada
    rs1, rs2 e devolvem o conteúdo armazenado neles em N bit de saída do readData1 e readData2.
    Este modo pode ser construido combinacionalmente, com apenas o uso de portas lógicas e os
    dados de entrada fornecidos. Isso configura para uma leitura assíncrona, que é mais rápido
    para a execução e encaminhar os dados direto para a ULA.
    Contudo, os dados para a escrita dependem do clock para que haja um controle e previsibili
    dade, pois se os dados em um registrador forem atualizados ainda enquanto estão sendo lidos
    causaria um comportamento indefinido para o que está sendo fornecido a ULA.
    */

    // Escrita síncrona
    always_ff @(posedge clk) begin
        if (writeEnable) begin
            Registers[rd] <= writerData;
        end
    end

    // Leitura assíncrona
    assign readData1 = (rs1 != 0) ? Registers[rs1] : '0;
    assign readData2 = (rs2 != 0) ? Registers[rs2] : '0;
endmodule

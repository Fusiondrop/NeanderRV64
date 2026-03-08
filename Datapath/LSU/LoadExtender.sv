module LoadExtender #(
    parameter N = 64 //! Parâmetro do XLEN
)(
    input  logic [N-1:0]               mem_readData, //! Palavra lida da memória de dados
    input  logic [2:0]                 funct3,       //! Campo funct3 que define o tipo de load
    input  logic [$clog2(N/8)-1:0]     byte_offset,  //! Deslocamento em bytes dentro da palavra lida da memória
    output logic [N-1:0]               loadedData    //! Dado final alinhado e estendido conforme o tipo de load
);

    logic [N-1:0] shifted; //! Palavra da memória deslocada para alinhar o dado desejado nos bits menos significativos

    // Desloca a palavra lida da memória para a direita de acordo com o byte_offset
    // Cada unidade de byte_offset corresponde a 8 bits
    // Após esse deslocamento, o byte, halfword, word ou doubleword desejado
    // passa a ocupar as posições menos significativas de shifted
    assign shifted = mem_readData >> (byte_offset * 8);

    always_comb begin
        // Valor padrão da saída para evitar indeterminação
        loadedData = '0;

        case (funct3)

            // LB - Load Byte com extensão de sinal
            // Seleciona os 8 bits menos significativos de shifted
            // e replica o bit 7 nas posições superiores
            3'b000: begin
                loadedData = {{(N-8){shifted[7]}}, shifted[7:0]};
            end

            // LH - Load Halfword com extensão de sinal
            // Seleciona os 16 bits menos significativos de shifted
            // e replica o bit 15 nas posições superiores
            3'b001: begin
                loadedData = {{(N-16){shifted[15]}}, shifted[15:0]};
            end

            // LW - Load Word com extensão de sinal
            // Seleciona os 32 bits menos significativos de shifted
            // e replica o bit 31 nas posições superiores
            3'b010: begin
                loadedData = {{(N-32){shifted[31]}}, shifted[31:0]};
            end

            // LD - Load Doubleword
            // Para o caso de XLEN = 64, mantém toda a palavra deslocada
            // sem necessidade de extensão adicional
            3'b011: begin
                loadedData = shifted;
            end

            // LBU - Load Byte Unsigned com extensão por zeros
            // Seleciona os 8 bits menos significativos de shifted
            // e preenche os bits superiores com 0
            3'b100: begin
                loadedData = {{(N-8){1'b0}}, shifted[7:0]};
            end

            // LHU - Load Halfword Unsigned com extensão por zeros
            // Seleciona os 16 bits menos significativos de shifted
            // e preenche os bits superiores com 0
            3'b101: begin
                loadedData = {{(N-16){1'b0}}, shifted[15:0]};
            end

            // LWU - Load Word Unsigned com extensão por zeros
            // Seleciona os 32 bits menos significativos de shifted
            // e preenche os bits superiores com 0
            3'b110: begin
                loadedData = {{(N-32){1'b0}}, shifted[31:0]};
            end

            // Caso padrão para códigos funct3 não tratados
            default: begin
                loadedData = '0;
            end
        endcase
    end

endmodule

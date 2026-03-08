module LSU #(
    parameter N = 64 //! Parâmetro do XLEN
)(
    input  logic               load,          //! Sinal que indica operação de leitura da memória
    input  logic               store,         //! Sinal que indica operação de escrita na memória

    input  logic [2:0]         funct3,        //! Campo funct3 que define o tamanho e o tipo da operação de memória
    input  logic [N-1:0]       addr,          //! Endereço efetivo calculado para acesso à memória
    input  logic [N-1:0]       storeData,     //! Dado que será escrito na memória em operações de store

    output logic               writeEnable,   //! Sinal de habilitação de escrita da memória
    
    output logic [N-1:0]       mem_address,   //! Endereço enviado para a memória
    output logic [N-1:0]       mem_writeData, //! Dado alinhado para escrita na memória
    output logic [(N/8)-1:0]   mem_writeMask, //! Máscara de bytes válidos para escrita na memória

    // ---- exceções ----
    output logic               exc_valid,     //! Indica ocorrência de exceção de desalinhamento
    output logic               exc_StLd,      //! Tipo da exceção: 0 = load desalinhado, 1 = store desalinhado
    output logic [N-1:0]       exc_addr       //! Endereço que causou a exceção
);

    localparam BYTES    = N/8;        //! Quantidade de bytes em uma palavra de N bits
    localparam OFF_BITS = $clog2(BYTES); //! Quantidade de bits usados para selecionar o deslocamento em bytes

    logic [OFF_BITS-1:0] byte_offset; //! Offset em bytes dentro da palavra acessada
    assign byte_offset = addr[OFF_BITS-1:0];

    logic misaligned_store; //! Indica store com desalinhamento
    logic misaligned_load;  //! Indica load com desalinhamento

    /* Pela ISA as instruções de store e load devem estar alinhadas de acordo com o multiplo correspondente da tabela abaixo
    | Instrução | Alinhamento exigido |
    | --------- | ------------------- |
    | SB        | nenhum              |
    | SH        | addr % 2 == 0       |
    | SW        | addr % 4 == 0       |
    | SD        | addr % 8 == 0       |*/

    always_comb begin
        misaligned_store = 1'b0; //! Valor padrão: assume store alinhado

        if (store) begin
            case (funct3)
                // SB -> nunca gera desalinhamento, pois escreve apenas 1 byte
                3'b000: begin
                    misaligned_store = 1'b0;
                end

                // SH -> exige alinhamento em 2 bytes
                // Se o bit menos significativo do offset for 1, o endereço está desalinhado
                3'b001: begin
                    misaligned_store = (byte_offset[0] != 1'b0);
                end

                // SW -> exige alinhamento em 4 bytes
                // Se os dois bits menos significativos do offset forem diferentes de 00, o endereço está desalinhado
                3'b010: begin
                    misaligned_store = (byte_offset[1:0] != 2'b00);
                end

                // SD -> exige alinhamento em 8 bytes
                // Se os três bits menos significativos do offset forem diferentes de 000, o endereço está desalinhado
                3'b011: begin
                    misaligned_store = (byte_offset[2:0] != 3'b000);
                end

                // Outros códigos não são tratados como store válido neste módulo
                default: begin
                    misaligned_store = 1'b0;
                end
            endcase
        end
    end

    always_comb begin
        misaligned_load = 1'b0; //! Valor padrão: assume load alinhado

        if (load) begin
            case (funct3)
                // LB / LBU -> nunca geram desalinhamento, pois leem apenas 1 byte
                3'b000, 3'b100: begin
                    misaligned_load = 1'b0;
                end

                // LH / LHU -> exigem alinhamento em 2 bytes
                3'b001, 3'b101: begin
                    misaligned_load = (byte_offset[0] != 1'b0);
                end

                // LW / LWU -> exigem alinhamento em 4 bytes
                3'b010, 3'b110: begin
                    misaligned_load = (byte_offset[1:0] != 2'b00);
                end

                // LD -> exige alinhamento em 8 bytes
                3'b011: begin
                    misaligned_load = (byte_offset[2:0] != 3'b000);
                end

                // Outros códigos não são tratados como load válido neste módulo
                default: begin
                    misaligned_load = 1'b0;
                end
            endcase
        end
    end

    always_comb begin
        // Valores padrão
        // Assume inicialmente que não haverá escrita nem exceção
        writeEnable   = 1'b0;
        mem_writeMask = '0;
        mem_writeData = '0;

        exc_valid = 1'b0;
        exc_StLd  = 1'b0;
        exc_addr  = '0;

        // LOAD
        // Para operações de leitura, este módulo apenas detecta desalinhamento
        // O tratamento do dado lido é feito em outro bloco do datapath
        if (load) begin
            if (misaligned_load) begin
                exc_valid = 1'b1; //! Sinaliza ocorrência de exceção
                exc_StLd  = 1'b0; //! Indica que a exceção foi causada por load
                exc_addr  = addr; //! Endereço que gerou a exceção
            end
        end

        // STORE
        // Para operações de escrita, o módulo verifica desalinhamento
        // e, se o acesso for válido, gera a máscara e o dado alinhado
        else if (store) begin
            if (misaligned_store) begin
                writeEnable = 1'b0; //! Impede escrita quando houver exceção

                exc_valid = 1'b1;   //! Sinaliza ocorrência de exceção
                exc_StLd  = 1'b1;   //! Indica que a exceção foi causada por store
                exc_addr  = addr;   //! Endereço que gerou a exceção
            end

            // STORE válido
            else begin
                writeEnable = 1'b1; //! Habilita escrita na memória

                case (funct3)
                    // SB - Store Byte
                    // Ativa apenas 1 byte da máscara na posição indicada por byte_offset
                    // O dado de entrada também é deslocado para alinhar o byte na posição correta
                    3'b000: begin
                        mem_writeMask = ({{(BYTES-1){1'b0}},1'b1} << byte_offset);
                        mem_writeData = storeData << (byte_offset * 8);
                    end

                    // SH - Store Halfword
                    // Ativa 2 bytes consecutivos na posição indicada por byte_offset
                    // O dado é deslocado para alinhar os 16 bits na posição correta
                    3'b001: begin
                        mem_writeMask = ({{(BYTES-2){1'b0}},2'b11} << byte_offset);
                        mem_writeData = storeData << (byte_offset * 8);
                    end

                    // SW - Store Word
                    // Ativa 4 bytes consecutivos na posição indicada por byte_offset
                    // O dado é deslocado para alinhar os 32 bits na posição correta
                    3'b010: begin
                        mem_writeMask = ({{(BYTES-4){1'b0}},4'b1111} << byte_offset);
                        mem_writeData = storeData << (byte_offset * 8);
                    end

                    // SD - Store Doubleword
                    // Ativa todos os bytes da palavra de N bits
                    // Neste caso, não há necessidade de deslocamento do dado
                    3'b011: begin
                        mem_writeMask = {BYTES{1'b1}};
                        mem_writeData = storeData;
                    end

                    // Caso padrão para códigos funct3 não tratados
                    default: begin
                        writeEnable   = 1'b0;
                        mem_writeMask = '0;
                        mem_writeData = '0;
                    end
                endcase
            end
        end
    end

    // O endereço da memória é sempre repassado diretamente
    assign mem_address = addr;

endmodule

module LSU #(
    parameter int N = 64
)(
    input  logic               load,
    input  logic               store,

    input  logic [2:0]         funct3,
    input  logic [N-1:0]       addr,
    input  logic [N-1:0]       storeData,

    output logic               writeEnable,
    
    output logic [N-1:0]       mem_address,
    output logic [N-1:0]       mem_writeData,
    output logic [(N/8)-1:0]   mem_writeMask,

    output logic               exc_valid,
    output logic               exc_StLd,
    output logic [N-1:0]       exc_addr
);

    localparam int BYTES    = N/8;
    localparam int OFF_BITS = $clog2(BYTES);

    logic [OFF_BITS-1:0] byte_offset;
    assign byte_offset = addr[OFF_BITS-1:0];

    int unsigned accessBytes;
    logic misaligned;

    // temporários (declarados fora dos ifs)
    longint unsigned mask_tmp;
    logic [N-1:0] trunc;

    function automatic logic is_misaligned(input int unsigned bytes, input logic [N-1:0] a);
        logic r;
        begin
            unique case (bytes)
                1: r = 1'b0;
                2: r = a[0];
                4: r = |a[1:0];
                8: r = |a[2:0];
                default: r = 1'b1;
            endcase
            return r;
        end
    endfunction

    always_comb begin
        // Defaults
        mem_address   = addr;
        mem_writeMask = '0;
        mem_writeData = '0;
        writeEnable   = 1'b0;

        exc_valid = 1'b0;
        exc_StLd  = 1'b0;
        exc_addr  = addr;

        accessBytes = 0;
        misaligned  = 1'b0;

        mask_tmp = 0;
        trunc    = '0;

        // Caso inválido: load e store ao mesmo tempo
        if (load && store) begin
            exc_valid = 1'b1;
            exc_StLd  = 1'b1; // arbitrário
        end
        else if (!load && !store) begin
            // LSU ociosa
        end
        else begin
            // decodifica tamanho
            if (load) begin
                unique case (funct3)
                    3'b000, 3'b100: accessBytes = 1; // LB / LBU
                    3'b001, 3'b101: accessBytes = 2; // LH / LHU
                    3'b010, 3'b110: accessBytes = 4; // LW / LWU
                    3'b011:         accessBytes = 8; // LD
                    default:        accessBytes = 0;
                endcase
            end else begin
                unique case (funct3)
                    3'b000: accessBytes = 1; // SB
                    3'b001: accessBytes = 2; // SH
                    3'b010: accessBytes = 4; // SW
                    3'b011: accessBytes = 8; // SD
                    default:accessBytes = 0;
                endcase
            end

            // checa tamanho inválido / maior que o word
            if (accessBytes == 0 || accessBytes > BYTES) begin
                misaligned = 1'b1;
            end else begin
                misaligned = is_misaligned(accessBytes, addr);
            end

            // exceção
            if (misaligned) begin
                exc_valid = 1'b1;
                exc_StLd  = store;  // 1=store, 0=load
                exc_addr  = addr;
            end
            else if (store) begin
                // STORE alinhado: máscara + dado alinhado
                mask_tmp = ((64'd1 << accessBytes) - 64'd1) << byte_offset;
                mem_writeMask = mask_tmp[(N/8)-1:0];

                trunc = '0;
                unique case (accessBytes)
                    1: trunc[7:0]   = storeData[7:0];
                    2: trunc[15:0]  = storeData[15:0];
                    4: trunc[31:0]  = storeData[31:0];
                    8: trunc[63:0]  = storeData[63:0];
                    default: trunc  = '0;
                endcase

                mem_writeData = trunc << (byte_offset * 8);
                writeEnable   = 1'b1;
            end
            else begin
                // LOAD alinhado: não escreve
                writeEnable = 1'b0;
            end
        end
    end

endmodule

module ImmGenerator #(
    parameter N = 64 //! Parâmetro do XLEN
)(
    input  logic [31:0]  instr,   //! Instrução completa de 32 bits
    output logic [N-1:0] imm_out  //! Imediato gerado e estendido para XLEN bits
);

    always_comb begin : mux_instr
        case (instr[6:0])

            // I-TYPE: load, immediate operations e JALR
            // O imediato ocupa os bits instr[31:20]
            // O valor é estendido com sinal para XLEN bits
            7'b0010011, // Opcode das instruções imediatas aritméticas/lógicas
            7'b0011011, // Opcode das instruções imediatas word
            7'b1100111, // Opcode da instrução JALR
            7'b0000011: imm_out = {{(N-12){instr[31]}}, instr[31:20]}; // Opcode das instruções de load

            // S-TYPE: stores
            // O imediato é formado pela concatenação de instr[31:25] com instr[11:7]
            // O valor resultante é estendido com sinal para XLEN bits
            7'b0100011: imm_out = {{(N-12){instr[31]}}, instr[31:25], instr[11:7]};

            // B-TYPE: branches
            // O imediato é montado no formato:
            // imm[12]   = instr[31]
            // imm[11]   = instr[7]
            // imm[10:5] = instr[30:25]
            // imm[4:1]  = instr[11:8]
            // imm[0]    = 0
            // Após a montagem, o valor é estendido com sinal para XLEN bits
            7'b1100011: imm_out = {{(N-13){instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0};

            // U-TYPE: LUI e AUIPC
            // O imediato usa os 20 bits mais significativos da instrução
            // concatenados com 12 zeros nas posições menos significativas
            7'b0110111, // Opcode da instrução LUI
            7'b0010111: imm_out = {{(N-32){instr[31]}}, instr[31:12], 12'b0}; // Opcode da instrução AUIPC

            // J-TYPE: JAL
            // O imediato é montado no formato:
            // imm[20]    = instr[31]
            // imm[19:12] = instr[19:12]
            // imm[11]    = instr[20]
            // imm[10:1]  = instr[30:21]
            // imm[0]     = 0
            // Após a montagem, o valor é estendido com sinal para XLEN bits
            7'b1101111: imm_out = {{(N-21){instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0};

            // Caso padrão para opcodes que não utilizam imediato neste formato
            default:
                imm_out = '0;
        endcase
    end

endmodule

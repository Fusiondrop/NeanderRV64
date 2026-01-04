module SignExtender #(
    parameter N = 64
)(
    input  logic [31:0]  instr,  // instrução completa
    output logic [N-1:0] imm_out // imediato estendido
);

    always_comb begin : mux_instr
        case (instr[6:0])

            // I-TYPE: load, immediate operations e jalr
            7'b0010011, // <- immediate operation opcode
            7'b0011011, // <- immediate word operation opcode
            7'b1100111, // <- opcode da instrução JALR
            7'b0000011: imm_out = {{(N-12){instr[31]}}, instr[31:20]};

            // S-TYPE: stores
            7'b0100011: imm_out = {{(N-12){instr[31]}}, instr[31:25], instr[11:7]};

            // B-TYPE: branches
            7'b1100011: imm_out = {{(N-13){instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0};

            // U-TYPE: LUI e AUIPC
            7'b0110111,
            7'b0010111: imm_out = {{(N-32){instr[31]}}, instr[31:12], 12'b0};

            // J-TYPE: JAL
            7'b1101111: imm_out = {{(N-21){instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0};
            default: 
                imm_out = '0;
        endcase
    end

endmodule

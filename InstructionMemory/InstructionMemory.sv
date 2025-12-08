module InstructionMemory (
    input  logic [63:0]  addr,
    output logic [31:0]  instr
);
    logic [31:0] I_mem [1023:0];

    initial $readmemh("program.hex", I_mem);

    always_comb begin
        instr = I_mem[addr[11:2]];
    end
endmodule

 /* Os últimos 2 bits são descartados, pois a arquitetura do processador presume que incrementa
    o program counter de 4 em 4 byte, então cada endereço aponta para 1 byte, mas uma instrução ocupa 
    4 bytes consecutivos. Portanto, se calcular o incremento de endereço em bits haverá algo como:
    
    | Endereço real | Em binário      | Últimos 2 bits |
    | ------------- | --------------- | -------------- |
    | 0x00000       | `0000...000000` |       00       |
    | 0x00004       | `0000...000100` |       00       |
    | 0x00008       | `0000...001000` |       00       |
    | 0x0000C       | `0000...001100` |       00       |
    | 0x00010       | `0000...010000` |       00       |
    | 0x00014       | `0000...010100` |       00       |
    */

// ------------------------------------------------------------
// Módulo: ProgramCounter
// Descrição:
//   Implementa o Program Counter (PC) de um processador
//
//   O Program Counter é um registrador sequencial responsável
//   por armazenar o endereço da instrução atual a ser buscada
//   na memória de instruções.
//
//   A cada ciclo de clock:
//   - O PC recebe o valor do próximo endereço (PC_in),
//     que pode corresponder a:
//       * PC + 4 (fluxo sequencial normal),
//       * endereço de desvio (branch),
//       * endereço de salto (jump).
//
//   O PC é resetável, garantindo um ponto de partida
//   determinístico para a execução do programa.
//
//   Observações importantes:
//   - O PC trabalha em endereçamento por bytes.
//   - Em RV64I, o PC possui 64 bits, mesmo que apenas parte
//     do espaço de endereçamento seja efetivamente utilizada.
//   - O valor inicial do PC após o reset é 0x000...000,
//     assumindo que a memória de instruções está mapeada
//     a partir do endereço 0.
// ------------------------------------------------------------
module ProgramCounter #(
    parameter N = 64    //! XLEN do processador: 32 para RV32, 64 para RV64
)(
    input  logic         clk,   //! Sinal de clock do sistema
    input  logic         rst,   //! Reset síncrono ativo em nível alto
    input  logic [N-1:0] PC_in, //! Próximo valor do PC (PC_next)
    output logic [N-1:0] PC_out //! Valor atual do PC (endereço da instrução)
);

    /* --------------------------------------------------------
     Registrador do Program Counter

     - O Program Counter é implementado como um registrador
       síncrono, atualizado na borda de subida do clock.
     - Em um processador single-cycle, o PC é atualizado a cada
       ciclo de clock.
     - Em arquiteturas multi-cíclicas ou pipeline, a atualização
       do PC pode ser controlada por sinais adicionais de enable,
       permitindo que o mesmo valor seja mantido por múltiplos
       ciclos.


     Reset:
     - Quando rst = 1, o PC é forçado para zero.
     - Esse valor corresponde ao endereço inicial da memória
       de instruções (reset vector).
     - O uso de reset explícito é essencial para garantir
       comportamento determinístico em hardware real.

     Operação normal:
     - Quando rst = 0, o PC recebe PC_in, calculado pela lógica
       combinacional do datapath (PC + 4, branch ou jump).
     -------------------------------------------------------- */
    always_ff @(posedge clk) begin
        if (rst)
            PC_out <= '0;    // Inicializa o PC no endereço 0
        else
            PC_out <= PC_in; // Atualiza o PC para o próximo endereço
    end

endmodule

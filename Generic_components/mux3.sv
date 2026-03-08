module mux3 #(
  parameter N = 1 //! Parâmetro do XLEN
)(
  input  logic [N-1:0] data0,   //! Primeira entrada de dados do multiplexador
  input  logic [N-1:0] data1,   //! Segunda entrada de dados do multiplexador
  input  logic [N-1:0] data2,   //! Terceira entrada de dados do multiplexador
  input  logic [1:0]   sel,     //! Sinal de seleção do multiplexador
  output logic [N-1:0] mux_out  //! Saída selecionada do multiplexador
);

  // Se sel[1] = 1, a saída recebe data2
  // Caso contrário, se sel[0] = 1, a saída recebe data1
  // Caso contrário, a saída recebe data0
  assign mux_out = sel[1] ? data2 : (sel[0] ? data1 : data0);

endmodule

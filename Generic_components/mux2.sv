module mux2 #(
  parameter N = 1 //! Parâmetro do XLEN
)(
  input  logic [N-1:0] data0,   //! Primeira entrada de dados do multiplexador
  input  logic [N-1:0] data1,   //! Segunda entrada de dados do multiplexador
  input  logic         sel,     //! Sinal de seleção do multiplexador
  output logic [N-1:0] mux_out  //! Saída selecionada do multiplexador
);

  // Se sel = 0, a saída recebe data0
  // Se sel = 1, a saída recebe data1
  assign mux_out = sel ? data1 : data0;

endmodule

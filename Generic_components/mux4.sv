module mux4 #(
  parameter N = 1 //! Parâmetro do XLEN
)(
  input  logic [N-1:0] data0,   //! Primeira entrada de dados do multiplexador
  input  logic [N-1:0] data1,   //! Segunda entrada de dados do multiplexador
  input  logic [N-1:0] data2,   //! Terceira entrada de dados do multiplexador
  input  logic [N-1:0] data3,   //! Quarta entrada de dados do multiplexador
  input  logic [1:0]   sel,     //! Sinal de seleção do multiplexador
  output logic [N-1:0] mux_out  //! Saída selecionada do multiplexador
);

  /*
    Se sel = 2'b00, a saída recebe data0
    Se sel = 2'b01, a saída recebe data1
    Se sel = 2'b10, a saída recebe data2
    Se sel = 2'b11, a saída recebe data3
  */
  assign mux_out = (sel == 2'b00) ? data0 :
                   (sel == 2'b01) ? data1 :
                   (sel == 2'b10) ? data2 :
                                    data3;

endmodule

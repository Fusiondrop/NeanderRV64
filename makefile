TOOL_COMP = verilator
VERILATOR_FLAGS = --binary --timing --top-module tb_ula

GENERIC_SRCS = \
	./Generic_components/mux2.sv \
	./Generic_components/mux3.sv \
	./Generic_components/mux4.sv

NEANDER_RV64I = \
	./Datapath/ULA/ZeroExtender.sv \
	./Datapath/ULA/SignExtender.sv \
	./Datapath/ULA/srl.sv \
	./Datapath/ULA/sra.sv \
	./Datapath/ULA/sll.sv \
	./Datapath/ULA/rippleSubAdder.sv \
	./Datapath/ULA/comparator.sv \
	./Datapath/ULA/ULA.sv


TESTBENCH = ./testbench/tb_ula.sv

all:
	$(TOOL_COMP) $(VERILATOR_FLAGS) $(GENERIC_SRCS) $(NEANDER_RV64I) $(TESTBENCH)

clean:
	rm -rf obj_dir

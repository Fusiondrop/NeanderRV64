TOOL_COMP = verilator
VERILATOR_FLAGS = --binary --timing --top-module tb_datapath

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
	./Datapath/ULA/ULA.sv \
	./Datapath/ImmGenerator.sv \
	./Datapath/RegisterFile/RegisterFile.sv \
	./Datapath/PC/ProgramCounter_inc.sv \
	./Datapath/PC/ProgramCounter.sv \
	./Datapath/LSU/LoadExtender.sv \
	./Datapath/LSU/LSU.sv \
	./Datapath/InstructionMemory/InstructionMemory.sv \
	./Datapath/DataMemory/DataMemory.sv \
	./Datapath/Datapath.sv

TESTBENCH = ./testbench/tb_datapath.sv

all:
	$(TOOL_COMP) $(VERILATOR_FLAGS) $(GENERIC_SRCS) $(NEANDER_RV64I) $(TESTBENCH)

clean:
	rm -rf obj_dir

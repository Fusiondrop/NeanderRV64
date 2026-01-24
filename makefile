TOOL_COMP = verilator
VERILATOR_FLAGS = --binary --timing --top-module tb_controlunit

GENERIC_SRCS = \
	./Generic_components/mux2.sv \
	./Generic_components/mux3.sv \
	./Generic_components/mux4.sv

DATAPATH = \
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

CONTROL_UNIT = \
	./ControlUnit/ControlUnit.sv

TESTBENCH = ./testbench/tb_controlunit.sv

all:
	$(TOOL_COMP) $(VERILATOR_FLAGS) $(CONTROL_UNIT) $(TESTBENCH)

clean:
	rm -rf obj_dir

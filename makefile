TOOL_COMP = verilator
VERILATOR_FLAGS = --binary --timing

GENERIC_SRCS = \
	./Generic_components/mux2.sv \
	./Generic_components/mux3.sv \
	./Generic_components/mux4.sv \
	./Generic_components/SignExtender.sv \
	./Generic_components/ZeroExtender.sv

DATAPATH = \
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

TOP_LEVEL = \
	./TopLevel.sv

PROGRAM_HEX = \
	./program.hex

MODULE_TARGET = ./Datapath/PC/ProgramCounter.sv

TESTBENCH = ./testbench/tb_ProgramCounter.sv

all:
	$(TOOL_COMP) $(VERILATOR_FLAGS) $(CONTROL_UNIT) $(GENERIC_SRCS) $(DATAPATH) $(TOP_LEVEL) $(TESTBENCH)

test_module:
	$(TOOL_COMP) $(VERILATOR_FLAGS) $(MODULE_TARGET) $(TESTBENCH)

processor:
	$(TOOL_COMP) --binary --timing --top-module tb_processor $(GENERIC_SRCS) $(DATAPATH) $(CONTROL_UNIT) ./testbench/tb_processor.sv

clean:
	rm -rf obj_dir

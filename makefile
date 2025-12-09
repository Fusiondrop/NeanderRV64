TOOL_COMP = verilator
VERILATOR_FLAGS = --binary --timing

NEANDER_RV64I = \
	./InstructionMemory/InstructionMemory.sv

TESTBENCH = ./testbench/tb_InstructionMemory.sv

all:
	$(TOOL_COMP) $(VERILATOR_FLAGS) $(NEANDER_RV64I) $(TESTBENCH)
clean:
	rm -rf obj_dir
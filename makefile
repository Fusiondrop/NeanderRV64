TOOL_COMP = verilator
VERILATOR_FLAGS = --binary --timing

NEANDER_RV64I = \
	./Datapath/LSU/LSU.sv

TESTBENCH = ./testbench/tb_lsu.sv

all:
	$(TOOL_COMP) $(VERILATOR_FLAGS) $(NEANDER_RV64I) $(TESTBENCH)
clean:
	rm -rf obj_dir
module tb_lsu;

  localparam N = 64;
  localparam BYTES = N/8;

  // DUT inputs
  logic               load;
  logic               store;
  logic [2:0]         funct3;
  logic [N-1:0]       addr;
  logic [N-1:0]       storeData;

  // DUT outputs
  logic               writeEnable;
  logic [N-1:0]       mem_address;
  logic [N-1:0]       mem_writeData;
  logic [BYTES-1:0]   mem_writeMask;
  logic               exc_valid;
  logic               exc_StLd;
  logic [N-1:0]       exc_addr;


  LSU #(.N(N)) dut (
    .load(load),
    .store(store),
    .funct3(funct3),
    .addr(addr),
    .storeData(storeData),
    .writeEnable(writeEnable),
    .mem_address(mem_address),
    .mem_writeData(mem_writeData),
    .mem_writeMask(mem_writeMask),
    .exc_valid(exc_valid),
    .exc_StLd(exc_StLd),
    .exc_addr(exc_addr)
  );

  // ------------------------------------------------------------
  // Helpers
  // ------------------------------------------------------------
  function automatic [BYTES-1:0] exp_mask(input int unsigned accessBytes, input int unsigned byte_off);
    longint unsigned tmp;
    begin
      tmp = ((64'd1 << accessBytes) - 64'd1) << byte_off;
      exp_mask = tmp[BYTES-1:0];
    end
  endfunction

  function automatic [N-1:0] exp_wdata(input int unsigned accessBytes, input int unsigned byte_off, input [N-1:0] sd);
    logic [N-1:0] trunc;
    begin
      trunc = '0;
      unique case (accessBytes)
        1: trunc[7:0]   = sd[7:0];
        2: trunc[15:0]  = sd[15:0];
        4: trunc[31:0]  = sd[31:0];
        8: trunc[63:0]  = sd[63:0];
        default: trunc  = '0;
      endcase
      exp_wdata = trunc << (byte_off * 8);
    end
  endfunction

  function automatic bit is_misaligned(input int unsigned accessBytes, input [N-1:0] a);
    begin
      unique case (accessBytes)
        1: is_misaligned = 1'b0;
        2: is_misaligned = a[0];
        4: is_misaligned = |a[1:0];
        8: is_misaligned = |a[2:0];
        default: is_misaligned = 1'b1;
      endcase
    end
  endfunction

  task automatic apply_and_check(
      input string name,
      input logic t_load,
      input logic t_store,
      input logic [2:0] t_funct3,
      input logic [N-1:0] t_addr,
      input logic [N-1:0] t_storeData,

      input logic exp_writeEnable,
      input logic [N-1:0] exp_mem_address,
      input logic [N-1:0] exp_mem_writeData,
      input logic [BYTES-1:0] exp_mem_writeMask,
      input logic exp_exc_valid,
      input logic exp_exc_StLd,
      input logic [N-1:0] exp_exc_addr
  );
    begin
      load      = t_load;
      store     = t_store;
      funct3    = t_funct3;
      addr      = t_addr;
      storeData = t_storeData;

      #1;

      if (writeEnable !== exp_writeEnable) begin
        $display("[FAIL] %s: writeEnable exp=%0b got=%0b", name, exp_writeEnable, writeEnable);
        $fatal;
      end
      if (mem_address !== exp_mem_address) begin
        $display("[FAIL] %s: mem_address exp=0x%0h got=0x%0h", name, exp_mem_address, mem_address);
        $fatal;
      end
      if (mem_writeData !== exp_mem_writeData) begin
        $display("[FAIL] %s: mem_writeData exp=0x%0h got=0x%0h", name, exp_mem_writeData, mem_writeData);
        $fatal;
      end
      if (mem_writeMask !== exp_mem_writeMask) begin
        $display("[FAIL] %s: mem_writeMask exp=0x%0h got=0x%0h", name, exp_mem_writeMask, mem_writeMask);
        $fatal;
      end
      if (exc_valid !== exp_exc_valid) begin
        $display("[FAIL] %s: exc_valid exp=%0b got=%0b", name, exp_exc_valid, exc_valid);
        $fatal;
      end
      // Só faz sentido validar exc_StLd e exc_addr quando há exceção
      if (exp_exc_valid) begin
        if (exc_StLd !== exp_exc_StLd) begin
          $display("[FAIL] %s: exc_StLd exp=%0b got=%0b", name, exp_exc_StLd, exc_StLd);
          $fatal;
        end
        if (exc_addr !== exp_exc_addr) begin
          $display("[FAIL] %s: exc_addr exp=0x%0h got=0x%0h", name, exp_exc_addr, exc_addr);
          $fatal;
        end
      end

      $display("[PASS] %s", name);
    end
  endtask

  // ------------------------------------------------------------
  // Test sequence
  // ------------------------------------------------------------
  initial begin
    // defaults
    load = 0; store = 0; funct3 = 3'b000; addr = '0; storeData = '0;
    #1;

    // 1) Idle (neither load nor store)
    apply_and_check(
      "IDLE",
      1'b0, 1'b0, 3'b000, 64'h0000_0000_0000_1234, 64'hDEAD_BEEF_CAFE_F00D,
      /*exp*/ 1'b0, 64'h0000_0000_0000_1234, 64'h0, '0,
      1'b0, 1'b0, 64'h0000_0000_0000_1234
    );

    // 2) Invalid (load && store)
    apply_and_check(
      "INVALID load&&store",
      1'b1, 1'b1, 3'b000, 64'h0000_0000_0000_1000, 64'h1111_2222_3333_4444,
      /*exp*/ 1'b0, 64'h0000_0000_0000_1000, 64'h0, '0,
      1'b1, 1'b1, 64'h0000_0000_0000_1000
    );

    // STORE tests (aligned)
    // 3) SB at offset 3
    begin
      int unsigned off = 3;
      int unsigned bytes = 1;
      logic [BYTES-1:0] m = exp_mask(bytes, off);
      logic [N-1:0] wd = exp_wdata(bytes, off, 64'h0000_0000_0000_00AA);
      apply_and_check(
        "STORE SB aligned (off=3)",
        1'b0, 1'b1, 3'b000, 64'h0000_0000_0000_1003, 64'h0000_0000_0000_00AA,
        /*exp*/ 1'b1, 64'h0000_0000_0000_1003, wd, m,
        1'b0, 1'b1, 64'h0000_0000_0000_1003
      );
    end

    // 4) SH at offset 2 (aligned)
    begin
      int unsigned off = 2;
      int unsigned bytes = 2;
      logic [BYTES-1:0] m = exp_mask(bytes, off);
      logic [N-1:0] wd = exp_wdata(bytes, off, 64'h0000_0000_0000_BEEF);
      apply_and_check(
        "STORE SH aligned (off=2)",
        1'b0, 1'b1, 3'b001, 64'h0000_0000_0000_2002, 64'h0000_0000_0000_BEEF,
        /*exp*/ 1'b1, 64'h0000_0000_0000_2002, wd, m,
        1'b0, 1'b1, 64'h0000_0000_0000_2002
      );
    end

    // 5) SW at offset 4 (aligned)
    begin
      int unsigned off = 4;
      int unsigned bytes = 4;
      logic [BYTES-1:0] m = exp_mask(bytes, off);
      logic [N-1:0] wd = exp_wdata(bytes, off, 64'h0000_0000_DEAD_BEEF);
      apply_and_check(
        "STORE SW aligned (off=4)",
        1'b0, 1'b1, 3'b010, 64'h0000_0000_0000_3004, 64'h0000_0000_DEAD_BEEF,
        /*exp*/ 1'b1, 64'h0000_0000_0000_3004, wd, m,
        1'b0, 1'b1, 64'h0000_0000_0000_3004
      );
    end

    // 6) SD at offset 0 (aligned)
    begin
      int unsigned off = 0;
      int unsigned bytes = 8;
      logic [BYTES-1:0] m = exp_mask(bytes, off);
      logic [N-1:0] wd = exp_wdata(bytes, off, 64'h1122_3344_5566_7788);
      apply_and_check(
        "STORE SD aligned (off=0)",
        1'b0, 1'b1, 3'b011, 64'h0000_0000_0000_4000, 64'h1122_3344_5566_7788,
        /*exp*/ 1'b1, 64'h0000_0000_0000_4000, wd, m,
        1'b0, 1'b1, 64'h0000_0000_0000_4000
      );
    end

    // STORE misaligned
    // 7) SH misaligned (offset 1)
    apply_and_check(
      "STORE SH misaligned (off=1)",
      1'b0, 1'b1, 3'b001, 64'h0000_0000_0000_5001, 64'h0000_0000_0000_1234,
      /*exp*/ 1'b0, 64'h0000_0000_0000_5001, 64'h0, '0,
      1'b1, 1'b1, 64'h0000_0000_0000_5001
    );

    // LOAD aligned
    // 8) LWU aligned (offset 4) -> no exception, no write
    apply_and_check(
      "LOAD LWU aligned (off=4)",
      1'b1, 1'b0, 3'b110, 64'h0000_0000_0000_6004, 64'hFFFF_FFFF_FFFF_FFFF,
      /*exp*/ 1'b0, 64'h0000_0000_0000_6004, 64'h0, '0,
      1'b0, 1'b0, 64'h0000_0000_0000_6004
    );

    // LOAD misaligned
    // 9) LW misaligned (offset 2)
    apply_and_check(
      "LOAD LW misaligned (off=2)",
      1'b1, 1'b0, 3'b010, 64'h0000_0000_0000_7002, 64'h0,
      /*exp*/ 1'b0, 64'h0000_0000_0000_7002, 64'h0, '0,
      1'b1, 1'b0, 64'h0000_0000_0000_7002
    );

    // 10) LD misaligned (offset 4)
    apply_and_check(
      "LOAD LD misaligned (off=4)",
      1'b1, 1'b0, 3'b011, 64'h0000_0000_0000_8004, 64'h0,
      /*exp*/ 1'b0, 64'h0000_0000_0000_8004, 64'h0, '0,
      1'b1, 1'b0, 64'h0000_0000_0000_8004
    );

    $display("\nALL LSU TESTS PASSED");
    $finish;
  end

endmodule

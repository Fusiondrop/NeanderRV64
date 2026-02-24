# NeanderRV64I (single-cycle)

Implementação didática de um processador **RISC-V RV64I** (*single-cycle*) em **SystemVerilog**, com **Datapath**, **Control Unit** e **testbenches** para verificação via simulação com **Verilator**.

O projeto inclui:
- Datapath modularizado (PC, InstructionMemory, RegisterFile, ULA, LSU, DataMemory…)
- Control Unit (gera sinais a partir de `opcode/funct3/funct7` + flags da ULA)
- **tb_top**: testes dirigidos de instruções (relatório `[ OK ] / [FAIL ]`)
- **tb_processor**: execução “tipo firmware” carregando um **programa real** via `program.hex`

## Estrutura do repositório

```text
riscv64/
├─ Datapath/
│ ├─ ULA/ ...
│ ├─ PC/ ...
│ ├─ LSU/ ...
│ ├─ InstructionMemory/ ...
│ ├─ DataMemory/ ...
│ └─ Datapath.sv
├─ ControlUnit/
│ └─ ControlUnit.sv
├─ Generic_components/
│ ├─ mux2.sv
│ ├─ mux3.sv
│ ├─ mux4.sv
│ ├─ SignExtender.sv
│ └─ ZeroExtender.sv
├─ testbench/
│ ├─ tb_top.sv
│ ├─ tb_processor.sv
│ └─ teste resultados/ # logs (.txt) das execuções
├─ sw/
│ ├─ start.S
│ ├─ main.c
│ └─ link.ld
├─ makehex.py
├─ program.hex
└─ makefile
```

## Requisitos

Ferramentas necessárias (não precisa chamar manualmente o Verilator — o `make` faz isso):

- **Verilator** (simulação SystemVerilog)
- **GNU Make**
- **Python 3** (gerar `program.hex`)
- **Toolchain RISC-V 64-bit** (`riscv64-unknown-elf-gcc`, `riscv64-unknown-elf-objcopy`)

## 1) Testes dirigidos de instruções — `tb_top`

O `tb_top` roda uma bateria de testes (R/I/U, loads/stores, branches, jumps, word ops) e imprime um relatório no terminal.

### Compilar
```bash
make
```

## 2) Rodando um programa real — tb_processor

O tb_processor simula o processador executando um programa carregado no InstructionMemory a partir de um arquivo .hex (program.hex).
O programa escreve uma assinatura em um endereço da DataMemory, e o testbench encerra com PASS quando encontra o valor esperado.

## 3) Gerando program.hex a partir de C/ASM

### Compilar (RV64I) para ELF
    riscv64-unknown-elf-gcc -march=rv64i -mabi=lp64 -mno-relax -ffreestanding -nostdlib -nostartfiles -O0 -Wl,-T,sw/link.ld -Wl,--gc-sections sw/start.S sw/main.c -o prog.elf

### Converter elf em binário
    riscv64-unknown-elf-objcopy -O binary prog.elf prog.bin

### Converter binário para hexadecimal
  Use o script makehex.py que recebe 2 argumentos do programa binário e o tamanho da word na memória que no caso modulos construidos foi 1024.
    python3 makehex.py prog.bin 1024 > program.hex

## 4) Executando o processador com o HEX
```bash
./obj_dir/Vtb_processor +HEX=program.hex +MAXCYC=5000 +SIGADDR=0x1FF8 +SIG=0000000000c0ffee
```
obs: Infelizmente, valores diferentes do parâmetro não funcionam, pois é necessário alterar o arquivo .c para observar esses valores em comum, será necessário implementação de macro para que o main.c e a compilação do verilator funcionem para diferentes valores que forem inseridos. O máximo valor teórico no endereçamento é 0x1FF8.

Parâmetros:
- +HEX=<arquivo>: caminho do hex a ser carregado
- +MAXCYC=<N>: limite de ciclos (evita loop infinito)
- +SIGADDR=<bytes>: endereço (em bytes) onde o programa escreverá a assinatura
- +SIG=<valor>: assinatura esperada em hexadecimal

## Datapath (diagrama)

<p align="center">
  <a href="NEANDER RV64I COMPLETO.svg">
    <img src="NEANDER RV64I COMPLETO.svg" alt="Diagrama do processador" width="900">
  </a>
</p>
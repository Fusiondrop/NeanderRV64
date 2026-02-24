#include <stdint.h>

#define OUT_ADDR 0x1FF8
#define BUF_ADDR 0x100

static inline void mmio_write64(uint64_t addr, uint64_t v) {
    *(volatile uint64_t*)addr = v;
}
static inline uint64_t mmio_read64(uint64_t addr) {
    return *(volatile uint64_t*)addr;
}

int main(void) {
    volatile uint64_t *buf = (volatile uint64_t*)BUF_ADDR;

    uint64_t a = 10, b = 20;
    uint64_t r = a + b;              // ADD/ADDI
    buf[0] = r;                      // SD
    if (mmio_read64(BUF_ADDR) != 30) goto fail;

    // signed vs unsigned branches (BLT/BGE / BLTU/BGEU)
    if ((int64_t)-1 < (int64_t)1) r += 1;        // true
    if ((uint64_t)-1 < (uint64_t)1) goto fail;   // false

    // shifts (SLL/SRL/SRA)
    r = (1ULL << 3);
    if (r != 8) goto fail;

    // ok -> assinatura
    mmio_write64(OUT_ADDR, 0xC0FFEEULL);
    while (1) {}

fail:
    mmio_write64(OUT_ADDR, 0xDEADULL);
    while (1) {}
}

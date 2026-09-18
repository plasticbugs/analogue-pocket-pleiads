// Full-system bench. Runs the core from reset and logs every CPU bus
// transaction, so tools/diff_bus.py can hold it to the sequence MAME
// produces for the same ROM from the same reset.
//
// This is the test that covers everything a frozen video state cannot: the
// processor itself, the address decode, the input ports, the protection
// lookup, and the relationship between the CPU's speed and the video's vblank
// -- which is the only timing the game actually depends on, since it has no
// interrupts and paces itself by polling.
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include "Vphoenix_core.h"
#include "verilated.h"

static Vphoenix_core *dut;
static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick() {
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    main_time++;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    if (argc < 3) {
        fprintf(stderr, "usage: tb_system <rom.bin> <out_bus.txt> [max_transactions]\n");
        return 2;
    }
    long maxn = (argc > 3) ? atol(argv[3]) : 200000;

    FILE *rf = fopen(argv[1], "rb");
    if (!rf) { fprintf(stderr, "cannot open %s\n", argv[1]); return 2; }
    fseek(rf, 0, SEEK_END); long rn = ftell(rf); fseek(rf, 0, SEEK_SET);
    std::vector<uint8_t> rom(rn);
    if (fread(rom.data(), 1, rn, rf) != (size_t)rn) return 2;
    fclose(rf);

    FILE *out = fopen(argv[2], "w");
    if (!out) { fprintf(stderr, "cannot write %s\n", argv[2]); return 2; }

    dut = new Vphoenix_core;
    dut->reset = 1;
    dut->dl_wr = 0; dut->dl_done = 0;
    dut->coin1 = 0; dut->start1 = 0; dut->start2 = 0;
    dut->p1_left = 0; dut->p1_right = 0; dut->p1_fire = 0; dut->p1_fire2 = 0;
    dut->p2_left = 0; dut->p2_right = 0; dut->p2_fire = 0; dut->p2_fire2 = 0;
    // MAME's defaults: 3 lives, bonus at 3K/30K, 1 coin 1 credit, the unknown
    // switch off, demo sounds on. Measured as DSW0 = E0 outside vblank.
    dut->dsw = 0x60;
    dut->cab_cocktail = 0;
    for (int i = 0; i < 32; i++) tick();

    for (size_t i = 0; i < rom.size(); i++) {
        dut->dl_addr = (uint32_t)i; dut->dl_data = rom[i]; dut->dl_wr = 1;
        tick();
    }
    dut->dl_wr = 0;
    dut->dl_done = 1; tick(); tick();
    dut->dl_done = 0; tick();

    fprintf(stderr, "game detected: %s (known=%d)\n",
            dut->game_phoenix ? "phoenix" : "pleiads", (int)dut->game_known);

    dut->reset = 0;
    long n = 0;
    long guard = 0;
    const long GUARD_MAX = 44000000L * 12;      // twelve seconds of core time
    while (n < maxn && guard++ < GUARD_MAX) {
        tick();
        if (dut->dbg_stb) {
            fprintf(out, "%s %04X %02X %ld %d\n", dut->dbg_we ? "W" : "R",
                    dut->dbg_addr & 0xffff, dut->dbg_data & 0xff,
                    guard, (int)dut->dbg_fetch);
            n++;
        }
    }
    fclose(out);
    fprintf(stderr, "logged %ld transactions in %ld clocks\n", n, guard);
    delete dut;
    return 0;
}

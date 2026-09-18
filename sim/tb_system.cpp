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
#include <zlib.h>
#include "Vphoenix_core.h"
#include "verilated.h"

static const int W = 256, H = 208;
static const int OW = H, OH = W;

static void write_png(const char *path, int w, int h, const std::vector<uint8_t> &rgb) {
    std::vector<uint8_t> raw;
    raw.reserve((size_t)h * (w * 3 + 1));
    for (int y = 0; y < h; y++) {
        raw.push_back(0);
        raw.insert(raw.end(), rgb.begin() + (size_t)y * w * 3,
                              rgb.begin() + (size_t)(y + 1) * w * 3);
    }
    uLongf clen = compressBound(raw.size());
    std::vector<uint8_t> comp(clen);
    compress2(comp.data(), &clen, raw.data(), raw.size(), 9);
    comp.resize(clen);
    FILE *f = fopen(path, "wb");
    if (!f) { fprintf(stderr, "cannot write %s\n", path); exit(2); }
    auto be32 = [&](uint32_t v) {
        uint8_t b[4] = {(uint8_t)(v >> 24), (uint8_t)(v >> 16), (uint8_t)(v >> 8), (uint8_t)v};
        fwrite(b, 1, 4, f);
    };
    auto chunk = [&](const char *tag, const uint8_t *d, size_t n) {
        be32((uint32_t)n);
        std::vector<uint8_t> t(4 + n);
        memcpy(t.data(), tag, 4);
        if (n) memcpy(t.data() + 4, d, n);
        fwrite(t.data(), 1, t.size(), f);
        be32((uint32_t)crc32(0, t.data(), (uInt)t.size()));
    };
    fwrite("\x89PNG\r\n\x1a\n", 1, 8, f);
    uint8_t ihdr[13] = {(uint8_t)(w >> 24), (uint8_t)(w >> 16), (uint8_t)(w >> 8), (uint8_t)w,
                        (uint8_t)(h >> 24), (uint8_t)(h >> 16), (uint8_t)(h >> 8), (uint8_t)h,
                        8, 2, 0, 0, 0};
    chunk("IHDR", ihdr, 13);
    chunk("IDAT", comp.data(), comp.size());
    chunk("IEND", nullptr, 0);
    fclose(f);
}

static Vphoenix_core *dut;
static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick() {
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    main_time++;
}

static void load_rom(Vphoenix_core *d, const std::vector<uint8_t> &rom) {
    for (size_t i = 0; i < rom.size(); i++) {
        d->dl_addr = (uint32_t)i; d->dl_data = rom[i]; d->dl_wr = 1;
        tick();
    }
    d->dl_wr = 0;
    d->dl_done = 1; tick(); tick();
    d->dl_done = 0; tick();
}

static void reset_inputs(Vphoenix_core *d) {
    d->reset = 1;
    d->dl_wr = 0; d->dl_done = 0;
    d->coin1 = 0; d->start1 = 0; d->start2 = 0;
    d->p1_left = 0; d->p1_right = 0; d->p1_fire = 0; d->p1_fire2 = 0;
    d->p2_left = 0; d->p2_right = 0; d->p2_fire = 0; d->p2_fire2 = 0;
    // MAME's defaults: 3 lives, bonus at 3K/30K, 1 coin 1 credit, the unknown
    // switch off, demo sounds on. Measured as DSW0 = E0 outside vblank.
    d->dsw = 0x60;
    d->cab_cocktail = 0;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    if (argc < 4) {
        fprintf(stderr,
            "usage: tb_system bus    <rom.bin> <out_bus.txt> [max_transactions]\n"
            "       tb_system frames <rom.bin> <out_prefix> <target> [window]\n");
        return 2;
    }
    std::string mode = argv[1];

    FILE *rf = fopen(argv[2], "rb");
    if (!rf) { fprintf(stderr, "cannot open %s\n", argv[2]); return 2; }
    fseek(rf, 0, SEEK_END); long rn = ftell(rf); fseek(rf, 0, SEEK_SET);
    std::vector<uint8_t> rom(rn);
    if (fread(rom.data(), 1, rn, rf) != (size_t)rn) return 2;
    fclose(rf);

    dut = new Vphoenix_core;
    reset_inputs(dut);
    for (int i = 0; i < 32; i++) tick();
    load_rom(dut, rom);
    fprintf(stderr, "game detected: %s (known=%d)\n",
            dut->game_phoenix ? "phoenix" : "pleiads", (int)dut->game_known);
    dut->reset = 0;

    if (mode == "bus") {
        long maxn = (argc > 4) ? atol(argv[4]) : 200000;
        FILE *out = fopen(argv[3], "w");
        if (!out) { fprintf(stderr, "cannot write %s\n", argv[3]); return 2; }
        long n = 0, guard = 0;
        const long GUARD_MAX = 44000000L * 12;
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

    if (mode != "frames") { fprintf(stderr, "unknown mode %s\n", argv[1]); return 2; }

    // Run from reset and capture the core's own video output around a target
    // frame. Frame numbering cannot be assumed to line up with MAME's -- MAME
    // starts mid-vblank, so its first frame is a short one -- so a window of
    // frames is written and the runner picks the one that matches.
    long target = atol(argv[4]);
    int window = (argc > 5) ? atoi(argv[5]) : 3;

    std::vector<uint8_t> fb((size_t)W * H * 3, 0);
    long frame = 0, guard = 0;
    const long GUARD_MAX = 44000000L * 400;
    bool prev_vblank = true;
    int prev_h = dut->dbg_addr ? 0 : 0, ph = 0, pv = 0;
    (void)prev_h;
    int last_h = -1, last_v = -1;

    while (frame <= target + window && guard++ < GUARD_MAX) {
        tick();
        int h = dut->dbg_hcnt, v = dut->dbg_vcnt;
        if (h != last_h || v != last_v) {
            if (dut->de && ph < W && pv < H) {
                size_t o = ((size_t)pv * W + ph) * 3;
                fb[o + 0] = (dut->rgb >> 16) & 0xFF;
                fb[o + 1] = (dut->rgb >> 8) & 0xFF;
                fb[o + 2] = dut->rgb & 0xFF;
            }
            bool vb = dut->vblank;
            if (vb && !prev_vblank) {
                // End of a visible field: the framebuffer now holds it whole.
                if (frame >= target - window) {
                    std::vector<uint8_t> out((size_t)OW * OH * 3, 0);
                    for (int y = 0; y < OH; y++)
                        for (int x = 0; x < OW; x++) {
                            int sx = y, sy = H - 1 - x;
                            size_t sI = ((size_t)sy * W + sx) * 3, d = ((size_t)y * OW + x) * 3;
                            out[d] = fb[sI]; out[d+1] = fb[sI+1]; out[d+2] = fb[sI+2];
                        }
                    char path[512];
                    snprintf(path, sizeof path, "%s_%04ld.png", argv[3], frame);
                    write_png(path, OW, OH, out);
                }
                frame++;
            }
            prev_vblank = vb;
            ph = h; pv = v;
            last_h = h; last_v = v;
        }
    }
    fprintf(stderr, "captured frames %ld..%ld in %ld clocks\n",
            target - window, target + window, guard);
    delete dut;
    return 0;
}

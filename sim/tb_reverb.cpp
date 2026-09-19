// Push a recording through phoenix_reverb, one sample per `ce`, and write what
// comes out at each out_tick. Usage: Vphoenix_reverb in.wav out.wav mode [gap]
//
// `gap` is the number of clocks between samples. The core gives it about 917;
// the default here is 12, three more than the nine the state machine needs, so
// a dependence on idle time between samples would show up as a difference from
// the model rather than being hidden by slack.
#include "Vphoenix_reverb.h"
#include "verilated.h"
#include <cstdio>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <vector>

static Vphoenix_reverb *dut;
static void tick() { dut->clk = 0; dut->eval(); dut->clk = 1; dut->eval(); }

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    if (argc < 4) { fprintf(stderr, "usage: %s in.wav out.wav mode [gap]\n", argv[0]); return 2; }
    int mode = atoi(argv[3]);
    int gap = (argc > 4) ? atoi(argv[4]) : 12;

    FILE *f = fopen(argv[1], "rb");
    if (!f) { fprintf(stderr, "cannot read %s\n", argv[1]); return 2; }
    uint8_t hdr[44];
    if (fread(hdr, 1, 44, f) != 44) return 2;
    uint32_t sr; memcpy(&sr, hdr + 24, 4);
    std::vector<int16_t> in;
    int16_t v;
    while (fread(&v, 2, 1, f) == 1) in.push_back(v);
    fclose(f);

    dut = new Vphoenix_reverb;
    dut->reset = 1; dut->ce = 0; dut->mode = mode; dut->in = 0;
    for (int i = 0; i < 8; i++) tick();
    dut->reset = 0; tick();

    std::vector<int16_t> out;
    out.reserve(in.size());
    for (size_t i = 0; i < in.size(); i++) {
        dut->in = (uint16_t)in[i]; dut->ce = 1; tick(); dut->ce = 0;
        if (dut->out_tick) out.push_back((int16_t)dut->out);
        for (int g = 0; g < gap; g++) {
            // the input is only promised valid alongside ce, so scribble on it
            dut->in = 0x5a5a;
            tick();
            if (dut->out_tick) out.push_back((int16_t)dut->out);
        }
    }

    FILE *w = fopen(argv[2], "wb");
    uint32_t n = (uint32_t)out.size() * 2;
    auto u32 = [&](uint32_t x) { fwrite(&x, 4, 1, w); };
    auto u16 = [&](uint16_t x) { fwrite(&x, 2, 1, w); };
    fwrite("RIFF", 1, 4, w); u32(36 + n); fwrite("WAVE", 1, 4, w);
    fwrite("fmt ", 1, 4, w); u32(16); u16(1); u16(1);
    u32(sr); u32(sr * 2); u16(2); u16(16);
    fwrite("data", 1, 4, w); u32(n);
    fwrite(out.data(), 1, n, w);
    fclose(w);
    fprintf(stderr, "mode %d, gap %d: %zu in, %zu out\n", mode, gap, in.size(), out.size());
    delete dut;
    return 0;
}

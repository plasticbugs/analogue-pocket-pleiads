// Replay the sound command stream MAME produced into the RTL and write what
// comes out, so tools/compare_audio.py can hold it to MAME's own recording of
// the same twenty seconds and to the reference model.
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include "Vphoenix_audio.h"
#include "verilated.h"

static Vphoenix_audio *dut;
static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static const long CLK_HZ = 44000000;

struct Ev { double t; char latch; int val; };

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    if (argc < 3) {
        fprintf(stderr, "usage: tb_audio <trace.txt> <out.wav> [seconds]\n");
        return 2;
    }
    double seconds = (argc > 3) ? atof(argv[3]) : 20.0;

    std::vector<Ev> ev;
    {
        FILE *f = fopen(argv[1], "r");
        if (!f) { fprintf(stderr, "cannot open %s\n", argv[1]); return 2; }
        char line[256];
        while (fgets(line, sizeof line, f)) {
            if (line[0] == '#') continue;
            double t; char l[8]; unsigned v;
            if (sscanf(line, "%lf %7s %x", &t, l, &v) == 3)
                ev.push_back({t, l[0], (int)v});
        }
        fclose(f);
    }
    fprintf(stderr, "%zu sound events\n", ev.size());

    dut = new Vphoenix_audio;
    dut->reset = 1;
    dut->is_phoenix = (getenv("PL_GAME") && !strcmp(getenv("PL_GAME"), "phoenix")) ? 1 : 0;
    fprintf(stderr, "game: %s\n", dut->is_phoenix ? "phoenix" : "pleiads");
    dut->snd_a = 0; dut->snd_b = 0; dut->snd_c = 0;
    dut->clk = 0; dut->clk_audio = 0;
    for (int i = 0; i < 64; i++) { dut->clk = 0; dut->eval(); dut->clk = 1; dut->eval(); }
    dut->reset = 0;

    FILE *dump = nullptr;
    if (getenv("PL_DUMP")) dump = fopen(getenv("PL_DUMP"), "w");

    std::vector<int16_t> out;
    out.reserve((size_t)(seconds * 48000) + 16);

    size_t ei = 0;
    long total = (long)(seconds * CLK_HZ);
    for (long c = 0; c < total; c++) {
        double t = (double)c / CLK_HZ;
        while (ei < ev.size() && ev[ei].t <= t) {
            switch (ev[ei].latch) {
                case 'A': dut->snd_a = ev[ei].val; break;
                case 'B': dut->snd_b = ev[ei].val; break;
                case 'C': dut->snd_c = ev[ei].val; break;
            }
            ei++;
        }
        dut->clk = 0; dut->eval();
        dut->clk = 1; dut->eval();
        if (dut->sample_tick) {
            out.push_back((int16_t)dut->sample);
            if (dump) {
                // Verilator exposes ports unsigned; an 18-bit signed value read
                // raw looks like a huge positive number (METHODOLOGY 5.1).
                int fx = (int)dut->dbg_fx;
                if (fx & (1 << 17)) fx -= (1 << 18);
                fprintf(dump, "%u %d %d %02X %02X %02X %d %u %u %u %u\n",
                        dut->dbg_tms, fx, (int)(int16_t)dut->sample,
                        dut->snd_a, dut->snd_b, dut->snd_c,
                        (int)dut->dbg_poly, dut->dbg_pa6, dut->dbg_pc5,
                        dut->dbg_pa5, dut->dbg_pb4);
            }
            if (getenv("PL_DBG") && (out.size() % 24000) == 0)
                fprintf(stderr, "t=%6.2fs  A=%02X B=%02X C=%02X  tms=%5u fx=%7d "
                                "freq0=%5u vol0=%5u pb4=%5u  out=%6d\n",
                        (double)out.size() / 48000.0,
                        dut->snd_a, dut->snd_b, dut->snd_c,
                        dut->dbg_tms, (int)dut->dbg_fx,
                        dut->dbg_freq0, dut->dbg_vol0, dut->dbg_pb4,
                        (int)(int16_t)dut->sample);
        }
        main_time++;
    }

    FILE *w = fopen(argv[2], "wb");
    if (!w) { fprintf(stderr, "cannot write %s\n", argv[2]); return 2; }
    uint32_t n = (uint32_t)out.size() * 2, sr = 48000;
    auto u32 = [&](uint32_t v) { fwrite(&v, 4, 1, w); };
    auto u16 = [&](uint16_t v) { fwrite(&v, 2, 1, w); };
    fwrite("RIFF", 1, 4, w); u32(36 + n); fwrite("WAVE", 1, 4, w);
    fwrite("fmt ", 1, 4, w); u32(16); u16(1); u16(1);
    u32(sr); u32(sr * 2); u16(2); u16(16);
    fwrite("data", 1, 4, w); u32(n);
    fwrite(out.data(), 1, n, w);
    fclose(w);
    fprintf(stderr, "wrote %s: %zu samples\n", argv[2], out.size());
    delete dut;
    return 0;
}

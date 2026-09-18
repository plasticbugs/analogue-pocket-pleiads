// Load one frozen state into the RTL's memories, render a frame, write it out
// as a PNG in exactly the form MAME's snapshot takes (208x256, rotated), so it
// can be diffed against the reference renderer and against MAME with the same
// tool and no special-casing.
//
// Runs in a couple of seconds, which is the point: every video change gets
// checked against every captured state before it goes near a build.
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <zlib.h>
#include "Vtb_video_top.h"
#include "verilated.h"

static const int W = 256, H = 208;          // raw framebuffer
static const int OW = H, OH = W;            // after the cabinet's 90 degree turn

static Vtb_video_top *dut;
static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick() {
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    main_time++;
}

static std::vector<uint8_t> read_file(const char *p) {
    FILE *f = fopen(p, "rb");
    if (!f) { fprintf(stderr, "cannot open %s\n", p); exit(2); }
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    std::vector<uint8_t> v(n);
    if (fread(v.data(), 1, n, f) != (size_t)n) { fprintf(stderr, "short read %s\n", p); exit(2); }
    fclose(f);
    return v;
}

struct State {
    int vreg = 0, scroll = 0, cab = 0;
    std::vector<uint8_t> vram;
};

static State read_state(const char *path) {
    FILE *f = fopen(path, "r");
    if (!f) { fprintf(stderr, "cannot open %s\n", path); exit(2); }
    State st;
    char line[4096];
    bool in_vram = false;
    while (fgets(line, sizeof line, f)) {
        if (line[0] == '#' || line[0] == '\n') continue;
        if (in_vram) {
            for (char *p = line; p[0] && p[1] && p[0] != '\n'; p += 2) {
                char b[3] = {p[0], p[1], 0};
                st.vram.push_back((uint8_t)strtol(b, nullptr, 16));
            }
            continue;
        }
        char key[32]; char val[64];
        if (sscanf(line, "%31s %63s", key, val) != 2) continue;
        if (!strcmp(key, "VRAM")) { in_vram = true; continue; }
        if (!strcmp(key, "VREG"))   st.vreg   = (int)strtol(val, nullptr, 16);
        if (!strcmp(key, "SCROLL")) st.scroll = (int)strtol(val, nullptr, 16);
        if (!strcmp(key, "CAB"))    st.cab    = (int)strtol(val, nullptr, 10);
    }
    fclose(f);
    return st;
}

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

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    if (argc < 4) {
        fprintf(stderr, "usage: tb_video <state.txt> <rom.bin> <out.png>\n");
        return 2;
    }
    State st = read_state(argv[1]);
    std::vector<uint8_t> rom = read_file(argv[2]);
    if (st.vram.size() != 4096) {
        fprintf(stderr, "state has %zu bytes of video RAM, expected 4096\n", st.vram.size());
        return 2;
    }

    dut = new Vtb_video_top;
    dut->reset = 1; dut->dl_wr = 0; dut->dl_done = 0; dut->vr_we = 0;
    dut->videoreg = 0; dut->scroll = 0; dut->cab_cocktail = 0;
    for (int i = 0; i < 16; i++) tick();

    // Stream the ROM image in exactly as the platform's download path will.
    for (size_t i = 0; i < rom.size(); i++) {
        dut->dl_addr = (uint32_t)i;
        dut->dl_data = rom[i];
        dut->dl_wr = 1;
        tick();
    }
    dut->dl_wr = 0;
    dut->dl_done = 1; tick(); tick();
    dut->dl_done = 0; tick();

    // Load the frozen video RAM into the page the state says was displayed.
    int page = st.vreg & 1;
    for (int i = 0; i < 4096; i++) {
        dut->vr_addr = (uint16_t)((page << 12) | i);
        dut->vr_din = st.vram[i];
        dut->vr_we = 1;
        tick();
    }
    dut->vr_we = 0;

    dut->videoreg = (uint8_t)st.vreg;
    dut->scroll = (uint8_t)st.scroll;
    dut->cab_cocktail = (uint8_t)st.cab;
    dut->reset = 0;

    printf("game detected: %s (known=%d)\n",
           dut->game_phoenix ? "phoenix" : "pleiads", (int)dut->game_known);

    // One full frame, sampling the registered colour with the coordinates it
    // was registered against rather than the free-running counters.
    std::vector<uint8_t> fb((size_t)W * H * 3, 0);
    int frames = 0;
    bool prev_vblank = true;
    long guard = 0;
    int prev_h = dut->hcnt, prev_v = dut->vcnt;
    while (frames < 2 && guard++ < 20L * 352 * 256 * 8) {
        tick();
        // rgb, de and the blanking flags are all registered on the same edge
        // that advances the counters, so once the counters move, those signals
        // describe the pixel that was current before the move.
        if (dut->hcnt != prev_h || dut->vcnt != prev_v) {
            if (dut->de && frames == 1 && prev_h < W && prev_v < H) {
                size_t o = ((size_t)prev_v * W + prev_h) * 3;
                fb[o + 0] = (dut->rgb >> 16) & 0xFF;
                fb[o + 1] = (dut->rgb >> 8) & 0xFF;
                fb[o + 2] = dut->rgb & 0xFF;
            }
            bool vb = dut->vblank;
            if (vb && !prev_vblank) frames++;
            prev_vblank = vb;
            prev_h = dut->hcnt;
            prev_v = dut->vcnt;
        }
    }
    if (frames < 2) { fprintf(stderr, "never completed a frame\n"); return 3; }

    // Apply ROT90 the way MAME's snapshot does.
    std::vector<uint8_t> out((size_t)OW * OH * 3, 0);
    for (int y = 0; y < OH; y++)
        for (int x = 0; x < OW; x++) {
            int sx = y, sy = H - 1 - x;
            size_t s = ((size_t)sy * W + sx) * 3, d = ((size_t)y * OW + x) * 3;
            out[d] = fb[s]; out[d + 1] = fb[s + 1]; out[d + 2] = fb[s + 2];
        }
    write_png(argv[3], OW, OH, out);
    printf("wrote %s\n", argv[3]);
    delete dut;
    return 0;
}

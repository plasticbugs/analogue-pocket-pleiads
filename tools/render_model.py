#!/usr/bin/env python3
"""Reference renderer for Phoenix-family video hardware (Pleiads, Phoenix).

This is the executable spec the RTL is written against: it reads a frozen
machine state dumped by tools/dumpstate.lua plus the ROM image, and produces
the exact frame MAME produced for that state. When it is pixel-identical on a
spread of states, the semantics in it -- tile decode, colour selection,
transparency, the PROM resistor ladder, the palette normalisation, rotation --
are known to be right, and the RTL can be checked against it cheaply instead of
against MAME.

No third-party modules: only the standard library.

Usage:
    render_model.py <state.txt> <rom.bin> [out.png]
"""
import sys, os, struct, zlib

# --- ROM image layout (see pleiads.mra) -------------------------------------
PROG, BG, FG, PROMS = 0x0000, 0x4000, 0x5000, 0x6000
PROG_LEN = 0x4000

# Byte-sum of the 16 KB program region, used to tell the games apart. The core
# does the same sum in gateware while the image loads.
GAME_BY_SUM = {0x0016D34B: 'pleiads', 0x0015FA42: 'phoenix'}


# --- Palette: MAME's resistor-network model ---------------------------------
# phoenix_v.cpp feeds two 256x4 PROMs through:
#   RES_NET_VCC_5V | RES_NET_VBIAS_5V | RES_NET_VIN_OPEN_COL
#   per channel: { RES_NET_AMP_NONE, rBias=100, rGnd=270, num=2, R={270, 1} }
# R[0] = 270 ohm is the low bit (first PROM); R[1] = 1 ohm models the second
# PROM's direct connection, so the high bit dominates almost completely.
TTL_VOL = 0.05


def compute_res_net(inputs, r=(270.0, 1.0), r_bias=100.0, r_gnd=270.0,
                    v_bias=5.0, vcc=5.0):
    """Port of MAME compute_res_net() for the open-collector case used here.

    Open collector: a low input sinks through its resistor; a high input is
    high impedance and contributes nothing.
    """
    r_total, v = 0.0, 0.0
    for i, ri in enumerate(r):                      # pass 1: low inputs
        if ri != 0.0 and not ((inputs >> i) & 1):
            r_total += 1.0 / ri
            v += TTL_VOL / ri
    if r_bias != 0.0:
        r_total += 1.0 / r_bias
        v += v_bias / r_bias
    if r_gnd != 0.0:
        r_total += 1.0 / r_gnd
    # pass 2 (high inputs) contributes nothing when OpenCol is set
    r_total = 1.0 / r_total
    v *= r_total
    v = max(0.0, v)                                 # minout = 0, cut = 0
    return int(v * 255 / vcc + 0.4)


def _trunc_div(a, b):
    """C integer division: truncates toward zero, unlike Python's //."""
    q = abs(a) // abs(b)
    return q if (a >= 0) == (b >= 0) else -q


def _clamp(x):
    return 0 if x < 0 else (255 if x > 255 else x)


def normalize_range(entries):
    """Port of palette_t::normalize_range(0, 255).

    The defaults are lum_min=0, lum_max=255 (palette.h), *not* -1, so this
    always stretches the palette's luminance across the full range. Reading
    that wrong cost a round: the raw ladder tops out near 186 and every colour
    came out a fifth too dark, which looked plausible enough on screen to be
    mistaken for a resistor-network error.

    Kept in integer arithmetic with C truncation, because the y/1000 terms
    inside u and v are integer divisions in MAME and the rounding shows.
    """
    ys = [299 * r + 587 * g + 114 * b for (r, g, b) in entries]
    ymin, ymax = min(ys), max(ys)
    tmin, tmax = 0, 255
    out = []
    for (r, g, b), y in zip(entries, ys):
        u = _trunc_div((b - _trunc_div(y, 1000)) * 492, 1000)
        v = _trunc_div((r - _trunc_div(y, 1000)) * 877, 1000)
        if ymax == ymin:
            target = tmin
        else:
            target = tmin + _trunc_div((y - ymin) * (tmax - tmin + 1), (ymax - ymin))
        out.append((_clamp(target + _trunc_div(1140 * v, 1000)),
                    _clamp(target - _trunc_div(395 * u, 1000) - _trunc_div(581 * v, 1000)),
                    _clamp(target + _trunc_div(2032 * u, 1000))))
    return out


def build_palette(proms, game):
    """256 RGB entries, indexed by the 8-bit pen the tilemaps produce."""
    # Decode each PROM pair into 2-bit R, G, B (phoenix_decode_info).
    raw = []
    for i in range(256):
        p0, p1 = proms[i], proms[256 + i]
        red = ((p0 >> 0) & 1) | ((p1 << 1) & 2)
        grn = ((p0 >> 2) & 1) | ((p1 >> 1) & 2)
        blu = ((p0 >> 1) & 1) | ((p1 >> 0) & 2)
        raw.append((compute_res_net(red), compute_res_net(grn), compute_res_net(blu)))

    # Pens are bit-swizzled before they index the PROM. Pleiads swizzles all
    # eight bits (four palette banks); Phoenix only seven (two banks).
    pens = []
    for i in range(256):
        if game == 'phoenix':
            # bitswap<7>(i, 6,5,1,0,4,3,2) -- bit 7 of the pen is dropped
            col = (((i >> 6) & 1) << 6 | ((i >> 5) & 1) << 5 |
                   ((i >> 1) & 1) << 4 | ((i >> 0) & 1) << 3 |
                   ((i >> 4) & 1) << 2 | ((i >> 3) & 1) << 1 | ((i >> 2) & 1))
        else:
            # bitswap<8>(i, 7,6,5,1,0,4,3,2)
            col = (((i >> 7) & 1) << 7 | ((i >> 6) & 1) << 6 | ((i >> 5) & 1) << 5 |
                   ((i >> 1) & 1) << 4 | ((i >> 0) & 1) << 3 |
                   ((i >> 4) & 1) << 2 | ((i >> 3) & 1) << 1 | ((i >> 2) & 1))
        pens.append(raw[col])
    return normalize_range(pens)


# --- Tiles ------------------------------------------------------------------
def decode_tiles(rom_region):
    """-> list of 256 tiles, each an 8x8 list of rows of 8 pen values (0..3).

    charlayout: two separated bitplanes, plane 0 (MSB) at byte 0x800, plane 1
    (LSB) at 0; one byte per row.

    The x order is the trap. charlayout gives xoffset {7,6,5,4,3,2,1,0} and the
    driver calls it "pretty straightforward", but MAME counts bit offsets from
    the MSB -- offset 0 is bit 7 of the byte. So offset 7, which is what column
    0 gets, is the byte's *least* significant bit, and the leftmost pixel comes
    from bit 0, not bit 7. Getting this backwards mirrors every tile about its
    own centre, which looks almost right on a starfield and completely wrong on
    text.
    """
    tiles = []
    for n in range(256):
        rows = []
        for y in range(8):
            lsb = rom_region[n * 8 + y]
            msb = rom_region[0x800 + n * 8 + y]
            rows.append([(((msb >> x) & 1) << 1) | ((lsb >> x) & 1)
                         for x in range(8)])
        tiles.append(rows)
    return tiles


# --- State file -------------------------------------------------------------
def read_state(path):
    st, vram = {}, bytearray()
    with open(path) as f:
        mode = None
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'):
                continue
            if mode == 'vram':
                vram += bytes.fromhex(line)
                continue
            parts = line.split()
            if parts[0] == 'VRAM':
                mode = 'vram'
                continue
            st[parts[0]] = parts[1]
    st['VRAM'] = bytes(vram)
    return st


# --- Renderer ---------------------------------------------------------------
W, H = 256, 208          # raw framebuffer, before the cabinet's 90 degree turn


def render(state, rom):
    game = state.get('GAME', 'pleiads')
    vram = state['VRAM']
    vreg = int(state['VREG'], 16)
    scroll = int(state['SCROLL'], 16)
    cab = int(state.get('CAB', '0'))

    bg_tiles = decode_tiles(rom[BG:BG + 0x1000])
    fg_tiles = decode_tiles(rom[FG:FG + 0x1000])
    palette = build_palette(rom[PROMS:PROMS + 0x200], game)

    # Video register. Phoenix has one palette-select bit, Pleiads two.
    page = vreg & 1
    pal_bank = ((vreg >> 1) & 3) if game != 'phoenix' else ((vreg >> 1) & 1)
    cocktail = bool(page) and bool(cab)

    # The dump holds the page the CPU had mapped, which is the page displayed.
    fb = bytearray(W * H)

    # Background: opaque, scrolled in X. The tilemap is 32x32 tiles = 256x256
    # pixels, so the scroll wraps in 256.
    for sy in range(H):
        ty, fy = (sy >> 3), (sy & 7)
        for sx in range(W):
            mx = (sx + scroll) & 0xFF
            tx, fx = (mx >> 3), (mx & 7)
            code = vram[0x800 + ty * 32 + tx]
            col = (code >> 5) | 0x00 | (pal_bank << 4)
            fb[sy * W + sx] = (col << 2) | bg_tiles[code][fy][fx]

    # Foreground: pen 0 transparent, not scrolled.
    for sy in range(H):
        ty, fy = (sy >> 3), (sy & 7)
        for sx in range(W):
            tx, fx = (sx >> 3), (sx & 7)
            code = vram[ty * 32 + tx]
            pen = fg_tiles[code][fy][fx]
            if pen:
                col = (code >> 5) | 0x08 | (pal_bank << 4)
                fb[sy * W + sx] = (col << 2) | pen

    if cocktail:
        fb = bytearray(fb[(H - 1 - y) * W + (W - 1 - x)]
                       for y in range(H) for x in range(W))
    return fb, palette


def rotate90(fb, palette):
    """Apply the cabinet's ROT90 the same way MAME's snapshot does.

    MAME writes a 208x256 PNG from the 256x208 raw bitmap. Which of the two
    90-degree turns it is was settled by diffing, not by reasoning.
    """
    ow, oh = H, W                       # 208 x 256
    out = bytearray(ow * oh * 3)
    for y in range(oh):
        for x in range(ow):
            src = fb[(H - 1 - x) * W + y]
            r, g, b = palette[src]
            o = (y * ow + x) * 3
            out[o], out[o + 1], out[o + 2] = r, g, b
    return ow, oh, bytes(out)


def write_png(path, w, h, rgb):
    raw = b''.join(b'\x00' + rgb[y * w * 3:(y + 1) * w * 3] for y in range(h))
    def chunk(tag, data):
        c = tag + data
        return struct.pack('>I', len(data)) + c + struct.pack('>I', zlib.crc32(c))
    png = (b'\x89PNG\r\n\x1a\n'
           + chunk(b'IHDR', struct.pack('>IIBBBBB', w, h, 8, 2, 0, 0, 0))
           + chunk(b'IDAT', zlib.compress(raw, 9))
           + chunk(b'IEND', b''))
    open(path, 'wb').write(png)


def main():
    if len(sys.argv) < 3:
        sys.exit(__doc__)
    state_path, rom_path = sys.argv[1], sys.argv[2]
    out = sys.argv[3] if len(sys.argv) > 3 else \
        state_path.replace('state_', 'ref_').replace('.txt', '.png')

    rom = open(rom_path, 'rb').read()
    state = read_state(state_path)
    s = sum(rom[PROG:PROG + PROG_LEN]) & 0xFFFFFFFF
    detected = GAME_BY_SUM.get(s)
    if detected and 'GAME' in state and detected != state['GAME']:
        sys.exit(f'error: state says {state["GAME"]} but the ROM sums to {detected}')
    state.setdefault('GAME', detected or 'pleiads')

    fb, palette = render(state, rom)
    w, h, rgb = rotate90(fb, palette)
    write_png(out, w, h, rgb)
    print(f'wrote {out} ({w}x{h}) game={state["GAME"]} '
          f'vreg={state["VREG"]} scroll={state["SCROLL"]}')


if __name__ == '__main__':
    main()

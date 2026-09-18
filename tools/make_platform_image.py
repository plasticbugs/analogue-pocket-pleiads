#!/usr/bin/env python3
"""Build the Pocket's 521x165 platform banner from frames the core rendered.

The format was worked out by decoding the banners already on the card rather
than guessed, because two of the three properties are not what you would
assume:

  * 521 x 165 as displayed, but stored **rotated**: 165 pixels per row, 521
    rows. Read it the other way and you get sheared noise.
  * RGB565 **big-endian**. Little-endian decodes to a legible but blue-cast
    image, which is exactly the sort of wrong that looks like a bad dump.

Storage index (x, y) maps to display (row = x, col = 520 - y).

Usage: make_platform_image.py <out.bin> <frame.png> [frame2.png ...]
"""
import sys, os, struct, zlib

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import importlib.util as iu
_s = iu.spec_from_file_location('df', os.path.join(
    os.path.dirname(os.path.abspath(__file__)), 'diff_frames.py'))
df = iu.module_from_spec(_s); _s.loader.exec_module(df)

DW, DH = 521, 165          # as displayed
SW, SH = 165, 521          # as stored


def scaled(path, th):
    """Nearest-neighbour scale to height `th`, keeping the aspect."""
    w, h, px = df.read_png(path)
    tw = max(1, w * th // h)
    out = bytearray(tw * th * 3)
    for y in range(th):
        sy = y * h // th
        for x in range(tw):
            sx = x * w // tw
            s = (sy * w + sx) * 3
            d = (y * tw + x) * 3
            out[d:d + 3] = px[s:s + 3]
    return tw, th, out


def main():
    if len(sys.argv) < 3:
        sys.exit(__doc__)
    out_path, frames = sys.argv[1], sys.argv[2:]

    canvas = bytearray(DW * DH * 3)          # black
    tiles = [scaled(f, DH) for f in frames]
    total = sum(t[0] for t in tiles)
    gap = (DW - total) // (len(tiles) + 1)
    x = gap
    for (tw, th, px) in tiles:
        for y in range(th):
            for i in range(tw):
                if 0 <= x + i < DW:
                    s = (y * tw + i) * 3
                    d = (y * DW + x + i) * 3
                    canvas[d:d + 3] = px[s:s + 3]
        x += tw + gap

    # Store rotated, big-endian RGB565.
    buf = bytearray(SW * SH * 2)
    for row in range(DH):
        for col in range(DW):
            o = (row * DW + col) * 3
            r, g, b = canvas[o], canvas[o + 1], canvas[o + 2]
            v = ((r >> 3) << 11) | ((g >> 2) << 5) | (b >> 3)
            sx, sy = row, (DW - 1 - col)
            struct.pack_into('>H', buf, (sy * SW + sx) * 2, v)
    open(out_path, 'wb').write(bytes(buf))
    print(f'wrote {out_path} ({len(buf)} bytes, stored {SW}x{SH}, '
          f'displays {DW}x{DH}, RGB565 big-endian)')

    raw = b''.join(b'\x00' + bytes(canvas[y * DW * 3:(y + 1) * DW * 3]) for y in range(DH))
    def ch(t, d):
        c = t + d
        return struct.pack('>I', len(d)) + c + struct.pack('>I', zlib.crc32(c))
    open(out_path + '.png', 'wb').write(
        b'\x89PNG\r\n\x1a\n'
        + ch(b'IHDR', struct.pack('>IIBBBBB', DW, DH, 8, 2, 0, 0, 0))
        + ch(b'IDAT', zlib.compress(raw, 9)) + ch(b'IEND', b''))


if __name__ == '__main__':
    main()

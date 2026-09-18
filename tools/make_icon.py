#!/usr/bin/env python3
"""Build the Pocket's 36x36 core icon from a frame the core itself rendered.

The format was worked out by decoding a sibling core's icon.bin rather than
guessed: 36 x 36 pixels, RGB565, little-endian, no header -- 2592 bytes.

Taking the picture from an actual rendered frame means the icon is the game's
own artwork at the game's own colours, straight through the same palette the
hardware produces.

Usage: make_icon.py <frame.png> <out.bin> [x y size]
"""
import sys, os, zlib, struct

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import importlib.util as iu
_s = iu.spec_from_file_location('df', os.path.join(
    os.path.dirname(os.path.abspath(__file__)), 'diff_frames.py'))
df = iu.module_from_spec(_s); _s.loader.exec_module(df)

N = 36


def main():
    if len(sys.argv) < 3:
        sys.exit(__doc__)
    w, h, px = df.read_png(sys.argv[1])
    x0 = int(sys.argv[3]) if len(sys.argv) > 3 else 0
    y0 = int(sys.argv[4]) if len(sys.argv) > 4 else 0
    size = int(sys.argv[5]) if len(sys.argv) > 5 else min(w, h)
    x0 = max(0, min(x0, w - size))
    y0 = max(0, min(y0, h - size))

    # Box filter down to 36x36, averaging in linear-ish space (the source is
    # already a small image, so a plain mean is honest enough).
    out = bytearray()
    for iy in range(N):
        for ix in range(N):
            sx0 = x0 + ix * size // N
            sx1 = max(sx0 + 1, x0 + (ix + 1) * size // N)
            sy0 = y0 + iy * size // N
            sy1 = max(sy0 + 1, y0 + (iy + 1) * size // N)
            r = g = b = n = 0
            for sy in range(sy0, sy1):
                for sx in range(sx0, sx1):
                    o = (sy * w + sx) * 3
                    r += px[o]; g += px[o + 1]; b += px[o + 2]; n += 1
            r //= n; g //= n; b //= n
            out += struct.pack('<H', ((r >> 3) << 11) | ((g >> 2) << 5) | (b >> 3))

    open(sys.argv[2], 'wb').write(bytes(out))
    print(f'wrote {sys.argv[2]} ({len(out)} bytes, {N}x{N} RGB565 LE) '
          f'from {sys.argv[1]} at ({x0},{y0}) size {size}')

    # A PNG of the same thing, so it can be looked at before it ships.
    prev = bytearray()
    for i in range(N * N):
        v = struct.unpack_from('<H', bytes(out), i * 2)[0]
        prev += bytes(((v >> 11 & 0x1f) * 255 // 31,
                       (v >> 5 & 0x3f) * 255 // 63,
                       (v & 0x1f) * 255 // 31))
    raw = b''.join(b'\x00' + bytes(prev[y * N * 3:(y + 1) * N * 3]) for y in range(N))
    def ch(t, d):
        c = t + d
        return struct.pack('>I', len(d)) + c + struct.pack('>I', zlib.crc32(c))
    open(sys.argv[2] + '.png', 'wb').write(
        b'\x89PNG\r\n\x1a\n'
        + ch(b'IHDR', struct.pack('>IIBBBBB', N, N, 8, 2, 0, 0, 0))
        + ch(b'IDAT', zlib.compress(bytes(raw), 9)) + ch(b'IEND', b''))


if __name__ == '__main__':
    main()

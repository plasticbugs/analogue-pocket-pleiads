#!/usr/bin/env python3
"""Draw a recording as a picture: waveform envelope over a spectrogram.

    plot_audio.py in.wav out.png [seconds] [mark_s ...]

No numpy or matplotlib on this machine, so the FFT is compare_audio's and the
PNG is written by hand. One column is 20 ms; the spectrogram runs 0-4 kHz,
linear, bottom to top, which is where the melody and both effects live. Thin
vertical lines are seconds; bright ones are the marks given on the command line.
"""
import math, os, struct, sys, zlib
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import compare_audio as ca

W_PER_S, WAVE_H, SPEC_H, NFFT, FMAX = 50, 90, 200, 2048, 4000


def png(path, w, h, rgb):
    raw = b''.join(b'\x00' + bytes(rgb[y * w * 3:(y + 1) * w * 3]) for y in range(h))
    def chunk(t, d):
        c = struct.pack('>I', len(d)) + t + d
        return c + struct.pack('>I', zlib.crc32(t + d) & 0xffffffff)
    open(path, 'wb').write(b'\x89PNG\r\n\x1a\n'
        + chunk(b'IHDR', struct.pack('>IIBBBBB', w, h, 8, 2, 0, 0, 0))
        + chunk(b'IDAT', zlib.compress(raw, 9)) + chunk(b'IEND', b''))


def heat(v):
    v = max(0.0, min(1.0, v))
    stops = [(0, (8, 8, 20)), (.35, (60, 20, 120)), (.6, (200, 50, 90)),
             (.85, (250, 170, 40)), (1, (255, 250, 210))]
    for (a, ca_), (b, cb) in zip(stops, stops[1:]):
        if v <= b:
            t = (v - a) / (b - a)
            return tuple(int(x + (y - x) * t) for x, y in zip(ca_, cb))
    return stops[-1][1]


def main():
    src, dst = sys.argv[1], sys.argv[2]
    secs = float(sys.argv[3]) if len(sys.argv) > 3 else 20.0
    marks = [float(x) for x in sys.argv[4:]]
    x, sr = ca.read_wav(src)
    x = x[:int(secs * sr)]
    w, h = int(secs * W_PER_S), WAVE_H + SPEC_H
    hop = sr // W_PER_S
    img = [12] * (w * h * 3)

    def put(px, py, c):
        if 0 <= px < w and 0 <= py < h:
            i = (py * w + px) * 3
            img[i:i + 3] = c

    win = [0.5 - 0.5 * math.cos(2 * math.pi * i / NFFT) for i in range(NFFT)]
    kmax = int(FMAX * NFFT / sr)
    cols = []
    for cx in range(w):
        s = cx * hop
        seg = x[s:s + hop] or [0]
        lo, hi = min(seg), max(seg)
        mid = WAVE_H // 2
        for py in range(mid - int(hi / 32768 * mid), mid - int(lo / 32768 * mid) + 1):
            put(cx, py, (120, 200, 255))
        fr = x[s:s + NFFT]
        fr = fr + [0] * (NFFT - len(fr))
        sp = ca._fft([a * b for a, b in zip(fr, win)])
        cols.append([abs(sp[k]) for k in range(kmax)])
    ref = 20 * math.log10(32768 * NFFT / 4)
    for cx, mags in enumerate(cols):
        for py in range(SPEC_H):
            k = int((SPEC_H - 1 - py) * kmax / SPEC_H)
            db = 20 * math.log10(mags[k] + 1e-9) - ref
            put(cx, WAVE_H + py, heat((db + 70) / 60))
    for s in range(int(secs) + 1):
        for py in range(h):
            if py % 4 == 0:
                put(s * W_PER_S, py, (70, 70, 80))
    for m in marks:
        for py in range(h):
            put(int(m * W_PER_S), py, (90, 255, 140))
    png(dst, w, h, img)
    print(f'wrote {dst}: {w}x{h}, {secs:.0f} s of {os.path.basename(src)}')


if __name__ == '__main__':
    main()

#!/usr/bin/env python3
"""Compare two mono WAVs: peak, RMS and per-band energy, plus a correlation.

Sample-exactness is the wrong bar for this board. Pleiads' melody chip has
never been dumped and its effects section is a behavioural model of analogue
circuitry whose component values MAME's own comments mark as unknown. What can
be held to is that our rendering has the same level, the same spectral balance
and the same shape over time as MAME's.

A ratio near 1.00 in every band is the pass. METHODOLOGY section 4 -- the same
method that proved a previous core's output was 6 dB low: same command stream,
same window, ratio 2.06.

Usage: compare_audio.py <a.wav> <b.wav> [window_seconds]
"""
import sys, wave, struct, math, cmath


def read_wav(p):
    with wave.open(p, 'rb') as w:
        n, ch, sw, sr = w.getnframes(), w.getnchannels(), w.getsampwidth(), w.getframerate()
        raw = w.readframes(n)
    if sw != 2:
        sys.exit(f'{p}: {sw*8}-bit not supported')
    s = struct.unpack(f'<{len(raw)//2}h', raw)
    if ch > 1:
        s = s[::ch]
    return list(s), sr


def rms(x):
    return math.sqrt(sum(v * v for v in x) / len(x)) if x else 0.0


def _fft(x):
    """Iterative radix-2 FFT, zero-padded to a power of two. No numpy."""
    n = 1
    while n < len(x):
        n <<= 1
    a = [complex(v, 0.0) for v in x] + [0j] * (n - len(x))
    j = 0
    for i in range(1, n):
        bit = n >> 1
        while j & bit:
            j ^= bit
            bit >>= 1
        j |= bit
        if i < j:
            a[i], a[j] = a[j], a[i]
    ln = 2
    while ln <= n:
        ang = -2 * math.pi / ln
        wl = cmath.exp(1j * ang)
        for i in range(0, n, ln):
            w = 1 + 0j
            for k in range(i, i + ln // 2):
                u = a[k]
                v = a[k + ln // 2] * w
                a[k] = u + v
                a[k + ln // 2] = u - v
                w *= wl
        ln <<= 1
    return a


def band_energies(x, sr, bands):
    """Energy in each band, from one FFT of a Hann-windowed 8192-point slice."""
    m = 8192
    seg = x[:m] if len(x) >= m else x + [0] * (m - len(x))
    win = [0.5 - 0.5 * math.cos(2 * math.pi * i / m) for i in range(m)]
    spec = _fft([v * w for v, w in zip(seg, win)])
    half = m // 2
    out = []
    for f0, f1 in bands:
        k0 = max(1, int(f0 * m / sr))
        k1 = min(half, max(k0 + 1, int(f1 * m / sr)))
        out.append(sum(abs(spec[k]) ** 2 for k in range(k0, k1)))
    return out


BANDS = [(20, 200), (200, 600), (600, 1500), (1500, 4000), (4000, 12000)]


def main():
    if len(sys.argv) < 3:
        sys.exit(__doc__)
    a, sra = read_wav(sys.argv[1])
    b, srb = read_wav(sys.argv[2])
    if sra != srb:
        sys.exit(f'sample rates differ: {sra} vs {srb}')
    win = float(sys.argv[3]) if len(sys.argv) > 3 else 4.0
    n = min(len(a), len(b))
    a, b = a[:n], b[:n]
    print(f'{sys.argv[1]} vs {sys.argv[2]}: {n} samples at {sra} Hz '
          f'({n/sra:.1f} s)')

    pa, pb = max(abs(v) for v in a), max(abs(v) for v in b)
    ra, rb = rms(a), rms(b)
    print(f'\n{"":16} {"A":>12} {"B":>12} {"B/A":>8}')
    print(f'{"peak":16} {pa:>12} {pb:>12} {pb/pa if pa else 0:>8.3f}')
    print(f'{"rms":16} {ra:>12.1f} {rb:>12.1f} {rb/ra if ra else 0:>8.3f}')

    # A few windows across the recording, so a difference that only appears
    # during one effect is not averaged away.
    seg = int(win * sra)
    print(f'\nRMS over {win:.0f} s windows:')
    print(f'{"window":>10} {"A":>10} {"B":>10} {"B/A":>8}')
    for s in range(0, n - seg + 1, seg):
        wa, wb = a[s:s + seg], b[s:s + seg]
        x, y = rms(wa), rms(wb)
        print(f'{s/sra:>9.0f}s {x:>10.1f} {y:>10.1f} {y/x if x else 0:>8.3f}')

    mid = a[n // 3: n // 3 + min(seg, n // 3)]
    midb = b[n // 3: n // 3 + min(seg, n // 3)]
    print(f'\nband energy over a {len(mid)/sra:.1f} s window from {n//3/sra:.0f}s:')
    print(f'{"band Hz":>14} {"A":>12} {"B":>12} {"B/A":>8}')
    EA = band_energies(mid, sra, BANDS)
    EB = band_energies(midb, sra, BANDS)
    for (f0, f1), ea, eb in zip(BANDS, EA, EB):
        print(f'{f"{f0}-{f1}":>14} {ea:>12.3e} {eb:>12.3e} '
              f'{(eb/ea if ea else 0):>8.3f}')

    # Normalised correlation, to say whether they are the same waveform or
    # merely the same kind of noise.
    ma = sum(a) / n
    mb = sum(b) / n
    da = [v - ma for v in a[:seg]]
    db = [v - mb for v in b[:seg]]
    num = sum(x * y for x, y in zip(da, db))
    den = math.sqrt(sum(x * x for x in da) * sum(y * y for y in db))
    print(f'\ncorrelation over the first {seg/sra:.0f} s: {num/den if den else 0:+.4f}')


if __name__ == '__main__':
    main()

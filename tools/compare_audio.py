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
    """Energy in each band, averaged over the whole of `x`.

    Hann-windowed 8192-point frames at 50% overlap, power spectra averaged.

    This used to take a single frame from the *start* of whatever it was
    given, which is 0.17 s however long the window was. It read the one-second
    window at 3 s as silent — Phoenix's tune starts at 3.382 s — while its RMS
    was 2900, and it meant the bench's "band energy over a 4.0 s window"
    covered a twenty-third of that window.
    """
    m = 8192
    if len(x) < m:
        x = x + [0] * (m - len(x))
    win = [0.5 - 0.5 * math.cos(2 * math.pi * i / m) for i in range(m)]
    half = m // 2
    idx = []
    for f0, f1 in bands:
        k0 = max(1, int(f0 * m / sr))
        k1 = min(half, max(k0 + 1, int(f1 * m / sr)))
        idx.append((k0, k1))
    out = [0.0] * len(bands)
    frames = 0
    for s in range(0, len(x) - m + 1, m // 2):
        spec = _fft([v * w for v, w in zip(x[s:s + m], win)])
        pwr = [abs(spec[k]) ** 2 for k in range(half)]
        for i, (k0, k1) in enumerate(idx):
            out[i] += sum(pwr[k0:k1])
        frames += 1
    return [v / frames for v in out] if frames else out


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

    spectrogram(a, b, sra)


SPEC_BANDS = [(150, 400), (400, 800), (800, 1600), (1600, 3200), (3200, 8000)]


def spectrogram(a, b, sr):
    """Band energies second by second across the whole recording.

    This exists because the summary above does not cover the recording. It
    correlates the first four seconds and takes one band window a third of the
    way in, and Phoenix shipped on that: the game does not start until 3.4 s,
    so every number above described attract mode while the in-game music was
    wrong. Anything that only sounds during play has to be looked at where it
    sounds.

    Band energy rather than correlation, because two square-wave oscillators
    free-running against each other are spectrally identical and correlate at
    zero. Windows where A is silent are skipped; the ratio there is the
    quotient of two noise floors and means nothing.
    """
    n = min(len(a), len(b))
    print(f'\nband energies per second, B/A  (1.00 = same spectrum)')
    print(f'{"t":>5}  ' + ' '.join(f'{f0}-{f1}'.rjust(9) for f0, f1 in SPEC_BANDS))
    errs = []
    for s in range(0, n - sr + 1, sr):
        wa, wb = a[s:s + sr], b[s:s + sr]
        if rms(wa) < 100:
            print(f'{s//sr:>4}s  ' + '   (silent)'.ljust(9))
            continue
        ea = band_energies(wa, sr, SPEC_BANDS)
        eb = band_energies(wb, sr, SPEC_BANDS)
        errs.append(sum(abs(math.log((y + 1) / (x + 1))) for x, y in zip(ea, eb))
                    / len(ea))
        print(f'{s//sr:>4}s  ' + ' '.join(
            f'{(y/x if x else 0):9.2f}' for x, y in zip(ea, eb)))
    if errs:
        print(f'\nmean |log| band-energy error: {sum(errs)/len(errs):.3f}'
              f'   (0 = identical spectrum)')


if __name__ == '__main__':
    main()

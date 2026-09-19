#!/usr/bin/env python3
"""Bit-exact integer model of rtl/phoenix_reverb.sv.

    reverb_model.py in.wav out.wav mode      mode: 0 off, 1 light, 2 medium, 3 heavy

Three feedback combs with a one-pole low-pass in each loop, in the same
fixed-point arithmetic as the gateware: arithmetic right shifts, 18-bit
intermediates, saturation to 16 bits at every sum. The bench holds the RTL to
this sample for sample, so a slip in the port -- a read taken a clock early, a
shift that went logical -- shows as a difference rather than as a sound.
"""
import os, sys, wave, struct
D = (1426, 1781, 1973)
N = 2048


def sat(v):
    return 32767 if v > 32767 else -32768 if v < -32768 else v


def run(x, mode):
    lines = [[0] * N for _ in D]
    lp = [0, 0, 0]
    wp = 0
    out = []
    long_tail = mode == 3
    dc = 0                                  # the input's DC, 10 fractional bits
    for s in x:
        # The send into the combs is high-passed at 7.5 Hz; the dry path is
        # not. A comb's gain at 0 Hz is 1/(1-g), and this board's mix carries
        # a DC offset that three of them turned into wholesale clipping.
        dc += s - (dc >> 10)
        send = sat(s - (dc >> 10))
        r = [lines[i][(wp - D[i]) % N] for i in range(3)]
        lp = [sat(lp[i] + ((r[i] - lp[i]) >> 2)) for i in range(3)]
        wet = sum(lp)
        for i in range(3):
            l = lp[i]
            g = (l >> 1) + (l >> 2) + (l >> 4) if long_tail else (l >> 1) + (l >> 3)
            lines[i][wp] = sat(send + g)
        if mode == 0:
            out.append(s)
        elif mode == 2:
            out.append(sat(s + (wet >> 2)))
        else:
            out.append(sat(s + (wet >> 3) + (wet >> 4)))
        wp = (wp + 1) % N
    return out


def main():
    src, dst, mode = sys.argv[1], sys.argv[2], int(sys.argv[3])
    w = wave.open(src, 'rb')
    sr, n = w.getframerate(), w.getnframes()
    x = list(struct.unpack(f'<{n}h', w.readframes(n)))
    w.close()
    y = run(x, mode)
    o = wave.open(dst, 'wb')
    o.setnchannels(1); o.setsampwidth(2); o.setframerate(sr)
    o.writeframes(struct.pack(f'<{len(y)}h', *y)); o.close()
    print(f'wrote {dst}: {len(y)} samples, mode {mode}')


if __name__ == '__main__':
    main()

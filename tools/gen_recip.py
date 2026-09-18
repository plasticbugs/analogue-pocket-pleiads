#!/usr/bin/env python3
"""Find exact reciprocal multipliers for the constant divisions in the RTL.

Written as `x / 48000`, Quartus instantiates a general divider: about 670 logic
elements each, and rtl/pleiads_sound.sv has enough of them that it synthesised
to 14 335 -- most of the device, for the sound section alone. Replacing each
with `(x * M) >> S` costs one DSP block.

That is only safe if the substitution is *exact* over the range the operand can
actually take, so this computes the smallest S for which it is, and checks it
rather than trusting the usual bound.

Usage: gen_recip.py [divisor:operand_bits ...]
"""
import sys


def find(D, bits, max_s=56):
    """Smallest (S, M) with (x*M)>>S == x//D for every x < 2**bits."""
    xmax = (1 << bits) - 1
    for S in range(16, max_s):
        M = (1 << S) // D + 1
        # Exhaustive below 300k, then every value where the quotient steps --
        # the only places the two can disagree are at multiples of D.
        bad = False
        for x in range(0, min(xmax, 300000)):
            if (x * M) >> S != x // D:
                bad = True
                break
        if not bad:
            k = 300000 // D
            while k * D <= xmax:
                for x in (k * D - 1, k * D, k * D + 1):
                    if 0 <= x <= xmax and (x * M) >> S != x // D:
                        bad = True
                        break
                if bad:
                    break
                k += 1
        if not bad and (xmax * M) >> S == xmax // D:
            return S, M
    return None, None


DEFAULT = [(48000, 26, 'RATE'), (33768, 24, 'T3DIV'), (67, 21, 'R67'), (80, 21, 'R80')]


def check_rtl(path):
    """Verify the constants actually in the RTL, exhaustively.

    Not a formality. An earlier /80 pair came from a sparse search and was
    wrong for every operand above 699 119, where the real ones reach 1 540 049.
    The audio bench did not catch it, because the envelopes that division
    serves were idle through most of the captured command stream -- a test
    passing is not the same as a substitution being correct.
    """
    import re
    src = open(path).read()
    pairs = re.findall(r'(\w+)_S\s*=\s*(\d+),\s*\1_M\s*=\s*(\d+)', src)
    ranges = {name: (D, bits) for D, bits, name in DEFAULT}
    if not pairs:
        sys.exit(f'{path}: found no reciprocal constants to check')
    bad = 0
    for name, S, M in pairs:
        if name not in ranges:
            print(f'{name:8} not in the known set, skipped')
            continue
        D, bits = ranges[name]
        S, M = int(S), int(M)
        xmax = (1 << bits) - 1
        first = next((x for x in range(xmax + 1) if (x * M) >> S != x // D), None)
        if first is None:
            print(f'{name:8} /{D:<6} S={S:<3} M={M:<10} exact over x < 2^{bits}')
        else:
            print(f'{name:8} /{D:<6} S={S:<3} M={M:<10} WRONG from x={first}')
            bad += 1
    return bad


def main():
    if '--check' in sys.argv:
        import os
        root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
        sys.exit(1 if check_rtl(os.path.join(root, 'rtl/pleiads_sound.sv')) else 0)
    items = DEFAULT
    if len(sys.argv) > 1:
        items = []
        for a in sys.argv[1:]:
            d, b = a.split(':')
            items.append((int(d), int(b), f'D{d}'))
    for D, bits, name in items:
        S, M = find(D, bits)
        if S is None:
            print(f'{name}: no exact reciprocal for /{D} over x < 2^{bits}')
            continue
        print(f"localparam int {name}_S = {S}, {name}_M = {M};"
              f"   // x/{D}, exact for x < 2^{bits}, {bits}x{M.bit_length()} multiply")


if __name__ == '__main__':
    main()

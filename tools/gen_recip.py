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


def main():
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

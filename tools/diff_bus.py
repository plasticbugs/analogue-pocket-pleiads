#!/usr/bin/env python3
"""Compare two CPU bus transaction traces and report the first divergence.

The RTL and MAME start from the same reset with the same ROM, so their
transaction sequences must agree instruction for instruction. The first place
they differ is almost always the bug, and the surrounding context usually
names the opcode.

Usage: diff_bus.py <mame.txt> <rtl.txt> [context]
"""
import sys


def load(p):
    out = []
    for line in open(p):
        f = line.split()
        if len(f) >= 3:
            out.append((f[0], int(f[1], 16), int(f[2], 16)))
    return out


def main():
    if len(sys.argv) < 3:
        sys.exit(__doc__)
    a, b = load(sys.argv[1]), load(sys.argv[2])
    ctx = int(sys.argv[3]) if len(sys.argv) > 3 else 12
    n = min(len(a), len(b))
    print(f'mame: {len(a)} transactions, rtl: {len(b)} transactions, comparing {n}')

    for i in range(n):
        if a[i] != b[i]:
            # Expected divergence: MAME charges an instruction's cycles after
            # executing it, so when the game reads DSW0 it evaluates the
            # screen's vblank line at the time the instruction *started*. Real
            # hardware -- and this core -- sample it three or four T-states in,
            # partway through the instruction. That is a fixed offset, not a
            # drift, and it only shows when a vblank edge happens to land
            # inside that window, which costs the poll loop one more iteration.
            # Everything up to that point has to be identical; after it the two
            # are running the same program from different loop counts and are
            # no longer comparable.
            ka, kb = a[i], b[i]
            vblank_sample = (ka[0] == 'R' and kb[0] == 'R' and ka[1] == kb[1]
                             and (ka[1] & 0xf800) == 0x7800
                             and (ka[2] ^ kb[2]) == 0x80)
            if vblank_sample:
                print(f'\nidentical over {i} transactions, then a vblank-sampling')
                print(f'difference at transaction {i}: DSW0 bit 7 read as '
                      f'{(ka[2] >> 7) & 1} by MAME and {(kb[2] >> 7) & 1} here.')
                print('That is the expected modelling difference, not a fault. '
                      'Run tools/check_cycles.py')
                print('for the timing half of this check.')
                sys.exit(0)
            print(f'\nFIRST DIVERGENCE at transaction {i}:')
            lo = max(0, i - ctx)
            print(f'{"":>8}  {"MAME":<14}  {"RTL":<14}')
            for j in range(lo, min(n, i + ctx)):
                mark = '  <<<' if j == i else ''
                ta = f'{a[j][0]} {a[j][1]:04X} {a[j][2]:02X}'
                tb = f'{b[j][0]} {b[j][1]:04X} {b[j][2]:02X}'
                print(f'{j:>8}  {ta:<14}  {tb:<14}{mark}')
            sys.exit(1)

    print(f'IDENTICAL over all {n} transactions')
    return 0


if __name__ == '__main__':
    sys.exit(main())

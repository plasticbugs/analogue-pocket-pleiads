#!/usr/bin/env python3
"""Check the RTL's T-state count for every instruction it actually executed
against MAME's table.

The bus trace bench pins down *what* the processor does. This pins down *how
long it takes*, which is the other half and the half a transaction-by-
transaction comparison is bad at: a wrong cycle count does not change the
sequence at all until it has accumulated enough to move a vblank poll, and
then it looks like a fault thousands of instructions away from its cause.

The expected counts are parsed out of ref/mame/i8085.cpp rather than
transcribed, so they cannot drift from the oracle. Taken-branch extras (JMP +3,
CALL +9, conditional RET +6) are applied when the trace shows the transfer was
taken.

Usage: check_cycles.py <rtl_bus.txt> [rom.bin]
"""
import os, re, sys
from collections import defaultdict

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CLOCKS_PER_TSTATE = 16          # 44 MHz system clock, 2.75 MHz T-states


def mame_table():
    src = open(os.path.join(ROOT, 'ref/mame/i8085.cpp')).read()
    m = re.search(r'lut_cycles_8085\[256\]=\{(.*?)\};', src, re.S)
    if not m:
        sys.exit('could not find lut_cycles_8085 in ref/mame/i8085.cpp')
    body = re.sub(r'/\*.*?\*/', '', m.group(1), flags=re.S)
    vals = [int(x) for x in re.findall(r'\d+', body)]
    if len(vals) != 256:
        sys.exit(f'parsed {len(vals)} cycle entries, expected 256')
    return vals


JMP  = {0xc3, 0xdd, 0xfd} | {0xc2, 0xca, 0xd2, 0xda, 0xe2, 0xea, 0xf2, 0xfa}
CALL = {0xcd} | {0xc4, 0xcc, 0xd4, 0xdc, 0xe4, 0xec, 0xf4, 0xfc}
RETC = {0xc0, 0xc8, 0xd0, 0xd8, 0xe0, 0xe8, 0xf0, 0xf8}


def main():
    if len(sys.argv) < 2:
        sys.exit(__doc__)
    lut = mame_table()

    rows = []
    for line in open(sys.argv[1]):
        f = line.split()
        if len(f) >= 5:
            rows.append((f[0], int(f[1], 16), int(f[2], 16), int(f[3]), int(f[4])))

    # Instruction boundaries are the transactions flagged as opcode fetches.
    fetches = [i for i, r in enumerate(rows) if r[4] == 1]
    print(f'{len(rows)} transactions, {len(fetches)} instructions')

    stats = defaultdict(lambda: defaultdict(int))
    for k in range(len(fetches) - 1):
        i, j = fetches[k], fetches[k + 1]
        op, pc = rows[i][2], rows[i][1]
        got = (rows[j][3] - rows[i][3]) // CLOCKS_PER_TSTATE
        want = lut[op]
        nxt = rows[j][1]
        if op in JMP:
            if nxt != (pc + 3) & 0xffff: want += 3
        elif op in CALL:
            if nxt != (pc + 3) & 0xffff: want += 9
        elif op in RETC:
            if nxt != (pc + 1) & 0xffff: want += 6
        stats[op][(want, got)] += 1

    bad = []
    for op in sorted(stats):
        for (want, got), n in sorted(stats[op].items()):
            if want != got:
                bad.append((op, want, got, n))

    if not bad:
        total = sum(sum(v.values()) for v in stats.values())
        print(f'every one of {total} instructions matched MAME\'s cycle count '
              f'({len(stats)} distinct opcodes exercised)')
        return 0

    print('\nopcodes whose T-state count does not match MAME:')
    print(f'{"op":>4} {"expected":>9} {"observed":>9} {"times":>8}')
    for op, want, got, n in sorted(bad, key=lambda x: -x[3]):
        print(f'  {op:02X} {want:>9} {got:>9} {n:>8}')
    return 1


if __name__ == '__main__':
    sys.exit(main())

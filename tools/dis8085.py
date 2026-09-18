#!/usr/bin/env python3
"""Recursive-descent 8085 disassembler, used to answer a specific question:
does Pleiads need a real 8085, or would an 8080 core do?

The two processors differ in eleven opcodes. Seven of them (08 10 18 20 28 30
38) are NOPs on the 8080, so using them is survivable-to-fatal depending on
whether the result is read. The other four (CB D9 DD ED FD) have *different
lengths and meanings* on the 8080, so a single reachable use makes an 8080 core
diverge immediately and unrecoverably.

Linear sweep over a ROM full of data tables gives garbage, so this follows
control flow from a seed set and only reports instructions it can actually
reach.

Usage: dis8085.py <rom.bin> [--base 0] [--listing] [--seeds 0,8,...]
"""
import sys
from collections import Counter

# Opcodes that exist on the 8085 but not the 8080, with the 8080 meaning.
ONLY_8085 = {
    0x08: ('DSUB', 'NOP'),   0x10: ('ARHL', 'NOP'),  0x18: ('RDEL', 'NOP'),
    0x20: ('RIM',  'NOP'),   0x28: ('LDHI', 'NOP'),  0x30: ('SIM',  'NOP'),
    0x38: ('LDSI', 'NOP'),   0xCB: ('RSTV', 'JMP a16'),
    0xD9: ('SHLX', 'RET'),   0xDD: ('JNK a16', 'CALL a16'),
    0xED: ('LHLX', 'CALL a16'), 0xFD: ('JK a16', 'CALL a16'),
}
# The four whose *length* changes, so an 8080 core desynchronises on them.
FATAL_ON_8080 = {0xCB, 0xD9, 0xDD, 0xED, 0xFD}

R = ['B', 'C', 'D', 'E', 'H', 'L', 'M', 'A']
RP = ['B', 'D', 'H', 'SP']
ALU = ['ADD', 'ADC', 'SUB', 'SBB', 'ANA', 'XRA', 'ORA', 'CMP']
ALUI = ['ADI', 'ACI', 'SUI', 'SBI', 'ANI', 'XRI', 'ORI', 'CPI']
CC = ['NZ', 'Z', 'NC', 'C', 'PO', 'PE', 'P', 'M']

# flow: seq, jmp, cjmp, call, ccall, ret, cret, stop, indirect
def decode(op):
    """-> (mnemonic, length, flow)"""
    if op in ONLY_8085:
        m = ONLY_8085[op][0]
        n = 3 if 'a16' in m else (2 if op in (0x28, 0x38) else 1)
        return (m, n, 'cjmp' if op in (0xDD, 0xFD) else 'seq')
    if op == 0x00: return ('NOP', 1, 'seq')
    if op == 0x76: return ('HLT', 1, 'stop')
    if 0x40 <= op <= 0x7F:
        return (f'MOV {R[(op >> 3) & 7]},{R[op & 7]}', 1, 'seq')
    if 0x80 <= op <= 0xBF:
        return (f'{ALU[(op >> 3) & 7]} {R[op & 7]}', 1, 'seq')
    lo, hi = op & 0x0F, op >> 4
    if lo == 0x01 and hi <= 3: return (f'LXI {RP[hi]},a16', 3, 'seq')
    if lo == 0x02 and hi <= 1: return (f'STAX {RP[hi]}', 1, 'seq')
    if lo == 0x0A and hi <= 1: return (f'LDAX {RP[hi]}', 1, 'seq')
    if op == 0x22: return ('SHLD a16', 3, 'seq')
    if op == 0x2A: return ('LHLD a16', 3, 'seq')
    if op == 0x32: return ('STA a16', 3, 'seq')
    if op == 0x3A: return ('LDA a16', 3, 'seq')
    if lo == 0x03 and hi <= 3: return (f'INX {RP[hi]}', 1, 'seq')
    if lo == 0x0B and hi <= 3: return (f'DCX {RP[hi]}', 1, 'seq')
    if lo == 0x09 and hi <= 3: return (f'DAD {RP[hi]}', 1, 'seq')
    if lo in (0x04, 0x0C) and hi <= 3: return (f'INR {R[(op >> 3) & 7]}', 1, 'seq')
    if lo in (0x05, 0x0D) and hi <= 3: return (f'DCR {R[(op >> 3) & 7]}', 1, 'seq')
    if lo in (0x06, 0x0E) and hi <= 3: return (f'MVI {R[(op >> 3) & 7]},d8', 2, 'seq')
    if op in (0x07, 0x0F, 0x17, 0x1F):
        return (['RLC', 'RRC', 'RAL', 'RAR'][(op >> 3) & 3], 1, 'seq')
    if op in (0x27, 0x2F, 0x37, 0x3F):
        return (['DAA', 'CMA', 'STC', 'CMC'][(op >> 3) & 3], 1, 'seq')
    if hi >= 0xC:
        c = (op >> 3) & 7
        if lo == 0x00: return (f'R{CC[c]}', 1, 'cret')
        if lo == 0x02: return (f'J{CC[c]} a16', 3, 'cjmp')
        if lo == 0x04: return (f'C{CC[c]} a16', 3, 'ccall')
        if lo == 0x0C: return (f'C{CC[c]} a16', 3, 'ccall')
        if lo == 0x0A: return (f'J{CC[c]} a16', 3, 'cjmp')
        if lo == 0x08: return (f'R{CC[c]}', 1, 'cret')
        if lo == 0x01: return (f'POP {["B","D","H","PSW"][hi - 0xC]}', 1, 'seq')
        if lo == 0x05: return (f'PUSH {["B","D","H","PSW"][hi - 0xC]}', 1, 'seq')
        if lo == 0x06: return (f'{ALUI[(op >> 3) & 7]} d8', 2, 'seq')
        if lo == 0x0E: return (f'{ALUI[(op >> 3) & 7]} d8', 2, 'seq')
        if lo in (0x07, 0x0F): return (f'RST {(op >> 3) & 7}', 1, 'call')
        if op == 0xC3: return ('JMP a16', 3, 'jmp')
        if op == 0xC9: return ('RET', 1, 'ret')
        if op == 0xCD: return ('CALL a16', 3, 'call')
        if op == 0xD3: return ('OUT d8', 2, 'seq')
        if op == 0xDB: return ('IN d8', 2, 'seq')
        if op == 0xE3: return ('XTHL', 1, 'seq')
        if op == 0xE9: return ('PCHL', 1, 'indirect')
        if op == 0xEB: return ('XCHG', 1, 'seq')
        if op == 0xF3: return ('DI', 1, 'seq')
        if op == 0xF9: return ('SPHL', 1, 'seq')
        if op == 0xFB: return ('EI', 1, 'seq')
    return (f'??{op:02X}', 1, 'stop')


def sweep(rom, base, seeds):
    end = base + len(rom)
    seen, listing, pending = {}, {}, list(seeds)
    while pending:
        pc = pending.pop()
        while True:
            if pc in seen or not (base <= pc < end):
                break
            op = rom[pc - base]
            mnem, n, flow = decode(op)
            if pc - base + n > len(rom):
                break
            seen[pc] = op
            operand = None
            if n == 3:
                operand = rom[pc - base + 1] | (rom[pc - base + 2] << 8)
            elif n == 2:
                operand = rom[pc - base + 1]
            listing[pc] = (mnem, n, operand, op)
            if flow == 'call':
                tgt = (op >> 3 & 7) * 8 if mnem.startswith('RST') else operand
                if tgt is not None:
                    pending.append(tgt)
            elif flow in ('cjmp', 'ccall') and operand is not None:
                pending.append(operand)
            if flow in ('jmp',):
                if operand is not None:
                    pending.append(operand)
                break
            if flow in ('ret', 'stop', 'indirect'):
                break
            pc += n
    return seen, listing


def main():
    args = sys.argv[1:]
    if not args:
        sys.exit(__doc__)
    path = args[0]
    base = 0
    show = '--listing' in args
    seeds = [0x00, 0x08, 0x10, 0x18, 0x20, 0x28, 0x30, 0x38]
    if '--base' in args:
        base = int(args[args.index('--base') + 1], 0)
    if '--seeds' in args:
        seeds = [int(x, 0) for x in args[args.index('--seeds') + 1].split(',')]

    rom = open(path, 'rb').read()
    seen, listing = sweep(rom, base, seeds)

    tally = Counter()
    hits = {}
    for pc, (mnem, n, operand, op) in listing.items():
        tally[mnem.split()[0]] += 1
        if op in ONLY_8085:
            hits.setdefault(op, []).append(pc)

    print(f'{path}: {len(rom)} bytes at 0x{base:04X}')
    print(f'reachable instructions : {len(listing)}')
    print(f'bytes covered          : {sum(v[1] for v in listing.values())} '
          f'({100*sum(v[1] for v in listing.values())/len(rom):.1f}% of image)')
    print()
    print('--- 8085-only opcodes reachable ---')
    if not hits:
        print('(none) -> an 8080 core is sufficient for the reachable code')
    for op in sorted(hits):
        name, on8080 = ONLY_8085[op]
        flag = 'FATAL on 8080' if op in FATAL_ON_8080 else 'differs on 8080'
        addrs = ' '.join(f'{a:04X}' for a in sorted(hits[op])[:12])
        more = '' if len(hits[op]) <= 12 else f' (+{len(hits[op])-12} more)'
        print(f'  {op:02X} {name:<10} 8080: {on8080:<9} {flag:<16} '
              f'x{len(hits[op]):<4} at {addrs}{more}')
    print()
    print('--- mnemonic tally ---')
    for m, c in sorted(tally.items(), key=lambda kv: -kv[1]):
        print(f'  {m:<6} {c}')

    if show:
        print()
        for pc in sorted(listing):
            mnem, n, operand, op = listing[pc]
            txt = mnem
            if operand is not None:
                txt = mnem.replace('a16', f'${operand:04X}').replace('d8', f'#${operand:02X}')
            print(f'{pc:04X}  {op:02X}  {txt}')


if __name__ == '__main__':
    main()

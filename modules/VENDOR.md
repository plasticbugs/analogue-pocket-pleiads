# Vendored modules

Third-party HDL copied into the tree -- no submodules, so the build is
self-contained and reproducible.

| module | upstream | via | licence |
|---|---|---|---|
| cpu-t80 | Daniel Wallner's T80, http://www.opencores.org/cvsweb.shtml/t80/ | the MSX2 Pocket core's copy | BSD-3-Clause (header in each file) |

## Why T80 for an 8085 board

Pleiads and Phoenix run an Intel 8085A, not a Z80. T80 instantiated as
`T8080se` with `Mode = 2` is an 8080, which is an 8085 minus eleven opcodes.
That is enough here, and the reason is specific rather than hopeful:

`tools/dis8085.py` sweeps the program ROM from the reset vector and reports
every reachable 8085-only opcode. The only one Pleiads uses is **SIM** (`30`),
at `03F2` and `27E3`. SIM sets the interrupt masks and the SOD pin. This board
has **no interrupts at all**, and MAME never hooks SOD for either game
(`in_sid_func` is set only for Survival), so SIM has no observable effect in
the oracle we are matching.

What matters then is only that the core does not *desynchronise* on it. In T80
`Mode = 2`, opcode `00110000` is guarded by `if Mode /= 2` in `T80_MCode.vhd`
and falls through undecoded — a one-byte NOP, the same length SIM is. A Z80
would read it as a two-byte `JR NC,e` and run off into the weeds.

The four genuinely dangerous 8085 opcodes (`CB D9 DD ED FD`, which change
length between the two processors) do not appear anywhere in the reachable
code.

This is also what the MiSTer Phoenix core does, which covers both games.

Written here rather than vendored: the video hardware and the sound sections,
from MAME's device models — see `docs/hardware.md`.

To update one: re-copy from upstream at the new commit and record it here.

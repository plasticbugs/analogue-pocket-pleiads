# Pleiads / Phoenix — Analogue Pocket core

An openFPGA core for **Phoenix hardware** (Amstar, 1980): Intel 8085A, two 8×8
tilemaps, no sprite engine, no interrupts. It runs both games the board family
is known for:

* **Pleiads** (Tehkan, 1981)
* **Phoenix** (Amstar, 1980)

One core, one ROM format. The two games differ only in their sound section and
a couple of video-register bits, so the gateware sums the 16 KB program region
as the image loads and recognises which game it has.

> **Status: in progress.** The core boots both ROMs, runs the games, produces
> MAME's exact picture and reproduces its audio. It compiles for the Pocket but
> has not been run on hardware, and Phoenix's sound section is still Pleiads'.
> There is no release to install yet.

## How it is being built

Following `METHODOLOGY.md`, which is the write-up from a previous core:

1. **MAME is the oracle.** Not a reference to read, a program to interrogate.
   Every non-obvious hardware question here was answered by instrumenting it
   with Lua — see `docs/measurements.md` for what that turned up and what it
   cost to have guessed instead.
2. **A reference renderer is the executable spec.** `tools/render_model.py`
   reads a dumped machine state and produces the exact frame MAME produced. It
   is pixel-identical on every captured state.
3. **Frozen-state benches are the regression gate.** `sim/run_video.sh` loads
   those same states into the RTL, renders a frame in Verilator and diffs it
   against MAME. Zero differing pixels on all 14 states, both games.

### Current state

| | Pleiads | Phoenix |
|---|---|---|
| ROM builder, CRC-checked | done | done |
| Reference renderer vs MAME | 10/10 states, 0 px | 4/4 states, 0 px |
| Video RTL vs MAME | 10/10 states, 0 px | 4/4 states, 0 px |
| CPU bus trace vs MAME | 53 004 transactions identical | 100 985 identical |
| CPU cycle counts vs MAME | 131 393 instructions, 0 wrong | 135 027, 0 wrong |
| **End to end: core plays the game** | **4/4 frames, 0 px** | **3/3 frames, 0 px** |
| Audio vs MAME | **correlation +1.0000** | uses Pleiads' sound |
| Pocket integration | compiles | compiles |
| Run on hardware | not yet | not yet |

"End to end" means the core is given nothing but the ROM image, boots it, runs
the game's own code for up to 1800 frames, and its own video output is diffed
against MAME's picture of the same moment. `sim/run_endtoend.sh`.

Phoenix runs, and its video is verified, but its sound hardware is a different
design — a different custom board plus a discrete netlist that MAME models
separately — and the core currently gives it Pleiads' sound section. That is
the next piece of work.

## Building the ROM

The core is gateware; it cannot unzip a romset. Build the image on a computer:

```sh
python3 tools/mra_build.py pleiads.mra /path/to/pleiads.zip
python3 tools/mra_build.py phoenix.mra /path/to/phoenix.zip
```

Every part is CRC-checked and the finished image is verified against the md5 in
the `.mra`. Nothing but Python 3 is needed. **No ROMs are distributed here.**

## Watching it

```sh
tools/capture_states.sh          # dump frozen states + MAME snapshots
tools/regress_ref.sh             # reference renderer vs MAME
sim/run_video.sh                 # video RTL vs MAME, frozen states
sim/run_system.sh                # CPU bus trace + cycle counts vs MAME
sim/run_endtoend.sh              # the core plays the game, vs MAME's picture
sim/run_audio.sh                 # audio vs MAME, same command stream
tools/quartus_map.sh             # synthesis only, ~2 min, before every push
tools/quartus_build.sh           # full compile, ~15 min
python3 tools/make_report.py     # writes artifacts/index.html
```

`artifacts/index.html` shows, for every state, the MAME snapshot beside the
reference render beside the pixel diff.

## Layout

| path | what |
|---|---|
| `docs/hardware.md` | the board: clocks, memory map, tile and palette formats |
| `docs/measurements.md` | facts measured from MAME rather than assumed |
| `ref/mame/` | the MAME sources this was developed against, pinned |
| `tools/` | ROM builder, reference renderer, MAME instrumentation, diffing |
| `rtl/` | the core |
| `sim/` | Verilator benches |
| `modules/` | vendored third-party HDL — see `modules/VENDOR.md` |
| `platform/`, `target/` | the openFPGA framework and this core's top level |
| `pkg/pocket/` | what goes on the SD card |

## Credits

The new work here is the arcade hardware in `rtl/` and the tooling in `tools/`
and `sim/`. Most of what sits underneath belongs to other people.

**Marcus Andrade — [@boogermann](https://github.com/boogermann),
[OpenGateware](https://github.com/opengateware) /
[Raetro](https://github.com/raetro).** Everything between the arcade hardware
and the Pocket is his. `platform/pocket` is OpenGateware's `gateman-pocket`
platform — the APF bridge, ROM and data loader, video mixer and scaler, audio
path and filters, Interact option decoding, memory primitives, hiscore support
— and 41 of its 63 files carry his copyright. The Quartus project files in
`projects/` were generated by his Gateman CLI and `target/pocket/core_top.sv`
starts from his template. Mostly MIT, some GPL-3.0-or-later; each file says.

* MAME's [`phoenix`](https://github.com/mamedev/mame/tree/master/src/mame/phoenix)
  driver by **Richard Davies** (BSD-3-Clause) — `docs/hardware.md`, the
  reference renderer and the RTL were all written from it: the memory map, the
  tile and palette formats, the protection lookup and the video timing.
* MAME's Pleiads sound model by **Juergen Buchmueller** (GPL-2.0+) — the melody
  chip and the analogue effects board in `rtl/tms36xx.sv` and
  `rtl/pleiads_sound.sv` follow it statement by statement, quirks included.
* `ref/mame/` holds those files fetched verbatim, each under the licence in its
  own header, so the reference this was built against is pinned rather than
  described.
* [T80](https://opencores.org/projects/t80) by **Daniel Wallner**
  (BSD-3-Clause), via the MSX2 Pocket core's copy, is vendored in
  `modules/cpu-t80` — see `modules/VENDOR.md`. It is **not instantiated**: the
  board's 8085A is written from scratch in `rtl/i8085.sv`, because T80 is VHDL
  and the benches that check this core against MAME need Verilog to read.

Pleiads and Phoenix are trademarks of their owners. This project is not
affiliated with Tehkan, Amstar or Centuri.

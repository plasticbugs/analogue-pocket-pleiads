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

## Credit

Hardware documentation is derived from MAME's `phoenix` driver by Richard
Davies, and its Pleiads sound model by Juergen Buchmueller.

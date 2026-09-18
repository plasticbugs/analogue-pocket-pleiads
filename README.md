# Pleiads / Phoenix — Analogue Pocket core

An openFPGA core for **Phoenix hardware** (Amstar, 1980): Intel 8085A, two 8×8
tilemaps, no sprite engine, no interrupts. It runs both games the board family
is known for:

* **Pleiads** (Tehkan, 1981)
* **Phoenix** (Amstar, 1980)

One core, one ROM format. The two games differ only in their sound section and
a couple of video-register bits, so the gateware sums the 16 KB program region
as the image loads and recognises which game it has.

> **Status: in progress.** Video is done and verified. CPU, sound and platform
> integration are not finished yet. There is no release to install.

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

| | |
|---|---|
| ROM builder, CRC-checked | done |
| Reference renderer vs MAME | **14/14 states, 0 pixels differ** |
| Video RTL vs MAME | **14/14 states, 0 pixels differ** |
| 8085 CPU + memory map | not started |
| Sound | not started |
| Pocket integration | not started |

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
sim/run_video.sh                 # RTL vs MAME
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

## Credit

Hardware documentation is derived from MAME's `phoenix` driver by Richard
Davies, and its Pleiads sound model by Juergen Buchmueller.

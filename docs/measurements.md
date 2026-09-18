# Measurements

Facts established by instrumenting MAME rather than by reading the driver.
Each one is something I would otherwise have had to guess at.

## Video registers are write-only, and taps do see them

`install_write_tap` on `5000-53FF` and `5800-5BFF` *does* observe writes that
land on an installed write handler, contrary to the caution in METHODOLOGY §4.
Measured over 2400 frames of attract mode plus play:

| Register | Writes | Distinct values |
|---|---|---|
| videoreg `5000` | 1580 | `00` (1579), `01` (1) |
| scroll `5800` | 49 | `00` only |
| sound A `6000` | 2371 | 16 distinct, mostly `0F`, also `8F` |
| sound B `6800` | 2371 | 26 distinct, `00`-`1B` range |

Tap callbacks receive an **absolute** address, not one relative to the tap
range (measured: writes in `4000-4FFF` arrive as `4000`..`4BFE`).

## The vblank bit

`DSW0` bit 7 reads **0 during vblank** and 1 during active display
(`IP_ACTIVE_LOW` over the screen's vblank line). Measured values of DSW0 with
default switches: `E0` active, `60` in vblank.

## The protection bit polarity

With the video register holding `00`, `pleiads_protection_r()` returns 0, and
the CPU reads IN0 bit 3 as **1**. So the port bit is the *inverse* of the
function's return value:

```
IN0[3] = !protection(videoreg & 0xFC)
```

where protection() is 1 for questions `0C`/`30` and 0 for `00`/`20`.

## Input polling rate

The game reads IN0 **once per frame**. A forced input has to be held for tens
of frames to be observed; an 8-frame pulse is invisible to the game. Every
capture made with short pulses silently stayed in attract mode.

Measured IN0 values: `FF` idle, `FE` coin held, `FD` start-1 held — all active
low, as documented.

## Tile x order (cost a round)

`charlayout` declares `xoffset {7,6,5,4,3,2,1,0}` and the driver calls it a
"pretty straightforward layout". MAME counts gfx bit offsets from the MSB, so
that list means column 0 takes bit 0 of the byte — tiles are laid out LSB
first, the opposite of the natural reading.

Rendering it the obvious way mirrors every tile about its own centre. On the
Pleiads attract screen that still produces a starfield, a city skyline and a
galaxy in the right places, and 89% of pixels matched. It was only obviously
wrong on text.

What found it was making MAME draw a chosen pattern rather than staring at a
diff of the game's own output: `tools/probe_pattern.lua` fills the foreground
tilemap with an ascending tile-code ramp, and matching each rendered 8×8 cell
back to the tile whose shape it is showed that *no* tile matched — which
points at the within-tile decode rather than at addressing or colour.

## Palette normalisation (cost a round)

`palette_t::normalize_range` defaults are `lum_min = 0, lum_max = 255`, not
`-1`. With `-1` the function would leave the luminance range alone; with the
real defaults it always stretches to full range. The raw resistor ladder tops
out at 186, so reading the defaults wrong made every colour about a fifth too
dark — plausible-looking on screen, and the sort of error that invites a hunt
through the resistor network instead.

Raw ladder levels for the 2-bit input, before normalisation: `[5, 5, 147, 186]`.
Levels 0 and 1 are identical because MAME models the second PROM's direct
connection as a 1 Ω resistor, which swamps the 270 Ω low bit.

## Coverage actually achieved

| State | What it exercises |
|---|---|
| pleiads 3600 | `VREG 04` — palette bank 2 |
| phoenix 0900 | `SCROLL 68` |
| phoenix 1800 | `SCROLL F8` — scroll wrap |
| phoenix 2600 | `SCROLL 48` + `VREG 02` — palette bank 1 |

Pleiads never writes a non-zero scroll in any capture taken so far; the
background scroll path is covered by Phoenix instead. Both games agree with
MAME to zero pixels across 14 states.

## MAME's screen starts in vblank

At CPU reset MAME's screen is at the **start of vblank** (line 208), not at
line 0. Measured by logging every DSW0 read with the time it happened and
looking at where bit 7 changes: the transitions to 0 land exactly 48 lines
before a naive `t x 5.5MHz / 352` line count would put them.

This matters only for the full-system bench. The core starts its raster at the
same place so the two agree from reset; on hardware the power-on phase is
arbitrary and nothing depends on it.

## The address decode (cost a round, and would have cost a build)

The board decodes A14 down to A11. Getting A12 out of the decode made
`sel_vram` cover `4000-5FFF` instead of `4000-4FFF`, and shifted every register
up one block -- so a write to sound control A at `6000` landed on the video
register, whose bit 0 is the video RAM page select. The game's scratch RAM
silently switched pages mid-frame.

Nothing in the video regression could see this: that bench sets the video
registers directly and never exercises the CPU's decode. The bus trace found
it at transaction 50668, as a read of `438D` returning 00 where MAME returned
0F -- a value that had been correctly written 37000 transactions earlier.

## What the bus trace can and cannot prove

Against MAME, from reset, with the same ROM:

| | transactions identical |
|---|---|
| Pleiads | 53 004 |
| Phoenix | 100 985 |

Both then diverge at a DSW0 read, in bit 7 only. That is not a fault. MAME
executes a whole instruction and charges its cycles afterwards, so when the
game reads DSW0 the screen's vblank line is evaluated as of the instruction's
*start*. Real hardware, and this core, sample it three or four T-states in.
The offset is fixed, not accumulating; it only becomes visible when a vblank
edge lands inside that window, and then the polling loop runs one extra
iteration and the two are no longer comparable -- they are running the same
program from different loop counts.

The timing half of the check is therefore separate and exact:
`tools/check_cycles.py` parses `lut_cycles_8085` straight out of
`ref/mame/i8085.cpp` and compares it against the T-states the RTL actually
spent on every instruction it executed, taken-branch extras included.

| | instructions checked | opcodes exercised | mismatches |
|---|---|---|---|
| Pleiads | 131 393 | 75 | 0 |
| Phoenix | 135 027 | 71 | 0 |

## End to end

`sim/run_endtoend.sh` gives the core nothing but the ROM image, lets it boot
and run the game's own code, and diffs its own video output against MAME's
picture of the same moment.

| game | frames checked | result |
|---|---|---|
| Pleiads | 200, 600, 1200, 1800 | 0 differing pixels |
| Phoenix | 200, 600, 1200 | 0 differing pixels |

Frame numbering does not line up exactly and is not assumed to: MAME starts
mid-vblank so its first frame is short, and its frozen dump is the video RAM as
it stands at the *end* of a frame while the core renders during one. The
matching offset starts at 4 frames and converges to 1 by frame 1800, which is
those two effects and nothing else. The bench captures a window and requires an
exact match somewhere in it.

## Sound: what the target actually is

Pleiads' sound is two devices and neither can be matched bit for bit, for
reasons that are worth stating plainly rather than discovering later.

The melody is an Epson **7910E multi-melody IC whose ROM has never been
dumped**. MAME substitutes a TMS3615 with hand-picked parameters and flags the
driver `MACHINE_IMPERFECT_SOUND` because of it. That stand-in is the best
reference anyone has, and it is what this core targets.

The effects are an **analogue board** — four 556-timer tones, a noise source
and five RC envelope followers — which MAME models behaviourally, with its
author's own comments marking most component values unknown (`10u??`,
`330K??`). Matching MAME is achievable and checkable; matching the 1981 board
is not, without a board to measure.

So the bar is METHODOLOGY §4's: same command stream, same window, compare
level and spectral balance. `tools/sound_model.py` is a literal port of MAME's
model and `tools/compare_audio.py` holds it to MAME's own recording of the
same 20 seconds of play:

| measure | ratio to MAME |
|---|---|
| overall RMS | 0.98 |
| RMS per 4 s window | 0.89 – 1.09 |
| 20–200 Hz | 1.03 |
| 200–600 Hz | 1.17 |
| 600–1500 Hz | 0.96 |
| 1500–4000 Hz | 0.91 |
| 4000–12000 Hz | 0.76 |
| **waveform correlation, first 4 s** | **+0.89** |

The correlation is the number that matters: +0.89 says this is substantially
the same waveform, not merely a similar-sounding noise with the same energy.

The top band is resampling, not the model. The melody chip runs at its own
15808 Hz and has to reach 48 kHz. Holding each sample gave 1.44 in that band;
linear interpolation gives 0.76; MAME resamples with a filter and sits between
them. Linear interpolation is the closer of the two and is one multiply-add in
gateware, so that is what the core does.

### Quirks reproduced deliberately

MAME's model has several things that look like slips. They change the sound, and
MAME is what we are matching, so the port reproduces them and marks each one:

- `tone3` takes its step count from **tone2's** counter, not its own.
- `tone3` divides the modulation level by **33768**, not 32768.
- `tone3`, `update_c_pc5` and `update_c_pa5` add one sample period to their
  counter where the corresponding charge paths add *n*.
- `tone1` reuses its `max_freq` field as the divider's counter.
- `update_c_pa6`'s discharge path uses a hard-coded 0.1 s constant rather than
  the `discharge_time` in its own struct, and only runs while the polynomial
  bit is high.

## Sound in gateware

`sim/run_audio.sh` replays MAME's own sound command stream into the RTL and
compares what comes out against MAME's recording of the same twenty seconds:

| measure | RTL / MAME |
|---|---|
| peak | 1.00 |
| overall RMS | 0.91 |
| RMS per 4 s window | 0.83 – 1.00 |
| 20–200 Hz | 0.99 |
| 200–600 Hz | 1.005 |
| 600–1500 Hz | 0.98 |
| 1500–4000 Hz | 0.97 |
| 4000–12000 Hz | 1.48 |
| **waveform correlation, first 4 s** | **+0.9991** |

A correlation of 0.9991 is not "the same kind of noise at the same level" — it
is the same waveform. The gateware tracks MAME's model essentially sample for
sample, which is more than the bar set above and more than an analogue board
with unknown component values strictly deserves.

The RTL matches MAME *better* than the Python reference does (+0.9991 against
+0.89). That is not a contradiction: the reference applies each sound command
at a 48 kHz sample boundary, while the RTL sees the same command stream at
clock resolution, which is much closer to when MAME actually applied it. The
reference remains the readable spec; the gateware is the faithful one.

The 4–12 kHz band is the melody chip's resampling, unchanged from the earlier
measurement and documented above.

### Three bugs the audio bench caught, none of which any tool warned about

**A 32-bit constant overflow.** The RC time constants are written as
`(4096 * 1000000) / microseconds`. That numerator is 4 096 000 000, and a bare
integer expression in SystemVerilog is 32-bit *signed*, so it wraps negative
and every time constant came out wrong. PB4 never charged, tones 2 and 3 never
swept, and the effects board sat at a constant −16383 — which reads like a dead
module rather than arithmetic. Fixed by making the literals 64-bit.

**Operator precedence in the interpolator.** `a + b * c >>> 8` parses as
`(a + b * c) >>> 8`, because `>>>` binds looser than `+`. The melody's
interpolator became a differentiator and contributed nothing to the mix. The
tell was that the output peaked at exactly 13107, which is 0.4 × 32767 — the
effects gain alone, to the count.

**A task that silently dropped its results.** The envelope step was a task with
`inout` arguments; it never wrote them back. Returning `{counter, level}`
packed from a function fixed it and leaves nothing to interpret.

There is also one in the *reference model*, worth recording because it ran the
other way: `s // 2` in Python floors where C's `s / 2` truncates toward zero,
so on −32767 the two differ by one count — a DC offset on every sample. The
RTL was right and the reference was wrong, which is exactly why the two are
compared against MAME separately rather than only against each other.

## What is not verified

**The cocktail flip.** MAME flips the whole 32×32 tilemap, which is 256×256 —
not the 256×208 visible window — so a flipped screen row 0 shows tilemap row
255 and the normally-unused rows below the picture come into view. The core
implements it that way, and the reference renderer agrees with the core, but
neither has been checked against MAME because **no capture reaches the path**.

The flip is `page_bit AND cabinet_link`, and Pleiads writes the video register
1580 times in a 40-second run with the page bit set exactly **once**, at
initialisation. Forcing the cabinet link from Lua does not help: with the page
bit clear the flip cannot engage whatever the link says. So the two halves of
the condition never coincide in anything the game does on its own.

This is stated rather than papered over. The path is reachable only in a real
two-player cocktail game, and it is the one part of the video hardware that
rests on reading MAME's source correctly rather than on a measurement.

**Phoenix's sound.** Phoenix is the same board with a different sound section:
its own custom analogue board, an MM6221AA melody chip playing built-in tunes
rather than single notes, and a discrete netlist that MAME models as a separate
device. The core currently gives Phoenix Pleiads' sound section, which is
wrong. Its video, CPU and timing are verified; its audio is not implemented.

**Hardware.** Nothing here has been run on a Pocket.

## Timing: the constraint that did not cover the path it was written for

The first full compile fitted comfortably -- 29% of the logic, 82% of the DSP
blocks -- and **failed timing by 19.1 ns on a 22.7 ns clock**, with 1168 ns of
total negative slack. Synthesis had said nothing; `quartus_map` cannot, because
it does not place or route.

Asking the timing analyser to name the registers rather than reading the
summary gave the path immediately:

```
-19.129  phoenix_core|snd_c[4]
      -> phoenix_core|phoenix_audio|pleiads_sound|t4_ctr[0]
```

Sound control latch C, through the PC4 envelope's multiply, through the op-amp
divider's multiply, into tone 4's counter multiply. Three chained multipliers
in one combinational path, about 42 ns.

The SDC already had a multicycle for exactly this, and it did not apply:

```tcl
set_multicycle_path -setup 4 -from [get_registers {*|pleiads_sound:*|*}] ...
```

The path *starts* at `snd_c`, which lives one level up in `phoenix_core`, so it
matched neither `-from` nor `-to`. The constraint was true and useless.

Two changes, either of which would have done, and both are worth having:

- The three control latches are now registered inside `pleiads_sound`, and the
  note write inside `phoenix_audio`. One system clock of latency -- 23 ns
  against a 20.8 us sample period -- and every path in the sound section now
  both starts and ends there.
- The multicycle is written at the enclosing level, `phoenix_audio`, rather
  than at each block inside it. Everything in there is paced by a sample tick
  917 clocks apart, so naming the boundary once is both truer and harder to get
  wrong than naming each block and hoping the list is complete.

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

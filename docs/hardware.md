# Pleiads (Tehkan, 1981) — hardware reference

Everything here is taken from MAME 0.288 (`src/mame/phoenix/`, copied into
`ref/mame/` at the commit this core was developed against) or measured from a
running MAME with Lua. Where a fact was *measured* rather than read, it says so.

Pleiads runs on **Phoenix hardware**: a two-board set built by Amstar in 1980
and licensed widely. It is an unusually simple arcade machine — no sprite
engine, no second CPU, no interrupts.

---

## 1. Clocks

| Signal | Frequency | Derivation |
|---|---|---|
| Master crystal | 11.000000 MHz | `XTAL(11'000'000)` |
| Pixel clock | 5.500000 MHz | master / 2 |
| 8085A CLK input | 5.500000 MHz | same as pixel clock |
| 8085A machine clock | 2.750000 MHz | 8085 divides its CLK input by 2 internally |

The CPU and the video run off the same 5.5 MHz, which is why the video timing
below and the CPU timing are rigidly related. There is no second clock domain on
the board except the sound section, which is analogue.

## 2. Video timing

`screen.set_raw(PIXEL_CLOCK, HTOTAL, HBEND, HBSTART, VTOTAL, VBEND, VBSTART)`
with the constants from `phoenix.h`:

| Parameter | Value |
|---|---|
| HTOTAL | 352 (`512-160`) |
| HBEND / HBSTART | 0 / 256 → 256 active pixels |
| VTOTAL | 256 |
| VBEND / VBSTART | 0 / 208 → 208 active lines |
| Refresh | 5 500 000 / (352 × 256) = **61.03515625 Hz** |

The monitor is mounted **rotated 90° (ROT90)**, so the player sees a 208-wide by
256-tall portrait image. The raw framebuffer this core renders is 256×208
landscape; rotation is the display's problem, not the renderer's.

Note the refresh is 61.035 Hz, not 60 — over a minute that is a whole extra
second of game. It matters for audio rate and for anything frame-locked.

## 3. Memory map (`pleiads_memory_map`)

The 8085 has a 16-bit address bus; only 15 bits are decoded.

| Range | Access | Function |
|---|---|---|
| `0000-3FFF` | R | Program ROM, 16 KB |
| `4000-4FFF` | R | Video RAM page *n*, 4 KB (bank-switched, 2 pages) |
| `4000-4FFF` | W | Video RAM write (`phoenix_videoram_w`) |
| `5000-53FF` | W | Video register (`pleiads_videoreg_w`) |
| `5800-5BFF` | W | Background scroll (`phoenix_scroll_w`) |
| `6000-63FF` | W | Custom sound control A |
| `6800-6BFF` | W | Custom sound control B |
| `7000-73FF` | R | IN0 — coin, start, protection, joystick |
| `7800-7BFF` | R | DSW0 — dip switches + vblank |

Address decoding is by `A14..A11`, so every register repeats through its
1 KB window. The core should decode the same way — games do rely on mirrors.

### Video RAM banking

There are **two** 4 KB video RAM pages. Bit 0 of the video register selects
which one the CPU sees at `4000-4FFF` *and* which one the video hardware
displays. Within the selected page:

| Offset | Layer |
|---|---|
| `000-33F` | Foreground tile codes (32 × 26) |
| `340-7FF` | unused by the tilemap |
| `800-B3F` | Background tile codes (32 × 26) |
| `B40-FFF` | unused by the tilemap |

MAME creates 32 × 32 tilemaps but only marks `offset & 0x7ff < 0x340` dirty, so
only 26 rows (26 × 32 = 0x340) are ever meaningful. 26 rows × 8 = 208 lines,
exactly the active area.

## 4. Video register (`5000`, `pleiads_videoreg_w`)

| Bit | Function |
|---|---|
| 0 | Video RAM page select (0 or 1). Also gates cocktail flip. |
| 2:1 | Palette bank (0–3). Pleiads has **four** banks; Phoenix has two. |
| 7:2 | Latched as the protection "question" (`data & 0xFC`) |
| — | The whole byte is also written to custom sound control C |

Cocktail flip is `page_index != 0 && cabinet_dip == cocktail` — i.e. the flip
follows the page bit, which is how the board alternates player 1 / player 2
views in a cocktail cabinet.

The palette-bank table lives at `$0420-$042F` in the game ROM and is written by
the routine at `$06BC`; there are four palettes, one per level.

## 5. Protection (`pleiads_protection_r` → IN0 bit 3)

Pleiads has three custom-marked chips T-X, T-Y, T-Z (really a 74LS669, 74LS83
and 74LS74 with modified pinouts) doing palette banking and this protection
check. MAME reduces the whole thing to a lookup on the latched video register:

| `videoreg & 0xFC` | IN0 bit 3 reads |
|---|---|
| `0x00`, `0x20` | 0 |
| `0x0C`, `0x30` | 1 |
| anything else | 0 (MAME logs it) |

The game checks this at `$0552`. **Measured behaviour is recorded in
`docs/measurements.md`** — the polarity through MAME's `IP_ACTIVE_LOW` wrapper
is not obvious from the source and was confirmed by Lua rather than reasoned
about.

## 6. Inputs

`IN0` at `7000`, all active low:

| Bit | Function |
|---|---|
| 0 | Coin 1 |
| 1 | Start 1 |
| 2 | Start 2 |
| 3 | Protection (see above) |
| 7:4 | Multiplexed joystick — see below |

The joystick nibble is multiplexed by cocktail mode: upright shows `CTRL[3:0]`,
cocktail (with page bit set) shows `CTRL[7:4]`.

`CTRL` bits, active low. Pleiads (Tehkan) has **one** button, not two:

| Bit | Upright | Cocktail |
|---|---|---|
| 0 / 4 | Button 1 (fire) | Button 1, player 2 |
| 1 / 5 | Joystick right (2-way) | right, player 2 |
| 2 / 6 | Joystick left (2-way) | left, player 2 |
| 3 / 7 | unused | unused |

The stick is **2-way, left/right only**. There is no up/down.

`DSW0` at `7800`:

| Bit | Function | Values |
|---|---|---|
| 1:0 | Lives | 0=3, 1=4, 2=5, 3=6 |
| 3:2 | Bonus life | 0=3K/30K, 1=4K/40K, 2=5K/50K, 3=6K/60K |
| 4 | Coinage | 0 = 1C/1C, 1 = 2C/1C |
| 5 | Unknown | default 1 (off) |
| 6 | Demo sounds | 1 = on (default), 0 = off |
| 7 | **VBLANK**, active low | — |

Cabinet type is **not** memory-mapped — it is a physical link read directly by
the video hardware (MAME models it as the fake `CAB` port).

### There are no interrupts

Neither `phoenix()` nor `pleiads()` installs any interrupt source. The game
paces itself entirely by polling `DSW0` bit 7 for vblank. This removes the
usual "when exactly does the IRQ fire relative to the raster" question, which
is normally one of the fiddliest parts of a core.

## 7. Graphics

Two ROM regions, 4 KB each, identical format:

```
8×8 tiles, 256 per region, 2 bits per pixel
plane 0 (MSB) at bit offset 256*8*8 = byte 0x800
plane 1 (LSB) at bit offset 0        = byte 0x000
x offsets {7,6,5,4,3,2,1,0}   -- see the warning below
y offsets {0,8,16,...,56}     -- one byte per row
64 bits (8 bytes) per tile
```

So for tile *N*, row *y*, column *x*:

```
lsb   = (rom[0x000 + N*8 + y] >> x) & 1
msb   = (rom[0x800 + N*8 + y] >> x) & 1
pixel = msb*2 + lsb          -- 0..3
```

**The x order is a trap.** `charlayout` lists `xoffset` as `{7,6,5,4,3,2,1,0}`
and the driver comments it "pretty straightforward layout", which reads as
"leftmost pixel is bit 7". It is not. MAME counts gfx bit offsets **from the
MSB**, so offset 0 means bit 7 of the byte and offset 7 means bit 0. Column 0
therefore takes the byte's *least* significant bit and the tile is laid out
LSB-first.

Getting this backwards mirrors every tile about its own centre. On a starfield
that looks almost plausible; on text it is obvious. It was caught by making
MAME draw a synthetic tile-code ramp (`tools/probe_pattern.lua`) and matching
the shapes back, not by staring at the diff.

`bgtiles` is the background layer, `fgtiles` the foreground.

### Colour selection

For a tile code `c` in either layer, MAME computes a 6-bit colour index:

```
col = (c >> 5)                    -- top 3 bits of the code, 0..7
    | (layer_is_foreground ? 0x08 : 0x00)
    | (palette_bank << 4)         -- palette_bank 0..3
```

and the final palette index is `(col << 2) | pixel`, giving a full 8 bits. The
foreground uses **pen 0 as transparent**; the background is opaque.

Note the tile code serves double duty: the low 5 bits are *not* enough to index
256 tiles, so the top 3 bits pick both the tile's high bits *and* its colour.
All 8 bits index the tile ROM; bits 7:5 additionally pick the colour.

## 8. Palette

Two 256×4 PROMs (`7611-5.26` at PROM offset 0, `7611-5.33` at 0x100) feeding a
resistor ladder. `phoenix_decode_info` in `phoenix_v.cpp` says, for PROM entry
*i*:

| Channel | Low bit | High bit |
|---|---|---|
| R | `prom[i] >> 0 & 1` | `prom[256+i] << 1 & 2` |
| G | `prom[i] >> 2 & 1` | `prom[256+i] >> 1 & 2` |
| B | `prom[i] >> 1 & 1` | `prom[256+i] >> 0 & 2` |

giving **2 bits per channel**, driven through 270 Ω resistors with a 270 Ω
pulldown and 100 Ω pullup, open-collector into a 5 V rail. MAME runs this
through `compute_res_net_all()` and then `normalize_range(0, 255)`.

Crucially, the pen number is **bit-swizzled** before indexing the PROM:

```
pen i  ->  prom entry  bitswap<8>(i, 7,6,5,1,0,4,3,2)
```

i.e. `entry = (i & 0xE0) | ((i & 0x03) << 3) | ((i >> 2) & 0x07)`.

(Phoenix uses `bitswap<7>` — only 7 bits — because it has two palette banks
rather than four. Pleiads swizzles all 8.)

Because the resistor network is non-linear, the four levels per channel are not
`0/85/170/255`. The core resolves this with a 4-entry level table extracted from
MAME, recorded in `docs/measurements.md`. That is exactly what the real DAC
does, so it is not an approximation.

## 9. Sound — the hard part

Pleiads' sound is **analogue**, and it is the only part of this board that is
genuinely difficult.

| Source | Device | Notes |
|---|---|---|
| Melody / BGM | Epson **7910E** Multi-Melody IC | **ROM is not dumped.** MAME substitutes a `TMS3615` with hand-tuned parameters |
| Effects | Custom analogue board | Four 556-timer tone oscillators, a noise source, and five RC envelope followers |

MAME's `pleiads_sound_device` (`ref/mame/pleiads.cpp`) models the effects board
in floating point: charge/discharge time constants, op-amp mixing, an 18-bit
polynomial noise generator. It is a *behavioural* model of analogue circuitry,
with the author's own comments marking most component values as unknown
(`10u??`, `330K??`).

Consequences for this core, stated plainly:

- The melody chip cannot be emulated faithfully by anyone, because its ROM has
  never been dumped. MAME's TMS3615 stand-in is the best available reference and
  is what this core targets. MAME itself flags the driver
  `MACHINE_IMPERFECT_SOUND` for this reason.
- The effects board target is MAME's model, not the real PCB. Matching MAME is
  achievable and verifiable; matching the 1981 hardware is not, without a board
  to measure.
- This is the opposite situation from a digital sound chip like an AY-3-8910,
  where bit-exactness is both possible and expected.

Control registers:

| Address | Latch | Written by |
|---|---|---|
| `6000-63FF` | Sound control A | game code |
| `6800-6BFF` | Sound control B | game code |
| — | Sound control C | side effect of every video register write |

## 10. Clock domain crossings

The only multi-bit signal crossing domains in this core is the audio sample on
its way to the Pocket's audio filter, which runs on a PLL derived from
`clk_74b`. Per METHODOLOGY §5.4 this is handled with a hold register and a
toggle handshake from the outset, not retrofitted.

## 11. ROM manifest

| Region | Offset | File | Size | CRC32 |
|---|---|---|---|---|
| maincpu | 0000 | `ic47.r1` | 2048 | `960212c8` |
| maincpu | 0800 | `ic48.r2` | 2048 | `b254217c` |
| maincpu | 1000 | `ic47.bin` | 2048 | `87e700bb` |
| maincpu | 1800 | `ic48.bin` | 2048 | `2d5198d0` |
| maincpu | 2000 | `ic51.r5` | 2048 | `49c629bc` |
| maincpu | 2800 | `ic50.bin` | 2048 | `f1a8a00d` |
| maincpu | 3000 | `ic53.r7` | 2048 | `b5f07fbc` |
| maincpu | 3800 | `ic52.bin` | 2048 | `b1b5a8a6` |
| bgtiles | 0000 | `ic23.bin` | 2048 | `4e30f9e7` |
| bgtiles | 0800 | `ic24.bin` | 2048 | `5188fc29` |
| fgtiles | 0000 | `ic39.bin` | 2048 | `85866607` |
| fgtiles | 0800 | `ic40.bin` | 2048 | `a841d511` |
| melody  | 0000 | `7910e`    | 2048 | **no dump exists** |
| proms   | 0000 | `7611-5.26` | 256 | `7a1bcb1e` |
| proms   | 0100 | `7611-5.33` | 256 | `e38eeb83` |

Total loadable data: 16 KB program + 4 KB bg + 4 KB fg + 512 B PROM =
**24.5 KB**. It fits in block RAM many times over; the Cyclone V 5CEBA4 has
~393 KB. Per METHODOLOGY §6 there is no SDRAM in this design at all, and so no
arbiter, no fetch latency and no bandwidth budget.

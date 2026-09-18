-- Log every write to the sound control latches with the time it happened, so
-- the same command stream can be replayed into the reference model and into
-- the RTL and their output compared against MAME's own recording of it.
--
-- Latch C is not a register of its own: every write to the video register is
-- also a write to sound control C. That is the board, not a shortcut.
--
-- usage: PL_OUT=build/snd_pleiads.txt tools/mame.sh -autoboot_script \
--            tools/sound_trace.lua -wavwrite build/mame_pleiads.wav -seconds_to_run 20
local OUT  = os.getenv("PL_OUT")  or "build/snd_trace.txt"
local PLAY = os.getenv("PL_PLAY") ~= "0"

local mach = manager.machine
local sp   = mach.devices[":maincpu"].spaces["program"]
local f    = assert(io.open(OUT, "w"))
f:write("# t_seconds latch value\n")

_G.KEEP = {}
local function watch(name, lo, hi)
    _G.KEEP[name] = sp:install_write_tap(lo, hi, name, function(off, data, mask)
        f:write(string.format("%.9f %s %02X\n", mach.time:as_double(), name, data & 0xff))
        return data
    end)
end
watch("A", 0x6000, 0x67ff)
watch("B", 0x6800, 0x6fff)
watch("C", 0x5000, 0x57ff)

local ports = mach.ioport.ports
local function fld(p, n) local q = ports[p]; return q and q.fields[n] end
local coin, st1 = fld(":IN0", "Coin 1"), fld(":IN0", "1 Player Start")
local fire, left, right = fld(":CTRL", "P1 Button 1"), fld(":CTRL", "P1 Left"), fld(":CTRL", "P1 Right")
local function hold(x, on) if x then x:set_value(on and 1 or 0) end end

local frame = 0
emu.register_frame_done(function()
    frame = frame + 1
    if not PLAY then return end
    hold(coin, frame >= 120 and frame < 150)
    hold(st1,  frame >= 200 and frame < 230)
    if frame > 260 then
        local p = frame % 240
        hold(left,  p < 90)
        hold(right, p >= 120 and p < 210)
        hold(fire,  (frame % 8) < 4)
    end
    if frame % 300 == 0 then f:flush() end
end)

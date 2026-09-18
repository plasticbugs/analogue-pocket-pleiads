-- Log the CPU's bus transactions so the RTL can be held to exactly the same
-- sequence. For a processor whose only I/O is memory, the ordered list of
-- (read|write, address, data) *is* its behaviour -- a stronger and much
-- simpler statement than comparing register dumps, and it needs no debugger.
--
-- usage: PL_N=200000 PL_OUT=build/mame_bus.txt tools/mame.sh \
--            -autoboot_script tools/bus_trace.lua -seconds_to_run 6
local OUT = os.getenv("PL_OUT") or "build/mame_bus.txt"
local N   = tonumber(os.getenv("PL_N") or "200000")

local mach = manager.machine
local sp   = mach.devices[":maincpu"].spaces["program"]

local f = assert(io.open(OUT, "w"))
local n = 0
local done = false

local function log(kind, addr, data)
    if done then return end
    n = n + 1
    f:write(string.format("%s %04X %02X\n", kind, addr & 0xffff, data & 0xff))
    if n >= N then
        f:close()
        done = true
        print(string.format("bus trace: %d transactions -> %s", n, OUT))
    end
end

_G.KEEP = {}
_G.KEEP.r = sp:install_read_tap(0x0000, 0xffff, "busr", function(off, data, mask)
    log("R", off, data)
    return data
end)
_G.KEEP.w = sp:install_write_tap(0x0000, 0xffff, "busw", function(off, data, mask)
    log("W", off, data)
    return data
end)

emu.register_frame_done(function()
    if done then return end
    -- Report progress so a run that captures nothing is obvious rather than silent.
end)

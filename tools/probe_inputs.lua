-- Watch what the CPU actually reads from IN0/DSW0 while Lua forces the coin
-- and start fields. Also records the protection bit, whose polarity through
-- MAME's IP_ACTIVE_LOW wrapper is not obvious from the driver source.
local mach = manager.machine
local sp = mach.devices[":maincpu"].spaces["program"]
_G.KEEP = {}
_G.R = { in0 = {}, dsw = {}, nin0 = 0 }
_G.KEEP.in0 = sp:install_read_tap(0x7000, 0x73ff, "in0", function(off, data, mask)
    _G.R.in0[data & 0xff] = (_G.R.in0[data & 0xff] or 0) + 1
    _G.R.nin0 = _G.R.nin0 + 1
    return data
end)
_G.KEEP.dsw = sp:install_read_tap(0x7800, 0x7bff, "dsw", function(off, data, mask)
    _G.R.dsw[data & 0xff] = (_G.R.dsw[data & 0xff] or 0) + 1
    return data
end)

local ports = mach.ioport.ports
local function f(p, n) local q = ports[p]; return q and q.fields[n] end
local coin, st1 = f(":IN0", "Coin 1"), f(":IN0", "1 Player Start")
print("coin field: " .. tostring(coin) .. "  start: " .. tostring(st1))

local frame = 0
local report
emu.register_frame_done(function()
    frame = frame + 1
    -- Long, obvious pulses: 30 frames is half a second.
    if coin then coin:set_value((frame >= 120 and frame < 150) and 1 or 0) end
    if st1 then st1:set_value((frame >= 200 and frame < 230) and 1 or 0) end
    if frame == 110 or frame == 140 or frame == 190 or frame == 220 or frame == 400 then
        report(frame)
    end
end)
report = function(fr)
    local function top(t, n)
        local a = {}
        for v, c in pairs(t) do a[#a+1] = { v, c } end
        table.sort(a, function(x, y) return x[2] > y[2] end)
        local s = {}
        for i = 1, math.min(#a, n) do s[#s+1] = string.format("%02X:%d", a[i][1], a[i][2]) end
        return table.concat(s, " ")
    end
    print(string.format("f=%-5d IN0 reads=%-7d [%s]  DSW [%s]", fr, _G.R.nin0,
        top(_G.R.in0, 6), top(_G.R.dsw, 4)))
    _G.R.in0 = {}; _G.R.dsw = {}
end

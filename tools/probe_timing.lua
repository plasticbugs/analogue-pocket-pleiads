-- How much emulated time has passed by the Nth CPU bus transaction? Answers
-- whether the RTL's T-state accounting matches MAME's, independently of the
-- raster phase the two happen to start in.
--
-- The taps only count and stash; anything that might throw is done from the
-- frame callback, because an error raised inside a memory tap is swallowed
-- silently and looks exactly like a tap that never fired.
local mach = manager.machine
local sp   = mach.devices[":maincpu"].spaces["program"]
local MARK = tonumber(os.getenv("PL_MARK") or "1774")

_G.KEEP = {}
_G.S = { n = 0, mark_t = nil, dsw_n = nil, dsw_t = nil, dsw_d = nil }

local function bump()
    _G.S.n = _G.S.n + 1
    if _G.S.n == MARK and _G.S.mark_t == nil then
        _G.S.mark_t = mach.time:as_double()
    end
end

_G.KEEP.r = sp:install_read_tap(0x0000, 0xffff, "r", function(off, data, mask)
    bump()
    if (off & 0xf800) == 0x7800 and _G.S.dsw_n == nil then
        _G.S.dsw_n = _G.S.n; _G.S.dsw_t = mach.time:as_double(); _G.S.dsw_d = data
    end
    return data
end)
_G.KEEP.w = sp:install_write_tap(0x0000, 0xffff, "w", function(off, data, mask)
    bump(); return data
end)

local frames = 0
emu.register_frame_done(function()
    frames = frames + 1
    if frames == 30 then
        if _G.S.mark_t then
            print(string.format("MARK %d: t=%.9f s = %.1f CPU T-states @2.75MHz",
                MARK, _G.S.mark_t, _G.S.mark_t * 2750000.0))
        else
            print("MARK never reached; transactions so far: " .. _G.S.n)
        end
        if _G.S.dsw_n then
            print(string.format("first DSW0 read: transaction %d, t=%.9f s = %.1f T-states, data=%02X",
                _G.S.dsw_n, _G.S.dsw_t, _G.S.dsw_t * 2750000.0, _G.S.dsw_d))
        end
        print(string.format("frame period check: 45056 T-states per frame expected"))
    end
end)

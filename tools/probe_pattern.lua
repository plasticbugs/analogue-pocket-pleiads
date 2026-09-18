-- Make MAME draw a pattern we chose, so the tile-code -> screen-cell mapping
-- and the within-tile pixel order can be read straight off the snapshot
-- instead of inferred from a diff.
--
-- PL_PAT=fgcount : foreground cell (r,c) shows tile code (r*32+c)&0xFF, bg 0
-- PL_PAT=bgcount : background cell (r,c) shows tile code (r*32+c)&0xFF, fg 0
-- PL_PAT=one     : a single foreground tile (PL_CODE) at cell (PL_ROW,PL_COL)
local OUT   = os.getenv("PL_OUT")  or "artifacts/probe"
local TAG   = os.getenv("PL_TAG")  or "pat"
local PAT   = os.getenv("PL_PAT")  or "fgcount"
local CODE  = tonumber(os.getenv("PL_CODE") or "1")
local ROW   = tonumber(os.getenv("PL_ROW")  or "3")
local COL   = tonumber(os.getenv("PL_COL")  or "5")
local START = tonumber(os.getenv("PL_FRAME") or "400")

local mach = manager.machine
local sp   = mach.devices[":maincpu"].spaces["program"]

local pattern = nil          -- 0..0xFFF -> byte, once built
_G.KEEP = {}
_G.KEEP.vram = sp:install_write_tap(0x4000, 0x4fff, "vram", function(off, data, mask)
    if pattern then return pattern[off - 0x4000] end
    return data
end)
_G.KEEP.vreg = sp:install_write_tap(0x5000, 0x53ff, "vreg", function(off, data, mask)
    if pattern then return 0 end            -- page 0, palette bank 0
    return data
end)
_G.KEEP.scroll = sp:install_write_tap(0x5800, 0x5bff, "scroll", function(off, data, mask)
    if pattern then return 0 end
    return data
end)

local frame = 0
emu.register_frame_done(function()
    frame = frame + 1
    if frame == START then
        pattern = {}
        for i = 0, 0x0fff do pattern[i] = 0 end
        if PAT == "fgcount" then
            for i = 0, 0x33f do pattern[i] = i & 0xff end
        elseif PAT == "bgcount" then
            for i = 0, 0x33f do pattern[0x800 + i] = i & 0xff end
        elseif PAT == "one" then
            pattern[ROW * 32 + COL] = CODE
        end
        -- Touch every byte so the tilemap marks the cells dirty. The tap
        -- substitutes the pattern value on the way through.
        for i = 0, 0x0fff do sp:write_u8(0x4000 + i, 0) end
        sp:write_u8(0x5000, 0)
        sp:write_u8(0x5800, 0)
    elseif pattern and frame == START + 3 then
        mach.screens[":screen"]:snapshot()
        local f = assert(io.open(string.format("%s/state_%s.txt", OUT, TAG), "w"))
        f:write("# synthetic pattern\nGAME pleiads\nFRAME 0\nVREG 00\nSCROLL 00\nCAB 0\nVRAM 4096\n")
        for i = 0, 0x0fff, 32 do
            local t = {}
            for j = 0, 31 do t[#t + 1] = string.format("%02x", pattern[i + j]) end
            f:write(table.concat(t), "\n")
        end
        f:close()
        print("pattern " .. PAT .. " written")
    end
end)

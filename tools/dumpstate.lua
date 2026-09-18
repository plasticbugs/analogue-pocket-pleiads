-- Dump one frozen Phoenix-hardware machine state plus the MAME snapshot of
-- exactly that state, so tools/render_model.py can be held to it pixel for
-- pixel.
--
-- Why freeze at all: MAME calls screen_update when the visible area ends (line
-- 208) but emu.register_frame_done fires at the end of line 255. The game
-- spends those 48 lines writing video RAM -- that is the whole point of the
-- vblank poll it lives in -- so video RAM read at frame_done is *newer* than
-- the picture MAME just drew. Dumping it would compare two different frames.
--
-- So the video state is frozen instead: everything the renderer reads is
-- copied into Lua tables, and write taps then force those saved values back,
-- cancelling any further change. The CPU keeps running and MAME keeps
-- rendering, but every frame it now draws is the same picture -- which is what
-- a static renderer can be held to. The dump is written from the same tables,
-- so it cannot drift from what was drawn.
--
-- usage: PL_FRAME=600 PL_TAG=0600 tools/mame.sh -autoboot_script tools/dumpstate.lua

local OUT     = os.getenv("PL_OUT")   or "artifacts"
local TARGET  = tonumber(os.getenv("PL_FRAME") or "600")
local TAG     = os.getenv("PL_TAG")   or string.format("%04d", TARGET)
local GAME    = os.getenv("PL_GAME")  or "pleiads"
local PLAY    = os.getenv("PL_PLAY")  == "1"

local COCKTAIL = os.getenv("PL_COCKTAIL") == "1"

local mach = manager.machine
local sp   = mach.devices[":maincpu"].spaces["program"]

-- Cabinet type is a physical link on the PCB, not part of DSW0, so MAME keeps
-- it in a fake port. Forcing it here is the only way to reach the cocktail
-- flip, which the game only applies when the video register's page bit is also
-- set -- that is, during player 2's turn in a two-player game.
if COCKTAIL then
    local cab = mach.ioport.ports[":CAB"]
    if cab and cab.fields["Cabinet"] then cab.fields["Cabinet"]:set_value(1) end
end

-- Live values of the two write-only video registers.
local live = { vreg = 0, scroll = 0 }
local frozen = nil          -- set at the target frame

_G.KEEP = {}
_G.KEEP.vreg = sp:install_write_tap(0x5000, 0x53ff, "vreg", function(off, data, mask)
    if frozen then return frozen.vreg end
    live.vreg = data & 0xff
    return data
end)
_G.KEEP.scroll = sp:install_write_tap(0x5800, 0x5bff, "scroll", function(off, data, mask)
    if frozen then return frozen.scroll end
    live.scroll = data & 0xff
    return data
end)
-- Offsets arriving here are absolute (measured: 4000..4BFE), not range-relative.
_G.KEEP.vram = sp:install_write_tap(0x4000, 0x4fff, "vram", function(off, data, mask)
    if frozen then return frozen.vram[off - 0x4000] end
    return data
end)

-- Scripted input, so a capture can reach a real gameplay state rather than
-- only attract mode.
local ports = mach.ioport.ports
local function field(p, n)
    local port = ports[p]
    return port and port.fields[n] or nil
end
local coin  = field(":IN0", "Coin 1")
local st1   = field(":IN0", "1 Player Start")
local st2   = field(":IN0", "2 Players Start")
local fire  = field(":CTRL", "P1 Button 1")
local left  = field(":CTRL", "P1 Left")
local right = field(":CTRL", "P1 Right")
local function hold(f, on) if f then f:set_value(on and 1 or 0) end end

local frame, shot_at = 0, nil

local function freeze()
    local v = {}
    for i = 0, 0x0fff do v[i] = sp:read_u8(0x4000 + i) end
    frozen = { vreg = live.vreg, scroll = live.scroll, vram = v }
end

local function write_dump()
    local path = string.format("%s/state_%s.txt", OUT, TAG)
    local f = assert(io.open(path, "w"))
    f:write("# Phoenix-hardware frozen video state\n")
    f:write(string.format("GAME %s\n", GAME))
    f:write(string.format("FRAME %d\n", TARGET))
    f:write(string.format("VREG %02X\n", frozen.vreg))
    f:write(string.format("SCROLL %02X\n", frozen.scroll))
    local cab = ports[":CAB"] and ports[":CAB"].fields["Cabinet"]
    f:write(string.format("CAB %d\n", cab and cab.user_value or 0))
    f:write("VRAM 4096\n")
    for i = 0, 0x0fff, 32 do
        local t = {}
        for j = 0, 31 do t[#t + 1] = string.format("%02x", frozen.vram[i + j]) end
        f:write(table.concat(t), "\n")
    end
    f:close()
    print(string.format("dumped %s  vreg=%02X scroll=%02X", path, frozen.vreg, frozen.scroll))
end

emu.register_frame_done(function()
    frame = frame + 1

    if PLAY and not frozen then
        -- Measured: the game polls IN0 once a frame, so a pulse has to be
        -- tens of frames long to be seen at all. Eight frames was not enough
        -- and every "gameplay" capture silently stayed in attract mode.
        hold(coin, frame >= 120 and frame < 150)
        hold(st1,  frame >= 200 and frame < 230)
        if COCKTAIL then hold(st2, frame >= 260 and frame < 290) end
        if frame > 260 then
            -- Sweep the stick so the capture lands somewhere with real action
            -- rather than the player sitting in one corner.
            local p = frame % 240
            hold(left,  p < 90)
            hold(right, p >= 120 and p < 210)
            hold(fire,  (frame % 8) < 4)
        end
    end

    if frame == TARGET then
        freeze()
    elseif frozen and frame == TARGET + 2 then
        -- Two frames of frozen state: MAME has now rendered a whole frame from
        -- exactly the values in the dump.
        mach.screens[":screen"]:snapshot()
        shot_at = frame
        write_dump()
    end
end)

emu.add_machine_stop_notifier(function()
    if not frozen then print("ERROR: never reached frame " .. TARGET) end
    if not shot_at then print("ERROR: no snapshot taken") end
end)

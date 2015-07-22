-- EFL LuaJIT bindings: evas_line.eo (class Evas.Line)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_line_class_get()
    eo.class_register("Evas_Line", {"Evas_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_line_class_get(void);
    void evas_obj_line_xy_set(Evas_Coord x1, Evas_Coord y1, Evas_Coord x2, Evas_Coord y2);
    void evas_obj_line_xy_get(Evas_Coord *x1, Evas_Coord *y1, Evas_Coord *x2, Evas_Coord *y2);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    xy_set = function(self, x1, y1, x2, y2)
        eo.__do_start(self, __class)
        __lib.evas_obj_line_xy_set(x1, y1, x2, y2)
        eo.__do_end()
    end,

    xy_get = function(self)
        eo.__do_start(self, __class)
        local x1 = ffi.new("Evas_Coord[1]")
        local y1 = ffi.new("Evas_Coord[1]")
        local x2 = ffi.new("Evas_Coord[1]")
        local y2 = ffi.new("Evas_Coord[1]")
        __lib.evas_obj_line_xy_get(x1, y1, x2, y2)
        eo.__do_end()
        return x1[0], y1[0], x2[0], y2[0]
    end,

    __properties = {
        ["xy"] = { 0, 0, 4, 4, true, true }
    }
}

M.Line = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Line").__eo_ctor,
                            1, ...)
end

return M

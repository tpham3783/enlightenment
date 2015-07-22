-- EFL LuaJIT bindings: evas_polygon.eo (class Evas.Polygon)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_polygon_class_get()
    eo.class_register("Evas_Polygon", {"Evas_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_polygon_class_get(void);
    void evas_obj_polygon_point_add(Evas_Coord x, Evas_Coord y);
    void evas_obj_polygon_points_clear(void);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    point_add = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.evas_obj_polygon_point_add(x, y)
        eo.__do_end()
    end,

    points_clear = function(self)
        eo.__do_start(self, __class)
        __lib.evas_obj_polygon_points_clear()
        eo.__do_end()
    end
}

M.Polygon = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Polygon").__eo_ctor,
                            1, ...)
end

return M

-- EFL LuaJIT bindings: evas_out.eo (class Evas.Out)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_out_class_get()
    eo.class_register("Evas_Out", {"Eo_Base"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_out_class_get(void);
    void evas_out_view_set(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h);
    void evas_out_view_get(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);
    Eina_Bool evas_out_engine_info_set(Evas_Engine_Info * info);
    Evas_Engine_Info *evas_out_engine_info_get(void);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    view_set = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.evas_out_view_set(x, y, w, h)
        eo.__do_end()
    end,

    view_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("Evas_Coord[1]")
        local y = ffi.new("Evas_Coord[1]")
        local w = ffi.new("Evas_Coord[1]")
        local h = ffi.new("Evas_Coord[1]")
        __lib.evas_out_view_get(x, y, w, h)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0]), tonumber(w[0]), tonumber(h[0])
    end,

    engine_info_set = function(self, info)
        eo.__do_start(self, __class)
        local v = __lib.evas_out_engine_info_set(info)
        eo.__do_end()
    end,

    engine_info_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_out_engine_info_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["engine_info"] = { 0, 0, 1, 1, true, true },
        ["view"] = { 0, 0, 4, 4, true, true }
    }
}

M.Out = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Out").__eo_ctor,
                            1, ...)
end

return M

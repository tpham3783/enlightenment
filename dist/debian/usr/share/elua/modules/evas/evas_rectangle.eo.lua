-- EFL LuaJIT bindings: evas_rectangle.eo (class Evas.Rectangle)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_rectangle_class_get()
    eo.class_register("Evas_Rectangle", {"Evas_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_rectangle_class_get(void);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
}

M.Rectangle = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Rectangle").__eo_ctor,
                            1, ...)
end

return M

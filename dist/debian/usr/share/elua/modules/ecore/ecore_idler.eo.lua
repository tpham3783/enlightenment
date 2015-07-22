-- EFL LuaJIT bindings: ecore_idler.eo (class Ecore.Idler)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.ecore_idler_class_get()
    eo.class_register("Ecore_Idler", {"Eo_Base"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *ecore_idler_class_get(void);
    void ecore_idler_constructor(Ecore_Task_Cb func, const void * data);
]]

__body = {
    __eo_ctor = function(self, constructor_func, constructor_data, __func)
        self:constructor(constructor_func, constructor_data)
        if __func then __func() end
    end,

    constructor = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.ecore_idler_constructor(func, data)
        eo.__do_end()
    end
}

M.Idler = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Ecore_Idler").__eo_ctor,
                            1, ...)
end

return M

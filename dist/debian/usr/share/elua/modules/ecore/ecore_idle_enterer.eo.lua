-- EFL LuaJIT bindings: ecore_idle_enterer.eo (class Ecore.Idle.Enterer)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.ecore_idle_enterer_class_get()
    eo.class_register("Ecore_Idle_Enterer", {"Eo_Base"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *ecore_idle_enterer_class_get(void);
    void ecore_idle_enterer_before_constructor(Ecore_Task_Cb func, const void * data);
    void ecore_idle_enterer_after_constructor(Ecore_Task_Cb func, const void * data);
]]

local __M = util.get_namespace(M, { "idle" })
__body = {
    __eo_ctor = function(self, before_constructor_func, before_constructor_data, after_constructor_func, after_constructor_data, __func)
        self:before_constructor(before_constructor_func, before_constructor_data)
        self:after_constructor(after_constructor_func, after_constructor_data)
        if __func then __func() end
    end,

    before_constructor = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.ecore_idle_enterer_before_constructor(func, data)
        eo.__do_end()
    end,

    after_constructor = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.ecore_idle_enterer_after_constructor(func, data)
        eo.__do_end()
    end
}

__M.Enterer = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Ecore_Idle_Enterer").__eo_ctor,
                            1, ...)
end

return M

-- EFL LuaJIT bindings: ecore_animator.eo (class Ecore.Animator)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.ecore_animator_class_get()
    eo.class_register("Ecore_Animator", {"Eo_Base"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *ecore_animator_class_get(void);
    void ecore_animator_timeline_constructor(double runtime, Ecore_Timeline_Cb func, const void * data);
    void ecore_animator_constructor(Ecore_Task_Cb func, const void * data);
]]

__body = {
    __eo_ctor = function(self, constructor_func, constructor_data, timeline_constructor_runtime, timeline_constructor_func, timeline_constructor_data, __func)
        self:constructor(constructor_func, constructor_data)
        self:timeline_constructor(timeline_constructor_runtime, timeline_constructor_func, timeline_constructor_data)
        if __func then __func() end
    end,

    timeline_constructor = function(self, runtime, func, data)
        eo.__do_start(self, __class)
        __lib.ecore_animator_timeline_constructor(runtime, func, data)
        eo.__do_end()
    end,

    constructor = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.ecore_animator_constructor(func, data)
        eo.__do_end()
    end
}

M.Animator = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Ecore_Animator").__eo_ctor,
                            1, ...)
end

return M

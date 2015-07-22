-- EFL LuaJIT bindings: ecore_timer.eo (class Ecore.Timer)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.ecore_timer_class_get()
    eo.class_register("Ecore_Timer", {"Eo_Base"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *ecore_timer_class_get(void);
    void ecore_obj_timer_interval_set(double in_);
    double ecore_obj_timer_interval_get(void);
    double ecore_obj_timer_pending_get(void);
    void ecore_obj_timer_loop_constructor(double in_, Ecore_Task_Cb func, const void * data);
    void ecore_obj_timer_constructor(double in_, Ecore_Task_Cb func, const void * data);
    void ecore_obj_timer_reset(void);
    void ecore_obj_timer_delay(double add);
]]

__body = {
    __eo_ctor = function(self, constructor_in, constructor_func, constructor_data, loop_constructor_in, loop_constructor_func, loop_constructor_data, __func)
        self:constructor(constructor_in, constructor_func, constructor_data)
        self:loop_constructor(loop_constructor_in, loop_constructor_func, loop_constructor_data)
        if __func then __func() end
    end,

    interval_set = function(self, in_)
        eo.__do_start(self, __class)
        __lib.ecore_obj_timer_interval_set(in_)
        eo.__do_end()
    end,

    interval_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_obj_timer_interval_get()
        eo.__do_end()
        return tonumber(v)
    end,

    pending_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_obj_timer_pending_get()
        eo.__do_end()
    end,

    loop_constructor = function(self, in_, func, data)
        eo.__do_start(self, __class)
        __lib.ecore_obj_timer_loop_constructor(in_, func, data)
        eo.__do_end()
    end,

    constructor = function(self, in_, func, data)
        eo.__do_start(self, __class)
        __lib.ecore_obj_timer_constructor(in_, func, data)
        eo.__do_end()
    end,

    reset = function(self)
        eo.__do_start(self, __class)
        __lib.ecore_obj_timer_reset()
        eo.__do_end()
    end,

    delay = function(self, add)
        eo.__do_start(self, __class)
        __lib.ecore_obj_timer_delay(add)
        eo.__do_end()
    end,

    __properties = {
        ["pending"] = { 0, 0, 1, 0, true, false },
        ["interval"] = { 0, 0, 1, 1, true, true }
    }
}

M.Timer = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Ecore_Timer").__eo_ctor,
                            1, ...)
end

return M

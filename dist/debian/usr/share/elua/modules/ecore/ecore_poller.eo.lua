-- EFL LuaJIT bindings: ecore_poller.eo (class Ecore.Poller)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.ecore_poller_class_get()
    eo.class_register("Ecore_Poller", {"Eo_Base"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *ecore_poller_class_get(void);
    Eina_Bool ecore_poller_interval_set(int interval);
    int ecore_poller_interval_get(void);
    void ecore_poller_constructor(Ecore_Poller_Type type, int interval, Ecore_Task_Cb func, const void * data);
]]

__body = {
    __eo_ctor = function(self, constructor_type, constructor_interval, constructor_func, constructor_data, __func)
        self:constructor(constructor_type, constructor_interval, constructor_func, constructor_data)
        if __func then __func() end
    end,

    interval_set = function(self, interval)
        eo.__do_start(self, __class)
        local v = __lib.ecore_poller_interval_set(interval)
        eo.__do_end()
    end,

    interval_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_poller_interval_get()
        eo.__do_end()
        return tonumber(v)
    end,

    constructor = function(self, type, interval, func, data)
        eo.__do_start(self, __class)
        __lib.ecore_poller_constructor(type, interval, func, data)
        eo.__do_end()
    end,

    __properties = {
        ["interval"] = { 0, 0, 1, 1, true, true }
    }
}

M.Poller = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Ecore_Poller").__eo_ctor,
                            1, ...)
end

return M

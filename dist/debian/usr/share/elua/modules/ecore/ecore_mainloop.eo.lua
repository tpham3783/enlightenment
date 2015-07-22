-- EFL LuaJIT bindings: ecore_mainloop.eo (class Ecore_Mainloop)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.ecore_mainloop_class_get()
    eo.class_register("Ecore_Mainloop", {"Eo_Base"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *ecore_mainloop_class_get(void);
    void ecore_mainloop_select_func_set(Ecore_Select_Function select_func);
    Ecore_Select_Function ecore_mainloop_select_func_get(void);
    void ecore_mainloop_iterate(void);
    int ecore_mainloop_iterate_may_block(int may_block);
    void ecore_mainloop_begin(void);
    void ecore_mainloop_quit(void);
    Eina_Bool ecore_mainloop_animator_ticked(void);
    extern const Eo_Event_Description _ECORE_MAINLOOP_EVENT_IDLE_ENTER;
    extern const Eo_Event_Description _ECORE_MAINLOOP_EVENT_IDLE_EXIT;
    extern const Eo_Event_Description _ECORE_MAINLOOP_EVENT_IDLE;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    select_func_set = function(self, select_func)
        eo.__do_start(self, __class)
        __lib.ecore_mainloop_select_func_set(select_func)
        eo.__do_end()
    end,

    select_func_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_mainloop_select_func_get()
        eo.__do_end()
        return v
    end,

    iterate = function(self)
        eo.__do_start(self, __class)
        __lib.ecore_mainloop_iterate()
        eo.__do_end()
    end,

    iterate_may_block = function(self, may_block)
        eo.__do_start(self, __class)
        local v = __lib.ecore_mainloop_iterate_may_block(may_block)
        eo.__do_end()
        return tonumber(v)
    end,

    begin = function(self)
        eo.__do_start(self, __class)
        __lib.ecore_mainloop_begin()
        eo.__do_end()
    end,

    quit = function(self)
        eo.__do_start(self, __class)
        __lib.ecore_mainloop_quit()
        eo.__do_end()
    end,

    animator_ticked = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_mainloop_animator_ticked()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["idle,enter"] = __lib._ECORE_MAINLOOP_EVENT_IDLE_ENTER,
        ["idle,exit"] = __lib._ECORE_MAINLOOP_EVENT_IDLE_EXIT,
        ["idle"] = __lib._ECORE_MAINLOOP_EVENT_IDLE
    },

    __properties = {
        ["select_func"] = { 0, 0, 1, 1, true, true }
    }
}

M.Ecore_Mainloop = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Ecore_Mainloop").__eo_ctor,
                            1, ...)
end

return M

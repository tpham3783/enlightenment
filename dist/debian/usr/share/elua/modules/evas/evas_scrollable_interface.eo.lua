-- EFL LuaJIT bindings: evas_scrollable_interface.eo (class Evas.Scrollable_Interface)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_scrollable_interface_interface_get()
    eo.class_register("Evas_Scrollable_Interface", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_scrollable_interface_interface_get(void);
    extern const Eo_Event_Description _EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL;
    extern const Eo_Event_Description _EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_ANIM_START;
    extern const Eo_Event_Description _EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_ANIM_STOP;
    extern const Eo_Event_Description _EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_DRAG_START;
    extern const Eo_Event_Description _EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_DRAG_STOP;
]]

__body = {
    __events = {
        ["scroll"] = __lib._EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL,
        ["scroll,anim,start"] = __lib._EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_ANIM_START,
        ["scroll,anim,stop"] = __lib._EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_ANIM_STOP,
        ["scroll,drag,start"] = __lib._EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_DRAG_START,
        ["scroll,drag,stop"] = __lib._EVAS_SCROLLABLE_INTERFACE_EVENT_SCROLL_DRAG_STOP
    }
}
__body["__iface_Evas_Scrollable_Interface"] = true

return M

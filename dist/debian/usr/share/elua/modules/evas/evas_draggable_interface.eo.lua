-- EFL LuaJIT bindings: evas_draggable_interface.eo (class Evas.Draggable_Interface)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_draggable_interface_interface_get()
    eo.class_register("Evas_Draggable_Interface", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_draggable_interface_interface_get(void);
    extern const Eo_Event_Description _EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG;
    extern const Eo_Event_Description _EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START;
    extern const Eo_Event_Description _EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_STOP;
    extern const Eo_Event_Description _EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_END;
    extern const Eo_Event_Description _EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_UP;
    extern const Eo_Event_Description _EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_DOWN;
    extern const Eo_Event_Description _EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_RIGHT;
    extern const Eo_Event_Description _EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_LEFT;
]]

__body = {
    __events = {
        ["drag"] = __lib._EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG,
        ["drag,start"] = __lib._EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START,
        ["drag,stop"] = __lib._EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_STOP,
        ["drag,end"] = __lib._EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_END,
        ["drag,start,up"] = __lib._EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_UP,
        ["drag,start,down"] = __lib._EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_DOWN,
        ["drag,start,right"] = __lib._EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_RIGHT,
        ["drag,start,left"] = __lib._EVAS_DRAGGABLE_INTERFACE_EVENT_DRAG_START_LEFT
    }
}
__body["__iface_Evas_Draggable_Interface"] = true

return M

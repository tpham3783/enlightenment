-- EFL LuaJIT bindings: evas_selectable_interface.eo (class Evas.Selectable_Interface)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_selectable_interface_interface_get()
    eo.class_register("Evas_Selectable_Interface", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_selectable_interface_interface_get(void);
    extern const Eo_Event_Description _EVAS_SELECTABLE_INTERFACE_EVENT_SELECTED;
    extern const Eo_Event_Description _EVAS_SELECTABLE_INTERFACE_EVENT_UNSELECTED;
    extern const Eo_Event_Description _EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_PASTE;
    extern const Eo_Event_Description _EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_COPY;
    extern const Eo_Event_Description _EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CUT;
    extern const Eo_Event_Description _EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_START;
    extern const Eo_Event_Description _EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CHANGED;
    extern const Eo_Event_Description _EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CLEARED;
]]

__body = {
    __events = {
        ["selected"] = __lib._EVAS_SELECTABLE_INTERFACE_EVENT_SELECTED,
        ["unselected"] = __lib._EVAS_SELECTABLE_INTERFACE_EVENT_UNSELECTED,
        ["selection,paste"] = __lib._EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_PASTE,
        ["selection,copy"] = __lib._EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_COPY,
        ["selection,cut"] = __lib._EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CUT,
        ["selection,start"] = __lib._EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_START,
        ["selection,changed"] = __lib._EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CHANGED,
        ["selection,cleared"] = __lib._EVAS_SELECTABLE_INTERFACE_EVENT_SELECTION_CLEARED
    }
}
__body["__iface_Evas_Selectable_Interface"] = true

return M

-- EFL LuaJIT bindings: evas_zoomable_interface.eo (class Evas.Zoomable_Interface)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_zoomable_interface_interface_get()
    eo.class_register("Evas_Zoomable_Interface", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_zoomable_interface_interface_get(void);
    extern const Eo_Event_Description _EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_START;
    extern const Eo_Event_Description _EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_STOP;
    extern const Eo_Event_Description _EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_CHANGE;
]]

__body = {
    __events = {
        ["zoom,start"] = __lib._EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_START,
        ["zoom,stop"] = __lib._EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_STOP,
        ["zoom,change"] = __lib._EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_CHANGE
    }
}
__body["__iface_Evas_Zoomable_Interface"] = true

return M

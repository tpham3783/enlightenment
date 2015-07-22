-- EFL LuaJIT bindings: evas_signal_interface.eo (class Evas.Signal_Interface)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_signal_interface_interface_get()
    eo.class_register("Evas_Signal_Interface", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_signal_interface_interface_get(void);
]]

__body = {
}
__body["__iface_Evas_Signal_Interface"] = true

return M

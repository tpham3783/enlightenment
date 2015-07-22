-- EFL LuaJIT bindings: evas_common_interface.eo (class Evas.Common_Interface)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_common_interface_interface_get()
    eo.class_register("Evas_Common_Interface", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_common_interface_interface_get(void);
    Evas_Common_Interface *evas_common_evas_get(void);
]]

__body = {
    evas_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_common_evas_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["evas"] = { 0, 0, 1, 0, true, false }
    }
}
__body["__iface_Evas_Common_Interface"] = true

return M

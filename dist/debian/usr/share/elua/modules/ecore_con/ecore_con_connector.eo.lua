-- EFL LuaJIT bindings: ecore_con_connector.eo (class Ecore.Con.Connector)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.ecore_con_connector_class_get()
    eo.class_register("Ecore_Con_Connector", {"Ecore_Con_Server"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *ecore_con_connector_class_get(void);
]]

local __M = util.get_namespace(M, { "con" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
}

__M.Connector = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Ecore_Con_Connector").__eo_ctor,
                            1, ...)
end

return M

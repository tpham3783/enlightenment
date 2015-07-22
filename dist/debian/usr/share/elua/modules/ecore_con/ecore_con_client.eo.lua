-- EFL LuaJIT bindings: ecore_con_client.eo (class Ecore.Con.Client)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.ecore_con_client_class_get()
    eo.class_register("Ecore_Con_Client", {"Ecore_Con_Base"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *ecore_con_client_class_get(void);
    Ecore_Con_Server *ecore_con_client_obj_server_get(void);
]]

local __M = util.get_namespace(M, { "con" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    server_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_con_client_obj_server_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["server"] = { 0, 0, 1, 0, true, false }
    }
}

__M.Client = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Ecore_Con_Client").__eo_ctor,
                            1, ...)
end

return M

-- EFL LuaJIT bindings: ecore_con_server.eo (class Ecore.Con.Server)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.ecore_con_server_class_get()
    eo.class_register("Ecore_Con_Server", {"Ecore_Con_Base"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *ecore_con_server_class_get(void);
    void ecore_con_server_obj_name_set(const char * name);
    const char *ecore_con_server_obj_name_get(void);
    void ecore_con_server_obj_client_limit_set(int client_limit, char reject_excess_clients);
    void ecore_con_server_obj_client_limit_get(int *client_limit, char *reject_excess_clients);
    const Eina_List *ecore_con_server_obj_clients_get(void);
    void ecore_con_server_obj_connection_type_set(Ecore_Con_Type conn_type);
    Ecore_Con_Type ecore_con_server_obj_connection_type_get(void);
]]

local __M = util.get_namespace(M, { "con" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    name_set = function(self, name)
        eo.__do_start(self, __class)
        __lib.ecore_con_server_obj_name_set(name)
        eo.__do_end()
    end,

    name_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_con_server_obj_name_get()
        eo.__do_end()
        return ffi.string(v)
    end,

    client_limit_set = function(self, client_limit, reject_excess_clients)
        eo.__do_start(self, __class)
        __lib.ecore_con_server_obj_client_limit_set(client_limit, reject_excess_clients)
        eo.__do_end()
    end,

    client_limit_get = function(self)
        eo.__do_start(self, __class)
        local client_limit = ffi.new("int[1]")
        local reject_excess_clients = ffi.new("char[1]")
        __lib.ecore_con_server_obj_client_limit_get(client_limit, reject_excess_clients)
        eo.__do_end()
        return tonumber(client_limit[0]), string.char(reject_excess_clients[0])
    end,

    clients_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_con_server_obj_clients_get()
        eo.__do_end()
        return v
    end,

    connection_type_set = function(self, conn_type)
        eo.__do_start(self, __class)
        __lib.ecore_con_server_obj_connection_type_set(conn_type)
        eo.__do_end()
    end,

    connection_type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_con_server_obj_connection_type_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["client_limit"] = { 0, 0, 2, 2, true, true },
        ["clients"] = { 0, 0, 1, 0, true, false },
        ["name"] = { 0, 0, 1, 1, true, true },
        ["connection_type"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Server = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Ecore_Con_Server").__eo_ctor,
                            1, ...)
end

return M

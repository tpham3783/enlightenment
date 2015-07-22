-- EFL LuaJIT bindings: ecore_con_base.eo (class Ecore.Con.Base)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.ecore_con_base_class_get()
    eo.class_register("Ecore_Con_Base", {"Eo_Base"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *ecore_con_base_class_get(void);
    const char *ecore_con_obj_ip_get(void);
    double ecore_con_obj_uptime_get(void);
    void ecore_con_obj_port_set(int port);
    int ecore_con_obj_port_get(void);
    int ecore_con_obj_fd_get(void);
    Eina_Bool ecore_con_obj_connected_get(void);
    void ecore_con_obj_timeout_set(double timeout);
    double ecore_con_obj_timeout_get(void);
    void ecore_con_obj_flush(void);
    int ecore_con_obj_send(const void * data, int size);
    Eina_Bool ecore_con_obj_lookup(const char * name, Ecore_Con_Dns_Cb done_cb, const void * data);
    extern const Eo_Event_Description _ECORE_CON_BASE_EVENT_DATA_RECEIVED;
    extern const Eo_Event_Description _ECORE_CON_BASE_EVENT_CONNECTION_UPGRADED;
    extern const Eo_Event_Description _ECORE_CON_BASE_EVENT_CONNECTION_ERROR;
]]

local __M = util.get_namespace(M, { "con" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    ip_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_con_obj_ip_get()
        eo.__do_end()
        return ffi.string(v)
    end,

    uptime_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_con_obj_uptime_get()
        eo.__do_end()
        return tonumber(v)
    end,

    port_set = function(self, port)
        eo.__do_start(self, __class)
        __lib.ecore_con_obj_port_set(port)
        eo.__do_end()
    end,

    port_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_con_obj_port_get()
        eo.__do_end()
        return tonumber(v)
    end,

    fd_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_con_obj_fd_get()
        eo.__do_end()
        return tonumber(v)
    end,

    connected_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_con_obj_connected_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    timeout_set = function(self, timeout)
        eo.__do_start(self, __class)
        __lib.ecore_con_obj_timeout_set(timeout)
        eo.__do_end()
    end,

    timeout_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_con_obj_timeout_get()
        eo.__do_end()
        return tonumber(v)
    end,

    flush = function(self)
        eo.__do_start(self, __class)
        __lib.ecore_con_obj_flush()
        eo.__do_end()
    end,

    send = function(self, data, size)
        eo.__do_start(self, __class)
        local v = __lib.ecore_con_obj_send(data, size)
        eo.__do_end()
        return tonumber(v)
    end,

    lookup = function(self, name, done_cb, data)
        eo.__do_start(self, __class)
        local v = __lib.ecore_con_obj_lookup(name, done_cb, data)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["data,received"] = __lib._ECORE_CON_BASE_EVENT_DATA_RECEIVED,
        ["connection,upgraded"] = __lib._ECORE_CON_BASE_EVENT_CONNECTION_UPGRADED,
        ["connection,error"] = __lib._ECORE_CON_BASE_EVENT_CONNECTION_ERROR
    },

    __properties = {
        ["ip"] = { 0, 0, 1, 0, true, false },
        ["uptime"] = { 0, 0, 1, 0, true, false },
        ["fd"] = { 0, 0, 1, 0, true, false },
        ["connected"] = { 0, 0, 1, 0, true, false },
        ["timeout"] = { 0, 0, 1, 1, true, true },
        ["port"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Base = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Ecore_Con_Base").__eo_ctor,
                            1, ...)
end

return M

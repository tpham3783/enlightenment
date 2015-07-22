-- EFL LuaJIT bindings: efl_network_url.eo (class Efl.Network.Url)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_network_url_class_get()
    eo.class_register("Efl_Network_Url", {"Eo_Base"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_network_url_class_get(void);
    Eina_Bool efl_network_url_set(const char * url);
    const char *efl_network_url_get(void);
    extern const Eo_Event_Description _EFL_NETWORK_URL_EVENT_DATA;
    extern const Eo_Event_Description _EFL_NETWORK_URL_EVENT_PROGRESS;
    extern const Eo_Event_Description _EFL_NETWORK_URL_EVENT_COMPLETE;
]]

local __M = util.get_namespace(M, { "network" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    url_set = function(self, url)
        eo.__do_start(self, __class)
        local v = __lib.efl_network_url_set(url)
        eo.__do_end()
    end,

    url_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_network_url_get()
        eo.__do_end()
        return ffi.string(v)
    end,

    __events = {
        ["data"] = __lib._EFL_NETWORK_URL_EVENT_DATA,
        ["progress"] = __lib._EFL_NETWORK_URL_EVENT_PROGRESS,
        ["complete"] = __lib._EFL_NETWORK_URL_EVENT_COMPLETE
    },

    __properties = {
        ["url"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Url = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Network_Url").__eo_ctor,
                            1, ...)
end

return M

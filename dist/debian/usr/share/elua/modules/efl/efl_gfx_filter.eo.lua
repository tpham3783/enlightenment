-- EFL LuaJIT bindings: efl_gfx_filter.eo (class Efl.Gfx.Filter)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_gfx_filter_interface_get()
    eo.class_register("Efl_Gfx_Filter", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_gfx_filter_interface_get(void);
    void efl_gfx_filter_program_set(const char * code, const char * name);
    void efl_gfx_filter_program_get(const char * *code, const char * *name);
    void efl_gfx_filter_state_set(const char * cur_state, double cur_val, const char * next_state, double next_val, double pos);
    void efl_gfx_filter_padding_get(int *l, int *r, int *t, int *b);
    void efl_gfx_filter_source_set(const char * name, Efl_Gfx_Base * source);
    void efl_gfx_filter_source_get(const char * name, Efl_Gfx_Base * *source);
    void efl_gfx_filter_data_set(const char * name, const char * value, Eina_Bool execute);
]]

local __M = util.get_namespace(M, { "gfx" })
__body = {
    program_set = function(self, code, name)
        eo.__do_start(self, __class)
        __lib.efl_gfx_filter_program_set(code, name)
        eo.__do_end()
    end,

    program_get = function(self)
        eo.__do_start(self, __class)
        local code = ffi.new("const char *[1]")
        local name = ffi.new("const char *[1]")
        __lib.efl_gfx_filter_program_get(code, name)
        eo.__do_end()
        return ffi.string(code[0]), ffi.string(name[0])
    end,

    state_set = function(self, cur_state, cur_val, next_state, next_val, pos)
        eo.__do_start(self, __class)
        __lib.efl_gfx_filter_state_set(cur_state, cur_val, next_state, next_val, pos)
        eo.__do_end()
    end,

    padding_get = function(self)
        eo.__do_start(self, __class)
        local l = ffi.new("int[1]")
        local r = ffi.new("int[1]")
        local t = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        __lib.efl_gfx_filter_padding_get(l, r, t, b)
        eo.__do_end()
        return tonumber(l[0]), tonumber(r[0]), tonumber(t[0]), tonumber(b[0])
    end,

    source_set = function(self, name, source)
        eo.__do_start(self, __class)
        __lib.efl_gfx_filter_source_set(name, source)
        eo.__do_end()
    end,

    source_get = function(self, name)
        eo.__do_start(self, __class)
        local source = ffi.new("Efl_Gfx_Base *[1]")
        __lib.efl_gfx_filter_source_get(name, source)
        eo.__do_end()
        return source[0]
    end,

    data_set = function(self, name, value, execute)
        eo.__do_start(self, __class)
        __lib.efl_gfx_filter_data_set(name, value, execute)
        eo.__do_end()
    end,

    __properties = {
        ["state"] = { 0, 0, 0, 5, false, true },
        ["program"] = { 0, 0, 2, 2, true, true },
        ["padding"] = { 0, 0, 4, 0, true, false }
    }
}
__body["__iface_Efl_Gfx_Filter"] = true

return M

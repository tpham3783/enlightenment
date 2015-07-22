-- EFL LuaJIT bindings: evas_filter.eo (class Evas.Filter)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_filter_mixin_get()
    eo.class_register("Evas_Filter", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_filter_mixin_get(void);
]]

__body = {
}
__body["__mixin_Evas_Filter"] = true

return M

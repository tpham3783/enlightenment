-- EFL LuaJIT bindings: efl_image.eo (class Efl.Image)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_image_interface_get()
    eo.class_register("Efl_Image", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_image_interface_get(void);
    Eina_Bool efl_image_animated_get(void);
    void efl_image_load_size_set(int w, int h);
    void efl_image_load_size_get(int *w, int *h);
    void efl_image_smooth_scale_set(Eina_Bool smooth_scale);
    Eina_Bool efl_image_smooth_scale_get(void);
    double efl_image_ratio_get(void);
]]

__body = {
    animated_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_animated_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    load_size_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.efl_image_load_size_set(w, h)
        eo.__do_end()
    end,

    load_size_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_image_load_size_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    smooth_scale_set = function(self, smooth_scale)
        eo.__do_start(self, __class)
        __lib.efl_image_smooth_scale_set(smooth_scale)
        eo.__do_end()
    end,

    smooth_scale_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_smooth_scale_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    ratio_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_ratio_get()
        eo.__do_end()
        return tonumber(v)
    end,

    __properties = {
        ["ratio"] = { 0, 0, 1, 0, true, false },
        ["animated"] = { 0, 0, 1, 0, true, false },
        ["load_size"] = { 0, 0, 2, 2, true, true },
        ["smooth_scale"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Image"] = true

return M

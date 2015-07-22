-- EFL LuaJIT bindings: efl_vg_base.eo (class Efl.VG.Base)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_vg_base_class_get()
    eo.class_register("Efl_VG_Base", {"Eo_Base"}, {"Efl_Gfx_Base", "Efl_Gfx_Stack"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_vg_base_class_get(void);
    void efl_vg_transformation_set(const Eina_Matrix3 * m);
    const Eina_Matrix3 *efl_vg_transformation_get(void);
    void efl_vg_origin_set(double x, double y);
    void efl_vg_origin_get(double *x, double *y);
    void efl_vg_mask_set(Efl_VG * m);
    Efl_VG *efl_vg_mask_get(void);
    void efl_vg_bounds_get(Eina_Rectangle *r);
]]

local __M = util.get_namespace(M, { "vg" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    transformation_set = function(self, m)
        eo.__do_start(self, __class)
        __lib.efl_vg_transformation_set(m)
        eo.__do_end()
    end,

    transformation_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_vg_transformation_get()
        eo.__do_end()
        return v
    end,

    origin_set = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.efl_vg_origin_set(x, y)
        eo.__do_end()
    end,

    origin_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("double[1]")
        local y = ffi.new("double[1]")
        __lib.efl_vg_origin_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    mask_set = function(self, m)
        eo.__do_start(self, __class)
        __lib.efl_vg_mask_set(m)
        eo.__do_end()
    end,

    mask_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_vg_mask_get()
        eo.__do_end()
        return v
    end,

    bounds_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("Eina_Rectangle[1]")
        __lib.efl_vg_bounds_get(r)
        eo.__do_end()
        return r[0]
    end,

    __properties = {
        ["mask"] = { 0, 0, 1, 1, true, true },
        ["transformation"] = { 0, 0, 1, 1, true, true },
        ["origin"] = { 0, 0, 2, 2, true, true }
    }
}

__M.Base = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_VG_Base").__eo_ctor,
                            1, ...)
end

return M

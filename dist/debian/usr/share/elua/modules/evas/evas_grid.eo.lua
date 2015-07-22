-- EFL LuaJIT bindings: evas_grid.eo (class Evas.Grid)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_grid_class_get()
    eo.class_register("Evas_Grid", {"Evas_Smart_Clipped"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_grid_class_get(void);
    void evas_obj_grid_mirrored_set(Eina_Bool mirrored);
    Eina_Bool evas_obj_grid_mirrored_get(void);
    void evas_obj_grid_size_set(int w, int h);
    void evas_obj_grid_size_get(int *w, int *h);
    Eina_List *evas_obj_grid_children_get(void);
    Eina_Accessor *evas_obj_grid_accessor_new(void);
    void evas_obj_grid_clear(Eina_Bool clear);
    Eina_Iterator *evas_obj_grid_iterator_new(void);
    Evas_Object *evas_obj_grid_add_to(void);
    Eina_Bool evas_obj_grid_unpack(Evas_Object * child);
    Eina_Bool evas_obj_grid_pack_get(Evas_Object * child, int *x, int *y, int *w, int *h);
    Eina_Bool evas_obj_grid_pack(Evas_Object * child, int x, int y, int w, int h);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    mirrored_set = function(self, mirrored)
        eo.__do_start(self, __class)
        __lib.evas_obj_grid_mirrored_set(mirrored)
        eo.__do_end()
    end,

    mirrored_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_grid_mirrored_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    size_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.evas_obj_grid_size_set(w, h)
        eo.__do_end()
    end,

    size_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.evas_obj_grid_size_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    children_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_grid_children_get()
        eo.__do_end()
    end,

    accessor_new = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_grid_accessor_new()
        eo.__do_end()
        return v
    end,

    clear = function(self, clear)
        eo.__do_start(self, __class)
        __lib.evas_obj_grid_clear(clear)
        eo.__do_end()
    end,

    iterator_new = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_grid_iterator_new()
        eo.__do_end()
        return v
    end,

    add_to = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_grid_add_to()
        eo.__do_end()
        return v
    end,

    unpack = function(self, child)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_grid_unpack(child)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    pack_get = function(self, child)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        local v = __lib.evas_obj_grid_pack_get(child, x, y, w, h)
        eo.__do_end()
        return ((v) ~= 0), tonumber(x[0]), tonumber(y[0]), tonumber(w[0]), tonumber(h[0])
    end,

    pack = function(self, child, x, y, w, h)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_grid_pack(child, x, y, w, h)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["children"] = { 0, 0, 1, 0, true, false },
        ["size"] = { 0, 0, 2, 2, true, true },
        ["mirrored"] = { 0, 0, 1, 1, true, true }
    }
}

M.Grid = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Grid").__eo_ctor,
                            1, ...)
end

return M

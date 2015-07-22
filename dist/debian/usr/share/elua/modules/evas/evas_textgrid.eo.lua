-- EFL LuaJIT bindings: evas_textgrid.eo (class Evas.Textgrid)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_textgrid_class_get()
    eo.class_register("Evas_Textgrid", {"Evas_Object"}, {"Efl_Text_Properties"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_textgrid_class_get(void);
    void evas_obj_textgrid_supported_font_styles_set(Evas_Textgrid_Font_Style styles);
    Evas_Textgrid_Font_Style evas_obj_textgrid_supported_font_styles_get(void);
    void evas_obj_textgrid_size_set(int w, int h);
    void evas_obj_textgrid_size_get(int *w, int *h);
    void evas_obj_textgrid_cell_size_get(int *width, int *height);
    void evas_obj_textgrid_update_add(int x, int y, int w, int h);
    void evas_obj_textgrid_cellrow_set(int y, const Evas_Textgrid_Cell * row);
    Evas_Textgrid_Cell *evas_obj_textgrid_cellrow_get(int y);
    void evas_obj_textgrid_palette_set(Evas_Textgrid_Palette pal, int idx, int r, int g, int b, int a);
    void evas_obj_textgrid_palette_get(Evas_Textgrid_Palette pal, int idx, int *r, int *g, int *b, int *a);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    supported_font_styles_set = function(self, styles)
        eo.__do_start(self, __class)
        __lib.evas_obj_textgrid_supported_font_styles_set(styles)
        eo.__do_end()
    end,

    supported_font_styles_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_textgrid_supported_font_styles_get()
        eo.__do_end()
        return v
    end,

    size_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.evas_obj_textgrid_size_set(w, h)
        eo.__do_end()
    end,

    size_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.evas_obj_textgrid_size_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    cell_size_get = function(self)
        eo.__do_start(self, __class)
        local width = ffi.new("int[1]")
        local height = ffi.new("int[1]")
        __lib.evas_obj_textgrid_cell_size_get(width, height)
        eo.__do_end()
        return tonumber(width[0]), tonumber(height[0])
    end,

    update_add = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.evas_obj_textgrid_update_add(x, y, w, h)
        eo.__do_end()
    end,

    cellrow_set = function(self, y, row)
        eo.__do_start(self, __class)
        __lib.evas_obj_textgrid_cellrow_set(y, row)
        eo.__do_end()
    end,

    cellrow_get = function(self, y)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_textgrid_cellrow_get(y)
        eo.__do_end()
        return v
    end,

    palette_set = function(self, pal, idx, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.evas_obj_textgrid_palette_set(pal, idx, r, g, b, a)
        eo.__do_end()
    end,

    palette_get = function(self, pal, idx)
        eo.__do_start(self, __class)
        local r = ffi.new("int[1]")
        local g = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        local a = ffi.new("int[1]")
        __lib.evas_obj_textgrid_palette_get(pal, idx, r, g, b, a)
        eo.__do_end()
        return tonumber(r[0]), tonumber(g[0]), tonumber(b[0]), tonumber(a[0])
    end,

    __properties = {
        ["supported_font_styles"] = { 0, 0, 1, 1, true, true },
        ["size"] = { 0, 0, 2, 2, true, true },
        ["cell_size"] = { 0, 0, 2, 0, true, false }
    }
}

M.Textgrid = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Textgrid").__eo_ctor,
                            1, ...)
end

return M

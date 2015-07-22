-- EFL LuaJIT bindings: evas_text.eo (class Evas.Text)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_text_class_get()
    eo.class_register("Evas_Text", {"Evas_Object"}, {"Efl_Text", "Efl_Text_Properties", "Evas_Filter"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_text_class_get(void);
    void evas_obj_text_shadow_color_set(int r, int g, int b, int a);
    void evas_obj_text_shadow_color_get(int *r, int *g, int *b, int *a);
    void evas_obj_text_ellipsis_set(double ellipsis);
    double evas_obj_text_ellipsis_get(void);
    void evas_obj_text_bidi_delimiters_set(const char * delim);
    const char *evas_obj_text_bidi_delimiters_get(void);
    void evas_obj_text_outline_color_set(int r, int g, int b, int a);
    void evas_obj_text_outline_color_get(int *r, int *g, int *b, int *a);
    void evas_obj_text_glow2_color_set(int r, int g, int b, int a);
    void evas_obj_text_glow2_color_get(int *r, int *g, int *b, int *a);
    void evas_obj_text_style_set(Evas_Text_Style_Type style);
    Evas_Text_Style_Type evas_obj_text_style_get(void);
    void evas_obj_text_glow_color_set(int r, int g, int b, int a);
    void evas_obj_text_glow_color_get(int *r, int *g, int *b, int *a);
    Evas_Coord evas_obj_text_max_descent_get(void);
    void evas_obj_text_style_pad_get(int *l, int *r, int *t, int *b);
    Evas_BiDi_Direction evas_obj_text_direction_get(void);
    Evas_Coord evas_obj_text_ascent_get(void);
    Evas_Coord evas_obj_text_horiz_advance_get(void);
    Evas_Coord evas_obj_text_inset_get(void);
    Evas_Coord evas_obj_text_max_ascent_get(void);
    Evas_Coord evas_obj_text_vert_advance_get(void);
    Evas_Coord evas_obj_text_descent_get(void);
    int evas_obj_text_last_up_to_pos(Evas_Coord x, Evas_Coord y);
    int evas_obj_text_char_coords_get(Evas_Coord x, Evas_Coord y, Evas_Coord *cx, Evas_Coord *cy, Evas_Coord *cw, Evas_Coord *ch);
    Eina_Bool evas_obj_text_char_pos_get(int pos, Evas_Coord *cx, Evas_Coord *cy, Evas_Coord *cw, Evas_Coord *ch);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    shadow_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.evas_obj_text_shadow_color_set(r, g, b, a)
        eo.__do_end()
    end,

    shadow_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("int[1]")
        local g = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        local a = ffi.new("int[1]")
        __lib.evas_obj_text_shadow_color_get(r, g, b, a)
        eo.__do_end()
        return tonumber(r[0]), tonumber(g[0]), tonumber(b[0]), tonumber(a[0])
    end,

    ellipsis_set = function(self, ellipsis)
        eo.__do_start(self, __class)
        __lib.evas_obj_text_ellipsis_set(ellipsis)
        eo.__do_end()
    end,

    ellipsis_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_text_ellipsis_get()
        eo.__do_end()
        return tonumber(v)
    end,

    bidi_delimiters_set = function(self, delim)
        eo.__do_start(self, __class)
        __lib.evas_obj_text_bidi_delimiters_set(delim)
        eo.__do_end()
    end,

    bidi_delimiters_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_text_bidi_delimiters_get()
        eo.__do_end()
        return ffi.string(v)
    end,

    outline_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.evas_obj_text_outline_color_set(r, g, b, a)
        eo.__do_end()
    end,

    outline_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("int[1]")
        local g = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        local a = ffi.new("int[1]")
        __lib.evas_obj_text_outline_color_get(r, g, b, a)
        eo.__do_end()
        return tonumber(r[0]), tonumber(g[0]), tonumber(b[0]), tonumber(a[0])
    end,

    glow2_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.evas_obj_text_glow2_color_set(r, g, b, a)
        eo.__do_end()
    end,

    glow2_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("int[1]")
        local g = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        local a = ffi.new("int[1]")
        __lib.evas_obj_text_glow2_color_get(r, g, b, a)
        eo.__do_end()
        return tonumber(r[0]), tonumber(g[0]), tonumber(b[0]), tonumber(a[0])
    end,

    style_set = function(self, style)
        eo.__do_start(self, __class)
        __lib.evas_obj_text_style_set(style)
        eo.__do_end()
    end,

    style_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_text_style_get()
        eo.__do_end()
        return v
    end,

    glow_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.evas_obj_text_glow_color_set(r, g, b, a)
        eo.__do_end()
    end,

    glow_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("int[1]")
        local g = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        local a = ffi.new("int[1]")
        __lib.evas_obj_text_glow_color_get(r, g, b, a)
        eo.__do_end()
        return tonumber(r[0]), tonumber(g[0]), tonumber(b[0]), tonumber(a[0])
    end,

    max_descent_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_text_max_descent_get()
        eo.__do_end()
    end,

    style_pad_get = function(self)
        eo.__do_start(self, __class)
        local l = ffi.new("int[1]")
        local r = ffi.new("int[1]")
        local t = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        __lib.evas_obj_text_style_pad_get(l, r, t, b)
        eo.__do_end()
        return tonumber(l[0]), tonumber(r[0]), tonumber(t[0]), tonumber(b[0])
    end,

    direction_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_text_direction_get()
        eo.__do_end()
    end,

    ascent_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_text_ascent_get()
        eo.__do_end()
    end,

    horiz_advance_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_text_horiz_advance_get()
        eo.__do_end()
    end,

    inset_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_text_inset_get()
        eo.__do_end()
    end,

    max_ascent_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_text_max_ascent_get()
        eo.__do_end()
    end,

    vert_advance_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_text_vert_advance_get()
        eo.__do_end()
    end,

    descent_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_text_descent_get()
        eo.__do_end()
    end,

    last_up_to_pos = function(self, x, y)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_text_last_up_to_pos(x, y)
        eo.__do_end()
        return tonumber(v)
    end,

    char_coords_get = function(self, x, y)
        eo.__do_start(self, __class)
        local cx = ffi.new("Evas_Coord[1]")
        local cy = ffi.new("Evas_Coord[1]")
        local cw = ffi.new("Evas_Coord[1]")
        local ch = ffi.new("Evas_Coord[1]")
        local v = __lib.evas_obj_text_char_coords_get(x, y, cx, cy, cw, ch)
        eo.__do_end()
        return tonumber(v), cx[0], cy[0], cw[0], ch[0]
    end,

    char_pos_get = function(self, pos)
        eo.__do_start(self, __class)
        local cx = ffi.new("Evas_Coord[1]")
        local cy = ffi.new("Evas_Coord[1]")
        local cw = ffi.new("Evas_Coord[1]")
        local ch = ffi.new("Evas_Coord[1]")
        local v = __lib.evas_obj_text_char_pos_get(pos, cx, cy, cw, ch)
        eo.__do_end()
        return ((v) ~= 0), cx[0], cy[0], cw[0], ch[0]
    end,

    __properties = {
        ["vert_advance"] = { 0, 0, 1, 0, true, false },
        ["glow_color"] = { 0, 0, 4, 4, true, true },
        ["max_descent"] = { 0, 0, 1, 0, true, false },
        ["horiz_advance"] = { 0, 0, 1, 0, true, false },
        ["descent"] = { 0, 0, 1, 0, true, false },
        ["direction"] = { 0, 0, 1, 0, true, false },
        ["style"] = { 0, 0, 1, 1, true, true },
        ["bidi_delimiters"] = { 0, 0, 1, 1, true, true },
        ["ellipsis"] = { 0, 0, 1, 1, true, true },
        ["ascent"] = { 0, 0, 1, 0, true, false },
        ["outline_color"] = { 0, 0, 4, 4, true, true },
        ["shadow_color"] = { 0, 0, 4, 4, true, true },
        ["max_ascent"] = { 0, 0, 1, 0, true, false },
        ["style_pad"] = { 0, 0, 4, 0, true, false },
        ["glow2_color"] = { 0, 0, 4, 4, true, true },
        ["inset"] = { 0, 0, 1, 0, true, false }
    }
}

M.Text = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Text").__eo_ctor,
                            1, ...)
end

return M

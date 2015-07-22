-- EFL LuaJIT bindings: evas_textblock.eo (class Evas.Textblock)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_textblock_class_get()
    eo.class_register("Evas_Textblock", {"Evas_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_textblock_class_get(void);
    void evas_obj_textblock_text_markup_set(const char * text);
    const char *evas_obj_textblock_text_markup_get(void);
    void evas_obj_textblock_valign_set(double align);
    double evas_obj_textblock_valign_get(void);
    void evas_obj_textblock_bidi_delimiters_set(const char * delim);
    const char *evas_obj_textblock_bidi_delimiters_get(void);
    void evas_obj_textblock_replace_char_set(const char * ch);
    void evas_obj_textblock_legacy_newline_set(Eina_Bool mode);
    Eina_Bool evas_obj_textblock_legacy_newline_get(void);
    void evas_obj_textblock_style_set(const Evas_Textblock_Style * ts);
    const Evas_Textblock_Style *evas_obj_textblock_style_get(void);
    const Evas_Textblock_Node_Format *evas_obj_textblock_node_format_first_get(void);
    void evas_obj_textblock_size_formatted_get(Evas_Coord *w, Evas_Coord *h);
    const Evas_Textblock_Node_Format *evas_obj_textblock_node_format_last_get(void);
    Evas_Textblock_Cursor *evas_obj_textblock_cursor_get(void);
    void evas_obj_textblock_size_native_get(Evas_Coord *w, Evas_Coord *h);
    void evas_obj_textblock_style_insets_get(Evas_Coord *l, Evas_Coord *r, Evas_Coord *t, Evas_Coord *b);
    Eina_Bool evas_obj_textblock_line_number_geometry_get(int line, Evas_Coord *cx, Evas_Coord *cy, Evas_Coord *cw, Evas_Coord *ch);
    const char *evas_obj_textblock_replace_char_get(void);
    void evas_obj_textblock_style_user_pop(void);
    Evas_Textblock_Cursor *evas_obj_textblock_cursor_new(void);
    const Eina_List *evas_obj_textblock_node_format_list_get(const char * anchor);
    const Evas_Textblock_Style *evas_obj_textblock_style_user_peek(void);
    void evas_obj_textblock_node_format_remove_pair(Evas_Textblock_Node_Format * n);
    void evas_obj_textblock_clear(void);
    void evas_obj_textblock_style_user_push(Evas_Textblock_Style * ts);
    Eina_Bool evas_obj_textblock_obstacle_add(Evas_Object * eo_obs);
    Eina_Bool evas_obj_textblock_obstacle_del(Evas_Object * eo_obs);
    void evas_obj_textblock_obstacles_update(void);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    text_markup_set = function(self, text)
        eo.__do_start(self, __class)
        __lib.evas_obj_textblock_text_markup_set(text)
        eo.__do_end()
    end,

    text_markup_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_textblock_text_markup_get()
        eo.__do_end()
        return ffi.string(v)
    end,

    valign_set = function(self, align)
        eo.__do_start(self, __class)
        __lib.evas_obj_textblock_valign_set(align)
        eo.__do_end()
    end,

    valign_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_textblock_valign_get()
        eo.__do_end()
        return tonumber(v)
    end,

    bidi_delimiters_set = function(self, delim)
        eo.__do_start(self, __class)
        __lib.evas_obj_textblock_bidi_delimiters_set(delim)
        eo.__do_end()
    end,

    bidi_delimiters_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_textblock_bidi_delimiters_get()
        eo.__do_end()
        return ffi.string(v)
    end,

    replace_char_set = function(self, ch)
        eo.__do_start(self, __class)
        __lib.evas_obj_textblock_replace_char_set(ch)
        eo.__do_end()
    end,

    legacy_newline_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.evas_obj_textblock_legacy_newline_set(mode)
        eo.__do_end()
    end,

    legacy_newline_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_textblock_legacy_newline_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    style_set = function(self, ts)
        eo.__do_start(self, __class)
        __lib.evas_obj_textblock_style_set(ts)
        eo.__do_end()
    end,

    style_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_textblock_style_get()
        eo.__do_end()
        return v
    end,

    node_format_first_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_textblock_node_format_first_get()
        eo.__do_end()
        return v
    end,

    size_formatted_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("Evas_Coord[1]")
        local h = ffi.new("Evas_Coord[1]")
        __lib.evas_obj_textblock_size_formatted_get(w, h)
        eo.__do_end()
        return w[0], h[0]
    end,

    node_format_last_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_textblock_node_format_last_get()
        eo.__do_end()
        return v
    end,

    cursor_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_textblock_cursor_get()
        eo.__do_end()
    end,

    size_native_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("Evas_Coord[1]")
        local h = ffi.new("Evas_Coord[1]")
        __lib.evas_obj_textblock_size_native_get(w, h)
        eo.__do_end()
        return w[0], h[0]
    end,

    style_insets_get = function(self)
        eo.__do_start(self, __class)
        local l = ffi.new("Evas_Coord[1]")
        local r = ffi.new("Evas_Coord[1]")
        local t = ffi.new("Evas_Coord[1]")
        local b = ffi.new("Evas_Coord[1]")
        __lib.evas_obj_textblock_style_insets_get(l, r, t, b)
        eo.__do_end()
        return l[0], r[0], t[0], b[0]
    end,

    line_number_geometry_get = function(self, line)
        eo.__do_start(self, __class)
        local cx = ffi.new("Evas_Coord[1]")
        local cy = ffi.new("Evas_Coord[1]")
        local cw = ffi.new("Evas_Coord[1]")
        local ch = ffi.new("Evas_Coord[1]")
        local v = __lib.evas_obj_textblock_line_number_geometry_get(line, cx, cy, cw, ch)
        eo.__do_end()
        return ((v) ~= 0), cx[0], cy[0], cw[0], ch[0]
    end,

    replace_char_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_textblock_replace_char_get()
        eo.__do_end()
        return ffi.string(v)
    end,

    style_user_pop = function(self)
        eo.__do_start(self, __class)
        __lib.evas_obj_textblock_style_user_pop()
        eo.__do_end()
    end,

    cursor_new = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_textblock_cursor_new()
        eo.__do_end()
        return v
    end,

    node_format_list_get = function(self, anchor)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_textblock_node_format_list_get(anchor)
        eo.__do_end()
        return v
    end,

    style_user_peek = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_textblock_style_user_peek()
        eo.__do_end()
        return v
    end,

    node_format_remove_pair = function(self, n)
        eo.__do_start(self, __class)
        __lib.evas_obj_textblock_node_format_remove_pair(n)
        eo.__do_end()
    end,

    clear = function(self)
        eo.__do_start(self, __class)
        __lib.evas_obj_textblock_clear()
        eo.__do_end()
    end,

    style_user_push = function(self, ts)
        eo.__do_start(self, __class)
        __lib.evas_obj_textblock_style_user_push(ts)
        eo.__do_end()
    end,

    obstacle_add = function(self, eo_obs)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_textblock_obstacle_add(eo_obs)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    obstacle_del = function(self, eo_obs)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_textblock_obstacle_del(eo_obs)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    obstacles_update = function(self)
        eo.__do_start(self, __class)
        __lib.evas_obj_textblock_obstacles_update()
        eo.__do_end()
    end,

    __properties = {
        ["valign"] = { 0, 0, 1, 1, true, true },
        ["legacy_newline"] = { 0, 0, 1, 1, true, true },
        ["size_formatted"] = { 0, 0, 2, 0, true, false },
        ["style"] = { 0, 0, 1, 1, true, true },
        ["bidi_delimiters"] = { 0, 0, 1, 1, true, true },
        ["cursor"] = { 0, 0, 1, 0, true, false },
        ["node_format_last"] = { 0, 0, 1, 0, true, false },
        ["style_insets"] = { 0, 0, 4, 0, true, false },
        ["size_native"] = { 0, 0, 2, 0, true, false },
        ["text_markup"] = { 0, 0, 1, 1, true, true },
        ["replace_char"] = { 0, 0, 0, 1, false, true },
        ["node_format_first"] = { 0, 0, 1, 0, true, false }
    }
}

M.Textblock = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Textblock").__eo_ctor,
                            1, ...)
end

return M

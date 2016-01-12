-- EFL LuaJIT bindings: efl_gfx_shape.eo (class Efl.Gfx.Shape)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_gfx_shape_mixin_get()
    eo.class_register("Efl_Gfx_Shape", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_gfx_shape_mixin_get(void);
    void efl_gfx_shape_stroke_scale_set(double s);
    double efl_gfx_shape_stroke_scale_get(void);
    void efl_gfx_shape_stroke_color_set(int r, int g, int b, int a);
    void efl_gfx_shape_stroke_color_get(int *r, int *g, int *b, int *a);
    void efl_gfx_shape_stroke_width_set(double w);
    double efl_gfx_shape_stroke_width_get(void);
    void efl_gfx_shape_stroke_location_set(double centered);
    double efl_gfx_shape_stroke_location_get(void);
    void efl_gfx_shape_stroke_dash_set(const Efl_Gfx_Dash * dash, unsigned int length);
    void efl_gfx_shape_stroke_dash_get(const Efl_Gfx_Dash * *dash, unsigned int *length);
    void efl_gfx_shape_stroke_cap_set(Efl_Gfx_Cap c);
    Efl_Gfx_Cap efl_gfx_shape_stroke_cap_get(void);
    void efl_gfx_shape_stroke_join_set(Efl_Gfx_Join j);
    Efl_Gfx_Join efl_gfx_shape_stroke_join_get(void);
    void efl_gfx_shape_fill_rule_set(Efl_Gfx_Fill_Rule fill_rule);
    Efl_Gfx_Fill_Rule efl_gfx_shape_fill_rule_get(void);
    void efl_gfx_shape_path_set(const Efl_Gfx_Path_Command * op, const double * points);
    void efl_gfx_shape_path_get(const Efl_Gfx_Path_Command * *op, const double * *points);
    void efl_gfx_shape_path_length_get(unsigned int *commands, unsigned int *points);
    void efl_gfx_shape_current_get(double *x, double *y);
    void efl_gfx_shape_current_ctrl_get(double *x, double *y);
    void efl_gfx_shape_dup(const Eo_Base * dup_from);
    void efl_gfx_shape_bounds_get(Eina_Rectangle *r);
    void efl_gfx_shape_reset(void);
    void efl_gfx_shape_append_move_to(double x, double y);
    void efl_gfx_shape_append_line_to(double x, double y);
    void efl_gfx_shape_append_quadratic_to(double x, double y, double ctrl_x, double ctrl_y);
    void efl_gfx_shape_append_squadratic_to(double x, double y);
    void efl_gfx_shape_append_cubic_to(double ctrl_x0, double ctrl_y0, double ctrl_x1, double ctrl_y1, double x, double y);
    void efl_gfx_shape_append_scubic_to(double x, double y, double ctrl_x, double ctrl_y);
    void efl_gfx_shape_append_arc_to(double x, double y, double rx, double ry, double angle, Eina_Bool large_arc, Eina_Bool sweep);
    void efl_gfx_shape_append_close(void);
    void efl_gfx_shape_append_circle(double x, double y, double radius);
    void efl_gfx_shape_append_rect(double x, double y, double w, double h, double rx, double ry);
    void efl_gfx_shape_append_svg_path(const char * svg_path_data);
    Eina_Bool efl_gfx_shape_interpolate(const Eo_Base * from, const Eo_Base * to, double pos_map);
    Eina_Bool efl_gfx_shape_equal_commands(const Eo_Base * with);
]]

local __M = util.get_namespace(M, { "gfx" })
__body = {
    stroke_scale_set = function(self, s)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_stroke_scale_set(s)
        eo.__do_end()
    end,

    stroke_scale_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_shape_stroke_scale_get()
        eo.__do_end()
        return tonumber(v)
    end,

    stroke_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_stroke_color_set(r, g, b, a)
        eo.__do_end()
    end,

    stroke_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("int[1]")
        local g = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        local a = ffi.new("int[1]")
        __lib.efl_gfx_shape_stroke_color_get(r, g, b, a)
        eo.__do_end()
        return tonumber(r[0]), tonumber(g[0]), tonumber(b[0]), tonumber(a[0])
    end,

    stroke_width_set = function(self, w)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_stroke_width_set(w)
        eo.__do_end()
    end,

    stroke_width_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_shape_stroke_width_get()
        eo.__do_end()
        return tonumber(v)
    end,

    stroke_location_set = function(self, centered)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_stroke_location_set(centered)
        eo.__do_end()
    end,

    stroke_location_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_shape_stroke_location_get()
        eo.__do_end()
        return tonumber(v)
    end,

    stroke_dash_set = function(self, dash, length)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_stroke_dash_set(dash, length)
        eo.__do_end()
    end,

    stroke_dash_get = function(self)
        eo.__do_start(self, __class)
        local dash = ffi.new("const Efl_Gfx_Dash *[1]")
        local length = ffi.new("unsigned int[1]")
        __lib.efl_gfx_shape_stroke_dash_get(dash, length)
        eo.__do_end()
        return dash[0], length[0]
    end,

    stroke_cap_set = function(self, c)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_stroke_cap_set(c)
        eo.__do_end()
    end,

    stroke_cap_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_shape_stroke_cap_get()
        eo.__do_end()
        return v
    end,

    stroke_join_set = function(self, j)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_stroke_join_set(j)
        eo.__do_end()
    end,

    stroke_join_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_shape_stroke_join_get()
        eo.__do_end()
        return v
    end,

    fill_rule_set = function(self, fill_rule)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_fill_rule_set(fill_rule)
        eo.__do_end()
    end,

    fill_rule_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_shape_fill_rule_get()
        eo.__do_end()
        return v
    end,

    path_set = function(self, op, points)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_path_set(op, points)
        eo.__do_end()
    end,

    path_get = function(self)
        eo.__do_start(self, __class)
        local op = ffi.new("const Efl_Gfx_Path_Command *[1]")
        local points = ffi.new("const double *[1]")
        __lib.efl_gfx_shape_path_get(op, points)
        eo.__do_end()
        return op[0], points[0]
    end,

    path_length_get = function(self)
        eo.__do_start(self, __class)
        local commands = ffi.new("unsigned int[1]")
        local points = ffi.new("unsigned int[1]")
        __lib.efl_gfx_shape_path_length_get(commands, points)
        eo.__do_end()
        return commands[0], points[0]
    end,

    current_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("double[1]")
        local y = ffi.new("double[1]")
        __lib.efl_gfx_shape_current_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    current_ctrl_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("double[1]")
        local y = ffi.new("double[1]")
        __lib.efl_gfx_shape_current_ctrl_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    dup = function(self, dup_from)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_dup(dup_from)
        eo.__do_end()
    end,

    bounds_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("Eina_Rectangle[1]")
        __lib.efl_gfx_shape_bounds_get(r)
        eo.__do_end()
        return r[0]
    end,

    reset = function(self)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_reset()
        eo.__do_end()
    end,

    append_move_to = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_append_move_to(x, y)
        eo.__do_end()
    end,

    append_line_to = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_append_line_to(x, y)
        eo.__do_end()
    end,

    append_quadratic_to = function(self, x, y, ctrl_x, ctrl_y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_append_quadratic_to(x, y, ctrl_x, ctrl_y)
        eo.__do_end()
    end,

    append_squadratic_to = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_append_squadratic_to(x, y)
        eo.__do_end()
    end,

    append_cubic_to = function(self, ctrl_x0, ctrl_y0, ctrl_x1, ctrl_y1, x, y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_append_cubic_to(ctrl_x0, ctrl_y0, ctrl_x1, ctrl_y1, x, y)
        eo.__do_end()
    end,

    append_scubic_to = function(self, x, y, ctrl_x, ctrl_y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_append_scubic_to(x, y, ctrl_x, ctrl_y)
        eo.__do_end()
    end,

    append_arc_to = function(self, x, y, rx, ry, angle, large_arc, sweep)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_append_arc_to(x, y, rx, ry, angle, large_arc, sweep)
        eo.__do_end()
    end,

    append_close = function(self)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_append_close()
        eo.__do_end()
    end,

    append_circle = function(self, x, y, radius)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_append_circle(x, y, radius)
        eo.__do_end()
    end,

    append_rect = function(self, x, y, w, h, rx, ry)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_append_rect(x, y, w, h, rx, ry)
        eo.__do_end()
    end,

    append_svg_path = function(self, svg_path_data)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_append_svg_path(svg_path_data)
        eo.__do_end()
    end,

    interpolate = function(self, from, to, pos_map)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_shape_interpolate(from, to, pos_map)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    equal_commands = function(self, with)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_shape_equal_commands(with)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["fill_rule"] = { 0, 0, 1, 1, true, true },
        ["stroke_location"] = { 0, 0, 1, 1, true, true },
        ["stroke_join"] = { 0, 0, 1, 1, true, true },
        ["stroke_color"] = { 0, 0, 4, 4, true, true },
        ["stroke_dash"] = { 0, 0, 2, 2, true, true },
        ["stroke_width"] = { 0, 0, 1, 1, true, true },
        ["path"] = { 0, 0, 2, 2, true, true },
        ["stroke_scale"] = { 0, 0, 1, 1, true, true },
        ["path_length"] = { 0, 0, 2, 0, true, false },
        ["current_ctrl"] = { 0, 0, 2, 0, true, false },
        ["current"] = { 0, 0, 2, 0, true, false },
        ["stroke_cap"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__mixin_Efl_Gfx_Shape"] = true

return M

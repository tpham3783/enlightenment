-- EFL LuaJIT bindings: evas_canvas.eo (class Evas.Canvas)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_canvas_class_get()
    eo.class_register("Evas_Canvas", {"Eo_Base"}, {"Evas_Common_Interface"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_canvas_class_get(void);
    void evas_canvas_output_framespace_set(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h);
    void evas_canvas_output_framespace_get(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);
    void evas_canvas_output_viewport_set(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h);
    void evas_canvas_output_viewport_get(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);
    void evas_canvas_image_cache_set(int size);
    int evas_canvas_image_cache_get(void);
    void evas_canvas_event_default_flags_set(Evas_Event_Flags flags);
    Evas_Event_Flags evas_canvas_event_default_flags_get(void);
    void evas_canvas_output_method_set(int render_method);
    int evas_canvas_output_method_get(void);
    void evas_canvas_font_cache_set(int size);
    int evas_canvas_font_cache_get(void);
    void evas_canvas_output_size_set(int w, int h);
    void evas_canvas_output_size_get(int *w, int *h);
    void evas_canvas_data_attach_set(void * data);
    void *evas_canvas_data_attach_get(void);
    void evas_canvas_font_hinting_set(Evas_Font_Hinting_Flags hinting);
    Evas_Font_Hinting_Flags evas_canvas_font_hinting_get(void);
    Eina_Bool evas_canvas_engine_info_set(Evas_Engine_Info * info);
    Evas_Engine_Info *evas_canvas_engine_info_get(void);
    Evas_Object *evas_canvas_focus_get(void);
    Evas_Object *evas_canvas_object_top_get(void);
    const Evas_Lock *evas_canvas_key_lock_get(void);
    void evas_canvas_pointer_canvas_xy_get(Evas_Coord *x, Evas_Coord *y);
    int evas_canvas_event_down_count_get(void);
    int evas_canvas_smart_objects_calculate_count_get(void);
    Eina_Bool evas_canvas_focus_state_get(void);
    Eina_Bool evas_canvas_changed_get(void);
    void evas_canvas_pointer_output_xy_get(int *x, int *y);
    Eina_Bool evas_canvas_pointer_inside_get(void);
    Eina_Bool evas_canvas_image_max_size_get(int *maxw, int *maxh);
    Evas_Object *evas_canvas_object_bottom_get(void);
    const Evas_Modifier *evas_canvas_key_modifier_get(void);
    int evas_canvas_pointer_button_down_mask_get(void);
    Eina_List *evas_canvas_tree_objects_at_xy_get(Evas_Object * stop, int x, int y);
    void evas_canvas_event_feed_mouse_wheel(int direction, int z, unsigned int timestamp, const void * data);
    void evas_canvas_key_lock_on(const char * keyname);
    void evas_canvas_event_feed_key_down(const char * keyname, const char * key, const char * string, const char * compose, unsigned int timestamp, const void * data);
    Evas_Modifier_Mask evas_canvas_key_modifier_mask_get(const char * keyname);
    void evas_canvas_key_modifier_add(const char * keyname);
    void evas_canvas_key_modifier_off(const char * keyname);
    void evas_canvas_event_feed_hold(int hold, unsigned int timestamp, const void * data);
    void evas_canvas_event_feed_mouse_move(int x, int y, unsigned int timestamp, const void * data);
    void evas_canvas_event_feed_key_up(const char * keyname, const char * key, const char * string, const char * compose, unsigned int timestamp, const void * data);
    void evas_canvas_event_feed_mouse_out(unsigned int timestamp, const void * data);
    void evas_canvas_event_input_multi_move(int d, int x, int y, double rad, double radx, double rady, double pres, double ang, double fx, double fy, unsigned int timestamp, const void * data);
    Eina_List *evas_canvas_objects_at_xy_get(Evas_Coord x, Evas_Coord y, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);
    void evas_canvas_event_input_multi_up(int d, int x, int y, double rad, double radx, double rady, double pres, double ang, double fx, double fy, Evas_Button_Flags flags, unsigned int timestamp, const void * data);
    void evas_canvas_event_feed_multi_down(int d, int x, int y, double rad, double radx, double rady, double pres, double ang, double fx, double fy, Evas_Button_Flags flags, unsigned int timestamp, const void * data);
    Eina_Bool evas_canvas_render_async(void);
    Eina_Bool evas_canvas_render2(void);
    Eina_List *evas_canvas_render2_updates(void);
    void evas_canvas_focus_out(void);
    void evas_canvas_event_input_mouse_move(int x, int y, unsigned int timestamp, const void * data);
    void evas_canvas_norender(void);
    unsigned int evas_canvas_touch_point_list_count(void);
    void evas_canvas_event_input_multi_down(int d, int x, int y, double rad, double radx, double rady, double pres, double ang, double fx, double fy, Evas_Button_Flags flags, unsigned int timestamp, const void * data);
    void evas_canvas_nochange_pop(void);
    void evas_canvas_key_lock_off(const char * keyname);
    void evas_canvas_nochange_push(void);
    void evas_canvas_font_cache_flush(void);
    Eina_Bool evas_canvas_font_hinting_can_hint(Evas_Font_Hinting_Flags hinting);
    Evas_Object *evas_canvas_object_top_at_xy_get(Evas_Coord x, Evas_Coord y, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);
    void evas_canvas_key_modifier_on(const char * keyname);
    void evas_canvas_event_feed_mouse_up(int b, Evas_Button_Flags flags, unsigned int timestamp, const void * data);
    void evas_canvas_event_feed_mouse_down(int b, Evas_Button_Flags flags, unsigned int timestamp, const void * data);
    void evas_canvas_event_refeed_event(void * event_copy, Evas_Callback_Type event_type);
    Eina_List *evas_canvas_font_available_list(void);
    Eina_List *evas_canvas_objects_in_rectangle_get(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);
    Evas_Object *evas_canvas_object_name_find(const char * name);
    void evas_canvas_font_path_append(const char * path);
    int evas_canvas_touch_point_list_nth_id_get(unsigned int n);
    void evas_canvas_font_path_clear(void);
    void evas_canvas_smart_objects_calculate(void);
    void evas_canvas_touch_point_list_nth_xy_get(unsigned int n, Evas_Coord *x, Evas_Coord *y);
    void evas_canvas_key_lock_del(const char * keyname);
    void evas_canvas_damage_rectangle_add(int x, int y, int w, int h);
    void evas_canvas_sync(void);
    const Eina_List *evas_canvas_font_path_list(void);
    void evas_canvas_image_cache_reload(void);
    int evas_canvas_coord_world_x_to_screen(Evas_Coord x);
    void evas_canvas_event_feed_multi_move(int d, int x, int y, double rad, double radx, double rady, double pres, double ang, double fx, double fy, unsigned int timestamp, const void * data);
    Eina_List *evas_canvas_render_updates(void);
    void evas_canvas_image_cache_flush(void);
    Evas_Coord evas_canvas_coord_screen_y_to_world(int y);
    void evas_canvas_key_modifier_del(const char * keyname);
    Evas_Touch_Point_State evas_canvas_touch_point_list_nth_state_get(unsigned int n);
    void evas_canvas_focus_in(void);
    void evas_canvas_obscured_rectangle_add(int x, int y, int w, int h);
    void evas_canvas_render_dump(void);
    void evas_canvas_event_feed_mouse_in(unsigned int timestamp, const void * data);
    Evas_Object *evas_canvas_object_top_in_rectangle_get(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);
    void evas_canvas_render(void);
    void evas_canvas_event_feed_multi_up(int d, int x, int y, double rad, double radx, double rady, double pres, double ang, double fx, double fy, Evas_Button_Flags flags, unsigned int timestamp, const void * data);
    void evas_canvas_font_path_prepend(const char * path);
    void evas_canvas_obscured_clear(void);
    void evas_canvas_event_feed_mouse_cancel(unsigned int timestamp, const void * data);
    Evas_Coord evas_canvas_coord_screen_x_to_world(int x);
    void evas_canvas_key_lock_add(const char * keyname);
    void evas_canvas_render_idle_flush(void);
    int evas_canvas_coord_world_y_to_screen(Evas_Coord y);
    void evas_canvas_event_feed_key_down_with_keycode(const char * keyname, const char * key, const char * string, const char * compose, unsigned int timestamp, const void * data, unsigned int keycode);
    void evas_canvas_event_feed_key_up_with_keycode(const char * keyname, const char * key, const char * string, const char * compose, unsigned int timestamp, const void * data, unsigned int keycode);
    void evas_canvas_event_feed_axis_update(unsigned int timestamp, int device, int toolid, int naxes, const Evas_Axis * axis, const void * data);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    output_framespace_set = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.evas_canvas_output_framespace_set(x, y, w, h)
        eo.__do_end()
    end,

    output_framespace_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("Evas_Coord[1]")
        local y = ffi.new("Evas_Coord[1]")
        local w = ffi.new("Evas_Coord[1]")
        local h = ffi.new("Evas_Coord[1]")
        __lib.evas_canvas_output_framespace_get(x, y, w, h)
        eo.__do_end()
        return x[0], y[0], w[0], h[0]
    end,

    output_viewport_set = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.evas_canvas_output_viewport_set(x, y, w, h)
        eo.__do_end()
    end,

    output_viewport_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("Evas_Coord[1]")
        local y = ffi.new("Evas_Coord[1]")
        local w = ffi.new("Evas_Coord[1]")
        local h = ffi.new("Evas_Coord[1]")
        __lib.evas_canvas_output_viewport_get(x, y, w, h)
        eo.__do_end()
        return x[0], y[0], w[0], h[0]
    end,

    image_cache_set = function(self, size)
        eo.__do_start(self, __class)
        __lib.evas_canvas_image_cache_set(size)
        eo.__do_end()
    end,

    image_cache_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_image_cache_get()
        eo.__do_end()
        return tonumber(v)
    end,

    event_default_flags_set = function(self, flags)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_default_flags_set(flags)
        eo.__do_end()
    end,

    event_default_flags_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_event_default_flags_get()
        eo.__do_end()
        return v
    end,

    output_method_set = function(self, render_method)
        eo.__do_start(self, __class)
        __lib.evas_canvas_output_method_set(render_method)
        eo.__do_end()
    end,

    output_method_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_output_method_get()
        eo.__do_end()
        return tonumber(v)
    end,

    font_cache_set = function(self, size)
        eo.__do_start(self, __class)
        __lib.evas_canvas_font_cache_set(size)
        eo.__do_end()
    end,

    font_cache_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_font_cache_get()
        eo.__do_end()
        return tonumber(v)
    end,

    output_size_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.evas_canvas_output_size_set(w, h)
        eo.__do_end()
    end,

    output_size_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.evas_canvas_output_size_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    data_attach_set = function(self, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_data_attach_set(data)
        eo.__do_end()
    end,

    data_attach_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_data_attach_get()
        eo.__do_end()
        return v
    end,

    font_hinting_set = function(self, hinting)
        eo.__do_start(self, __class)
        __lib.evas_canvas_font_hinting_set(hinting)
        eo.__do_end()
    end,

    font_hinting_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_font_hinting_get()
        eo.__do_end()
        return v
    end,

    engine_info_set = function(self, info)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_engine_info_set(info)
        eo.__do_end()
    end,

    engine_info_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_engine_info_get()
        eo.__do_end()
        return v
    end,

    focus_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_focus_get()
        eo.__do_end()
    end,

    object_top_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_object_top_get()
        eo.__do_end()
    end,

    key_lock_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_key_lock_get()
        eo.__do_end()
    end,

    pointer_canvas_xy_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("Evas_Coord[1]")
        local y = ffi.new("Evas_Coord[1]")
        __lib.evas_canvas_pointer_canvas_xy_get(x, y)
        eo.__do_end()
        return x[0], y[0]
    end,

    event_down_count_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_event_down_count_get()
        eo.__do_end()
    end,

    smart_objects_calculate_count_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_smart_objects_calculate_count_get()
        eo.__do_end()
    end,

    focus_state_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_focus_state_get()
        eo.__do_end()
    end,

    changed_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_changed_get()
        eo.__do_end()
    end,

    pointer_output_xy_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        __lib.evas_canvas_pointer_output_xy_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    pointer_inside_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_pointer_inside_get()
        eo.__do_end()
    end,

    image_max_size_get = function(self)
        eo.__do_start(self, __class)
        local maxw = ffi.new("int[1]")
        local maxh = ffi.new("int[1]")
        local v = __lib.evas_canvas_image_max_size_get(maxw, maxh)
        eo.__do_end()
        return tonumber(maxw[0]), tonumber(maxh[0])
    end,

    object_bottom_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_object_bottom_get()
        eo.__do_end()
    end,

    key_modifier_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_key_modifier_get()
        eo.__do_end()
    end,

    pointer_button_down_mask_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_pointer_button_down_mask_get()
        eo.__do_end()
    end,

    tree_objects_at_xy_get = function(self, stop, x, y)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_tree_objects_at_xy_get(stop, x, y)
        eo.__do_end()
        return v
    end,

    event_feed_mouse_wheel = function(self, direction, z, timestamp, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_feed_mouse_wheel(direction, z, timestamp, data)
        eo.__do_end()
    end,

    key_lock_on = function(self, keyname)
        eo.__do_start(self, __class)
        __lib.evas_canvas_key_lock_on(keyname)
        eo.__do_end()
    end,

    event_feed_key_down = function(self, keyname, key, string, compose, timestamp, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_feed_key_down(keyname, key, string, compose, timestamp, data)
        eo.__do_end()
    end,

    key_modifier_mask_get = function(self, keyname)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_key_modifier_mask_get(keyname)
        eo.__do_end()
        return v
    end,

    key_modifier_add = function(self, keyname)
        eo.__do_start(self, __class)
        __lib.evas_canvas_key_modifier_add(keyname)
        eo.__do_end()
    end,

    key_modifier_off = function(self, keyname)
        eo.__do_start(self, __class)
        __lib.evas_canvas_key_modifier_off(keyname)
        eo.__do_end()
    end,

    event_feed_hold = function(self, hold, timestamp, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_feed_hold(hold, timestamp, data)
        eo.__do_end()
    end,

    event_feed_mouse_move = function(self, x, y, timestamp, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_feed_mouse_move(x, y, timestamp, data)
        eo.__do_end()
    end,

    event_feed_key_up = function(self, keyname, key, string, compose, timestamp, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_feed_key_up(keyname, key, string, compose, timestamp, data)
        eo.__do_end()
    end,

    event_feed_mouse_out = function(self, timestamp, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_feed_mouse_out(timestamp, data)
        eo.__do_end()
    end,

    event_input_multi_move = function(self, d, x, y, rad, radx, rady, pres, ang, fx, fy, timestamp, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_input_multi_move(d, x, y, rad, radx, rady, pres, ang, fx, fy, timestamp, data)
        eo.__do_end()
    end,

    objects_at_xy_get = function(self, x, y, include_pass_events_objects, include_hidden_objects)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_objects_at_xy_get(x, y, include_pass_events_objects, include_hidden_objects)
        eo.__do_end()
        return v
    end,

    event_input_multi_up = function(self, d, x, y, rad, radx, rady, pres, ang, fx, fy, flags, timestamp, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_input_multi_up(d, x, y, rad, radx, rady, pres, ang, fx, fy, flags, timestamp, data)
        eo.__do_end()
    end,

    event_feed_multi_down = function(self, d, x, y, rad, radx, rady, pres, ang, fx, fy, flags, timestamp, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_feed_multi_down(d, x, y, rad, radx, rady, pres, ang, fx, fy, flags, timestamp, data)
        eo.__do_end()
    end,

    render_async = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_render_async()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    render2 = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_render2()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    render2_updates = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_render2_updates()
        eo.__do_end()
        return v
    end,

    focus_out = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_focus_out()
        eo.__do_end()
    end,

    event_input_mouse_move = function(self, x, y, timestamp, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_input_mouse_move(x, y, timestamp, data)
        eo.__do_end()
    end,

    norender = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_norender()
        eo.__do_end()
    end,

    touch_point_list_count = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_touch_point_list_count()
        eo.__do_end()
        return v
    end,

    event_input_multi_down = function(self, d, x, y, rad, radx, rady, pres, ang, fx, fy, flags, timestamp, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_input_multi_down(d, x, y, rad, radx, rady, pres, ang, fx, fy, flags, timestamp, data)
        eo.__do_end()
    end,

    nochange_pop = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_nochange_pop()
        eo.__do_end()
    end,

    key_lock_off = function(self, keyname)
        eo.__do_start(self, __class)
        __lib.evas_canvas_key_lock_off(keyname)
        eo.__do_end()
    end,

    nochange_push = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_nochange_push()
        eo.__do_end()
    end,

    font_cache_flush = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_font_cache_flush()
        eo.__do_end()
    end,

    font_hinting_can_hint = function(self, hinting)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_font_hinting_can_hint(hinting)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    object_top_at_xy_get = function(self, x, y, include_pass_events_objects, include_hidden_objects)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_object_top_at_xy_get(x, y, include_pass_events_objects, include_hidden_objects)
        eo.__do_end()
        return v
    end,

    key_modifier_on = function(self, keyname)
        eo.__do_start(self, __class)
        __lib.evas_canvas_key_modifier_on(keyname)
        eo.__do_end()
    end,

    event_feed_mouse_up = function(self, b, flags, timestamp, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_feed_mouse_up(b, flags, timestamp, data)
        eo.__do_end()
    end,

    event_feed_mouse_down = function(self, b, flags, timestamp, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_feed_mouse_down(b, flags, timestamp, data)
        eo.__do_end()
    end,

    event_refeed_event = function(self, event_copy, event_type)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_refeed_event(event_copy, event_type)
        eo.__do_end()
    end,

    font_available_list = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_font_available_list()
        eo.__do_end()
        return v
    end,

    objects_in_rectangle_get = function(self, x, y, w, h, include_pass_events_objects, include_hidden_objects)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_objects_in_rectangle_get(x, y, w, h, include_pass_events_objects, include_hidden_objects)
        eo.__do_end()
        return v
    end,

    object_name_find = function(self, name)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_object_name_find(name)
        eo.__do_end()
        return v
    end,

    font_path_append = function(self, path)
        eo.__do_start(self, __class)
        __lib.evas_canvas_font_path_append(path)
        eo.__do_end()
    end,

    touch_point_list_nth_id_get = function(self, n)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_touch_point_list_nth_id_get(n)
        eo.__do_end()
        return tonumber(v)
    end,

    font_path_clear = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_font_path_clear()
        eo.__do_end()
    end,

    smart_objects_calculate = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_smart_objects_calculate()
        eo.__do_end()
    end,

    touch_point_list_nth_xy_get = function(self, n)
        eo.__do_start(self, __class)
        local x = ffi.new("Evas_Coord[1]")
        local y = ffi.new("Evas_Coord[1]")
        __lib.evas_canvas_touch_point_list_nth_xy_get(n, x, y)
        eo.__do_end()
        return x[0], y[0]
    end,

    key_lock_del = function(self, keyname)
        eo.__do_start(self, __class)
        __lib.evas_canvas_key_lock_del(keyname)
        eo.__do_end()
    end,

    damage_rectangle_add = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.evas_canvas_damage_rectangle_add(x, y, w, h)
        eo.__do_end()
    end,

    sync = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_sync()
        eo.__do_end()
    end,

    font_path_list = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_font_path_list()
        eo.__do_end()
        return v
    end,

    image_cache_reload = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_image_cache_reload()
        eo.__do_end()
    end,

    coord_world_x_to_screen = function(self, x)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_coord_world_x_to_screen(x)
        eo.__do_end()
        return tonumber(v)
    end,

    event_feed_multi_move = function(self, d, x, y, rad, radx, rady, pres, ang, fx, fy, timestamp, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_feed_multi_move(d, x, y, rad, radx, rady, pres, ang, fx, fy, timestamp, data)
        eo.__do_end()
    end,

    render_updates = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_render_updates()
        eo.__do_end()
        return v
    end,

    image_cache_flush = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_image_cache_flush()
        eo.__do_end()
    end,

    coord_screen_y_to_world = function(self, y)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_coord_screen_y_to_world(y)
        eo.__do_end()
        return v
    end,

    key_modifier_del = function(self, keyname)
        eo.__do_start(self, __class)
        __lib.evas_canvas_key_modifier_del(keyname)
        eo.__do_end()
    end,

    touch_point_list_nth_state_get = function(self, n)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_touch_point_list_nth_state_get(n)
        eo.__do_end()
        return v
    end,

    focus_in = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_focus_in()
        eo.__do_end()
    end,

    obscured_rectangle_add = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.evas_canvas_obscured_rectangle_add(x, y, w, h)
        eo.__do_end()
    end,

    render_dump = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_render_dump()
        eo.__do_end()
    end,

    event_feed_mouse_in = function(self, timestamp, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_feed_mouse_in(timestamp, data)
        eo.__do_end()
    end,

    object_top_in_rectangle_get = function(self, x, y, w, h, include_pass_events_objects, include_hidden_objects)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_object_top_in_rectangle_get(x, y, w, h, include_pass_events_objects, include_hidden_objects)
        eo.__do_end()
        return v
    end,

    render = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_render()
        eo.__do_end()
    end,

    event_feed_multi_up = function(self, d, x, y, rad, radx, rady, pres, ang, fx, fy, flags, timestamp, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_feed_multi_up(d, x, y, rad, radx, rady, pres, ang, fx, fy, flags, timestamp, data)
        eo.__do_end()
    end,

    font_path_prepend = function(self, path)
        eo.__do_start(self, __class)
        __lib.evas_canvas_font_path_prepend(path)
        eo.__do_end()
    end,

    obscured_clear = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_obscured_clear()
        eo.__do_end()
    end,

    event_feed_mouse_cancel = function(self, timestamp, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_feed_mouse_cancel(timestamp, data)
        eo.__do_end()
    end,

    coord_screen_x_to_world = function(self, x)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_coord_screen_x_to_world(x)
        eo.__do_end()
        return v
    end,

    key_lock_add = function(self, keyname)
        eo.__do_start(self, __class)
        __lib.evas_canvas_key_lock_add(keyname)
        eo.__do_end()
    end,

    render_idle_flush = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_render_idle_flush()
        eo.__do_end()
    end,

    coord_world_y_to_screen = function(self, y)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_coord_world_y_to_screen(y)
        eo.__do_end()
        return tonumber(v)
    end,

    event_feed_key_down_with_keycode = function(self, keyname, key, string, compose, timestamp, data, keycode)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_feed_key_down_with_keycode(keyname, key, string, compose, timestamp, data, keycode)
        eo.__do_end()
    end,

    event_feed_key_up_with_keycode = function(self, keyname, key, string, compose, timestamp, data, keycode)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_feed_key_up_with_keycode(keyname, key, string, compose, timestamp, data, keycode)
        eo.__do_end()
    end,

    event_feed_axis_update = function(self, timestamp, device, toolid, naxes, axis, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_feed_axis_update(timestamp, device, toolid, naxes, axis, data)
        eo.__do_end()
    end,

    __properties = {
        ["event_default_flags"] = { 0, 0, 1, 1, true, true },
        ["focus"] = { 0, 0, 1, 0, true, false },
        ["event_down_count"] = { 0, 0, 1, 0, true, false },
        ["output_method"] = { 0, 0, 1, 1, true, true },
        ["pointer_inside"] = { 0, 0, 1, 0, true, false },
        ["pointer_canvas_xy"] = { 0, 0, 2, 0, true, false },
        ["focus_state"] = { 0, 0, 1, 0, true, false },
        ["key_modifier"] = { 0, 0, 1, 0, true, false },
        ["key_lock"] = { 0, 0, 1, 0, true, false },
        ["pointer_button_down_mask"] = { 0, 0, 1, 0, true, false },
        ["object_bottom"] = { 0, 0, 1, 0, true, false },
        ["smart_objects_calculate_count"] = { 0, 0, 1, 0, true, false },
        ["pointer_output_xy"] = { 0, 0, 2, 0, true, false },
        ["image_max_size"] = { 0, 0, 2, 0, true, false },
        ["changed"] = { 0, 0, 1, 0, true, false },
        ["image_cache"] = { 0, 0, 1, 1, true, true },
        ["output_framespace"] = { 0, 0, 4, 4, true, true },
        ["output_size"] = { 0, 0, 2, 2, true, true },
        ["font_cache"] = { 0, 0, 1, 1, true, true },
        ["output_viewport"] = { 0, 0, 4, 4, true, true },
        ["font_hinting"] = { 0, 0, 1, 1, true, true },
        ["engine_info"] = { 0, 0, 1, 1, true, true },
        ["object_top"] = { 0, 0, 1, 0, true, false },
        ["data_attach"] = { 0, 0, 1, 1, true, true }
    }
}

M.Canvas = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Canvas").__eo_ctor,
                            1, ...)
end

return M

-- EFL LuaJIT bindings: evas_object.eo (class Evas.Object)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_object_class_get()
    eo.class_register("Evas_Object", {"Eo_Base"}, {"Evas_Common_Interface", "Efl_Gfx_Base", "Efl_Gfx_Stack"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_object_class_get(void);
    void evas_obj_size_hint_max_set(Evas_Coord w, Evas_Coord h);
    void evas_obj_size_hint_max_get(Evas_Coord *w, Evas_Coord *h);
    void evas_obj_size_hint_request_set(Evas_Coord w, Evas_Coord h);
    void evas_obj_size_hint_request_get(Evas_Coord *w, Evas_Coord *h);
    void evas_obj_type_set(const char * type);
    const char *evas_obj_type_get(void);
    void evas_obj_size_hint_min_set(Evas_Coord w, Evas_Coord h);
    void evas_obj_size_hint_min_get(Evas_Coord *w, Evas_Coord *h);
    void evas_obj_pointer_mode_set(Evas_Object_Pointer_Mode pointer_mode);
    Evas_Object_Pointer_Mode evas_obj_pointer_mode_get(void);
    void evas_obj_render_op_set(Evas_Render_Op render_op);
    Evas_Render_Op evas_obj_render_op_get(void);
    void evas_obj_freeze_events_set(Eina_Bool freeze);
    Eina_Bool evas_obj_freeze_events_get(void);
    void evas_obj_map_set(const Evas_Map * map);
    const Evas_Map *evas_obj_map_get(void);
    void evas_obj_size_hint_aspect_set(Evas_Aspect_Control aspect, Evas_Coord w, Evas_Coord h);
    void evas_obj_size_hint_aspect_get(Evas_Aspect_Control *aspect, Evas_Coord *w, Evas_Coord *h);
    void evas_obj_clip_set(Evas_Object * clip);
    Evas_Object *evas_obj_clip_get(void);
    void evas_obj_size_hint_padding_set(Evas_Coord l, Evas_Coord r, Evas_Coord t, Evas_Coord b);
    void evas_obj_size_hint_padding_get(Evas_Coord *l, Evas_Coord *r, Evas_Coord *t, Evas_Coord *b);
    void evas_obj_repeat_events_set(Eina_Bool repeat_);
    Eina_Bool evas_obj_repeat_events_get(void);
    void evas_obj_size_hint_weight_set(double x, double y);
    void evas_obj_size_hint_weight_get(double *x, double *y);
    void evas_obj_name_set(const char * name);
    const char *evas_obj_name_get(void);
    void evas_obj_scale_set(double scale);
    double evas_obj_scale_get(void);
    void evas_obj_static_clip_set(Eina_Bool is_static_clip);
    Eina_Bool evas_obj_static_clip_get(void);
    void evas_obj_focus_set(Eina_Bool focus);
    Eina_Bool evas_obj_focus_get(void);
    void evas_obj_is_frame_object_set(Eina_Bool is_frame);
    Eina_Bool evas_obj_is_frame_object_get(void);
    void evas_obj_map_enable_set(Eina_Bool enabled);
    Eina_Bool evas_obj_map_enable_get(void);
    void evas_obj_precise_is_inside_set(Eina_Bool precise);
    Eina_Bool evas_obj_precise_is_inside_get(void);
    void evas_obj_size_hint_align_set(double x, double y);
    void evas_obj_size_hint_align_get(double *x, double *y);
    void evas_obj_propagate_events_set(Eina_Bool propagate);
    Eina_Bool evas_obj_propagate_events_get(void);
    void evas_obj_pass_events_set(Eina_Bool pass);
    Eina_Bool evas_obj_pass_events_get(void);
    void evas_obj_anti_alias_set(Eina_Bool anti_alias);
    Eina_Bool evas_obj_anti_alias_get(void);
    void *evas_obj_smart_data_get(void);
    Evas_Object *evas_obj_smart_clipped_clipper_get(void);
    const Eina_List *evas_obj_clipees_get(void);
    Evas_Object *evas_obj_smart_parent_get(void);
    void evas_obj_size_hint_display_mode_set(Evas_Display_Mode dispmode);
    Evas_Display_Mode evas_obj_size_hint_display_mode_get(void);
    void evas_obj_paragraph_direction_set(Evas_BiDi_Direction dir);
    Evas_BiDi_Direction evas_obj_paragraph_direction_get(void);
    void evas_obj_no_render_set(Eina_Bool enable);
    Eina_Bool evas_obj_no_render_get(void);
    Eina_Bool evas_obj_clipees_has(void);
    Eina_Bool evas_obj_key_grab(const char * keyname, Evas_Modifier_Mask modifiers, Evas_Modifier_Mask not_modifiers, Eina_Bool exclusive);
    Eina_Bool evas_obj_smart_type_check(const char * type);
    Evas_Object *evas_obj_name_child_find(const char * name, int recurse);
    void evas_obj_key_ungrab(const char * keyname, Evas_Modifier_Mask modifiers, Evas_Modifier_Mask not_modifiers);
    void evas_obj_clip_unset(void);
    void evas_obj_smart_move_children_relative(Evas_Coord dx, Evas_Coord dy);
    Eina_Bool evas_obj_smart_type_check_ptr(const char * type);
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_MOUSE_IN;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_MOUSE_OUT;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_MOUSE_DOWN;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_MOUSE_UP;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_MOUSE_MOVE;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_MOUSE_WHEEL;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_MULTI_DOWN;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_MULTI_UP;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_MULTI_MOVE;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_FREE;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_KEY_DOWN;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_KEY_UP;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_FOCUS_IN;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_FOCUS_OUT;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_SHOW;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_HIDE;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_MOVE;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_RESIZE;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_RESTACK;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_DEL;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_HOLD;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_CHANGED_SIZE_HINTS;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_IMAGE_PRELOADED;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_IMAGE_RESIZE;
    extern const Eo_Event_Description _EVAS_OBJECT_EVENT_IMAGE_UNLOADED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    size_hint_max_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.evas_obj_size_hint_max_set(w, h)
        eo.__do_end()
    end,

    size_hint_max_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("Evas_Coord[1]")
        local h = ffi.new("Evas_Coord[1]")
        __lib.evas_obj_size_hint_max_get(w, h)
        eo.__do_end()
        return w[0], h[0]
    end,

    size_hint_request_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.evas_obj_size_hint_request_set(w, h)
        eo.__do_end()
    end,

    size_hint_request_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("Evas_Coord[1]")
        local h = ffi.new("Evas_Coord[1]")
        __lib.evas_obj_size_hint_request_get(w, h)
        eo.__do_end()
        return w[0], h[0]
    end,

    type_set = function(self, type)
        eo.__do_start(self, __class)
        __lib.evas_obj_type_set(type)
        eo.__do_end()
    end,

    type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_type_get()
        eo.__do_end()
        return ffi.string(v)
    end,

    size_hint_min_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.evas_obj_size_hint_min_set(w, h)
        eo.__do_end()
    end,

    size_hint_min_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("Evas_Coord[1]")
        local h = ffi.new("Evas_Coord[1]")
        __lib.evas_obj_size_hint_min_get(w, h)
        eo.__do_end()
        return w[0], h[0]
    end,

    pointer_mode_set = function(self, pointer_mode)
        eo.__do_start(self, __class)
        __lib.evas_obj_pointer_mode_set(pointer_mode)
        eo.__do_end()
    end,

    pointer_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_pointer_mode_get()
        eo.__do_end()
        return v
    end,

    render_op_set = function(self, render_op)
        eo.__do_start(self, __class)
        __lib.evas_obj_render_op_set(render_op)
        eo.__do_end()
    end,

    render_op_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_render_op_get()
        eo.__do_end()
        return v
    end,

    freeze_events_set = function(self, freeze)
        eo.__do_start(self, __class)
        __lib.evas_obj_freeze_events_set(freeze)
        eo.__do_end()
    end,

    freeze_events_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_freeze_events_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    map_set = function(self, map)
        eo.__do_start(self, __class)
        __lib.evas_obj_map_set(map)
        eo.__do_end()
    end,

    map_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_map_get()
        eo.__do_end()
        return v
    end,

    size_hint_aspect_set = function(self, aspect, w, h)
        eo.__do_start(self, __class)
        __lib.evas_obj_size_hint_aspect_set(aspect, w, h)
        eo.__do_end()
    end,

    size_hint_aspect_get = function(self)
        eo.__do_start(self, __class)
        local aspect = ffi.new("Evas_Aspect_Control[1]")
        local w = ffi.new("Evas_Coord[1]")
        local h = ffi.new("Evas_Coord[1]")
        __lib.evas_obj_size_hint_aspect_get(aspect, w, h)
        eo.__do_end()
        return aspect[0], w[0], h[0]
    end,

    clip_set = function(self, clip)
        eo.__do_start(self, __class)
        __lib.evas_obj_clip_set(clip)
        eo.__do_end()
    end,

    clip_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_clip_get()
        eo.__do_end()
        return v
    end,

    size_hint_padding_set = function(self, l, r, t, b)
        eo.__do_start(self, __class)
        __lib.evas_obj_size_hint_padding_set(l, r, t, b)
        eo.__do_end()
    end,

    size_hint_padding_get = function(self)
        eo.__do_start(self, __class)
        local l = ffi.new("Evas_Coord[1]")
        local r = ffi.new("Evas_Coord[1]")
        local t = ffi.new("Evas_Coord[1]")
        local b = ffi.new("Evas_Coord[1]")
        __lib.evas_obj_size_hint_padding_get(l, r, t, b)
        eo.__do_end()
        return l[0], r[0], t[0], b[0]
    end,

    repeat_events_set = function(self, repeat_)
        eo.__do_start(self, __class)
        __lib.evas_obj_repeat_events_set(repeat_)
        eo.__do_end()
    end,

    repeat_events_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_repeat_events_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    size_hint_weight_set = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.evas_obj_size_hint_weight_set(x, y)
        eo.__do_end()
    end,

    size_hint_weight_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("double[1]")
        local y = ffi.new("double[1]")
        __lib.evas_obj_size_hint_weight_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    name_set = function(self, name)
        eo.__do_start(self, __class)
        __lib.evas_obj_name_set(name)
        eo.__do_end()
    end,

    name_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_name_get()
        eo.__do_end()
        return ffi.string(v)
    end,

    scale_set = function(self, scale)
        eo.__do_start(self, __class)
        __lib.evas_obj_scale_set(scale)
        eo.__do_end()
    end,

    scale_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_scale_get()
        eo.__do_end()
        return tonumber(v)
    end,

    static_clip_set = function(self, is_static_clip)
        eo.__do_start(self, __class)
        __lib.evas_obj_static_clip_set(is_static_clip)
        eo.__do_end()
    end,

    static_clip_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_static_clip_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    focus_set = function(self, focus)
        eo.__do_start(self, __class)
        __lib.evas_obj_focus_set(focus)
        eo.__do_end()
    end,

    focus_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_focus_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    is_frame_object_set = function(self, is_frame)
        eo.__do_start(self, __class)
        __lib.evas_obj_is_frame_object_set(is_frame)
        eo.__do_end()
    end,

    is_frame_object_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_is_frame_object_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    map_enable_set = function(self, enabled)
        eo.__do_start(self, __class)
        __lib.evas_obj_map_enable_set(enabled)
        eo.__do_end()
    end,

    map_enable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_map_enable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    precise_is_inside_set = function(self, precise)
        eo.__do_start(self, __class)
        __lib.evas_obj_precise_is_inside_set(precise)
        eo.__do_end()
    end,

    precise_is_inside_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_precise_is_inside_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    size_hint_align_set = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.evas_obj_size_hint_align_set(x, y)
        eo.__do_end()
    end,

    size_hint_align_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("double[1]")
        local y = ffi.new("double[1]")
        __lib.evas_obj_size_hint_align_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    propagate_events_set = function(self, propagate)
        eo.__do_start(self, __class)
        __lib.evas_obj_propagate_events_set(propagate)
        eo.__do_end()
    end,

    propagate_events_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_propagate_events_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    pass_events_set = function(self, pass)
        eo.__do_start(self, __class)
        __lib.evas_obj_pass_events_set(pass)
        eo.__do_end()
    end,

    pass_events_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_pass_events_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    anti_alias_set = function(self, anti_alias)
        eo.__do_start(self, __class)
        __lib.evas_obj_anti_alias_set(anti_alias)
        eo.__do_end()
    end,

    anti_alias_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_anti_alias_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    smart_data_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_smart_data_get()
        eo.__do_end()
    end,

    smart_clipped_clipper_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_smart_clipped_clipper_get()
        eo.__do_end()
    end,

    clipees_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_clipees_get()
        eo.__do_end()
    end,

    smart_parent_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_smart_parent_get()
        eo.__do_end()
    end,

    size_hint_display_mode_set = function(self, dispmode)
        eo.__do_start(self, __class)
        __lib.evas_obj_size_hint_display_mode_set(dispmode)
        eo.__do_end()
    end,

    size_hint_display_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_size_hint_display_mode_get()
        eo.__do_end()
        return v
    end,

    paragraph_direction_set = function(self, dir)
        eo.__do_start(self, __class)
        __lib.evas_obj_paragraph_direction_set(dir)
        eo.__do_end()
    end,

    paragraph_direction_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_paragraph_direction_get()
        eo.__do_end()
        return v
    end,

    no_render_set = function(self, enable)
        eo.__do_start(self, __class)
        __lib.evas_obj_no_render_set(enable)
        eo.__do_end()
    end,

    no_render_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_no_render_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    clipees_has = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_clipees_has()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    key_grab = function(self, keyname, modifiers, not_modifiers, exclusive)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_key_grab(keyname, modifiers, not_modifiers, exclusive)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    smart_type_check = function(self, type)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_smart_type_check(type)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    name_child_find = function(self, name, recurse)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_name_child_find(name, recurse)
        eo.__do_end()
        return v
    end,

    key_ungrab = function(self, keyname, modifiers, not_modifiers)
        eo.__do_start(self, __class)
        __lib.evas_obj_key_ungrab(keyname, modifiers, not_modifiers)
        eo.__do_end()
    end,

    clip_unset = function(self)
        eo.__do_start(self, __class)
        __lib.evas_obj_clip_unset()
        eo.__do_end()
    end,

    smart_move_children_relative = function(self, dx, dy)
        eo.__do_start(self, __class)
        __lib.evas_obj_smart_move_children_relative(dx, dy)
        eo.__do_end()
    end,

    smart_type_check_ptr = function(self, type)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_smart_type_check_ptr(type)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["mouse,in"] = __lib._EVAS_OBJECT_EVENT_MOUSE_IN,
        ["mouse,out"] = __lib._EVAS_OBJECT_EVENT_MOUSE_OUT,
        ["mouse,down"] = __lib._EVAS_OBJECT_EVENT_MOUSE_DOWN,
        ["mouse,up"] = __lib._EVAS_OBJECT_EVENT_MOUSE_UP,
        ["mouse,move"] = __lib._EVAS_OBJECT_EVENT_MOUSE_MOVE,
        ["mouse,wheel"] = __lib._EVAS_OBJECT_EVENT_MOUSE_WHEEL,
        ["multi,down"] = __lib._EVAS_OBJECT_EVENT_MULTI_DOWN,
        ["multi,up"] = __lib._EVAS_OBJECT_EVENT_MULTI_UP,
        ["multi,move"] = __lib._EVAS_OBJECT_EVENT_MULTI_MOVE,
        ["free"] = __lib._EVAS_OBJECT_EVENT_FREE,
        ["key,down"] = __lib._EVAS_OBJECT_EVENT_KEY_DOWN,
        ["key,up"] = __lib._EVAS_OBJECT_EVENT_KEY_UP,
        ["focus,in"] = __lib._EVAS_OBJECT_EVENT_FOCUS_IN,
        ["focus,out"] = __lib._EVAS_OBJECT_EVENT_FOCUS_OUT,
        ["show"] = __lib._EVAS_OBJECT_EVENT_SHOW,
        ["hide"] = __lib._EVAS_OBJECT_EVENT_HIDE,
        ["move"] = __lib._EVAS_OBJECT_EVENT_MOVE,
        ["resize"] = __lib._EVAS_OBJECT_EVENT_RESIZE,
        ["restack"] = __lib._EVAS_OBJECT_EVENT_RESTACK,
        ["del"] = __lib._EVAS_OBJECT_EVENT_DEL,
        ["hold"] = __lib._EVAS_OBJECT_EVENT_HOLD,
        ["changed,size,hints"] = __lib._EVAS_OBJECT_EVENT_CHANGED_SIZE_HINTS,
        ["image,preloaded"] = __lib._EVAS_OBJECT_EVENT_IMAGE_PRELOADED,
        ["image,resize"] = __lib._EVAS_OBJECT_EVENT_IMAGE_RESIZE,
        ["image,unloaded"] = __lib._EVAS_OBJECT_EVENT_IMAGE_UNLOADED
    },

    __properties = {
        ["render_op"] = { 0, 0, 1, 1, true, true },
        ["size_hint_min"] = { 0, 0, 2, 2, true, true },
        ["propagate_events"] = { 0, 0, 1, 1, true, true },
        ["size_hint_weight"] = { 0, 0, 2, 2, true, true },
        ["no_render"] = { 0, 0, 1, 1, true, true },
        ["paragraph_direction"] = { 0, 0, 1, 1, true, true },
        ["pass_events"] = { 0, 0, 1, 1, true, true },
        ["static_clip"] = { 0, 0, 1, 1, true, true },
        ["map_enable"] = { 0, 0, 1, 1, true, true },
        ["is_frame_object"] = { 0, 0, 1, 1, true, true },
        ["size_hint_request"] = { 0, 0, 2, 2, true, true },
        ["size_hint_max"] = { 0, 0, 2, 2, true, true },
        ["smart_parent"] = { 0, 0, 1, 0, true, false },
        ["clipees"] = { 0, 0, 1, 0, true, false },
        ["smart_clipped_clipper"] = { 0, 0, 1, 0, true, false },
        ["smart_data"] = { 0, 0, 1, 0, true, false },
        ["anti_alias"] = { 0, 0, 1, 1, true, true },
        ["size_hint_display_mode"] = { 0, 0, 1, 1, true, true },
        ["size_hint_aspect"] = { 0, 0, 3, 3, true, true },
        ["size_hint_align"] = { 0, 0, 2, 2, true, true },
        ["clip"] = { 0, 0, 1, 1, true, true },
        ["pointer_mode"] = { 0, 0, 1, 1, true, true },
        ["precise_is_inside"] = { 0, 0, 1, 1, true, true },
        ["freeze_events"] = { 0, 0, 1, 1, true, true },
        ["focus"] = { 0, 0, 1, 1, true, true },
        ["map"] = { 0, 0, 1, 1, true, true },
        ["scale"] = { 0, 0, 1, 1, true, true },
        ["type"] = { 0, 0, 1, 1, true, true },
        ["size_hint_padding"] = { 0, 0, 4, 4, true, true },
        ["name"] = { 0, 0, 1, 1, true, true },
        ["repeat_events"] = { 0, 0, 1, 1, true, true }
    }
}

M.Object = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Object").__eo_ctor,
                            1, ...)
end

return M

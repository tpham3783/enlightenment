-- EFL LuaJIT bindings: evas_image.eo (class Evas.Image)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_image_class_get()
    eo.class_register("Evas_Image", {"Evas_Object"}, {"Efl_File", "Efl_Image", "Efl_Gfx_Fill", "Efl_Gfx_View", "Evas_Filter"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_image_class_get(void);
    void evas_obj_image_load_dpi_set(double dpi);
    double evas_obj_image_load_dpi_get(void);
    void evas_obj_image_source_clip_set(Eina_Bool source_clip);
    Eina_Bool evas_obj_image_source_clip_get(void);
    Eina_Bool evas_obj_image_source_set(Evas_Object * src);
    Evas_Object *evas_obj_image_source_get(void);
    void evas_obj_image_filled_set(Eina_Bool filled);
    Eina_Bool evas_obj_image_filled_get(void);
    void evas_obj_image_content_hint_set(Evas_Image_Content_Hint hint);
    Evas_Image_Content_Hint evas_obj_image_content_hint_get(void);
    void evas_obj_image_load_region_set(int x, int y, int w, int h);
    void evas_obj_image_load_region_get(int *x, int *y, int *w, int *h);
    void evas_obj_image_alpha_set(Eina_Bool alpha);
    Eina_Bool evas_obj_image_alpha_get(void);
    void evas_obj_image_border_set(int l, int r, int t, int b);
    void evas_obj_image_border_get(int *l, int *r, int *t, int *b);
    void evas_obj_image_border_scale_set(double scale);
    double evas_obj_image_border_scale_get(void);
    void evas_obj_image_pixels_dirty_set(Eina_Bool dirty);
    Eina_Bool evas_obj_image_pixels_dirty_get(void);
    void evas_obj_image_video_surface_set(Evas_Video_Surface * surf);
    const Evas_Video_Surface *evas_obj_image_video_surface_get(void);
    void evas_obj_image_video_surface_caps_set(unsigned int caps);
    unsigned int evas_obj_image_video_surface_caps_get(void);
    void evas_obj_image_load_orientation_set(Eina_Bool enable);
    Eina_Bool evas_obj_image_load_orientation_get(void);
    void evas_obj_image_border_center_fill_set(Evas_Border_Fill_Mode fill);
    Evas_Border_Fill_Mode evas_obj_image_border_center_fill_get(void);
    void evas_obj_image_source_visible_set(Eina_Bool visible);
    Eina_Bool evas_obj_image_source_visible_get(void);
    void evas_obj_image_native_surface_set(Evas_Native_Surface * surf);
    Evas_Native_Surface *evas_obj_image_native_surface_get(void);
    void evas_obj_image_load_scale_down_set(int scale_down);
    int evas_obj_image_load_scale_down_get(void);
    void evas_obj_image_scale_hint_set(Evas_Image_Scale_Hint hint);
    Evas_Image_Scale_Hint evas_obj_image_scale_hint_get(void);
    void evas_obj_image_source_events_set(Eina_Bool source);
    Eina_Bool evas_obj_image_source_events_get(void);
    void evas_obj_image_colorspace_set(Evas_Colorspace cspace);
    Evas_Colorspace evas_obj_image_colorspace_get(void);
    void evas_obj_image_pixels_get_callback_set(Evas_Object_Image_Pixels_Get_Cb func, void * data);
    void evas_obj_image_data_copy_set(void * data);
    void evas_obj_image_animated_frame_set(int frame_index);
    Eina_Bool evas_obj_image_region_support_get(void);
    Evas_Load_Error evas_obj_image_load_error_get(void);
    int evas_obj_image_animated_frame_count_get(void);
    int evas_obj_image_stride_get(void);
    Evas_Image_Animated_Loop_Hint evas_obj_image_animated_loop_type_get(void);
    int evas_obj_image_animated_loop_count_get(void);
    void evas_obj_image_scene_set(Evas_Canvas3D_Scene * scene);
    Evas_Canvas3D_Scene *evas_obj_image_scene_get(void);
    void evas_obj_image_orient_set(Evas_Image_Orient orient);
    Evas_Image_Orient evas_obj_image_orient_get(void);
    void evas_obj_image_preload_begin(void);
    void evas_obj_image_data_update_add(int x, int y, int w, int h);
    double evas_obj_image_animated_frame_duration_get(int start_frame, int frame_num);
    void evas_obj_image_data_set(void * data);
    void *evas_obj_image_data_get(Eina_Bool for_writing);
    void evas_obj_image_preload_cancel(void);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    load_dpi_set = function(self, dpi)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_load_dpi_set(dpi)
        eo.__do_end()
    end,

    load_dpi_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_load_dpi_get()
        eo.__do_end()
        return tonumber(v)
    end,

    source_clip_set = function(self, source_clip)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_source_clip_set(source_clip)
        eo.__do_end()
    end,

    source_clip_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_source_clip_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    source_set = function(self, src)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_source_set(src)
        eo.__do_end()
    end,

    source_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_source_get()
        eo.__do_end()
        return v
    end,

    filled_set = function(self, filled)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_filled_set(filled)
        eo.__do_end()
    end,

    filled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_filled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    content_hint_set = function(self, hint)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_content_hint_set(hint)
        eo.__do_end()
    end,

    content_hint_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_content_hint_get()
        eo.__do_end()
        return v
    end,

    load_region_set = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_load_region_set(x, y, w, h)
        eo.__do_end()
    end,

    load_region_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.evas_obj_image_load_region_get(x, y, w, h)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0]), tonumber(w[0]), tonumber(h[0])
    end,

    alpha_set = function(self, alpha)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_alpha_set(alpha)
        eo.__do_end()
    end,

    alpha_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_alpha_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    border_set = function(self, l, r, t, b)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_border_set(l, r, t, b)
        eo.__do_end()
    end,

    border_get = function(self)
        eo.__do_start(self, __class)
        local l = ffi.new("int[1]")
        local r = ffi.new("int[1]")
        local t = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        __lib.evas_obj_image_border_get(l, r, t, b)
        eo.__do_end()
        return tonumber(l[0]), tonumber(r[0]), tonumber(t[0]), tonumber(b[0])
    end,

    border_scale_set = function(self, scale)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_border_scale_set(scale)
        eo.__do_end()
    end,

    border_scale_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_border_scale_get()
        eo.__do_end()
        return tonumber(v)
    end,

    pixels_dirty_set = function(self, dirty)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_pixels_dirty_set(dirty)
        eo.__do_end()
    end,

    pixels_dirty_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_pixels_dirty_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    video_surface_set = function(self, surf)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_video_surface_set(surf)
        eo.__do_end()
    end,

    video_surface_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_video_surface_get()
        eo.__do_end()
        return v
    end,

    video_surface_caps_set = function(self, caps)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_video_surface_caps_set(caps)
        eo.__do_end()
    end,

    video_surface_caps_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_video_surface_caps_get()
        eo.__do_end()
        return v
    end,

    load_orientation_set = function(self, enable)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_load_orientation_set(enable)
        eo.__do_end()
    end,

    load_orientation_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_load_orientation_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    border_center_fill_set = function(self, fill)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_border_center_fill_set(fill)
        eo.__do_end()
    end,

    border_center_fill_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_border_center_fill_get()
        eo.__do_end()
        return v
    end,

    source_visible_set = function(self, visible)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_source_visible_set(visible)
        eo.__do_end()
    end,

    source_visible_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_source_visible_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    native_surface_set = function(self, surf)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_native_surface_set(surf)
        eo.__do_end()
    end,

    native_surface_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_native_surface_get()
        eo.__do_end()
        return v
    end,

    load_scale_down_set = function(self, scale_down)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_load_scale_down_set(scale_down)
        eo.__do_end()
    end,

    load_scale_down_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_load_scale_down_get()
        eo.__do_end()
        return tonumber(v)
    end,

    scale_hint_set = function(self, hint)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_scale_hint_set(hint)
        eo.__do_end()
    end,

    scale_hint_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_scale_hint_get()
        eo.__do_end()
        return v
    end,

    source_events_set = function(self, source)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_source_events_set(source)
        eo.__do_end()
    end,

    source_events_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_source_events_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    colorspace_set = function(self, cspace)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_colorspace_set(cspace)
        eo.__do_end()
    end,

    colorspace_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_colorspace_get()
        eo.__do_end()
        return v
    end,

    pixels_get_callback_set = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_pixels_get_callback_set(func, data)
        eo.__do_end()
    end,

    data_copy_set = function(self, data)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_data_copy_set(data)
        eo.__do_end()
    end,

    animated_frame_set = function(self, frame_index)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_animated_frame_set(frame_index)
        eo.__do_end()
    end,

    region_support_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_region_support_get()
        eo.__do_end()
    end,

    load_error_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_load_error_get()
        eo.__do_end()
    end,

    animated_frame_count_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_animated_frame_count_get()
        eo.__do_end()
    end,

    stride_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_stride_get()
        eo.__do_end()
    end,

    animated_loop_type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_animated_loop_type_get()
        eo.__do_end()
    end,

    animated_loop_count_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_animated_loop_count_get()
        eo.__do_end()
    end,

    scene_set = function(self, scene)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_scene_set(scene)
        eo.__do_end()
    end,

    scene_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_scene_get()
        eo.__do_end()
        return v
    end,

    orient_set = function(self, orient)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_orient_set(orient)
        eo.__do_end()
    end,

    orient_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_orient_get()
        eo.__do_end()
        return v
    end,

    preload_begin = function(self)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_preload_begin()
        eo.__do_end()
    end,

    data_update_add = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_data_update_add(x, y, w, h)
        eo.__do_end()
    end,

    animated_frame_duration_get = function(self, start_frame, frame_num)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_animated_frame_duration_get(start_frame, frame_num)
        eo.__do_end()
        return tonumber(v)
    end,

    data_set = function(self, data)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_data_set(data)
        eo.__do_end()
    end,

    data_get = function(self, for_writing)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_image_data_get(for_writing)
        eo.__do_end()
        return v
    end,

    preload_cancel = function(self)
        eo.__do_start(self, __class)
        __lib.evas_obj_image_preload_cancel()
        eo.__do_end()
    end,

    __properties = {
        ["region_support"] = { 0, 0, 1, 0, true, false },
        ["border_scale"] = { 0, 0, 1, 1, true, true },
        ["video_surface"] = { 0, 0, 1, 1, true, true },
        ["animated_frame"] = { 0, 0, 0, 1, false, true },
        ["video_surface_caps"] = { 0, 0, 1, 1, true, true },
        ["native_surface"] = { 0, 0, 1, 1, true, true },
        ["scene"] = { 0, 0, 1, 1, true, true },
        ["border"] = { 0, 0, 4, 4, true, true },
        ["pixels_dirty"] = { 0, 0, 1, 1, true, true },
        ["source"] = { 0, 0, 1, 1, true, true },
        ["alpha"] = { 0, 0, 1, 1, true, true },
        ["animated_loop_count"] = { 0, 0, 1, 0, true, false },
        ["animated_loop_type"] = { 0, 0, 1, 0, true, false },
        ["animated_frame_count"] = { 0, 0, 1, 0, true, false },
        ["border_center_fill"] = { 0, 0, 1, 1, true, true },
        ["stride"] = { 0, 0, 1, 0, true, false },
        ["load_error"] = { 0, 0, 1, 0, true, false },
        ["data_copy"] = { 0, 0, 0, 1, false, true },
        ["load_dpi"] = { 0, 0, 1, 1, true, true },
        ["source_visible"] = { 0, 0, 1, 1, true, true },
        ["orient"] = { 0, 0, 1, 1, true, true },
        ["scale_hint"] = { 0, 0, 1, 1, true, true },
        ["pixels_get_callback"] = { 0, 0, 0, 2, false, true },
        ["load_region"] = { 0, 0, 4, 4, true, true },
        ["source_events"] = { 0, 0, 1, 1, true, true },
        ["filled"] = { 0, 0, 1, 1, true, true },
        ["load_orientation"] = { 0, 0, 1, 1, true, true },
        ["colorspace"] = { 0, 0, 1, 1, true, true },
        ["load_scale_down"] = { 0, 0, 1, 1, true, true },
        ["content_hint"] = { 0, 0, 1, 1, true, true },
        ["source_clip"] = { 0, 0, 1, 1, true, true }
    }
}

M.Image = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Image").__eo_ctor,
                            1, ...)
end

return M

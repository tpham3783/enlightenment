-- EFL LuaJIT bindings: edje_object.eo (class Edje.Object)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.edje_object_class_get()
    eo.class_register("Edje_Object", {"Evas_Smart_Clipped"}, {"Efl_File"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *edje_object_class_get(void);
    void edje_obj_update_hints_set(Eina_Bool update);
    Eina_Bool edje_obj_update_hints_get(void);
    void edje_obj_mirrored_set(Eina_Bool rtl);
    Eina_Bool edje_obj_mirrored_get(void);
    void edje_obj_language_set(const char * language);
    const char *edje_obj_language_get(void);
    void edje_obj_animation_set(Eina_Bool on);
    Eina_Bool edje_obj_animation_get(void);
    void edje_obj_play_set(Eina_Bool play);
    Eina_Bool edje_obj_play_get(void);
    void edje_obj_perspective_set(Edje_Perspective * ps);
    const Edje_Perspective *edje_obj_perspective_get(void);
    Eina_Bool edje_obj_scale_set(double scale);
    double edje_obj_scale_get(void);
    double edje_obj_base_scale_get(void);
    void edje_obj_text_change_cb_set(Edje_Text_Change_Cb func, void * data);
    void edje_obj_part_text_cursor_begin_set(const char * part, Edje_Cursor cur);
    void edje_obj_part_text_cursor_line_end_set(const char * part, Edje_Cursor cur);
    Eina_Bool edje_obj_text_class_set(const char * text_class, const char * font, Evas_Font_Size size);
    Eina_Bool edje_obj_part_text_cursor_coord_set(const char * part, Edje_Cursor cur, Evas_Coord x, Evas_Coord y);
    void edje_obj_part_text_cursor_end_set(const char * part, Edje_Cursor cur);
    Eina_Bool edje_obj_part_text_escaped_set(const char * part, const char * text);
    void edje_obj_item_provider_set(Edje_Item_Provider_Cb func, void * data);
    void edje_obj_part_text_cursor_line_begin_set(const char * part, Edje_Cursor cur);
    void edje_obj_message_handler_set(Edje_Message_Handler_Cb func, void * data);
    void edje_obj_size_min_get(Evas_Coord *minw, Evas_Coord *minh);
    Eina_List *edje_obj_access_part_list_get(void);
    Edje_Load_Error edje_obj_load_error_get(void);
    void edje_obj_size_max_get(Evas_Coord *maxw, Evas_Coord *maxh);
    void edje_obj_transition_duration_factor_set(double scale);
    double edje_obj_transition_duration_factor_get(void);
    Eina_Bool edje_obj_part_table_clear(const char * part, Eina_Bool clear);
    Edje_External_Param_Type edje_obj_part_external_param_type_get(const char * part, const char *param);
    void edje_obj_part_text_select_allow_set(const char * part, Eina_Bool allow);
    const char *edje_obj_part_state_get(const char * part, double *val_ret);
    void *edje_obj_text_markup_filter_callback_del_full(const char * part, Edje_Markup_Filter_Cb func, void * data);
    Eina_Bool edje_obj_part_drag_step_set(const char * part, double dx, double dy);
    Eina_Bool edje_obj_part_drag_step_get(const char * part, double *dx, double *dy);
    void *edje_obj_part_text_imf_context_get(const char * part);
    void edje_obj_part_text_select_begin(const char * part);
    const char *edje_obj_part_text_style_user_peek(const char * part);
    void *edje_obj_signal_callback_del(const char * emission, const char * source, Edje_Signal_Cb func, void * data);
    Eina_Bool edje_obj_part_text_cursor_next(const char * part, Edje_Cursor cur);
    void edje_obj_part_text_style_user_push(const char * part, const char * style);
    void edje_obj_part_text_append(const char * part, const char * text);
    Eina_Bool edje_obj_part_geometry_get(const char * part, Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);
    void edje_obj_part_text_input_panel_hide(const char * part);
    Eina_Bool edje_obj_part_text_item_geometry_get(const char * part, const char * item, Evas_Coord *cx, Evas_Coord *cy, Evas_Coord *cw, Evas_Coord *ch);
    Eina_Bool edje_obj_part_table_unpack(const char * part, Evas_Object * child_obj);
    void edje_obj_part_text_select_abort(const char * part);
    void *edje_obj_text_insert_filter_callback_del_full(const char * part, Edje_Text_Filter_Cb func, void * data);
    void edje_obj_part_text_style_user_pop(const char * part);
    void edje_obj_part_text_input_panel_imdata_set(const char * part, const void * data, int len);
    void edje_obj_part_text_input_panel_imdata_get(const char * part, void * data, int * len);
    void edje_obj_part_text_insert(const char * part, const char * text);
    Evas_Object *edje_obj_part_box_remove_at(const char * part, unsigned int pos);
    void edje_obj_part_text_cursor_copy(const char * part, Edje_Cursor src, Edje_Cursor dst);
    Eina_Bool edje_obj_parts_extends_calc(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);
    Eina_Bool edje_obj_part_drag_value_set(const char * part, double dx, double dy);
    Eina_Bool edje_obj_part_drag_value_get(const char * part, double *dx, double *dy);
    void edje_obj_calc_force(void);
    void edje_obj_part_text_cursor_pos_set(const char * part, Edje_Cursor cur, int pos);
    int edje_obj_part_text_cursor_pos_get(const char * part, Edje_Cursor cur);
    int edje_obj_freeze(void);
    char *edje_obj_part_text_cursor_content_get(const char * part, Edje_Cursor cur);
    void edje_obj_part_text_input_panel_layout_set(const char * part, Edje_Input_Panel_Layout layout);
    Edje_Input_Panel_Layout edje_obj_part_text_input_panel_layout_get(const char * part);
    Eina_Bool edje_obj_part_table_pack(const char * part, Evas_Object * child_obj, unsigned short col, unsigned short row, unsigned short colspan, unsigned short rowspan);
    void edje_obj_part_text_input_panel_language_set(const char * part, Edje_Input_Panel_Lang lang);
    Edje_Input_Panel_Lang edje_obj_part_text_input_panel_language_get(const char * part);
    Eina_Bool edje_obj_part_table_col_row_size_get(const char * part, int *cols, int *rows);
    Evas_Object *edje_obj_part_external_object_get(const char * part);
    Evas_Object *edje_obj_part_external_content_get(const char * part, const char *content);
    Eina_Bool edje_obj_preload(Eina_Bool cancel);
    void edje_obj_part_text_input_panel_enabled_set(const char * part, Eina_Bool enabled);
    Eina_Bool edje_obj_part_text_input_panel_enabled_get(const char * part);
    void edje_obj_part_text_select_extend(const char * part);
    Eina_Bool edje_obj_part_box_insert_at(const char * part, Evas_Object * child, unsigned int pos);
    const Eina_List *edje_obj_part_text_anchor_geometry_get(const char * part, const char * anchor);
    Eina_Bool edje_obj_part_text_cursor_down(const char * part, Edje_Cursor cur);
    Eina_Bool edje_obj_part_drag_page_set(const char * part, double dx, double dy);
    Eina_Bool edje_obj_part_drag_page_get(const char * part, double *dx, double *dy);
    Eina_Bool edje_obj_part_box_prepend(const char * part, Evas_Object * child);
    void edje_obj_signal_emit(const char * emission, const char * source);
    void edje_obj_part_text_input_panel_layout_variation_set(const char * part, int variation);
    int edje_obj_part_text_input_panel_layout_variation_get(const char * part);
    void edje_obj_message_send(Edje_Message_Type type, int id, void * msg);
    void edje_obj_part_text_select_none(const char * part);
    const Evas_Object *edje_obj_part_object_get(const char * part);
    Eina_Bool edje_obj_part_drag_size_set(const char * part, double dw, double dh);
    Eina_Bool edje_obj_part_drag_size_get(const char * part, double *dw, double *dh);
    void *edje_obj_text_insert_filter_callback_del(const char * part, Edje_Text_Filter_Cb func);
    Edje_Drag_Dir edje_obj_part_drag_dir_get(const char * part);
    Eina_Bool edje_obj_part_text_unescaped_set(const char * part, const char * text_to_escape);
    char *edje_obj_part_text_unescaped_get(const char * part);
    void edje_obj_signal_callback_add(const char * emission, const char * source, Edje_Signal_Cb func, void * data);
    void edje_obj_part_text_select_all(const char * part);
    void edje_obj_part_text_input_panel_return_key_disabled_set(const char * part, Eina_Bool disabled);
    Eina_Bool edje_obj_part_text_input_panel_return_key_disabled_get(const char * part);
    void edje_obj_part_text_autocapital_type_set(const char * part, Edje_Text_Autocapital_Type autocapital_type);
    Edje_Text_Autocapital_Type edje_obj_part_text_autocapital_type_get(const char * part);
    void edje_obj_part_unswallow(Evas_Object * obj_swallow);
    void edje_obj_part_text_prediction_allow_set(const char * part, Eina_Bool prediction);
    Eina_Bool edje_obj_part_text_prediction_allow_get(const char * part);
    const char *edje_obj_data_get(const char * key);
    void edje_obj_text_markup_filter_callback_add(const char * part, Edje_Markup_Filter_Cb func, void * data);
    void edje_obj_message_signal_process(void);
    Evas_Object *edje_obj_part_box_remove(const char * part, Evas_Object * child);
    int edje_obj_thaw(void);
    Evas_Object *edje_obj_part_swallow_get(const char * part);
    void edje_obj_part_text_imf_context_reset(const char * part);
    void edje_obj_part_text_input_panel_return_key_type_set(const char * part, Edje_Input_Panel_Return_Key_Type return_key_type);
    Edje_Input_Panel_Return_Key_Type edje_obj_part_text_input_panel_return_key_type_get(const char * part);
    Evas_Object *edje_obj_part_table_child_get(const char * part, unsigned int col, unsigned int row);
    Eina_Bool edje_obj_part_box_insert_before(const char * part, Evas_Object * child, const Evas_Object * reference);
    Eina_Bool edje_obj_part_external_param_set(const char * part, const Edje_External_Param * param);
    Eina_Bool edje_obj_part_external_param_get(const char * part, Edje_External_Param *param);
    void edje_obj_size_min_calc(Evas_Coord *minw, Evas_Coord *minh);
    Eina_Bool edje_obj_part_box_append(const char * part, Evas_Object * child);
    void edje_obj_size_min_restricted_calc(Evas_Coord *minw, Evas_Coord *minh, Evas_Coord restrictedw, Evas_Coord restrictedh);
    Eina_Bool edje_obj_part_box_remove_all(const char * part, Eina_Bool clear);
    Eina_Bool edje_obj_part_drag_page(const char * part, double dx, double dy);
    Eina_Bool edje_obj_part_text_set(const char * part, const char * text);
    const char *edje_obj_part_text_get(const char * part);
    void edje_obj_part_text_input_panel_show_on_demand_set(const char * part, Eina_Bool ondemand);
    Eina_Bool edje_obj_part_text_input_panel_show_on_demand_get(const char * part);
    void edje_obj_part_text_input_hint_set(const char * part, Edje_Input_Hints input_hints);
    Edje_Input_Hints edje_obj_part_text_input_hint_get(const char * part);
    const char *edje_obj_part_text_selection_get(const char * part);
    Eina_Bool edje_obj_part_text_cursor_is_format_get(const char * part, Edje_Cursor cur);
    Eina_Bool edje_obj_text_class_get(const char * text_class, const char * *font, Evas_Font_Size *size);
    void edje_obj_text_class_del(const char * text_class);
    Eina_Bool edje_obj_color_class_set(const char * color_class, int r, int g, int b, int a, int r2, int g2, int b2, int a2, int r3, int g3, int b3, int a3);
    Eina_Bool edje_obj_color_class_get(const char * color_class, int *r, int *g, int *b, int *a, int *r2, int *g2, int *b2, int *a2, int *r3, int *g3, int *b3, int *a3);
    const char *edje_obj_color_class_description_get(const char * color_class);
    Eina_Bool edje_obj_color_class_clear(void);
    void edje_obj_color_class_del(const char * color_class);
    Eina_Bool edje_obj_size_class_set(const char * size_class, int minw, int minh, int maxw, int maxh);
    Eina_Bool edje_obj_size_class_get(const char * size_class, int *minw, int *minh, int *maxw, int *maxh);
    void edje_obj_size_class_del(const char * size_class);
    Eina_Bool edje_obj_part_drag_step(const char * part, double dx, double dy);
    Eina_Bool edje_obj_part_text_cursor_up(const char * part, Edje_Cursor cur);
    void edje_obj_part_text_cursor_geometry_get(const char * part, Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);
    const Eina_List *edje_obj_part_text_anchor_list_get(const char * part);
    void edje_obj_text_insert_filter_callback_add(const char * part, Edje_Text_Filter_Cb func, void * data);
    void edje_obj_part_text_input_panel_show(const char * part);
    Eina_Bool edje_obj_part_exists(const char * part);
    void *edje_obj_text_markup_filter_callback_del(const char * part, Edje_Markup_Filter_Cb func);
    Eina_Bool edje_obj_part_text_cursor_is_visible_format_get(const char * part, Edje_Cursor cur);
    void edje_obj_part_text_user_insert(const char * part, const char * text);
    Eina_Bool edje_obj_part_text_cursor_prev(const char * part, Edje_Cursor cur);
    const Eina_List *edje_obj_part_text_item_list_get(const char * part);
    Eina_Bool edje_obj_part_swallow(const char * part, Evas_Object * obj_swallow);
    extern const Eo_Event_Description _EDJE_OBJECT_EVENT_RECALC;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    update_hints_set = function(self, update)
        eo.__do_start(self, __class)
        __lib.edje_obj_update_hints_set(update)
        eo.__do_end()
    end,

    update_hints_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_update_hints_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    mirrored_set = function(self, rtl)
        eo.__do_start(self, __class)
        __lib.edje_obj_mirrored_set(rtl)
        eo.__do_end()
    end,

    mirrored_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_mirrored_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    language_set = function(self, language)
        eo.__do_start(self, __class)
        __lib.edje_obj_language_set(language)
        eo.__do_end()
    end,

    language_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_language_get()
        eo.__do_end()
        return ffi.string(v)
    end,

    animation_set = function(self, on)
        eo.__do_start(self, __class)
        __lib.edje_obj_animation_set(on)
        eo.__do_end()
    end,

    animation_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_animation_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    play_set = function(self, play)
        eo.__do_start(self, __class)
        __lib.edje_obj_play_set(play)
        eo.__do_end()
    end,

    play_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_play_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    perspective_set = function(self, ps)
        eo.__do_start(self, __class)
        __lib.edje_obj_perspective_set(ps)
        eo.__do_end()
    end,

    perspective_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_perspective_get()
        eo.__do_end()
        return v
    end,

    scale_set = function(self, scale)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_scale_set(scale)
        eo.__do_end()
    end,

    scale_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_scale_get()
        eo.__do_end()
        return tonumber(v)
    end,

    base_scale_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_base_scale_get()
        eo.__do_end()
        return tonumber(v)
    end,

    text_change_cb_set = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.edje_obj_text_change_cb_set(func, data)
        eo.__do_end()
    end,

    part_text_cursor_begin_set = function(self, part, cur)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_cursor_begin_set(part, cur)
        eo.__do_end()
    end,

    part_text_cursor_line_end_set = function(self, part, cur)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_cursor_line_end_set(part, cur)
        eo.__do_end()
    end,

    text_class_set = function(self, text_class, font, size)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_text_class_set(text_class, font, size)
        eo.__do_end()
    end,

    part_text_cursor_coord_set = function(self, part, cur, x, y)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_cursor_coord_set(part, cur, x, y)
        eo.__do_end()
    end,

    part_text_cursor_end_set = function(self, part, cur)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_cursor_end_set(part, cur)
        eo.__do_end()
    end,

    part_text_escaped_set = function(self, part, text)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_escaped_set(part, text)
        eo.__do_end()
    end,

    item_provider_set = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.edje_obj_item_provider_set(func, data)
        eo.__do_end()
    end,

    part_text_cursor_line_begin_set = function(self, part, cur)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_cursor_line_begin_set(part, cur)
        eo.__do_end()
    end,

    message_handler_set = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.edje_obj_message_handler_set(func, data)
        eo.__do_end()
    end,

    size_min_get = function(self)
        eo.__do_start(self, __class)
        local minw = ffi.new("Evas_Coord[1]")
        local minh = ffi.new("Evas_Coord[1]")
        __lib.edje_obj_size_min_get(minw, minh)
        eo.__do_end()
        return minw[0], minh[0]
    end,

    access_part_list_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_access_part_list_get()
        eo.__do_end()
    end,

    load_error_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_load_error_get()
        eo.__do_end()
    end,

    size_max_get = function(self)
        eo.__do_start(self, __class)
        local maxw = ffi.new("Evas_Coord[1]")
        local maxh = ffi.new("Evas_Coord[1]")
        __lib.edje_obj_size_max_get(maxw, maxh)
        eo.__do_end()
        return maxw[0], maxh[0]
    end,

    transition_duration_factor_set = function(self, scale)
        eo.__do_start(self, __class)
        __lib.edje_obj_transition_duration_factor_set(scale)
        eo.__do_end()
    end,

    transition_duration_factor_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_transition_duration_factor_get()
        eo.__do_end()
        return tonumber(v)
    end,

    part_table_clear = function(self, part, clear)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_table_clear(part, clear)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_external_param_type_get = function(self, part)
        eo.__do_start(self, __class)
        local param = ffi.new("const char[1]")
        local v = __lib.edje_obj_part_external_param_type_get(part, param)
        eo.__do_end()
        return v, string.char(param[0])
    end,

    part_text_select_allow_set = function(self, part, allow)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_select_allow_set(part, allow)
        eo.__do_end()
    end,

    part_state_get = function(self, part)
        eo.__do_start(self, __class)
        local val_ret = ffi.new("double[1]")
        local v = __lib.edje_obj_part_state_get(part, val_ret)
        eo.__do_end()
        return ffi.string(v), tonumber(val_ret[0])
    end,

    text_markup_filter_callback_del_full = function(self, part, func, data)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_text_markup_filter_callback_del_full(part, func, data)
        eo.__do_end()
        return v
    end,

    part_drag_step_set = function(self, part, dx, dy)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_drag_step_set(part, dx, dy)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_drag_step_get = function(self, part)
        eo.__do_start(self, __class)
        local dx = ffi.new("double[1]")
        local dy = ffi.new("double[1]")
        local v = __lib.edje_obj_part_drag_step_get(part, dx, dy)
        eo.__do_end()
        return ((v) ~= 0), tonumber(dx[0]), tonumber(dy[0])
    end,

    part_text_imf_context_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_imf_context_get(part)
        eo.__do_end()
        return v
    end,

    part_text_select_begin = function(self, part)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_select_begin(part)
        eo.__do_end()
    end,

    part_text_style_user_peek = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_style_user_peek(part)
        eo.__do_end()
        return ffi.string(v)
    end,

    signal_callback_del = function(self, emission, source, func, data)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_signal_callback_del(emission, source, func, data)
        eo.__do_end()
        return v
    end,

    part_text_cursor_next = function(self, part, cur)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_cursor_next(part, cur)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_style_user_push = function(self, part, style)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_style_user_push(part, style)
        eo.__do_end()
    end,

    part_text_append = function(self, part, text)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_append(part, text)
        eo.__do_end()
    end,

    part_geometry_get = function(self, part)
        eo.__do_start(self, __class)
        local x = ffi.new("Evas_Coord[1]")
        local y = ffi.new("Evas_Coord[1]")
        local w = ffi.new("Evas_Coord[1]")
        local h = ffi.new("Evas_Coord[1]")
        local v = __lib.edje_obj_part_geometry_get(part, x, y, w, h)
        eo.__do_end()
        return ((v) ~= 0), x[0], y[0], w[0], h[0]
    end,

    part_text_input_panel_hide = function(self, part)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_hide(part)
        eo.__do_end()
    end,

    part_text_item_geometry_get = function(self, part, item)
        eo.__do_start(self, __class)
        local cx = ffi.new("Evas_Coord[1]")
        local cy = ffi.new("Evas_Coord[1]")
        local cw = ffi.new("Evas_Coord[1]")
        local ch = ffi.new("Evas_Coord[1]")
        local v = __lib.edje_obj_part_text_item_geometry_get(part, item, cx, cy, cw, ch)
        eo.__do_end()
        return ((v) ~= 0), cx[0], cy[0], cw[0], ch[0]
    end,

    part_table_unpack = function(self, part, child_obj)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_table_unpack(part, child_obj)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_select_abort = function(self, part)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_select_abort(part)
        eo.__do_end()
    end,

    text_insert_filter_callback_del_full = function(self, part, func, data)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_text_insert_filter_callback_del_full(part, func, data)
        eo.__do_end()
        return v
    end,

    part_text_style_user_pop = function(self, part)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_style_user_pop(part)
        eo.__do_end()
    end,

    part_text_input_panel_imdata_set = function(self, part, data, len)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_imdata_set(part, data, len)
        eo.__do_end()
    end,

    part_text_input_panel_imdata_get = function(self, part, data, len)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_imdata_get(part, data, len)
        eo.__do_end()
    end,

    part_text_insert = function(self, part, text)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_insert(part, text)
        eo.__do_end()
    end,

    part_box_remove_at = function(self, part, pos)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_box_remove_at(part, pos)
        eo.__do_end()
        return v
    end,

    part_text_cursor_copy = function(self, part, src, dst)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_cursor_copy(part, src, dst)
        eo.__do_end()
    end,

    parts_extends_calc = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("Evas_Coord[1]")
        local y = ffi.new("Evas_Coord[1]")
        local w = ffi.new("Evas_Coord[1]")
        local h = ffi.new("Evas_Coord[1]")
        local v = __lib.edje_obj_parts_extends_calc(x, y, w, h)
        eo.__do_end()
        return ((v) ~= 0), x[0], y[0], w[0], h[0]
    end,

    part_drag_value_set = function(self, part, dx, dy)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_drag_value_set(part, dx, dy)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_drag_value_get = function(self, part)
        eo.__do_start(self, __class)
        local dx = ffi.new("double[1]")
        local dy = ffi.new("double[1]")
        local v = __lib.edje_obj_part_drag_value_get(part, dx, dy)
        eo.__do_end()
        return ((v) ~= 0), tonumber(dx[0]), tonumber(dy[0])
    end,

    calc_force = function(self)
        eo.__do_start(self, __class)
        __lib.edje_obj_calc_force()
        eo.__do_end()
    end,

    part_text_cursor_pos_set = function(self, part, cur, pos)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_cursor_pos_set(part, cur, pos)
        eo.__do_end()
    end,

    part_text_cursor_pos_get = function(self, part, cur)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_cursor_pos_get(part, cur)
        eo.__do_end()
        return tonumber(v)
    end,

    freeze = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_freeze()
        eo.__do_end()
        return tonumber(v)
    end,

    part_text_cursor_content_get = function(self, part, cur)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_cursor_content_get(part, cur)
        eo.__do_end()
        return v
    end,

    part_text_input_panel_layout_set = function(self, part, layout)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_layout_set(part, layout)
        eo.__do_end()
    end,

    part_text_input_panel_layout_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_input_panel_layout_get(part)
        eo.__do_end()
        return v
    end,

    part_table_pack = function(self, part, child_obj, col, row, colspan, rowspan)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_table_pack(part, child_obj, col, row, colspan, rowspan)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_input_panel_language_set = function(self, part, lang)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_language_set(part, lang)
        eo.__do_end()
    end,

    part_text_input_panel_language_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_input_panel_language_get(part)
        eo.__do_end()
        return v
    end,

    part_table_col_row_size_get = function(self, part)
        eo.__do_start(self, __class)
        local cols = ffi.new("int[1]")
        local rows = ffi.new("int[1]")
        local v = __lib.edje_obj_part_table_col_row_size_get(part, cols, rows)
        eo.__do_end()
        return ((v) ~= 0), tonumber(cols[0]), tonumber(rows[0])
    end,

    part_external_object_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_external_object_get(part)
        eo.__do_end()
        return v
    end,

    part_external_content_get = function(self, part)
        eo.__do_start(self, __class)
        local content = ffi.new("const char[1]")
        local v = __lib.edje_obj_part_external_content_get(part, content)
        eo.__do_end()
        return v, string.char(content[0])
    end,

    preload = function(self, cancel)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_preload(cancel)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_input_panel_enabled_set = function(self, part, enabled)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_enabled_set(part, enabled)
        eo.__do_end()
    end,

    part_text_input_panel_enabled_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_input_panel_enabled_get(part)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_select_extend = function(self, part)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_select_extend(part)
        eo.__do_end()
    end,

    part_box_insert_at = function(self, part, child, pos)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_box_insert_at(part, child, pos)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_anchor_geometry_get = function(self, part, anchor)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_anchor_geometry_get(part, anchor)
        eo.__do_end()
        return v
    end,

    part_text_cursor_down = function(self, part, cur)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_cursor_down(part, cur)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_drag_page_set = function(self, part, dx, dy)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_drag_page_set(part, dx, dy)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_drag_page_get = function(self, part)
        eo.__do_start(self, __class)
        local dx = ffi.new("double[1]")
        local dy = ffi.new("double[1]")
        local v = __lib.edje_obj_part_drag_page_get(part, dx, dy)
        eo.__do_end()
        return ((v) ~= 0), tonumber(dx[0]), tonumber(dy[0])
    end,

    part_box_prepend = function(self, part, child)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_box_prepend(part, child)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    signal_emit = function(self, emission, source)
        eo.__do_start(self, __class)
        __lib.edje_obj_signal_emit(emission, source)
        eo.__do_end()
    end,

    part_text_input_panel_layout_variation_set = function(self, part, variation)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_layout_variation_set(part, variation)
        eo.__do_end()
    end,

    part_text_input_panel_layout_variation_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_input_panel_layout_variation_get(part)
        eo.__do_end()
        return tonumber(v)
    end,

    message_send = function(self, type, id, msg)
        eo.__do_start(self, __class)
        __lib.edje_obj_message_send(type, id, msg)
        eo.__do_end()
    end,

    part_text_select_none = function(self, part)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_select_none(part)
        eo.__do_end()
    end,

    part_object_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_object_get(part)
        eo.__do_end()
        return v
    end,

    part_drag_size_set = function(self, part, dw, dh)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_drag_size_set(part, dw, dh)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_drag_size_get = function(self, part)
        eo.__do_start(self, __class)
        local dw = ffi.new("double[1]")
        local dh = ffi.new("double[1]")
        local v = __lib.edje_obj_part_drag_size_get(part, dw, dh)
        eo.__do_end()
        return ((v) ~= 0), tonumber(dw[0]), tonumber(dh[0])
    end,

    text_insert_filter_callback_del = function(self, part, func)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_text_insert_filter_callback_del(part, func)
        eo.__do_end()
        return v
    end,

    part_drag_dir_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_drag_dir_get(part)
        eo.__do_end()
        return v
    end,

    part_text_unescaped_set = function(self, part, text_to_escape)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_unescaped_set(part, text_to_escape)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_unescaped_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_unescaped_get(part)
        eo.__do_end()
        return v
    end,

    signal_callback_add = function(self, emission, source, func, data)
        eo.__do_start(self, __class)
        __lib.edje_obj_signal_callback_add(emission, source, func, data)
        eo.__do_end()
    end,

    part_text_select_all = function(self, part)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_select_all(part)
        eo.__do_end()
    end,

    part_text_input_panel_return_key_disabled_set = function(self, part, disabled)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_return_key_disabled_set(part, disabled)
        eo.__do_end()
    end,

    part_text_input_panel_return_key_disabled_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_input_panel_return_key_disabled_get(part)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_autocapital_type_set = function(self, part, autocapital_type)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_autocapital_type_set(part, autocapital_type)
        eo.__do_end()
    end,

    part_text_autocapital_type_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_autocapital_type_get(part)
        eo.__do_end()
        return v
    end,

    part_unswallow = function(self, obj_swallow)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_unswallow(obj_swallow)
        eo.__do_end()
    end,

    part_text_prediction_allow_set = function(self, part, prediction)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_prediction_allow_set(part, prediction)
        eo.__do_end()
    end,

    part_text_prediction_allow_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_prediction_allow_get(part)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    data_get = function(self, key)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_data_get(key)
        eo.__do_end()
        return ffi.string(v)
    end,

    text_markup_filter_callback_add = function(self, part, func, data)
        eo.__do_start(self, __class)
        __lib.edje_obj_text_markup_filter_callback_add(part, func, data)
        eo.__do_end()
    end,

    message_signal_process = function(self)
        eo.__do_start(self, __class)
        __lib.edje_obj_message_signal_process()
        eo.__do_end()
    end,

    part_box_remove = function(self, part, child)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_box_remove(part, child)
        eo.__do_end()
        return v
    end,

    thaw = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_thaw()
        eo.__do_end()
        return tonumber(v)
    end,

    part_swallow_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_swallow_get(part)
        eo.__do_end()
        return v
    end,

    part_text_imf_context_reset = function(self, part)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_imf_context_reset(part)
        eo.__do_end()
    end,

    part_text_input_panel_return_key_type_set = function(self, part, return_key_type)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_return_key_type_set(part, return_key_type)
        eo.__do_end()
    end,

    part_text_input_panel_return_key_type_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_input_panel_return_key_type_get(part)
        eo.__do_end()
        return v
    end,

    part_table_child_get = function(self, part, col, row)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_table_child_get(part, col, row)
        eo.__do_end()
        return v
    end,

    part_box_insert_before = function(self, part, child, reference)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_box_insert_before(part, child, reference)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_external_param_set = function(self, part, param)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_external_param_set(part, param)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_external_param_get = function(self, part)
        eo.__do_start(self, __class)
        local param = ffi.new("Edje_External_Param[1]")
        local v = __lib.edje_obj_part_external_param_get(part, param)
        eo.__do_end()
        return ((v) ~= 0), param[0]
    end,

    size_min_calc = function(self)
        eo.__do_start(self, __class)
        local minw = ffi.new("Evas_Coord[1]")
        local minh = ffi.new("Evas_Coord[1]")
        __lib.edje_obj_size_min_calc(minw, minh)
        eo.__do_end()
        return minw[0], minh[0]
    end,

    part_box_append = function(self, part, child)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_box_append(part, child)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    size_min_restricted_calc = function(self, restrictedw, restrictedh)
        eo.__do_start(self, __class)
        local minw = ffi.new("Evas_Coord[1]")
        local minh = ffi.new("Evas_Coord[1]")
        __lib.edje_obj_size_min_restricted_calc(minw, minh, restrictedw, restrictedh)
        eo.__do_end()
        return minw[0], minh[0]
    end,

    part_box_remove_all = function(self, part, clear)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_box_remove_all(part, clear)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_drag_page = function(self, part, dx, dy)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_drag_page(part, dx, dy)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_set = function(self, part, text)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_set(part, text)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_get(part)
        eo.__do_end()
        return ffi.string(v)
    end,

    part_text_input_panel_show_on_demand_set = function(self, part, ondemand)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_show_on_demand_set(part, ondemand)
        eo.__do_end()
    end,

    part_text_input_panel_show_on_demand_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_input_panel_show_on_demand_get(part)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_input_hint_set = function(self, part, input_hints)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_hint_set(part, input_hints)
        eo.__do_end()
    end,

    part_text_input_hint_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_input_hint_get(part)
        eo.__do_end()
        return v
    end,

    part_text_selection_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_selection_get(part)
        eo.__do_end()
        return ffi.string(v)
    end,

    part_text_cursor_is_format_get = function(self, part, cur)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_cursor_is_format_get(part, cur)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    text_class_get = function(self, text_class)
        eo.__do_start(self, __class)
        local font = ffi.new("const char *[1]")
        local size = ffi.new("Evas_Font_Size[1]")
        local v = __lib.edje_obj_text_class_get(text_class, font, size)
        eo.__do_end()
        return ((v) ~= 0), ffi.string(font[0]), size[0]
    end,

    text_class_del = function(self, text_class)
        eo.__do_start(self, __class)
        __lib.edje_obj_text_class_del(text_class)
        eo.__do_end()
    end,

    color_class_set = function(self, color_class, r, g, b, a, r2, g2, b2, a2, r3, g3, b3, a3)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_color_class_set(color_class, r, g, b, a, r2, g2, b2, a2, r3, g3, b3, a3)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    color_class_get = function(self, color_class)
        eo.__do_start(self, __class)
        local r = ffi.new("int[1]")
        local g = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        local a = ffi.new("int[1]")
        local r2 = ffi.new("int[1]")
        local g2 = ffi.new("int[1]")
        local b2 = ffi.new("int[1]")
        local a2 = ffi.new("int[1]")
        local r3 = ffi.new("int[1]")
        local g3 = ffi.new("int[1]")
        local b3 = ffi.new("int[1]")
        local a3 = ffi.new("int[1]")
        local v = __lib.edje_obj_color_class_get(color_class, r, g, b, a, r2, g2, b2, a2, r3, g3, b3, a3)
        eo.__do_end()
        return ((v) ~= 0), tonumber(r[0]), tonumber(g[0]), tonumber(b[0]), tonumber(a[0]), tonumber(r2[0]), tonumber(g2[0]), tonumber(b2[0]), tonumber(a2[0]), tonumber(r3[0]), tonumber(g3[0]), tonumber(b3[0]), tonumber(a3[0])
    end,

    color_class_description_get = function(self, color_class)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_color_class_description_get(color_class)
        eo.__do_end()
        return ffi.string(v)
    end,

    color_class_clear = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_color_class_clear()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    color_class_del = function(self, color_class)
        eo.__do_start(self, __class)
        __lib.edje_obj_color_class_del(color_class)
        eo.__do_end()
    end,

    size_class_set = function(self, size_class, minw, minh, maxw, maxh)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_size_class_set(size_class, minw, minh, maxw, maxh)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    size_class_get = function(self, size_class)
        eo.__do_start(self, __class)
        local minw = ffi.new("int[1]")
        local minh = ffi.new("int[1]")
        local maxw = ffi.new("int[1]")
        local maxh = ffi.new("int[1]")
        local v = __lib.edje_obj_size_class_get(size_class, minw, minh, maxw, maxh)
        eo.__do_end()
        return ((v) ~= 0), tonumber(minw[0]), tonumber(minh[0]), tonumber(maxw[0]), tonumber(maxh[0])
    end,

    size_class_del = function(self, size_class)
        eo.__do_start(self, __class)
        __lib.edje_obj_size_class_del(size_class)
        eo.__do_end()
    end,

    part_drag_step = function(self, part, dx, dy)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_drag_step(part, dx, dy)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_cursor_up = function(self, part, cur)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_cursor_up(part, cur)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_cursor_geometry_get = function(self, part)
        eo.__do_start(self, __class)
        local x = ffi.new("Evas_Coord[1]")
        local y = ffi.new("Evas_Coord[1]")
        local w = ffi.new("Evas_Coord[1]")
        local h = ffi.new("Evas_Coord[1]")
        __lib.edje_obj_part_text_cursor_geometry_get(part, x, y, w, h)
        eo.__do_end()
        return x[0], y[0], w[0], h[0]
    end,

    part_text_anchor_list_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_anchor_list_get(part)
        eo.__do_end()
        return v
    end,

    text_insert_filter_callback_add = function(self, part, func, data)
        eo.__do_start(self, __class)
        __lib.edje_obj_text_insert_filter_callback_add(part, func, data)
        eo.__do_end()
    end,

    part_text_input_panel_show = function(self, part)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_show(part)
        eo.__do_end()
    end,

    part_exists = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_exists(part)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    text_markup_filter_callback_del = function(self, part, func)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_text_markup_filter_callback_del(part, func)
        eo.__do_end()
        return v
    end,

    part_text_cursor_is_visible_format_get = function(self, part, cur)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_cursor_is_visible_format_get(part, cur)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_user_insert = function(self, part, text)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_user_insert(part, text)
        eo.__do_end()
    end,

    part_text_cursor_prev = function(self, part, cur)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_cursor_prev(part, cur)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_item_list_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_item_list_get(part)
        eo.__do_end()
        return v
    end,

    part_swallow = function(self, part, obj_swallow)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_swallow(part, obj_swallow)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["recalc"] = __lib._EDJE_OBJECT_EVENT_RECALC
    },

    __properties = {
        ["scale"] = { 0, 0, 1, 1, true, true },
        ["part_text_cursor_line_end"] = { 0, 0, 0, 2, false, true },
        ["perspective"] = { 0, 0, 1, 1, true, true },
        ["message_handler"] = { 0, 0, 0, 2, false, true },
        ["text_class"] = { 0, 0, 0, 3, false, true },
        ["part_text_cursor_coord"] = { 0, 0, 0, 4, false, true },
        ["part_text_escaped"] = { 0, 0, 0, 2, false, true },
        ["play"] = { 0, 0, 1, 1, true, true },
        ["part_text_cursor_begin"] = { 0, 0, 0, 2, false, true },
        ["text_change_cb"] = { 0, 0, 0, 2, false, true },
        ["transition_duration_factor"] = { 0, 0, 1, 1, true, true },
        ["base_scale"] = { 0, 0, 1, 0, true, false },
        ["size_max"] = { 0, 0, 2, 0, true, false },
        ["item_provider"] = { 0, 0, 0, 2, false, true },
        ["part_text_cursor_end"] = { 0, 0, 0, 2, false, true },
        ["update_hints"] = { 0, 0, 1, 1, true, true },
        ["access_part_list"] = { 0, 0, 1, 0, true, false },
        ["size_min"] = { 0, 0, 2, 0, true, false },
        ["mirrored"] = { 0, 0, 1, 1, true, true },
        ["part_text_cursor_line_begin"] = { 0, 0, 0, 2, false, true },
        ["load_error"] = { 0, 0, 1, 0, true, false },
        ["animation"] = { 0, 0, 1, 1, true, true },
        ["language"] = { 0, 0, 1, 1, true, true }
    }
}

M.Object = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Edje_Object").__eo_ctor,
                            1, ...)
end

return M

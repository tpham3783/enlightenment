#ifndef EFL_GENERATED_EDJE_OBJECT_HH
#define EFL_GENERATED_EDJE_OBJECT_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "edje_object.eo.h"
}

#include "evas_smart_clipped.eo.hh"
#include "efl_file.eo.hh"
#include <Edje.h>
#include <evas_object.eo.hh>
#include <string>

namespace edje {

struct object;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace edje {

struct object
{
   /// @param part 
   /// @param clear 
   ///
   bool part_table_clear(::efl::eina::string_view part_, bool clear_) const;

   /// @param part 
   /// @param[out] param 
   ///
   Edje_External_Param_Type part_external_param_type_get(::efl::eina::string_view part_, const char* param_) const;

   /// @param part 
   /// @param allow 
   ///
   void part_text_select_allow_set(::efl::eina::string_view part_, bool allow_) const;

   /// @param part 
   /// @param[out] val_ret 
   ///
   ::efl::eina::string_view part_state_get(::efl::eina::string_view part_, double* val_ret_) const;

   /// @param part 
   /// @param func 
   /// @param data 
   ///
   void * text_markup_filter_callback_del_full(::efl::eina::string_view part_, Edje_Markup_Filter_Cb func_, void * data_) const;

   /// @param part 
   /// @param dx 
   /// @param dy 
   ///
   bool part_drag_step_set(::efl::eina::string_view part_, double dx_, double dy_) const;

   /// @param part 
   /// @param[out] dx 
   /// @param[out] dy 
   ///
   bool part_drag_step_get(::efl::eina::string_view part_, double* dx_, double* dy_) const;

   /// @param part 
   ///
   void * part_text_imf_context_get(::efl::eina::string_view part_) const;

   /// @param part 
   ///
   void part_text_select_begin(::efl::eina::string_view part_) const;

   /// @param part 
   ///
   ::efl::eina::string_view part_text_style_user_peek(::efl::eina::string_view part_) const;

   /// @param emission 
   /// @param source 
   /// @param func 
   /// @param data 
   ///
   template <typename F_func_>
   void * signal_callback_del(::efl::eina::string_view emission_, ::efl::eina::string_view source_, F_func_ && func_) const;

   /// @param part 
   /// @param cur 
   ///
   bool part_text_cursor_next(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   /// @param part 
   /// @param style 
   ///
   void part_text_style_user_push(::efl::eina::string_view part_, ::efl::eina::string_view style_) const;

   /// @param part 
   /// @param text 
   ///
   void part_text_append(::efl::eina::string_view part_, ::efl::eina::string_view text_) const;

   /// @param part 
   /// @param[out] x 
   /// @param[out] y 
   /// @param[out] w 
   /// @param[out] h 
   ///
   bool part_geometry_get(::efl::eina::string_view part_, Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const;

   /// @param part 
   ///
   void part_text_input_panel_hide(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param item 
   /// @param[out] cx 
   /// @param[out] cy 
   /// @param[out] cw 
   /// @param[out] ch 
   ///
   bool part_text_item_geometry_get(::efl::eina::string_view part_, ::efl::eina::string_view item_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_) const;

   /// @param part 
   /// @param child_obj 
   ///
   bool part_table_unpack(::efl::eina::string_view part_, ::evas::object child_obj_) const;

   /// @param part 
   ///
   void part_text_select_abort(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param func 
   /// @param data 
   ///
   void * text_insert_filter_callback_del_full(::efl::eina::string_view part_, Edje_Text_Filter_Cb func_, void * data_) const;

   /// @param part 
   ///
   void part_text_style_user_pop(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param data 
   /// @param len 
   ///
   void part_text_input_panel_imdata_set(::efl::eina::string_view part_, const void * data_, int len_) const;

   /// @param part 
   /// @param data 
   /// @param len 
   ///
   void part_text_input_panel_imdata_get(::efl::eina::string_view part_, void * data_, int * len_) const;

   /// @param part 
   /// @param text 
   ///
   void part_text_insert(::efl::eina::string_view part_, ::efl::eina::string_view text_) const;

   /// @param part 
   /// @param pos 
   ///
   ::evas::object part_box_remove_at(::efl::eina::string_view part_, unsigned int pos_) const;

   /// @param part 
   /// @param src 
   /// @param dst 
   ///
   void part_text_cursor_copy(::efl::eina::string_view part_, Edje_Cursor src_, Edje_Cursor dst_) const;

   /// @param[out] x 
   /// @param[out] y 
   /// @param[out] w 
   /// @param[out] h 
   ///
   bool parts_extends_calc(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const;

   /// @param part 
   /// @param dx 
   /// @param dy 
   ///
   bool part_drag_value_set(::efl::eina::string_view part_, double dx_, double dy_) const;

   /// @param part 
   /// @param[out] dx 
   /// @param[out] dy 
   ///
   bool part_drag_value_get(::efl::eina::string_view part_, double* dx_, double* dy_) const;

   void calc_force() const;

   /// @param part 
   /// @param cur 
   /// @param pos 
   ///
   void part_text_cursor_pos_set(::efl::eina::string_view part_, Edje_Cursor cur_, int pos_) const;

   /// @param part 
   /// @param cur 
   ///
   int part_text_cursor_pos_get(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   int freeze() const;

   /// @param part 
   /// @param cur 
   ///
   char * part_text_cursor_content_get(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   /// @param part 
   /// @param layout 
   ///
   void part_text_input_panel_layout_set(::efl::eina::string_view part_, Edje_Input_Panel_Layout layout_) const;

   /// @param part 
   ///
   Edje_Input_Panel_Layout part_text_input_panel_layout_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param child_obj 
   /// @param col 
   /// @param row 
   /// @param colspan 
   /// @param rowspan 
   ///
   bool part_table_pack(::efl::eina::string_view part_, ::evas::object child_obj_, unsigned short col_, unsigned short row_, unsigned short colspan_, unsigned short rowspan_) const;

   /// @param part 
   /// @param lang 
   ///
   void part_text_input_panel_language_set(::efl::eina::string_view part_, Edje_Input_Panel_Lang lang_) const;

   /// @param part 
   ///
   Edje_Input_Panel_Lang part_text_input_panel_language_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param[out] cols 
   /// @param[out] rows 
   ///
   bool part_table_col_row_size_get(::efl::eina::string_view part_, int* cols_, int* rows_) const;

   /// @param part 
   ///
   ::evas::object part_external_object_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param[out] content 
   ///
   ::evas::object part_external_content_get(::efl::eina::string_view part_, const char* content_) const;

   /// @param cancel 
   ///
   bool preload(bool cancel_) const;

   /// @param part 
   /// @param enabled 
   ///
   void part_text_input_panel_enabled_set(::efl::eina::string_view part_, bool enabled_) const;

   /// @param part 
   ///
   bool part_text_input_panel_enabled_get(::efl::eina::string_view part_) const;

   /// @param part 
   ///
   void part_text_select_extend(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param child 
   /// @param pos 
   ///
   bool part_box_insert_at(::efl::eina::string_view part_, ::evas::object child_, unsigned int pos_) const;

   /// @param part 
   /// @param anchor 
   ///
   ::efl::eina::crange_list< const Evas_Textblock_Rectangle * > part_text_anchor_geometry_get(::efl::eina::string_view part_, ::efl::eina::string_view anchor_) const;

   /// @param part 
   /// @param cur 
   ///
   bool part_text_cursor_down(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   /// @param part 
   /// @param dx 
   /// @param dy 
   ///
   bool part_drag_page_set(::efl::eina::string_view part_, double dx_, double dy_) const;

   /// @param part 
   /// @param[out] dx 
   /// @param[out] dy 
   ///
   bool part_drag_page_get(::efl::eina::string_view part_, double* dx_, double* dy_) const;

   /// @param part 
   /// @param child 
   ///
   bool part_box_prepend(::efl::eina::string_view part_, ::evas::object child_) const;

   /// @param emission 
   /// @param source 
   ///
   void signal_emit(::efl::eina::string_view emission_, ::efl::eina::string_view source_) const;

   /// @param part 
   /// @param variation 
   ///
   void part_text_input_panel_layout_variation_set(::efl::eina::string_view part_, int variation_) const;

   /// @param part 
   ///
   int part_text_input_panel_layout_variation_get(::efl::eina::string_view part_) const;

   /// @param type 
   /// @param id 
   /// @param msg 
   ///
   void message_send(Edje_Message_Type type_, int id_, void * msg_) const;

   /// @param part 
   ///
   void part_text_select_none(::efl::eina::string_view part_) const;

   /// @param part 
   ///
   ::evas::object part_object_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param dw 
   /// @param dh 
   ///
   bool part_drag_size_set(::efl::eina::string_view part_, double dw_, double dh_) const;

   /// @param part 
   /// @param[out] dw 
   /// @param[out] dh 
   ///
   bool part_drag_size_get(::efl::eina::string_view part_, double* dw_, double* dh_) const;

   /// @param part 
   /// @param func 
   ///
   void * text_insert_filter_callback_del(::efl::eina::string_view part_, Edje_Text_Filter_Cb func_) const;

   /// @param part 
   ///
   Edje_Drag_Dir part_drag_dir_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param text_to_escape 
   ///
   bool part_text_unescaped_set(::efl::eina::string_view part_, ::efl::eina::string_view text_to_escape_) const;

   /// @param part 
   ///
   char * part_text_unescaped_get(::efl::eina::string_view part_) const;

   /// @param emission 
   /// @param source 
   /// @param func 
   /// @param data 
   ///
   template <typename F_func_>
   void signal_callback_add(::efl::eina::string_view emission_, ::efl::eina::string_view source_, F_func_ && func_) const;

   /// @param part 
   ///
   void part_text_select_all(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param disabled 
   ///
   void part_text_input_panel_return_key_disabled_set(::efl::eina::string_view part_, bool disabled_) const;

   /// @param part 
   ///
   bool part_text_input_panel_return_key_disabled_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param autocapital_type 
   ///
   void part_text_autocapital_type_set(::efl::eina::string_view part_, Edje_Text_Autocapital_Type autocapital_type_) const;

   /// @param part 
   ///
   Edje_Text_Autocapital_Type part_text_autocapital_type_get(::efl::eina::string_view part_) const;

   /// @param obj_swallow 
   ///
   void part_unswallow(::evas::object obj_swallow_) const;

   /// @param part 
   /// @param prediction 
   ///
   void part_text_prediction_allow_set(::efl::eina::string_view part_, bool prediction_) const;

   /// @param part 
   ///
   bool part_text_prediction_allow_get(::efl::eina::string_view part_) const;

   /// @param key 
   ///
   ::efl::eina::string_view data_get(::efl::eina::string_view key_) const;

   /// @param part 
   /// @param func 
   /// @param data 
   ///
   void text_markup_filter_callback_add(::efl::eina::string_view part_, Edje_Markup_Filter_Cb func_, void * data_) const;

   void message_signal_process() const;

   /// @param part 
   /// @param child 
   ///
   ::evas::object part_box_remove(::efl::eina::string_view part_, ::evas::object child_) const;

   int thaw() const;

   /// @param part 
   ///
   ::evas::object part_swallow_get(::efl::eina::string_view part_) const;

   /// @param part 
   ///
   void part_text_imf_context_reset(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param return_key_type 
   ///
   void part_text_input_panel_return_key_type_set(::efl::eina::string_view part_, Edje_Input_Panel_Return_Key_Type return_key_type_) const;

   /// @param part 
   ///
   Edje_Input_Panel_Return_Key_Type part_text_input_panel_return_key_type_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param col 
   /// @param row 
   ///
   ::evas::object part_table_child_get(::efl::eina::string_view part_, unsigned int col_, unsigned int row_) const;

   /// @param part 
   /// @param child 
   /// @param reference 
   ///
   bool part_box_insert_before(::efl::eina::string_view part_, ::evas::object child_, ::evas::object reference_) const;

   /// @param part 
   /// @param param 
   ///
   bool part_external_param_set(::efl::eina::string_view part_, const Edje_External_Param * param_) const;

   /// @param part 
   /// @param[out] param 
   ///
   bool part_external_param_get(::efl::eina::string_view part_, Edje_External_Param* param_) const;

   /// @param[out] minw 
   /// @param[out] minh 
   ///
   void size_min_calc(Evas_Coord* minw_, Evas_Coord* minh_) const;

   /// @param part 
   /// @param child 
   ///
   bool part_box_append(::efl::eina::string_view part_, ::evas::object child_) const;

   /// @param[out] minw 
   /// @param[out] minh 
   /// @param restrictedw 
   /// @param restrictedh 
   ///
   void size_min_restricted_calc(Evas_Coord* minw_, Evas_Coord* minh_, Evas_Coord restrictedw_, Evas_Coord restrictedh_) const;

   /// @param part 
   /// @param clear 
   ///
   bool part_box_remove_all(::efl::eina::string_view part_, bool clear_) const;

   /// @param part 
   /// @param dx 
   /// @param dy 
   ///
   bool part_drag_page(::efl::eina::string_view part_, double dx_, double dy_) const;

   /// @param part 
   /// @param text 
   ///
   bool part_text_set(::efl::eina::string_view part_, ::efl::eina::string_view text_) const;

   /// @param part 
   ///
   ::efl::eina::string_view part_text_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param ondemand 
   ///
   void part_text_input_panel_show_on_demand_set(::efl::eina::string_view part_, bool ondemand_) const;

   /// @param part 
   ///
   bool part_text_input_panel_show_on_demand_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param input_hints 
   ///
   void part_text_input_hint_set(::efl::eina::string_view part_, Edje_Input_Hints input_hints_) const;

   /// @param part 
   ///
   Edje_Input_Hints part_text_input_hint_get(::efl::eina::string_view part_) const;

   /// @param part 
   ///
   ::efl::eina::string_view part_text_selection_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param cur 
   ///
   bool part_text_cursor_is_format_get(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   /// @param text_class 
   /// @param[out] font 
   /// @param[out] size 
   ///
   bool text_class_get(::efl::eina::string_view text_class_, const char ** font_, Evas_Font_Size* size_) const;

   /// @param color_class 
   /// @param r 
   /// @param g 
   /// @param b 
   /// @param a 
   /// @param r2 
   /// @param g2 
   /// @param b2 
   /// @param a2 
   /// @param r3 
   /// @param g3 
   /// @param b3 
   /// @param a3 
   ///
   bool color_class_set(::efl::eina::string_view color_class_, int r_, int g_, int b_, int a_, int r2_, int g2_, int b2_, int a2_, int r3_, int g3_, int b3_, int a3_) const;

   /// @param color_class 
   /// @param[out] r 
   /// @param[out] g 
   /// @param[out] b 
   /// @param[out] a 
   /// @param[out] r2 
   /// @param[out] g2 
   /// @param[out] b2 
   /// @param[out] a2 
   /// @param[out] r3 
   /// @param[out] g3 
   /// @param[out] b3 
   /// @param[out] a3 
   ///
   bool color_class_get(::efl::eina::string_view color_class_, int* r_, int* g_, int* b_, int* a_, int* r2_, int* g2_, int* b2_, int* a2_, int* r3_, int* g3_, int* b3_, int* a3_) const;

   /// @param color_class 
   ///
   ::efl::eina::string_view color_class_description_get(::efl::eina::string_view color_class_) const;

   /// @param part 
   /// @param dx 
   /// @param dy 
   ///
   bool part_drag_step(::efl::eina::string_view part_, double dx_, double dy_) const;

   /// @param part 
   /// @param cur 
   ///
   bool part_text_cursor_up(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   /// @param part 
   /// @param[out] x 
   /// @param[out] y 
   /// @param[out] w 
   /// @param[out] h 
   ///
   void part_text_cursor_geometry_get(::efl::eina::string_view part_, Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const;

   /// @param part 
   ///
   ::efl::eina::crange_list< ::efl::eina::string_view > part_text_anchor_list_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param func 
   /// @param data 
   ///
   void text_insert_filter_callback_add(::efl::eina::string_view part_, Edje_Text_Filter_Cb func_, void * data_) const;

   /// @param part 
   ///
   void part_text_input_panel_show(::efl::eina::string_view part_) const;

   /// @param part 
   ///
   bool part_exists(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param func 
   ///
   void * text_markup_filter_callback_del(::efl::eina::string_view part_, Edje_Markup_Filter_Cb func_) const;

   /// @param part 
   /// @param cur 
   ///
   bool part_text_cursor_is_visible_format_get(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   /// @param part 
   /// @param text 
   ///
   void part_text_user_insert(::efl::eina::string_view part_, ::efl::eina::string_view text_) const;

   /// @param part 
   /// @param cur 
   ///
   bool part_text_cursor_prev(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   /// @param part 
   ///
   ::efl::eina::crange_list< ::efl::eina::string_view > part_text_item_list_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param obj_swallow 
   ///
   bool part_swallow(::efl::eina::string_view part_, ::evas::object obj_swallow_) const;

   bool update_hints_get() const;

   void update_hints_set(bool update_) const;

   bool mirrored_get() const;

   void mirrored_set(bool rtl_) const;

   ::efl::eina::string_view language_get() const;

   void language_set(::efl::eina::string_view language_) const;

   bool animation_get() const;

   void animation_set(bool on_) const;

   bool play_get() const;

   void play_set(bool play_) const;

   const Edje_Perspective * perspective_get() const;

   void perspective_set(Edje_Perspective * ps_) const;

   double scale_get() const;

   bool scale_set(double scale_) const;

   double base_scale_get() const;

   void text_change_cb_set(Edje_Text_Change_Cb func_, void * data_) const;

   void part_text_cursor_begin_set(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   void part_text_cursor_line_end_set(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   bool text_class_set(::efl::eina::string_view text_class_, ::efl::eina::string_view font_, Evas_Font_Size size_) const;

   bool part_text_cursor_coord_set(::efl::eina::string_view part_, Edje_Cursor cur_, Evas_Coord x_, Evas_Coord y_) const;

   void part_text_cursor_end_set(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   bool part_text_escaped_set(::efl::eina::string_view part_, ::efl::eina::string_view text_) const;

   void item_provider_set(Edje_Item_Provider_Cb func_, void * data_) const;

   void part_text_cursor_line_begin_set(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   void message_handler_set(Edje_Message_Handler_Cb func_, void * data_) const;

   void size_min_get(Evas_Coord* minw_, Evas_Coord* minh_) const;

   ::efl::eina::range_list< ::efl::eina::string_view > access_part_list_get() const;

   Edje_Load_Error load_error_get() const;

   void size_max_get(Evas_Coord* maxw_, Evas_Coord* maxh_) const;

   double transition_duration_factor_get() const;

   void transition_duration_factor_set(double scale_) const;

   template <typename F>
   ::efl::eo::signal_connection
   callback_recalc_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EDJE_OBJECT_EVENT_RECALC, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EDJE_OBJECT_EVENT_RECALC );
   }

   template <typename T>
   void
   callback_recalc_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EDJE_OBJECT_EVENT_RECALC, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EDJE_OBJECT_CLASS);
   }

   operator ::edje::object() const;
   operator ::edje::object&();
   operator ::edje::object const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::edje::object*() const { return static_cast<::edje::object*>(static_cast<D const*>(this)->p); }
      operator ::edje::object const*() const { return static_cast<::edje::object const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::edje::object const*() const { return static_cast<::edje::object const*>(static_cast<D const*>(this)->p); }
   };
   /// @endcond

private:

   /// @internal
   Eo* _concrete_eo_ptr() const
   {
      return static_cast<::efl::eo::concrete const*>(static_cast<void const*>(this))->_eo_ptr();
   }

};

}

}
/// @endcond

namespace edje {

/// @brief Class object
struct object
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(efl::file)
      , EO_CXX_INHERIT(efl::gfx::base)
      , EO_CXX_INHERIT(efl::gfx::stack)
      , EO_CXX_INHERIT(eo::base)
      , EO_CXX_INHERIT(evas::common_interface)
      , EO_CXX_INHERIT(evas::object)
      , EO_CXX_INHERIT(evas::object_smart)
      , EO_CXX_INHERIT(evas::signal_interface)
      , EO_CXX_INHERIT(evas::smart_clipped)
{
   //@{
   /**
      @brief Constructs a new edje::object object.

      Constructs a new edje::object object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      edje::object my_object(efl::eo::parent = parent_object);
      @endcode

      @see object(Eo* eo)
   */
   explicit object(::efl::eo::parent_type _p)
      : object(_ctors_call(_p))
   {}

   explicit object()
      : object(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit object(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit object(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   object(object const& other)
      : object(eo_ref(other._eo_ptr()))
   {}

   ~object() {}

   /// @param part 
   /// @param clear 
   ///
   bool part_table_clear(::efl::eina::string_view part_, bool clear_) const;

   /// @param part 
   /// @param[out] param 
   ///
   Edje_External_Param_Type part_external_param_type_get(::efl::eina::string_view part_, const char* param_) const;

   /// @param part 
   /// @param allow 
   ///
   void part_text_select_allow_set(::efl::eina::string_view part_, bool allow_) const;

   /// @param part 
   /// @param[out] val_ret 
   ///
   ::efl::eina::string_view part_state_get(::efl::eina::string_view part_, double* val_ret_) const;

   /// @param part 
   /// @param func 
   /// @param data 
   ///
   void * text_markup_filter_callback_del_full(::efl::eina::string_view part_, Edje_Markup_Filter_Cb func_, void * data_) const;

   /// @param part 
   /// @param dx 
   /// @param dy 
   ///
   bool part_drag_step_set(::efl::eina::string_view part_, double dx_, double dy_) const;

   /// @param part 
   /// @param[out] dx 
   /// @param[out] dy 
   ///
   bool part_drag_step_get(::efl::eina::string_view part_, double* dx_, double* dy_) const;

   /// @param part 
   ///
   void * part_text_imf_context_get(::efl::eina::string_view part_) const;

   /// @param part 
   ///
   void part_text_select_begin(::efl::eina::string_view part_) const;

   /// @param part 
   ///
   ::efl::eina::string_view part_text_style_user_peek(::efl::eina::string_view part_) const;

   /// @param emission 
   /// @param source 
   /// @param func 
   /// @param data 
   ///
   template <typename F_func_>
   void * signal_callback_del(::efl::eina::string_view emission_, ::efl::eina::string_view source_, F_func_ && func_) const;

   /// @param part 
   /// @param cur 
   ///
   bool part_text_cursor_next(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   /// @param part 
   /// @param style 
   ///
   void part_text_style_user_push(::efl::eina::string_view part_, ::efl::eina::string_view style_) const;

   /// @param part 
   /// @param text 
   ///
   void part_text_append(::efl::eina::string_view part_, ::efl::eina::string_view text_) const;

   /// @param part 
   /// @param[out] x 
   /// @param[out] y 
   /// @param[out] w 
   /// @param[out] h 
   ///
   bool part_geometry_get(::efl::eina::string_view part_, Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const;

   /// @param part 
   ///
   void part_text_input_panel_hide(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param item 
   /// @param[out] cx 
   /// @param[out] cy 
   /// @param[out] cw 
   /// @param[out] ch 
   ///
   bool part_text_item_geometry_get(::efl::eina::string_view part_, ::efl::eina::string_view item_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_) const;

   /// @param part 
   /// @param child_obj 
   ///
   bool part_table_unpack(::efl::eina::string_view part_, ::evas::object child_obj_) const;

   /// @param part 
   ///
   void part_text_select_abort(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param func 
   /// @param data 
   ///
   void * text_insert_filter_callback_del_full(::efl::eina::string_view part_, Edje_Text_Filter_Cb func_, void * data_) const;

   /// @param part 
   ///
   void part_text_style_user_pop(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param data 
   /// @param len 
   ///
   void part_text_input_panel_imdata_set(::efl::eina::string_view part_, const void * data_, int len_) const;

   /// @param part 
   /// @param data 
   /// @param len 
   ///
   void part_text_input_panel_imdata_get(::efl::eina::string_view part_, void * data_, int * len_) const;

   /// @param part 
   /// @param text 
   ///
   void part_text_insert(::efl::eina::string_view part_, ::efl::eina::string_view text_) const;

   /// @param part 
   /// @param pos 
   ///
   ::evas::object part_box_remove_at(::efl::eina::string_view part_, unsigned int pos_) const;

   /// @param part 
   /// @param src 
   /// @param dst 
   ///
   void part_text_cursor_copy(::efl::eina::string_view part_, Edje_Cursor src_, Edje_Cursor dst_) const;

   /// @param[out] x 
   /// @param[out] y 
   /// @param[out] w 
   /// @param[out] h 
   ///
   bool parts_extends_calc(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const;

   /// @param part 
   /// @param dx 
   /// @param dy 
   ///
   bool part_drag_value_set(::efl::eina::string_view part_, double dx_, double dy_) const;

   /// @param part 
   /// @param[out] dx 
   /// @param[out] dy 
   ///
   bool part_drag_value_get(::efl::eina::string_view part_, double* dx_, double* dy_) const;

   void calc_force() const;

   /// @param part 
   /// @param cur 
   /// @param pos 
   ///
   void part_text_cursor_pos_set(::efl::eina::string_view part_, Edje_Cursor cur_, int pos_) const;

   /// @param part 
   /// @param cur 
   ///
   int part_text_cursor_pos_get(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   int freeze() const;

   /// @param part 
   /// @param cur 
   ///
   char * part_text_cursor_content_get(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   /// @param part 
   /// @param layout 
   ///
   void part_text_input_panel_layout_set(::efl::eina::string_view part_, Edje_Input_Panel_Layout layout_) const;

   /// @param part 
   ///
   Edje_Input_Panel_Layout part_text_input_panel_layout_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param child_obj 
   /// @param col 
   /// @param row 
   /// @param colspan 
   /// @param rowspan 
   ///
   bool part_table_pack(::efl::eina::string_view part_, ::evas::object child_obj_, unsigned short col_, unsigned short row_, unsigned short colspan_, unsigned short rowspan_) const;

   /// @param part 
   /// @param lang 
   ///
   void part_text_input_panel_language_set(::efl::eina::string_view part_, Edje_Input_Panel_Lang lang_) const;

   /// @param part 
   ///
   Edje_Input_Panel_Lang part_text_input_panel_language_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param[out] cols 
   /// @param[out] rows 
   ///
   bool part_table_col_row_size_get(::efl::eina::string_view part_, int* cols_, int* rows_) const;

   /// @param part 
   ///
   ::evas::object part_external_object_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param[out] content 
   ///
   ::evas::object part_external_content_get(::efl::eina::string_view part_, const char* content_) const;

   /// @param cancel 
   ///
   bool preload(bool cancel_) const;

   /// @param part 
   /// @param enabled 
   ///
   void part_text_input_panel_enabled_set(::efl::eina::string_view part_, bool enabled_) const;

   /// @param part 
   ///
   bool part_text_input_panel_enabled_get(::efl::eina::string_view part_) const;

   /// @param part 
   ///
   void part_text_select_extend(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param child 
   /// @param pos 
   ///
   bool part_box_insert_at(::efl::eina::string_view part_, ::evas::object child_, unsigned int pos_) const;

   /// @param part 
   /// @param anchor 
   ///
   ::efl::eina::crange_list< const Evas_Textblock_Rectangle * > part_text_anchor_geometry_get(::efl::eina::string_view part_, ::efl::eina::string_view anchor_) const;

   /// @param part 
   /// @param cur 
   ///
   bool part_text_cursor_down(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   /// @param part 
   /// @param dx 
   /// @param dy 
   ///
   bool part_drag_page_set(::efl::eina::string_view part_, double dx_, double dy_) const;

   /// @param part 
   /// @param[out] dx 
   /// @param[out] dy 
   ///
   bool part_drag_page_get(::efl::eina::string_view part_, double* dx_, double* dy_) const;

   /// @param part 
   /// @param child 
   ///
   bool part_box_prepend(::efl::eina::string_view part_, ::evas::object child_) const;

   /// @param emission 
   /// @param source 
   ///
   void signal_emit(::efl::eina::string_view emission_, ::efl::eina::string_view source_) const;

   /// @param part 
   /// @param variation 
   ///
   void part_text_input_panel_layout_variation_set(::efl::eina::string_view part_, int variation_) const;

   /// @param part 
   ///
   int part_text_input_panel_layout_variation_get(::efl::eina::string_view part_) const;

   /// @param type 
   /// @param id 
   /// @param msg 
   ///
   void message_send(Edje_Message_Type type_, int id_, void * msg_) const;

   /// @param part 
   ///
   void part_text_select_none(::efl::eina::string_view part_) const;

   /// @param part 
   ///
   ::evas::object part_object_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param dw 
   /// @param dh 
   ///
   bool part_drag_size_set(::efl::eina::string_view part_, double dw_, double dh_) const;

   /// @param part 
   /// @param[out] dw 
   /// @param[out] dh 
   ///
   bool part_drag_size_get(::efl::eina::string_view part_, double* dw_, double* dh_) const;

   /// @param part 
   /// @param func 
   ///
   void * text_insert_filter_callback_del(::efl::eina::string_view part_, Edje_Text_Filter_Cb func_) const;

   /// @param part 
   ///
   Edje_Drag_Dir part_drag_dir_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param text_to_escape 
   ///
   bool part_text_unescaped_set(::efl::eina::string_view part_, ::efl::eina::string_view text_to_escape_) const;

   /// @param part 
   ///
   char * part_text_unescaped_get(::efl::eina::string_view part_) const;

   /// @param emission 
   /// @param source 
   /// @param func 
   /// @param data 
   ///
   template <typename F_func_>
   void signal_callback_add(::efl::eina::string_view emission_, ::efl::eina::string_view source_, F_func_ && func_) const;

   /// @param part 
   ///
   void part_text_select_all(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param disabled 
   ///
   void part_text_input_panel_return_key_disabled_set(::efl::eina::string_view part_, bool disabled_) const;

   /// @param part 
   ///
   bool part_text_input_panel_return_key_disabled_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param autocapital_type 
   ///
   void part_text_autocapital_type_set(::efl::eina::string_view part_, Edje_Text_Autocapital_Type autocapital_type_) const;

   /// @param part 
   ///
   Edje_Text_Autocapital_Type part_text_autocapital_type_get(::efl::eina::string_view part_) const;

   /// @param obj_swallow 
   ///
   void part_unswallow(::evas::object obj_swallow_) const;

   /// @param part 
   /// @param prediction 
   ///
   void part_text_prediction_allow_set(::efl::eina::string_view part_, bool prediction_) const;

   /// @param part 
   ///
   bool part_text_prediction_allow_get(::efl::eina::string_view part_) const;

   /// @param key 
   ///
   ::efl::eina::string_view data_get(::efl::eina::string_view key_) const;

   /// @param part 
   /// @param func 
   /// @param data 
   ///
   void text_markup_filter_callback_add(::efl::eina::string_view part_, Edje_Markup_Filter_Cb func_, void * data_) const;

   void message_signal_process() const;

   /// @param part 
   /// @param child 
   ///
   ::evas::object part_box_remove(::efl::eina::string_view part_, ::evas::object child_) const;

   int thaw() const;

   /// @param part 
   ///
   ::evas::object part_swallow_get(::efl::eina::string_view part_) const;

   /// @param part 
   ///
   void part_text_imf_context_reset(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param return_key_type 
   ///
   void part_text_input_panel_return_key_type_set(::efl::eina::string_view part_, Edje_Input_Panel_Return_Key_Type return_key_type_) const;

   /// @param part 
   ///
   Edje_Input_Panel_Return_Key_Type part_text_input_panel_return_key_type_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param col 
   /// @param row 
   ///
   ::evas::object part_table_child_get(::efl::eina::string_view part_, unsigned int col_, unsigned int row_) const;

   /// @param part 
   /// @param child 
   /// @param reference 
   ///
   bool part_box_insert_before(::efl::eina::string_view part_, ::evas::object child_, ::evas::object reference_) const;

   /// @param part 
   /// @param param 
   ///
   bool part_external_param_set(::efl::eina::string_view part_, const Edje_External_Param * param_) const;

   /// @param part 
   /// @param[out] param 
   ///
   bool part_external_param_get(::efl::eina::string_view part_, Edje_External_Param* param_) const;

   /// @param[out] minw 
   /// @param[out] minh 
   ///
   void size_min_calc(Evas_Coord* minw_, Evas_Coord* minh_) const;

   /// @param part 
   /// @param child 
   ///
   bool part_box_append(::efl::eina::string_view part_, ::evas::object child_) const;

   /// @param[out] minw 
   /// @param[out] minh 
   /// @param restrictedw 
   /// @param restrictedh 
   ///
   void size_min_restricted_calc(Evas_Coord* minw_, Evas_Coord* minh_, Evas_Coord restrictedw_, Evas_Coord restrictedh_) const;

   /// @param part 
   /// @param clear 
   ///
   bool part_box_remove_all(::efl::eina::string_view part_, bool clear_) const;

   /// @param part 
   /// @param dx 
   /// @param dy 
   ///
   bool part_drag_page(::efl::eina::string_view part_, double dx_, double dy_) const;

   /// @param part 
   /// @param text 
   ///
   bool part_text_set(::efl::eina::string_view part_, ::efl::eina::string_view text_) const;

   /// @param part 
   ///
   ::efl::eina::string_view part_text_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param ondemand 
   ///
   void part_text_input_panel_show_on_demand_set(::efl::eina::string_view part_, bool ondemand_) const;

   /// @param part 
   ///
   bool part_text_input_panel_show_on_demand_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param input_hints 
   ///
   void part_text_input_hint_set(::efl::eina::string_view part_, Edje_Input_Hints input_hints_) const;

   /// @param part 
   ///
   Edje_Input_Hints part_text_input_hint_get(::efl::eina::string_view part_) const;

   /// @param part 
   ///
   ::efl::eina::string_view part_text_selection_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param cur 
   ///
   bool part_text_cursor_is_format_get(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   /// @param text_class 
   /// @param[out] font 
   /// @param[out] size 
   ///
   bool text_class_get(::efl::eina::string_view text_class_, const char ** font_, Evas_Font_Size* size_) const;

   /// @param color_class 
   /// @param r 
   /// @param g 
   /// @param b 
   /// @param a 
   /// @param r2 
   /// @param g2 
   /// @param b2 
   /// @param a2 
   /// @param r3 
   /// @param g3 
   /// @param b3 
   /// @param a3 
   ///
   bool color_class_set(::efl::eina::string_view color_class_, int r_, int g_, int b_, int a_, int r2_, int g2_, int b2_, int a2_, int r3_, int g3_, int b3_, int a3_) const;

   /// @param color_class 
   /// @param[out] r 
   /// @param[out] g 
   /// @param[out] b 
   /// @param[out] a 
   /// @param[out] r2 
   /// @param[out] g2 
   /// @param[out] b2 
   /// @param[out] a2 
   /// @param[out] r3 
   /// @param[out] g3 
   /// @param[out] b3 
   /// @param[out] a3 
   ///
   bool color_class_get(::efl::eina::string_view color_class_, int* r_, int* g_, int* b_, int* a_, int* r2_, int* g2_, int* b2_, int* a2_, int* r3_, int* g3_, int* b3_, int* a3_) const;

   /// @param color_class 
   ///
   ::efl::eina::string_view color_class_description_get(::efl::eina::string_view color_class_) const;

   /// @param part 
   /// @param dx 
   /// @param dy 
   ///
   bool part_drag_step(::efl::eina::string_view part_, double dx_, double dy_) const;

   /// @param part 
   /// @param cur 
   ///
   bool part_text_cursor_up(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   /// @param part 
   /// @param[out] x 
   /// @param[out] y 
   /// @param[out] w 
   /// @param[out] h 
   ///
   void part_text_cursor_geometry_get(::efl::eina::string_view part_, Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const;

   /// @param part 
   ///
   ::efl::eina::crange_list< ::efl::eina::string_view > part_text_anchor_list_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param func 
   /// @param data 
   ///
   void text_insert_filter_callback_add(::efl::eina::string_view part_, Edje_Text_Filter_Cb func_, void * data_) const;

   /// @param part 
   ///
   void part_text_input_panel_show(::efl::eina::string_view part_) const;

   /// @param part 
   ///
   bool part_exists(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param func 
   ///
   void * text_markup_filter_callback_del(::efl::eina::string_view part_, Edje_Markup_Filter_Cb func_) const;

   /// @param part 
   /// @param cur 
   ///
   bool part_text_cursor_is_visible_format_get(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   /// @param part 
   /// @param text 
   ///
   void part_text_user_insert(::efl::eina::string_view part_, ::efl::eina::string_view text_) const;

   /// @param part 
   /// @param cur 
   ///
   bool part_text_cursor_prev(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   /// @param part 
   ///
   ::efl::eina::crange_list< ::efl::eina::string_view > part_text_item_list_get(::efl::eina::string_view part_) const;

   /// @param part 
   /// @param obj_swallow 
   ///
   bool part_swallow(::efl::eina::string_view part_, ::evas::object obj_swallow_) const;

   bool update_hints_get() const;

   void update_hints_set(bool update_) const;

   bool mirrored_get() const;

   void mirrored_set(bool rtl_) const;

   ::efl::eina::string_view language_get() const;

   void language_set(::efl::eina::string_view language_) const;

   bool animation_get() const;

   void animation_set(bool on_) const;

   bool play_get() const;

   void play_set(bool play_) const;

   const Edje_Perspective * perspective_get() const;

   void perspective_set(Edje_Perspective * ps_) const;

   double scale_get() const;

   bool scale_set(double scale_) const;

   double base_scale_get() const;

   void text_change_cb_set(Edje_Text_Change_Cb func_, void * data_) const;

   void part_text_cursor_begin_set(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   void part_text_cursor_line_end_set(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   bool text_class_set(::efl::eina::string_view text_class_, ::efl::eina::string_view font_, Evas_Font_Size size_) const;

   bool part_text_cursor_coord_set(::efl::eina::string_view part_, Edje_Cursor cur_, Evas_Coord x_, Evas_Coord y_) const;

   void part_text_cursor_end_set(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   bool part_text_escaped_set(::efl::eina::string_view part_, ::efl::eina::string_view text_) const;

   void item_provider_set(Edje_Item_Provider_Cb func_, void * data_) const;

   void part_text_cursor_line_begin_set(::efl::eina::string_view part_, Edje_Cursor cur_) const;

   void message_handler_set(Edje_Message_Handler_Cb func_, void * data_) const;

   void size_min_get(Evas_Coord* minw_, Evas_Coord* minh_) const;

   ::efl::eina::range_list< ::efl::eina::string_view > access_part_list_get() const;

   Edje_Load_Error load_error_get() const;

   void size_max_get(Evas_Coord* maxw_, Evas_Coord* maxh_) const;

   double transition_duration_factor_get() const;

   void transition_duration_factor_set(double scale_) const;

   template <typename F>
   ::efl::eo::signal_connection
   callback_async_error_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EFL_FILE_EVENT_ASYNC_ERROR, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EFL_FILE_EVENT_ASYNC_ERROR );
   }

   template <typename T>
   void
   callback_async_error_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_FILE_EVENT_ASYNC_ERROR, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_async_opened_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EFL_FILE_EVENT_ASYNC_OPENED, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EFL_FILE_EVENT_ASYNC_OPENED );
   }

   template <typename T>
   void
   callback_async_opened_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_FILE_EVENT_ASYNC_OPENED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_callback_add_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EO_BASE_EVENT_CALLBACK_ADD, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EO_BASE_EVENT_CALLBACK_ADD );
   }

   template <typename T>
   void
   callback_callback_add_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EO_BASE_EVENT_CALLBACK_ADD, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_callback_del_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EO_BASE_EVENT_CALLBACK_DEL, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EO_BASE_EVENT_CALLBACK_DEL );
   }

   template <typename T>
   void
   callback_callback_del_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EO_BASE_EVENT_CALLBACK_DEL, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_changed_size_hints_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_CHANGED_SIZE_HINTS, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_CHANGED_SIZE_HINTS );
   }

   template <typename T>
   void
   callback_changed_size_hints_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_CHANGED_SIZE_HINTS, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_focus_in_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_FOCUS_IN, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_FOCUS_IN );
   }

   template <typename T>
   void
   callback_focus_in_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_FOCUS_IN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_focus_out_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_FOCUS_OUT, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_FOCUS_OUT );
   }

   template <typename T>
   void
   callback_focus_out_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_FOCUS_OUT, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_free_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_FREE, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_FREE );
   }

   template <typename T>
   void
   callback_free_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_FREE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_hide_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_HIDE, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_HIDE );
   }

   template <typename T>
   void
   callback_hide_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_HIDE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_hold_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_HOLD, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_HOLD );
   }

   template <typename T>
   void
   callback_hold_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_HOLD, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_image_preloaded_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_IMAGE_PRELOADED, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_IMAGE_PRELOADED );
   }

   template <typename T>
   void
   callback_image_preloaded_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_IMAGE_PRELOADED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_image_resize_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_IMAGE_RESIZE, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_IMAGE_RESIZE );
   }

   template <typename T>
   void
   callback_image_resize_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_IMAGE_RESIZE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_image_unloaded_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_IMAGE_UNLOADED, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_IMAGE_UNLOADED );
   }

   template <typename T>
   void
   callback_image_unloaded_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_IMAGE_UNLOADED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_key_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_KEY_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_KEY_DOWN );
   }

   template <typename T>
   void
   callback_key_down_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_KEY_DOWN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_key_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_KEY_UP, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_KEY_UP );
   }

   template <typename T>
   void
   callback_key_up_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_KEY_UP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_DOWN );
   }

   template <typename T>
   void
   callback_mouse_down_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_DOWN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_in_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_IN, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_IN );
   }

   template <typename T>
   void
   callback_mouse_in_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_IN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_move_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_MOVE, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_MOVE );
   }

   template <typename T>
   void
   callback_mouse_move_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_MOVE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_out_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_OUT, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_OUT );
   }

   template <typename T>
   void
   callback_mouse_out_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_OUT, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_UP, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_UP );
   }

   template <typename T>
   void
   callback_mouse_up_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_UP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_wheel_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_WHEEL, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_WHEEL );
   }

   template <typename T>
   void
   callback_mouse_wheel_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_WHEEL, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_move_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOVE, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_MOVE );
   }

   template <typename T>
   void
   callback_move_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOVE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_multi_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MULTI_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_MULTI_DOWN );
   }

   template <typename T>
   void
   callback_multi_down_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MULTI_DOWN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_multi_move_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MULTI_MOVE, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_MULTI_MOVE );
   }

   template <typename T>
   void
   callback_multi_move_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MULTI_MOVE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_multi_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MULTI_UP, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_MULTI_UP );
   }

   template <typename T>
   void
   callback_multi_up_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MULTI_UP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_recalc_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EDJE_OBJECT_EVENT_RECALC, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EDJE_OBJECT_EVENT_RECALC );
   }

   template <typename T>
   void
   callback_recalc_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EDJE_OBJECT_EVENT_RECALC, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_resize_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_RESIZE, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_RESIZE );
   }

   template <typename T>
   void
   callback_resize_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_RESIZE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_restack_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_RESTACK, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_RESTACK );
   }

   template <typename T>
   void
   callback_restack_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_RESTACK, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_show_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_SHOW, priority_,
            &::efl::eo::_detail::event_callback<::edje::object, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::edje::object, function_type>,
         EVAS_OBJECT_EVENT_SHOW );
   }

   template <typename T>
   void
   callback_show_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_SHOW, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EDJE_OBJECT_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::edje::object::address_of<address_of>
      , ::eo_cxx::efl::file::address_of<address_of>
      , ::eo_cxx::efl::gfx::base::address_of<address_of>
      , ::eo_cxx::efl::gfx::stack::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::eo_cxx::evas::common_interface::address_of<address_of>
      , ::eo_cxx::evas::object::address_of<address_of>
      , ::eo_cxx::evas::object_smart::address_of<address_of>
      , ::eo_cxx::evas::signal_interface::address_of<address_of>
      , ::eo_cxx::evas::smart_clipped::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::edje::object* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::edje::object::address_const_of<address_const_of>
      , ::eo_cxx::efl::file::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::base::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::stack::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::eo_cxx::evas::common_interface::address_const_of<address_const_of>
      , ::eo_cxx::evas::object::address_const_of<address_const_of>
      , ::eo_cxx::evas::object_smart::address_const_of<address_const_of>
      , ::eo_cxx::evas::signal_interface::address_const_of<address_const_of>
      , ::eo_cxx::evas::smart_clipped::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::edje::object const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EDJE_OBJECT_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::edje::object) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::edje::object>::value, "");

}


#include "edje_object.eo.impl.hh"

#endif // EFL_GENERATED_EDJE_OBJECT_HH


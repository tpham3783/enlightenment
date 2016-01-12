#ifndef EFL_GENERATED_EVAS_CANVAS_HH
#define EFL_GENERATED_EVAS_CANVAS_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_canvas.eo.h"
}

#include "eo_base.eo.hh"
#include "evas_common_interface.eo.hh"
#include <evas_object.eo.hh>
#include <string>

namespace evas {

struct canvas;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas {

struct canvas
{
   /// @param stop 
   /// @param x 
   /// @param y 
   ///
   ::efl::eina::range_list< ::evas::object > tree_objects_at_xy_get(::evas::object stop_, int x_, int y_) const;

   /// @param direction 
   /// @param z 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_mouse_wheel(int direction_, int z_, unsigned int timestamp_, const void * data_) const;

   /// @param keyname 
   ///
   void key_lock_on(::efl::eina::string_view keyname_) const;

   /// @param keyname 
   /// @param key 
   /// @param string 
   /// @param compose 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_key_down(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_) const;

   /// @param keyname 
   ///
   Evas_Modifier_Mask key_modifier_mask_get(::efl::eina::string_view keyname_) const;

   /// @param keyname 
   ///
   void key_modifier_add(::efl::eina::string_view keyname_) const;

   /// @param keyname 
   ///
   void key_modifier_off(::efl::eina::string_view keyname_) const;

   /// @param hold 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_hold(int hold_, unsigned int timestamp_, const void * data_) const;

   /// @param x 
   /// @param y 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_mouse_move(int x_, int y_, unsigned int timestamp_, const void * data_) const;

   /// @param keyname 
   /// @param key 
   /// @param string 
   /// @param compose 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_key_up(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_) const;

   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_mouse_out(unsigned int timestamp_, const void * data_) const;

   /// @param d 
   /// @param x 
   /// @param y 
   /// @param rad 
   /// @param radx 
   /// @param rady 
   /// @param pres 
   /// @param ang 
   /// @param fx 
   /// @param fy 
   /// @param timestamp 
   /// @param data 
   ///
   void event_input_multi_move(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, unsigned int timestamp_, const void * data_) const;

   /// @param x 
   /// @param y 
   /// @param include_pass_events_objects 
   /// @param include_hidden_objects 
   ///
   ::efl::eina::range_list< ::evas::object > objects_at_xy_get(Evas_Coord x_, Evas_Coord y_, bool include_pass_events_objects_, bool include_hidden_objects_) const;

   /// @param d 
   /// @param x 
   /// @param y 
   /// @param rad 
   /// @param radx 
   /// @param rady 
   /// @param pres 
   /// @param ang 
   /// @param fx 
   /// @param fy 
   /// @param flags 
   /// @param timestamp 
   /// @param data 
   ///
   void event_input_multi_up(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const;

   /// @param d 
   /// @param x 
   /// @param y 
   /// @param rad 
   /// @param radx 
   /// @param rady 
   /// @param pres 
   /// @param ang 
   /// @param fx 
   /// @param fy 
   /// @param flags 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_multi_down(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const;

   bool render_async() const;

   bool render2() const;

   ::efl::eina::list< Eina_Rectangle * > render2_updates() const;

   void focus_out() const;

   /// @param x 
   /// @param y 
   /// @param timestamp 
   /// @param data 
   ///
   void event_input_mouse_move(int x_, int y_, unsigned int timestamp_, const void * data_) const;

   void norender() const;

   unsigned int touch_point_list_count() const;

   /// @param d 
   /// @param x 
   /// @param y 
   /// @param rad 
   /// @param radx 
   /// @param rady 
   /// @param pres 
   /// @param ang 
   /// @param fx 
   /// @param fy 
   /// @param flags 
   /// @param timestamp 
   /// @param data 
   ///
   void event_input_multi_down(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const;

   void nochange_pop() const;

   /// @param keyname 
   ///
   void key_lock_off(::efl::eina::string_view keyname_) const;

   void nochange_push() const;

   void font_cache_flush() const;

   /// @param hinting 
   ///
   bool font_hinting_can_hint(Evas_Font_Hinting_Flags hinting_) const;

   /// @param x 
   /// @param y 
   /// @param include_pass_events_objects 
   /// @param include_hidden_objects 
   ///
   ::evas::object object_top_at_xy_get(Evas_Coord x_, Evas_Coord y_, bool include_pass_events_objects_, bool include_hidden_objects_) const;

   /// @param keyname 
   ///
   void key_modifier_on(::efl::eina::string_view keyname_) const;

   /// @param b 
   /// @param flags 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_mouse_up(int b_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const;

   /// @param b 
   /// @param flags 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_mouse_down(int b_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const;

   /// @param event_copy 
   /// @param event_type 
   ///
   void event_refeed_event(void * event_copy_, Evas_Callback_Type event_type_) const;

   ::efl::eina::range_list< ::efl::eina::string_view > font_available_list() const;

   /// @param x 
   /// @param y 
   /// @param w 
   /// @param h 
   /// @param include_pass_events_objects 
   /// @param include_hidden_objects 
   ///
   ::efl::eina::range_list< ::evas::object > objects_in_rectangle_get(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_, bool include_pass_events_objects_, bool include_hidden_objects_) const;

   /// @param name 
   ///
   ::evas::object object_name_find(::efl::eina::string_view name_) const;

   /// @param path 
   ///
   void font_path_append(::efl::eina::string_view path_) const;

   /// @param n 
   ///
   int touch_point_list_nth_id_get(unsigned int n_) const;

   void font_path_clear() const;

   void smart_objects_calculate() const;

   /// @param n 
   /// @param[out] x 
   /// @param[out] y 
   ///
   void touch_point_list_nth_xy_get(unsigned int n_, Evas_Coord* x_, Evas_Coord* y_) const;

   /// @param keyname 
   ///
   void key_lock_del(::efl::eina::string_view keyname_) const;

   /// @param x 
   /// @param y 
   /// @param w 
   /// @param h 
   ///
   void damage_rectangle_add(int x_, int y_, int w_, int h_) const;

   void sync() const;

   ::efl::eina::crange_list< ::efl::eina::string_view > font_path_list() const;

   void image_cache_reload() const;

   /// @param x 
   ///
   int coord_world_x_to_screen(Evas_Coord x_) const;

   /// @param d 
   /// @param x 
   /// @param y 
   /// @param rad 
   /// @param radx 
   /// @param rady 
   /// @param pres 
   /// @param ang 
   /// @param fx 
   /// @param fy 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_multi_move(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, unsigned int timestamp_, const void * data_) const;

   ::efl::eina::list< Eina_Rectangle * > render_updates() const;

   void image_cache_flush() const;

   /// @param y 
   ///
   Evas_Coord coord_screen_y_to_world(int y_) const;

   /// @param keyname 
   ///
   void key_modifier_del(::efl::eina::string_view keyname_) const;

   /// @param n 
   ///
   Evas_Touch_Point_State touch_point_list_nth_state_get(unsigned int n_) const;

   void focus_in() const;

   /// @param x 
   /// @param y 
   /// @param w 
   /// @param h 
   ///
   void obscured_rectangle_add(int x_, int y_, int w_, int h_) const;

   void render_dump() const;

   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_mouse_in(unsigned int timestamp_, const void * data_) const;

   /// @param x 
   /// @param y 
   /// @param w 
   /// @param h 
   /// @param include_pass_events_objects 
   /// @param include_hidden_objects 
   ///
   ::evas::object object_top_in_rectangle_get(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_, bool include_pass_events_objects_, bool include_hidden_objects_) const;

   void render() const;

   /// @param d 
   /// @param x 
   /// @param y 
   /// @param rad 
   /// @param radx 
   /// @param rady 
   /// @param pres 
   /// @param ang 
   /// @param fx 
   /// @param fy 
   /// @param flags 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_multi_up(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const;

   /// @param path 
   ///
   void font_path_prepend(::efl::eina::string_view path_) const;

   void obscured_clear() const;

   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_mouse_cancel(unsigned int timestamp_, const void * data_) const;

   /// @param x 
   ///
   Evas_Coord coord_screen_x_to_world(int x_) const;

   /// @param keyname 
   ///
   void key_lock_add(::efl::eina::string_view keyname_) const;

   void render_idle_flush() const;

   /// @param y 
   ///
   int coord_world_y_to_screen(Evas_Coord y_) const;

   /// @param keyname 
   /// @param key 
   /// @param string 
   /// @param compose 
   /// @param timestamp 
   /// @param data 
   /// @param keycode 
   ///
   void event_feed_key_down_with_keycode(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_, unsigned int keycode_) const;

   /// @param keyname 
   /// @param key 
   /// @param string 
   /// @param compose 
   /// @param timestamp 
   /// @param data 
   /// @param keycode 
   ///
   void event_feed_key_up_with_keycode(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_, unsigned int keycode_) const;

   /// @param timestamp 
   /// @param device 
   /// @param toolid 
   /// @param naxes 
   /// @param axis 
   /// @param data 
   ///
   void event_feed_axis_update(unsigned int timestamp_, int device_, int toolid_, int naxes_, const Evas_Axis * axis_, const void * data_) const;

   void output_framespace_get(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const;

   void output_framespace_set(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_) const;

   void output_viewport_get(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const;

   void output_viewport_set(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_) const;

   int image_cache_get() const;

   void image_cache_set(int size_) const;

   Evas_Event_Flags event_default_flags_get() const;

   void event_default_flags_set(Evas_Event_Flags flags_) const;

   int output_method_get() const;

   void output_method_set(int render_method_) const;

   int font_cache_get() const;

   void font_cache_set(int size_) const;

   void output_size_get(int* w_, int* h_) const;

   void output_size_set(int w_, int h_) const;

   void * data_attach_get() const;

   void data_attach_set(void * data_) const;

   Evas_Font_Hinting_Flags font_hinting_get() const;

   void font_hinting_set(Evas_Font_Hinting_Flags hinting_) const;

   Evas_Engine_Info * engine_info_get() const;

   bool engine_info_set(Evas_Engine_Info * info_) const;

   ::evas::object focus_get() const;

   ::evas::object object_top_get() const;

   const Evas_Lock * key_lock_get() const;

   void pointer_canvas_xy_get(Evas_Coord* x_, Evas_Coord* y_) const;

   int event_down_count_get() const;

   int smart_objects_calculate_count_get() const;

   bool focus_state_get() const;

   bool changed_get() const;

   void pointer_output_xy_get(int* x_, int* y_) const;

   bool pointer_inside_get() const;

   bool image_max_size_get(int* maxw_, int* maxh_) const;

   ::evas::object object_bottom_get() const;

   const Evas_Modifier * key_modifier_get() const;

   int pointer_button_down_mask_get() const;



   static Eo_Class const* _eo_class()
   {
      return(EVAS_CANVAS_CLASS);
   }

   operator ::evas::canvas() const;
   operator ::evas::canvas&();
   operator ::evas::canvas const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::canvas*() const { return static_cast<::evas::canvas*>(static_cast<D const*>(this)->p); }
      operator ::evas::canvas const*() const { return static_cast<::evas::canvas const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::canvas const*() const { return static_cast<::evas::canvas const*>(static_cast<D const*>(this)->p); }
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

namespace evas {

/// @brief Class canvas
struct canvas
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(eo::base)
      , EO_CXX_INHERIT(evas::common_interface)
{
   //@{
   /**
      @brief Constructs a new evas::canvas object.

      Constructs a new evas::canvas object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::canvas my_canvas(efl::eo::parent = parent_object);
      @endcode

      @see canvas(Eo* eo)
   */
   explicit canvas(::efl::eo::parent_type _p)
      : canvas(_ctors_call(_p))
   {}

   explicit canvas()
      : canvas(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit canvas(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit canvas(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   canvas(canvas const& other)
      : canvas(eo_ref(other._eo_ptr()))
   {}

   ~canvas() {}

   /// @param stop 
   /// @param x 
   /// @param y 
   ///
   ::efl::eina::range_list< ::evas::object > tree_objects_at_xy_get(::evas::object stop_, int x_, int y_) const;

   /// @param direction 
   /// @param z 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_mouse_wheel(int direction_, int z_, unsigned int timestamp_, const void * data_) const;

   /// @param keyname 
   ///
   void key_lock_on(::efl::eina::string_view keyname_) const;

   /// @param keyname 
   /// @param key 
   /// @param string 
   /// @param compose 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_key_down(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_) const;

   /// @param keyname 
   ///
   Evas_Modifier_Mask key_modifier_mask_get(::efl::eina::string_view keyname_) const;

   /// @param keyname 
   ///
   void key_modifier_add(::efl::eina::string_view keyname_) const;

   /// @param keyname 
   ///
   void key_modifier_off(::efl::eina::string_view keyname_) const;

   /// @param hold 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_hold(int hold_, unsigned int timestamp_, const void * data_) const;

   /// @param x 
   /// @param y 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_mouse_move(int x_, int y_, unsigned int timestamp_, const void * data_) const;

   /// @param keyname 
   /// @param key 
   /// @param string 
   /// @param compose 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_key_up(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_) const;

   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_mouse_out(unsigned int timestamp_, const void * data_) const;

   /// @param d 
   /// @param x 
   /// @param y 
   /// @param rad 
   /// @param radx 
   /// @param rady 
   /// @param pres 
   /// @param ang 
   /// @param fx 
   /// @param fy 
   /// @param timestamp 
   /// @param data 
   ///
   void event_input_multi_move(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, unsigned int timestamp_, const void * data_) const;

   /// @param x 
   /// @param y 
   /// @param include_pass_events_objects 
   /// @param include_hidden_objects 
   ///
   ::efl::eina::range_list< ::evas::object > objects_at_xy_get(Evas_Coord x_, Evas_Coord y_, bool include_pass_events_objects_, bool include_hidden_objects_) const;

   /// @param d 
   /// @param x 
   /// @param y 
   /// @param rad 
   /// @param radx 
   /// @param rady 
   /// @param pres 
   /// @param ang 
   /// @param fx 
   /// @param fy 
   /// @param flags 
   /// @param timestamp 
   /// @param data 
   ///
   void event_input_multi_up(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const;

   /// @param d 
   /// @param x 
   /// @param y 
   /// @param rad 
   /// @param radx 
   /// @param rady 
   /// @param pres 
   /// @param ang 
   /// @param fx 
   /// @param fy 
   /// @param flags 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_multi_down(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const;

   bool render_async() const;

   bool render2() const;

   ::efl::eina::list< Eina_Rectangle * > render2_updates() const;

   void focus_out() const;

   /// @param x 
   /// @param y 
   /// @param timestamp 
   /// @param data 
   ///
   void event_input_mouse_move(int x_, int y_, unsigned int timestamp_, const void * data_) const;

   void norender() const;

   unsigned int touch_point_list_count() const;

   /// @param d 
   /// @param x 
   /// @param y 
   /// @param rad 
   /// @param radx 
   /// @param rady 
   /// @param pres 
   /// @param ang 
   /// @param fx 
   /// @param fy 
   /// @param flags 
   /// @param timestamp 
   /// @param data 
   ///
   void event_input_multi_down(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const;

   void nochange_pop() const;

   /// @param keyname 
   ///
   void key_lock_off(::efl::eina::string_view keyname_) const;

   void nochange_push() const;

   void font_cache_flush() const;

   /// @param hinting 
   ///
   bool font_hinting_can_hint(Evas_Font_Hinting_Flags hinting_) const;

   /// @param x 
   /// @param y 
   /// @param include_pass_events_objects 
   /// @param include_hidden_objects 
   ///
   ::evas::object object_top_at_xy_get(Evas_Coord x_, Evas_Coord y_, bool include_pass_events_objects_, bool include_hidden_objects_) const;

   /// @param keyname 
   ///
   void key_modifier_on(::efl::eina::string_view keyname_) const;

   /// @param b 
   /// @param flags 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_mouse_up(int b_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const;

   /// @param b 
   /// @param flags 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_mouse_down(int b_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const;

   /// @param event_copy 
   /// @param event_type 
   ///
   void event_refeed_event(void * event_copy_, Evas_Callback_Type event_type_) const;

   ::efl::eina::range_list< ::efl::eina::string_view > font_available_list() const;

   /// @param x 
   /// @param y 
   /// @param w 
   /// @param h 
   /// @param include_pass_events_objects 
   /// @param include_hidden_objects 
   ///
   ::efl::eina::range_list< ::evas::object > objects_in_rectangle_get(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_, bool include_pass_events_objects_, bool include_hidden_objects_) const;

   /// @param name 
   ///
   ::evas::object object_name_find(::efl::eina::string_view name_) const;

   /// @param path 
   ///
   void font_path_append(::efl::eina::string_view path_) const;

   /// @param n 
   ///
   int touch_point_list_nth_id_get(unsigned int n_) const;

   void font_path_clear() const;

   void smart_objects_calculate() const;

   /// @param n 
   /// @param[out] x 
   /// @param[out] y 
   ///
   void touch_point_list_nth_xy_get(unsigned int n_, Evas_Coord* x_, Evas_Coord* y_) const;

   /// @param keyname 
   ///
   void key_lock_del(::efl::eina::string_view keyname_) const;

   /// @param x 
   /// @param y 
   /// @param w 
   /// @param h 
   ///
   void damage_rectangle_add(int x_, int y_, int w_, int h_) const;

   void sync() const;

   ::efl::eina::crange_list< ::efl::eina::string_view > font_path_list() const;

   void image_cache_reload() const;

   /// @param x 
   ///
   int coord_world_x_to_screen(Evas_Coord x_) const;

   /// @param d 
   /// @param x 
   /// @param y 
   /// @param rad 
   /// @param radx 
   /// @param rady 
   /// @param pres 
   /// @param ang 
   /// @param fx 
   /// @param fy 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_multi_move(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, unsigned int timestamp_, const void * data_) const;

   ::efl::eina::list< Eina_Rectangle * > render_updates() const;

   void image_cache_flush() const;

   /// @param y 
   ///
   Evas_Coord coord_screen_y_to_world(int y_) const;

   /// @param keyname 
   ///
   void key_modifier_del(::efl::eina::string_view keyname_) const;

   /// @param n 
   ///
   Evas_Touch_Point_State touch_point_list_nth_state_get(unsigned int n_) const;

   void focus_in() const;

   /// @param x 
   /// @param y 
   /// @param w 
   /// @param h 
   ///
   void obscured_rectangle_add(int x_, int y_, int w_, int h_) const;

   void render_dump() const;

   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_mouse_in(unsigned int timestamp_, const void * data_) const;

   /// @param x 
   /// @param y 
   /// @param w 
   /// @param h 
   /// @param include_pass_events_objects 
   /// @param include_hidden_objects 
   ///
   ::evas::object object_top_in_rectangle_get(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_, bool include_pass_events_objects_, bool include_hidden_objects_) const;

   void render() const;

   /// @param d 
   /// @param x 
   /// @param y 
   /// @param rad 
   /// @param radx 
   /// @param rady 
   /// @param pres 
   /// @param ang 
   /// @param fx 
   /// @param fy 
   /// @param flags 
   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_multi_up(int d_, int x_, int y_, double rad_, double radx_, double rady_, double pres_, double ang_, double fx_, double fy_, Evas_Button_Flags flags_, unsigned int timestamp_, const void * data_) const;

   /// @param path 
   ///
   void font_path_prepend(::efl::eina::string_view path_) const;

   void obscured_clear() const;

   /// @param timestamp 
   /// @param data 
   ///
   void event_feed_mouse_cancel(unsigned int timestamp_, const void * data_) const;

   /// @param x 
   ///
   Evas_Coord coord_screen_x_to_world(int x_) const;

   /// @param keyname 
   ///
   void key_lock_add(::efl::eina::string_view keyname_) const;

   void render_idle_flush() const;

   /// @param y 
   ///
   int coord_world_y_to_screen(Evas_Coord y_) const;

   /// @param keyname 
   /// @param key 
   /// @param string 
   /// @param compose 
   /// @param timestamp 
   /// @param data 
   /// @param keycode 
   ///
   void event_feed_key_down_with_keycode(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_, unsigned int keycode_) const;

   /// @param keyname 
   /// @param key 
   /// @param string 
   /// @param compose 
   /// @param timestamp 
   /// @param data 
   /// @param keycode 
   ///
   void event_feed_key_up_with_keycode(::efl::eina::string_view keyname_, ::efl::eina::string_view key_, ::efl::eina::string_view string_, ::efl::eina::string_view compose_, unsigned int timestamp_, const void * data_, unsigned int keycode_) const;

   /// @param timestamp 
   /// @param device 
   /// @param toolid 
   /// @param naxes 
   /// @param axis 
   /// @param data 
   ///
   void event_feed_axis_update(unsigned int timestamp_, int device_, int toolid_, int naxes_, const Evas_Axis * axis_, const void * data_) const;

   void output_framespace_get(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const;

   void output_framespace_set(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_) const;

   void output_viewport_get(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const;

   void output_viewport_set(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_) const;

   int image_cache_get() const;

   void image_cache_set(int size_) const;

   Evas_Event_Flags event_default_flags_get() const;

   void event_default_flags_set(Evas_Event_Flags flags_) const;

   int output_method_get() const;

   void output_method_set(int render_method_) const;

   int font_cache_get() const;

   void font_cache_set(int size_) const;

   void output_size_get(int* w_, int* h_) const;

   void output_size_set(int w_, int h_) const;

   void * data_attach_get() const;

   void data_attach_set(void * data_) const;

   Evas_Font_Hinting_Flags font_hinting_get() const;

   void font_hinting_set(Evas_Font_Hinting_Flags hinting_) const;

   Evas_Engine_Info * engine_info_get() const;

   bool engine_info_set(Evas_Engine_Info * info_) const;

   ::evas::object focus_get() const;

   ::evas::object object_top_get() const;

   const Evas_Lock * key_lock_get() const;

   void pointer_canvas_xy_get(Evas_Coord* x_, Evas_Coord* y_) const;

   int event_down_count_get() const;

   int smart_objects_calculate_count_get() const;

   bool focus_state_get() const;

   bool changed_get() const;

   void pointer_output_xy_get(int* x_, int* y_) const;

   bool pointer_inside_get() const;

   bool image_max_size_get(int* maxw_, int* maxh_) const;

   ::evas::object object_bottom_get() const;

   const Evas_Modifier * key_modifier_get() const;

   int pointer_button_down_mask_get() const;

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
            &::efl::eo::_detail::event_callback<::evas::canvas, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::canvas, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas, function_type>,
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
   callback_del_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EO_BASE_EVENT_DEL, priority_,
            &::efl::eo::_detail::event_callback<::evas::canvas, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas, function_type>,
         EO_BASE_EVENT_DEL );
   }

   template <typename T>
   void
   callback_del_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EO_BASE_EVENT_DEL, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_CANVAS_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::canvas::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::eo_cxx::evas::common_interface::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::canvas* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::canvas::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::eo_cxx::evas::common_interface::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::canvas const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_CANVAS_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::canvas) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::canvas>::value, "");

}


#include "evas_canvas.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_CANVAS_HH


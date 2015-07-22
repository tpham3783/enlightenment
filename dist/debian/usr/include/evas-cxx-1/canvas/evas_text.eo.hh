#ifndef EFL_GENERATED_EVAS_TEXT_HH
#define EFL_GENERATED_EVAS_TEXT_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_text.eo.h"
}

#include "evas_object.eo.hh"
#include "efl_text.eo.hh"
#include "efl_text_properties.eo.hh"
#include "evas_filter.eo.hh"
#include <string>

namespace evas {

struct text;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas {

struct text
{
   /// @brief Returns the logical position of the last char in the text up to the pos given. this is NOT the position of the last char because of the possibility of RTL in the text.
   ///
   /// @param x in
   /// @param y in
   ///
   int last_up_to_pos(Evas_Coord x_, Evas_Coord y_) const;

   /// @param x in
   /// @param y in
   /// @param[out] cx out
   /// @param[out] cy out
   /// @param[out] cw out
   /// @param[out] ch out
   ///
   int char_coords_get(Evas_Coord x_, Evas_Coord y_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_) const;

   /// @brief Retrieve position and dimension information of a character within a text @c Evas_Object.
   ///
   /// This function is used to obtain the X, Y, width and height of the character
   /// located at @p pos within the @c Evas_Object @p obj. @p obj must be a text object
   /// as created with evas_object_text_add(). Any of the @c Evas_Coord parameters (@p cx,
   /// @p cy, @p cw, @p ch) may be @c NULL in which case no value will be assigned to that
   /// parameter.
   ///
   /// @return @c EINA_FALSE on success, @c EINA_TRUE on error.
   ///
   /// @param pos The character position to request co-ordinates for.
   /// @param[out] cx A pointer to an @c Evas_Coord to store the X value in (can be NULL).
   /// @param[out] cy A pointer to an @c Evas_Coord to store the Y value in (can be NULL).
   /// @param[out] cw A pointer to an @c Evas_Coord to store the Width value in (can be NULL).
   /// @param[out] ch A pointer to an @c Evas_Coord to store the Height value in (can be NULL).
   ///
   bool char_pos_get(int pos_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_) const;

   /// @brief Retrieves the shadow color for the given text object.
   ///
   /// @note Use @c NULL pointers on the color components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// @see evas_object_text_shadow_color_set() for more details.
   ///
   void shadow_color_get(int* r_, int* g_, int* b_, int* a_) const;

   /// @brief Sets the shadow color for the given text object.
   ///
   /// Shadow effects, which are fading colors decorating the text
   /// underneath it, will just be shown if the object is set to one of
   /// the following styles:
   ///
   /// - #EVAS_TEXT_STYLE_SHADOW
   /// - #EVAS_TEXT_STYLE_OUTLINE_SHADOW
   /// - #EVAS_TEXT_STYLE_FAR_SHADOW
   /// - #EVAS_TEXT_STYLE_OUTLINE_SOFT_SHADOW
   /// - #EVAS_TEXT_STYLE_SOFT_SHADOW
   /// - #EVAS_TEXT_STYLE_FAR_SOFT_SHADOW
   ///
   /// One can also change the direction where the shadow grows to, with
   /// evas_object_text_style_set().
   ///
   /// @see evas_object_text_shadow_color_get()
   ///
   void shadow_color_set(int r_, int g_, int b_, int a_) const;

   /// @brief @brief Gets the ellipsis currently set on the text object.
   ///
   /// @return The ellipsis set on the text object. The ellipsis is -1.0.
   /// @see evas_object_text_ellipsis_set.
   /// @since 1.8
   ///
   double ellipsis_get() const;

   /// @brief @brief Sets the ellipsis that should be used for the text object.
   ///
   /// This is a value between 0.0 and 1.0 indicating the position of the text
   /// to be shown. 0.0 means the start will be shown and the end trimmed, 1.0
   /// means the beginning will be trimmed and the end will be shown, and any value
   /// in between will cause ellipsis to be added in both end of the text and the
   /// requested part to be shown.
   /// -1.0 means ellipsis is turned off.
   ///
   /// @since 1.8
   ///
   void ellipsis_set(double ellipsis_) const;

   /// @brief @brief Gets the BiDi delimiters used in the textblock.
   ///
   /// BiDi delimiters are use for in-paragraph separation of bidi segments. This
   /// is useful for example in recipients fields of e-mail clients where bidi
   /// oddities can occur when mixing RTL and LTR.
   ///
   /// @return A null terminated string of delimiters, e.g ",|". If empty, returns NULL.
   /// @since 1.1
   ///
   ::efl::eina::string_view bidi_delimiters_get() const;

   /// @brief @brief Sets the BiDi delimiters used in the textblock.
   ///
   /// BiDi delimiters are use for in-paragraph separation of bidi segments. This
   /// is useful for example in recipients fields of e-mail clients where bidi
   /// oddities can occur when mixing RTL and LTR.
   ///
   /// @since 1.1
   ///
   void bidi_delimiters_set(::efl::eina::string_view delim_) const;

   /// @brief Retrieves the outline color for the given text object.
   ///
   /// @note Use @c NULL pointers on the color components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// @see evas_object_text_outline_color_set() for more details.
   ///
   void outline_color_get(int* r_, int* g_, int* b_, int* a_) const;

   /// @brief Sets the outline color for the given text object.
   ///
   /// Outline effects (colored lines around text glyphs) will just be
   /// shown if the object is set to one of the following styles:
   /// - #EVAS_TEXT_STYLE_OUTLINE
   /// - #EVAS_TEXT_STYLE_SOFT_OUTLINE
   /// - #EVAS_TEXT_STYLE_OUTLINE_SHADOW
   /// - #EVAS_TEXT_STYLE_OUTLINE_SOFT_SHADOW
   ///
   /// @see evas_object_text_outline_color_get()
   ///
   void outline_color_set(int r_, int g_, int b_, int a_) const;

   /// @brief Retrieves the 'glow 2' color for the given text object.
   ///
   /// @note Use @c NULL pointers on the color components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// @see evas_object_text_glow2_color_set() for more details.
   ///
   void glow2_color_get(int* r_, int* g_, int* b_, int* a_) const;

   /// @brief Sets the 'glow 2' color for the given text object.
   ///
   /// 'Glow 2' effects, which are glowing colors decorating the text's
   /// (immediate) surroundings, will just be shown if the object is set
   /// to the #EVAS_TEXT_STYLE_GLOW style. See also
   /// evas_object_text_glow_color_set().
   ///
   /// @see evas_object_text_glow2_color_get()
   ///
   void glow2_color_set(int r_, int g_, int b_, int a_) const;

   /// @brief Retrieves the style on use on the given text object.
   ///
   /// @return the style type in use.
   ///
   /// @see evas_object_text_style_set() for more details.
   ///
   Evas_Text_Style_Type style_get() const;

   /// @brief Sets the style to apply on the given text object.
   ///
   /// Text object styles are one of the values in
   /// #Evas_Text_Style_Type. Some of those values are combinations of
   /// more than one style, and some account for the direction of the
   /// rendering of shadow effects.
   ///
   /// @note One may use the helper macros #EVAS_TEXT_STYLE_BASIC_SET and
   /// #EVAS_TEXT_STYLE_SHADOW_DIRECTION_SET to assemble a style value.
   ///
   /// The following figure illustrates the text styles:
   ///
   /// @image html text-styles.png
   /// @image rtf text-styles.png
   /// @image latex text-styles.eps
   ///
   /// @see evas_object_text_style_get()
   /// @see evas_object_text_shadow_color_set()
   /// @see evas_object_text_outline_color_set()
   /// @see evas_object_text_glow_color_set()
   /// @see evas_object_text_glow2_color_set()
   ///
   void style_set(Evas_Text_Style_Type style_) const;

   /// @brief Retrieves the glow color for the given text object.
   ///
   /// @note Use @c NULL pointers on the color components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// @see evas_object_text_glow_color_set() for more details.
   ///
   void glow_color_get(int* r_, int* g_, int* b_, int* a_) const;

   /// @brief Sets the glow color for the given text object.
   ///
   /// Glow effects, which are glowing colors decorating the text's
   /// surroundings, will just be shown if the object is set to the
   /// #EVAS_TEXT_STYLE_GLOW style.
   ///
   /// @note Glow effects are placed from a short distance of the text
   /// itself, but no touching it. For glowing effects right on the
   /// borders of the glyphs, see 'glow 2' effects
   /// (evas_object_text_glow2_color_set()).
   ///
   /// @see evas_object_text_glow_color_get()
   ///
   void glow_color_set(int r_, int g_, int b_, int a_) const;

   Evas_Coord max_descent_get() const;

   /// @brief Gets the text style pad of a text object.
   ///
   void style_pad_get(int* l_, int* r_, int* t_, int* b_) const;

   /// @brief Retrieves the direction of the text currently being displayed in the
   /// text object.
   /// @return the direction of the text
   ///
   Evas_BiDi_Direction direction_get() const;

   Evas_Coord ascent_get() const;

   Evas_Coord horiz_advance_get() const;

   Evas_Coord inset_get() const;

   Evas_Coord max_ascent_get() const;

   Evas_Coord vert_advance_get() const;

   Evas_Coord descent_get() const;



   static Eo_Class const* _eo_class()
   {
      return(EVAS_TEXT_CLASS);
   }

   operator ::evas::text() const;
   operator ::evas::text&();
   operator ::evas::text const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::text*() const { return static_cast<::evas::text*>(static_cast<D const*>(this)->p); }
      operator ::evas::text const*() const { return static_cast<::evas::text const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::text const*() const { return static_cast<::evas::text const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class text
struct text
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(efl::gfx::base)
      , EO_CXX_INHERIT(efl::gfx::filter)
      , EO_CXX_INHERIT(efl::gfx::stack)
      , EO_CXX_INHERIT(efl::text)
      , EO_CXX_INHERIT(efl::text_properties)
      , EO_CXX_INHERIT(eo::base)
      , EO_CXX_INHERIT(evas::common_interface)
      , EO_CXX_INHERIT(evas::filter)
      , EO_CXX_INHERIT(evas::object)
{
   //@{
   /**
      @brief Constructs a new evas::text object.

      Constructs a new evas::text object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::text my_text(efl::eo::parent = parent_object);
      @endcode

      @see text(Eo* eo)
   */
   explicit text(::efl::eo::parent_type _p)
      : text(_ctors_call(_p))
   {}

   explicit text()
      : text(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit text(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit text(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   text(text const& other)
      : text(eo_ref(other._eo_ptr()))
   {}

   ~text() {}

   /// @brief Returns the logical position of the last char in the text up to the pos given. this is NOT the position of the last char because of the possibility of RTL in the text.
   ///
   /// @param x in
   /// @param y in
   ///
   int last_up_to_pos(Evas_Coord x_, Evas_Coord y_) const;

   /// @param x in
   /// @param y in
   /// @param[out] cx out
   /// @param[out] cy out
   /// @param[out] cw out
   /// @param[out] ch out
   ///
   int char_coords_get(Evas_Coord x_, Evas_Coord y_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_) const;

   /// @brief Retrieve position and dimension information of a character within a text @c Evas_Object.
   ///
   /// This function is used to obtain the X, Y, width and height of the character
   /// located at @p pos within the @c Evas_Object @p obj. @p obj must be a text object
   /// as created with evas_object_text_add(). Any of the @c Evas_Coord parameters (@p cx,
   /// @p cy, @p cw, @p ch) may be @c NULL in which case no value will be assigned to that
   /// parameter.
   ///
   /// @return @c EINA_FALSE on success, @c EINA_TRUE on error.
   ///
   /// @param pos The character position to request co-ordinates for.
   /// @param[out] cx A pointer to an @c Evas_Coord to store the X value in (can be NULL).
   /// @param[out] cy A pointer to an @c Evas_Coord to store the Y value in (can be NULL).
   /// @param[out] cw A pointer to an @c Evas_Coord to store the Width value in (can be NULL).
   /// @param[out] ch A pointer to an @c Evas_Coord to store the Height value in (can be NULL).
   ///
   bool char_pos_get(int pos_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_) const;

   /// @brief Retrieves the shadow color for the given text object.
   ///
   /// @note Use @c NULL pointers on the color components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// @see evas_object_text_shadow_color_set() for more details.
   ///
   void shadow_color_get(int* r_, int* g_, int* b_, int* a_) const;

   /// @brief Sets the shadow color for the given text object.
   ///
   /// Shadow effects, which are fading colors decorating the text
   /// underneath it, will just be shown if the object is set to one of
   /// the following styles:
   ///
   /// - #EVAS_TEXT_STYLE_SHADOW
   /// - #EVAS_TEXT_STYLE_OUTLINE_SHADOW
   /// - #EVAS_TEXT_STYLE_FAR_SHADOW
   /// - #EVAS_TEXT_STYLE_OUTLINE_SOFT_SHADOW
   /// - #EVAS_TEXT_STYLE_SOFT_SHADOW
   /// - #EVAS_TEXT_STYLE_FAR_SOFT_SHADOW
   ///
   /// One can also change the direction where the shadow grows to, with
   /// evas_object_text_style_set().
   ///
   /// @see evas_object_text_shadow_color_get()
   ///
   void shadow_color_set(int r_, int g_, int b_, int a_) const;

   /// @brief @brief Gets the ellipsis currently set on the text object.
   ///
   /// @return The ellipsis set on the text object. The ellipsis is -1.0.
   /// @see evas_object_text_ellipsis_set.
   /// @since 1.8
   ///
   double ellipsis_get() const;

   /// @brief @brief Sets the ellipsis that should be used for the text object.
   ///
   /// This is a value between 0.0 and 1.0 indicating the position of the text
   /// to be shown. 0.0 means the start will be shown and the end trimmed, 1.0
   /// means the beginning will be trimmed and the end will be shown, and any value
   /// in between will cause ellipsis to be added in both end of the text and the
   /// requested part to be shown.
   /// -1.0 means ellipsis is turned off.
   ///
   /// @since 1.8
   ///
   void ellipsis_set(double ellipsis_) const;

   /// @brief @brief Gets the BiDi delimiters used in the textblock.
   ///
   /// BiDi delimiters are use for in-paragraph separation of bidi segments. This
   /// is useful for example in recipients fields of e-mail clients where bidi
   /// oddities can occur when mixing RTL and LTR.
   ///
   /// @return A null terminated string of delimiters, e.g ",|". If empty, returns NULL.
   /// @since 1.1
   ///
   ::efl::eina::string_view bidi_delimiters_get() const;

   /// @brief @brief Sets the BiDi delimiters used in the textblock.
   ///
   /// BiDi delimiters are use for in-paragraph separation of bidi segments. This
   /// is useful for example in recipients fields of e-mail clients where bidi
   /// oddities can occur when mixing RTL and LTR.
   ///
   /// @since 1.1
   ///
   void bidi_delimiters_set(::efl::eina::string_view delim_) const;

   /// @brief Retrieves the outline color for the given text object.
   ///
   /// @note Use @c NULL pointers on the color components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// @see evas_object_text_outline_color_set() for more details.
   ///
   void outline_color_get(int* r_, int* g_, int* b_, int* a_) const;

   /// @brief Sets the outline color for the given text object.
   ///
   /// Outline effects (colored lines around text glyphs) will just be
   /// shown if the object is set to one of the following styles:
   /// - #EVAS_TEXT_STYLE_OUTLINE
   /// - #EVAS_TEXT_STYLE_SOFT_OUTLINE
   /// - #EVAS_TEXT_STYLE_OUTLINE_SHADOW
   /// - #EVAS_TEXT_STYLE_OUTLINE_SOFT_SHADOW
   ///
   /// @see evas_object_text_outline_color_get()
   ///
   void outline_color_set(int r_, int g_, int b_, int a_) const;

   /// @brief Retrieves the 'glow 2' color for the given text object.
   ///
   /// @note Use @c NULL pointers on the color components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// @see evas_object_text_glow2_color_set() for more details.
   ///
   void glow2_color_get(int* r_, int* g_, int* b_, int* a_) const;

   /// @brief Sets the 'glow 2' color for the given text object.
   ///
   /// 'Glow 2' effects, which are glowing colors decorating the text's
   /// (immediate) surroundings, will just be shown if the object is set
   /// to the #EVAS_TEXT_STYLE_GLOW style. See also
   /// evas_object_text_glow_color_set().
   ///
   /// @see evas_object_text_glow2_color_get()
   ///
   void glow2_color_set(int r_, int g_, int b_, int a_) const;

   /// @brief Retrieves the style on use on the given text object.
   ///
   /// @return the style type in use.
   ///
   /// @see evas_object_text_style_set() for more details.
   ///
   Evas_Text_Style_Type style_get() const;

   /// @brief Sets the style to apply on the given text object.
   ///
   /// Text object styles are one of the values in
   /// #Evas_Text_Style_Type. Some of those values are combinations of
   /// more than one style, and some account for the direction of the
   /// rendering of shadow effects.
   ///
   /// @note One may use the helper macros #EVAS_TEXT_STYLE_BASIC_SET and
   /// #EVAS_TEXT_STYLE_SHADOW_DIRECTION_SET to assemble a style value.
   ///
   /// The following figure illustrates the text styles:
   ///
   /// @image html text-styles.png
   /// @image rtf text-styles.png
   /// @image latex text-styles.eps
   ///
   /// @see evas_object_text_style_get()
   /// @see evas_object_text_shadow_color_set()
   /// @see evas_object_text_outline_color_set()
   /// @see evas_object_text_glow_color_set()
   /// @see evas_object_text_glow2_color_set()
   ///
   void style_set(Evas_Text_Style_Type style_) const;

   /// @brief Retrieves the glow color for the given text object.
   ///
   /// @note Use @c NULL pointers on the color components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// @see evas_object_text_glow_color_set() for more details.
   ///
   void glow_color_get(int* r_, int* g_, int* b_, int* a_) const;

   /// @brief Sets the glow color for the given text object.
   ///
   /// Glow effects, which are glowing colors decorating the text's
   /// surroundings, will just be shown if the object is set to the
   /// #EVAS_TEXT_STYLE_GLOW style.
   ///
   /// @note Glow effects are placed from a short distance of the text
   /// itself, but no touching it. For glowing effects right on the
   /// borders of the glyphs, see 'glow 2' effects
   /// (evas_object_text_glow2_color_set()).
   ///
   /// @see evas_object_text_glow_color_get()
   ///
   void glow_color_set(int r_, int g_, int b_, int a_) const;

   Evas_Coord max_descent_get() const;

   /// @brief Gets the text style pad of a text object.
   ///
   void style_pad_get(int* l_, int* r_, int* t_, int* b_) const;

   /// @brief Retrieves the direction of the text currently being displayed in the
   /// text object.
   /// @return the direction of the text
   ///
   Evas_BiDi_Direction direction_get() const;

   Evas_Coord ascent_get() const;

   Evas_Coord horiz_advance_get() const;

   Evas_Coord inset_get() const;

   Evas_Coord max_ascent_get() const;

   Evas_Coord vert_advance_get() const;

   Evas_Coord descent_get() const;

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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
   callback_resize_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_RESIZE, priority_,
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::text, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::text, function_type>,
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
      return(EVAS_TEXT_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::text::address_of<address_of>
      , ::eo_cxx::efl::gfx::base::address_of<address_of>
      , ::eo_cxx::efl::gfx::filter::address_of<address_of>
      , ::eo_cxx::efl::gfx::stack::address_of<address_of>
      , ::eo_cxx::efl::text::address_of<address_of>
      , ::eo_cxx::efl::text_properties::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::eo_cxx::evas::common_interface::address_of<address_of>
      , ::eo_cxx::evas::filter::address_of<address_of>
      , ::eo_cxx::evas::object::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::text* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::text::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::base::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::filter::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::stack::address_const_of<address_const_of>
      , ::eo_cxx::efl::text::address_const_of<address_const_of>
      , ::eo_cxx::efl::text_properties::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::eo_cxx::evas::common_interface::address_const_of<address_const_of>
      , ::eo_cxx::evas::filter::address_const_of<address_const_of>
      , ::eo_cxx::evas::object::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::text const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_TEXT_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::text) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::text>::value, "");

}


#include "evas_text.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_TEXT_HH


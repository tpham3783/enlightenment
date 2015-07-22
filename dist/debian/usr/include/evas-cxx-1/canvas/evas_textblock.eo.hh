#ifndef EFL_GENERATED_EVAS_TEXTBLOCK_HH
#define EFL_GENERATED_EVAS_TEXTBLOCK_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_textblock.eo.h"
}

#include "evas_object.eo.hh"
#include <evas_object.eo.hh>
#include <string>

namespace evas {

struct textblock;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas {

struct textblock
{
   /// @brief Get the geometry of a line number.
   ///
   /// @return @c EINA_TRUE on success, @c EINA_FALSE otherwise.
   ///
   /// @param line the line number.
   /// @param[out] cx x coord of the line.
   /// @param[out] cy y coord of the line.
   /// @param[out] cw w coord of the line.
   /// @param[out] ch h coord of the line.
   ///
   bool line_number_geometry_get(int line_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_) const;

   /// @brief @brief Get the "replacement character" for given textblock object. Returns
   /// @c NULL if no replacement character is in use.
   ///
   /// @return Replacement character or @c NULL.
   ///
   ::efl::eina::string_view replace_char_get() const;

   /// @brief Del the from the top of the user style stack.
   ///
   /// @see evas_object_textblock_style_get
   /// @since 1.2
   ///
   void style_user_pop() const;

   /// @brief Create a new cursor, associate it to the obj and init it to point
   /// to the start of the textblock. Association to the object means the cursor
   /// will be updated when the object will change.
   ///
   /// @note if you need speed and you know what you are doing, it's slightly faster to just allocate the cursor yourself and not associate it. (only people developing the actual object, and not users of the object).
   ///
   /// @return the new cursor.
   ///
   Evas_Textblock_Cursor * cursor_new() const;

   /// @brief No description supplied by the EAPI.
   ///
   /// @param anchor 
   ///
   ::efl::eina::crange_list< ::evas::object > node_format_list_get(::efl::eina::string_view anchor_) const;

   /// @brief Get (don't remove) the style at the top of the user style stack.
   ///
   /// @return the style of the object.
   /// @see evas_object_textblock_style_get
   /// @since 1.2
   ///
   const Evas_Textblock_Style * style_user_peek() const;

   /// @brief Remove a format node and its match.
   ///
   /// @param n 
   ///
   void node_format_remove_pair(Evas_Textblock_Node_Format * n_) const;

   /// @brief Clear the textblock object.
   /// @note Does *NOT* free the Evas object itself.
   ///
   /// @return nothing.
   ///
   void clear() const;

   /// @brief Push ts to the top of the user style stack.
   ///
   /// FIXME: API is solid but currently only supports 1 style in the stack.
   ///
   /// The user style overrides the corresponding elements of the regular style.
   /// This is the proper way to do theme overrides in code.
   /// @return Returns no value.
   /// @see evas_object_textblock_style_set
   /// @since 1.2
   ///
   /// @param ts the style to set.
   ///
   void style_user_push(Evas_Textblock_Style * ts_) const;

   /// @brief Add obstacle evas object @p eo_obs to be observed during layout of text.
   /// The textblock does the layout of the text according to the position
   /// of the obstacle.
   ///
   /// @return Returns true on success, false on failure.
   ///
   /// @since 1.15
   ///
   /// @param eo_obs 
   ///
   bool obstacle_add(::evas::object eo_obs_) const;

   /// @brief Removes @p eo_obs from observation during text layout
   ///
   /// @return Returns true on success, false on failure.
   ///
   /// @since 1.15
   ///
   /// @param eo_obs 
   ///
   bool obstacle_del(::evas::object eo_obs_) const;

   /// @brief Triggers for relayout due to obstacles' state change. The obstacles
   /// alone don't affect the layout, until this is called. Use this after
   /// doing changes (moving, positioning etc.) in the obstacles that you
   /// would like to be considered in the layout.
   /// For example: if you have just repositioned the obstacles to differrent
   /// coordinates relative to the textblock, you need to call this so
   /// it will consider this new state and will relayout the text.
   ///
   /// @return Returns no value.
   ///
   /// @since 1.15
   ///
   void obstacles_update() const;

   /// @brief Return the markup of the object.
   ///
   /// @return the markup text of the object.
   ///
   ::efl::eina::string_view text_markup_get() const;

   /// @brief Sets the tetxblock's text to the markup text.
   ///
   /// @note assumes text does not include the unicode object replacement char (0xFFFC)
   ///
   /// @return Return no value.
   ///
   void text_markup_set(::efl::eina::string_view text_) const;

   /// @brief @brief Gets the vertical alignment of a textblock
   ///
   /// @return The alignment set for the object.
   /// @since 1.1
   ///
   double valign_get() const;

   /// @brief @brief Sets the vertical alignment of text within the textblock object
   /// as a whole.
   ///
   /// Normally alignment is 0.0 (top of object). Values given should be
   /// between 0.0 and 1.0 (1.0 bottom of object, 0.5 being vertically centered
   /// etc.).
   ///
   /// @since 1.1
   ///
   void valign_set(double align_) const;

   /// @brief @brief Gets the BiDi delimiters used in the textblock.
   ///
   /// BiDi delimiters are use for in-paragraph separation of bidi segments. This
   /// is useful for example in recipients fields of e-mail clients where bidi
   /// oddities can occur when mixing RTL and LTR.
   ///
   /// @return A null terminated string of delimiters, e.g ",|". If empty, returns
   /// @c NULL.
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

   /// @brief @brief Set the "replacement character" to use for the given textblock object.
   ///
   void replace_char_set(::efl::eina::string_view ch_) const;

   /// @brief @brief Gets newline mode. When true, newline character behaves
   /// as a paragraph separator.
   ///
   /// @return @c EINA_TRUE if in legacy mode, @c EINA_FALSE otherwise.
   /// @since 1.1
   ///
   bool legacy_newline_get() const;

   /// @brief @brief Sets newline mode. When true, newline character will behave
   /// as a paragraph separator.
   ///
   /// @since 1.1
   ///
   void legacy_newline_set(bool mode_) const;

   /// @brief Return the style of an object.
   /// @return the style of the object.
   ///
   const Evas_Textblock_Style * style_get() const;

   /// @brief Set the objects style to ts.
   /// @return Returns no value.
   ///
   void style_set(const Evas_Textblock_Style * ts_) const;

   /// @brief Returns the first format node.
   ///
   const Evas_Textblock_Node_Format * node_format_first_get() const;

   /// @brief Get the formatted width and height. This calculates the actual size after restricting
   /// the textblock to the current size of the object.
   /// The main difference between this and @ref evas_object_textblock_size_native_get
   /// is that the "native" function does not wrapping into account
   /// it just calculates the real width of the object if it was placed on an
   /// infinite canvas, while this function gives the size after wrapping
   /// according to the size restrictions of the object.
   ///
   /// For example for a textblock containing the text: "You shall not pass!"
   /// with no margins or padding and assuming a monospace font and a size of
   /// 7x10 char widths (for simplicity) has a native size of 19x1
   /// and a formatted size of 5x4.
   ///
   ///
   /// @return Returns no value.
   /// @see evas_object_textblock_size_native_get
   ///
   void size_formatted_get(Evas_Coord* w_, Evas_Coord* h_) const;

   /// @brief Returns the last format node.
   ///
   const Evas_Textblock_Node_Format * node_format_last_get() const;

   /// @brief Return the object's main cursor.
   ///
   /// @return The @p obj's main cursor.
   ///
   Evas_Textblock_Cursor * cursor_get() const;

   /// @brief Get the native width and height. This calculates the actual size without taking account
   /// the current size of the object.
   /// The main difference between this and @ref evas_object_textblock_size_formatted_get
   /// is that the "native" function does not take wrapping into account
   /// it just calculates the real width of the object if it was placed on an
   /// infinite canvas, while the "formatted" function gives the size after
   /// wrapping text according to the size restrictions of the object.
   ///
   /// For example for a textblock containing the text: "You shall not pass!"
   /// with no margins or padding and assuming a monospace font and a size of
   /// 7x10 char widths (for simplicity) has a native size of 19x1
   /// and a formatted size of 5x4.
   ///
   /// @return Returns no value.
   ///
   void size_native_get(Evas_Coord* w_, Evas_Coord* h_) const;

   /// @brief No description supplied by the EAPI.
   ///
   void style_insets_get(Evas_Coord* l_, Evas_Coord* r_, Evas_Coord* t_, Evas_Coord* b_) const;



   static Eo_Class const* _eo_class()
   {
      return(EVAS_TEXTBLOCK_CLASS);
   }

   operator ::evas::textblock() const;
   operator ::evas::textblock&();
   operator ::evas::textblock const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::textblock*() const { return static_cast<::evas::textblock*>(static_cast<D const*>(this)->p); }
      operator ::evas::textblock const*() const { return static_cast<::evas::textblock const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::textblock const*() const { return static_cast<::evas::textblock const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class textblock
struct textblock
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(efl::gfx::base)
      , EO_CXX_INHERIT(efl::gfx::stack)
      , EO_CXX_INHERIT(eo::base)
      , EO_CXX_INHERIT(evas::common_interface)
      , EO_CXX_INHERIT(evas::object)
{
   //@{
   /**
      @brief Constructs a new evas::textblock object.

      Constructs a new evas::textblock object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::textblock my_textblock(efl::eo::parent = parent_object);
      @endcode

      @see textblock(Eo* eo)
   */
   explicit textblock(::efl::eo::parent_type _p)
      : textblock(_ctors_call(_p))
   {}

   explicit textblock()
      : textblock(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit textblock(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit textblock(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   textblock(textblock const& other)
      : textblock(eo_ref(other._eo_ptr()))
   {}

   ~textblock() {}

   /// @brief Get the geometry of a line number.
   ///
   /// @return @c EINA_TRUE on success, @c EINA_FALSE otherwise.
   ///
   /// @param line the line number.
   /// @param[out] cx x coord of the line.
   /// @param[out] cy y coord of the line.
   /// @param[out] cw w coord of the line.
   /// @param[out] ch h coord of the line.
   ///
   bool line_number_geometry_get(int line_, Evas_Coord* cx_, Evas_Coord* cy_, Evas_Coord* cw_, Evas_Coord* ch_) const;

   /// @brief @brief Get the "replacement character" for given textblock object. Returns
   /// @c NULL if no replacement character is in use.
   ///
   /// @return Replacement character or @c NULL.
   ///
   ::efl::eina::string_view replace_char_get() const;

   /// @brief Del the from the top of the user style stack.
   ///
   /// @see evas_object_textblock_style_get
   /// @since 1.2
   ///
   void style_user_pop() const;

   /// @brief Create a new cursor, associate it to the obj and init it to point
   /// to the start of the textblock. Association to the object means the cursor
   /// will be updated when the object will change.
   ///
   /// @note if you need speed and you know what you are doing, it's slightly faster to just allocate the cursor yourself and not associate it. (only people developing the actual object, and not users of the object).
   ///
   /// @return the new cursor.
   ///
   Evas_Textblock_Cursor * cursor_new() const;

   /// @brief No description supplied by the EAPI.
   ///
   /// @param anchor 
   ///
   ::efl::eina::crange_list< ::evas::object > node_format_list_get(::efl::eina::string_view anchor_) const;

   /// @brief Get (don't remove) the style at the top of the user style stack.
   ///
   /// @return the style of the object.
   /// @see evas_object_textblock_style_get
   /// @since 1.2
   ///
   const Evas_Textblock_Style * style_user_peek() const;

   /// @brief Remove a format node and its match.
   ///
   /// @param n 
   ///
   void node_format_remove_pair(Evas_Textblock_Node_Format * n_) const;

   /// @brief Clear the textblock object.
   /// @note Does *NOT* free the Evas object itself.
   ///
   /// @return nothing.
   ///
   void clear() const;

   /// @brief Push ts to the top of the user style stack.
   ///
   /// FIXME: API is solid but currently only supports 1 style in the stack.
   ///
   /// The user style overrides the corresponding elements of the regular style.
   /// This is the proper way to do theme overrides in code.
   /// @return Returns no value.
   /// @see evas_object_textblock_style_set
   /// @since 1.2
   ///
   /// @param ts the style to set.
   ///
   void style_user_push(Evas_Textblock_Style * ts_) const;

   /// @brief Add obstacle evas object @p eo_obs to be observed during layout of text.
   /// The textblock does the layout of the text according to the position
   /// of the obstacle.
   ///
   /// @return Returns true on success, false on failure.
   ///
   /// @since 1.15
   ///
   /// @param eo_obs 
   ///
   bool obstacle_add(::evas::object eo_obs_) const;

   /// @brief Removes @p eo_obs from observation during text layout
   ///
   /// @return Returns true on success, false on failure.
   ///
   /// @since 1.15
   ///
   /// @param eo_obs 
   ///
   bool obstacle_del(::evas::object eo_obs_) const;

   /// @brief Triggers for relayout due to obstacles' state change. The obstacles
   /// alone don't affect the layout, until this is called. Use this after
   /// doing changes (moving, positioning etc.) in the obstacles that you
   /// would like to be considered in the layout.
   /// For example: if you have just repositioned the obstacles to differrent
   /// coordinates relative to the textblock, you need to call this so
   /// it will consider this new state and will relayout the text.
   ///
   /// @return Returns no value.
   ///
   /// @since 1.15
   ///
   void obstacles_update() const;

   /// @brief Return the markup of the object.
   ///
   /// @return the markup text of the object.
   ///
   ::efl::eina::string_view text_markup_get() const;

   /// @brief Sets the tetxblock's text to the markup text.
   ///
   /// @note assumes text does not include the unicode object replacement char (0xFFFC)
   ///
   /// @return Return no value.
   ///
   void text_markup_set(::efl::eina::string_view text_) const;

   /// @brief @brief Gets the vertical alignment of a textblock
   ///
   /// @return The alignment set for the object.
   /// @since 1.1
   ///
   double valign_get() const;

   /// @brief @brief Sets the vertical alignment of text within the textblock object
   /// as a whole.
   ///
   /// Normally alignment is 0.0 (top of object). Values given should be
   /// between 0.0 and 1.0 (1.0 bottom of object, 0.5 being vertically centered
   /// etc.).
   ///
   /// @since 1.1
   ///
   void valign_set(double align_) const;

   /// @brief @brief Gets the BiDi delimiters used in the textblock.
   ///
   /// BiDi delimiters are use for in-paragraph separation of bidi segments. This
   /// is useful for example in recipients fields of e-mail clients where bidi
   /// oddities can occur when mixing RTL and LTR.
   ///
   /// @return A null terminated string of delimiters, e.g ",|". If empty, returns
   /// @c NULL.
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

   /// @brief @brief Set the "replacement character" to use for the given textblock object.
   ///
   void replace_char_set(::efl::eina::string_view ch_) const;

   /// @brief @brief Gets newline mode. When true, newline character behaves
   /// as a paragraph separator.
   ///
   /// @return @c EINA_TRUE if in legacy mode, @c EINA_FALSE otherwise.
   /// @since 1.1
   ///
   bool legacy_newline_get() const;

   /// @brief @brief Sets newline mode. When true, newline character will behave
   /// as a paragraph separator.
   ///
   /// @since 1.1
   ///
   void legacy_newline_set(bool mode_) const;

   /// @brief Return the style of an object.
   /// @return the style of the object.
   ///
   const Evas_Textblock_Style * style_get() const;

   /// @brief Set the objects style to ts.
   /// @return Returns no value.
   ///
   void style_set(const Evas_Textblock_Style * ts_) const;

   /// @brief Returns the first format node.
   ///
   const Evas_Textblock_Node_Format * node_format_first_get() const;

   /// @brief Get the formatted width and height. This calculates the actual size after restricting
   /// the textblock to the current size of the object.
   /// The main difference between this and @ref evas_object_textblock_size_native_get
   /// is that the "native" function does not wrapping into account
   /// it just calculates the real width of the object if it was placed on an
   /// infinite canvas, while this function gives the size after wrapping
   /// according to the size restrictions of the object.
   ///
   /// For example for a textblock containing the text: "You shall not pass!"
   /// with no margins or padding and assuming a monospace font and a size of
   /// 7x10 char widths (for simplicity) has a native size of 19x1
   /// and a formatted size of 5x4.
   ///
   ///
   /// @return Returns no value.
   /// @see evas_object_textblock_size_native_get
   ///
   void size_formatted_get(Evas_Coord* w_, Evas_Coord* h_) const;

   /// @brief Returns the last format node.
   ///
   const Evas_Textblock_Node_Format * node_format_last_get() const;

   /// @brief Return the object's main cursor.
   ///
   /// @return The @p obj's main cursor.
   ///
   Evas_Textblock_Cursor * cursor_get() const;

   /// @brief Get the native width and height. This calculates the actual size without taking account
   /// the current size of the object.
   /// The main difference between this and @ref evas_object_textblock_size_formatted_get
   /// is that the "native" function does not take wrapping into account
   /// it just calculates the real width of the object if it was placed on an
   /// infinite canvas, while the "formatted" function gives the size after
   /// wrapping text according to the size restrictions of the object.
   ///
   /// For example for a textblock containing the text: "You shall not pass!"
   /// with no margins or padding and assuming a monospace font and a size of
   /// 7x10 char widths (for simplicity) has a native size of 19x1
   /// and a formatted size of 5x4.
   ///
   /// @return Returns no value.
   ///
   void size_native_get(Evas_Coord* w_, Evas_Coord* h_) const;

   /// @brief No description supplied by the EAPI.
   ///
   void style_insets_get(Evas_Coord* l_, Evas_Coord* r_, Evas_Coord* t_, Evas_Coord* b_) const;

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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::textblock, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::textblock, function_type>,
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
      return(EVAS_TEXTBLOCK_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::textblock::address_of<address_of>
      , ::eo_cxx::efl::gfx::base::address_of<address_of>
      , ::eo_cxx::efl::gfx::stack::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::eo_cxx::evas::common_interface::address_of<address_of>
      , ::eo_cxx::evas::object::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::textblock* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::textblock::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::base::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::stack::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::eo_cxx::evas::common_interface::address_const_of<address_const_of>
      , ::eo_cxx::evas::object::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::textblock const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_TEXTBLOCK_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::textblock) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::textblock>::value, "");

}


#include "evas_textblock.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_TEXTBLOCK_HH


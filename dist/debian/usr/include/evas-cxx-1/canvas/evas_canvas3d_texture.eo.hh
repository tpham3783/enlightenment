#ifndef EFL_GENERATED_EVAS_CANVAS3D_TEXTURE_HH
#define EFL_GENERATED_EVAS_CANVAS3D_TEXTURE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_canvas3d_texture.eo.h"
}

#include "evas_canvas3d_object.eo.hh"
#include "evas_common_interface.eo.hh"
#include <evas_object.eo.hh>
#include <string>

namespace evas { namespace canvas3d {

struct texture;

} }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas { namespace canvas3d {

struct texture
{
   /// @brief Set the data of the given texture.
   ///
   /// @see evas_canvas3d_texture_file_set()
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   /// @param color_format Color format of the texture.
   /// @param w Width of the data.
   /// @param h Height of the data.
   /// @param data Pointer to the data.
   ///
   void data_set(Evas_Colorspace color_format_, int w_, int h_, const void * data_) const;

   /// @brief Set the data of the given texture from file.
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   /// @param file Path to the image file.
   /// @param key Key in the image file.
   ///
   void file_set(::efl::eina::string_view file_, ::efl::eina::string_view key_) const;

   /// @brief Set the data of the given texture from an evas object.
   ///
   /// Evas 3D support using existing evas object as a texture source. This feature
   /// make it possible using any exisiting evas object inside 3D scene.
   ///
   /// @see evas_canvas3d_texture_source_visible_set
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   /// @param source Source evas object to be used as the texture data.
   ///
   void source_set(::evas::object source_) const;

   /// @brief Get the color format of the given texture.
   ///
   /// EVAS_CANVAS3D_COLOR_FORMAT_RGBA will be returned if the texture has source object.
   /// Otherwise, the color format of the data will be returned.
   ///
   /// @see evas_canvas3d_texture_data_set()
   /// @see evas_canvas3d_texture_file_set()
   /// @see evas_canvas3d_texture_source_set()
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   Evas_Colorspace color_format_get() const;

   /// @brief Get the size of the given texture.
   ///
   /// If the texture has source object, the size of the source object will be
   /// returned. Otherwise, the size of the data (or image file) will be returned.
   ///
   /// @see evas_canvas3d_texture_data_set()
   /// @see evas_canvas3d_texture_file_set()
   /// @see evas_canvas3d_texture_source_set()
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   /// @param[out] w Pointer to receive the width of the texture size.
   /// @param[out] h Pointer to receive the height of the texture size.
   ///
   void size_get(int* w_, int* h_) const;

   /// @brief Set the wrap mode of the given texture.
   /// If the texture coordinate exceed range [0.0, 1.0] the values are modified
   /// according to the wrap mode.
   ///
   /// Default wrap modes are both EVAS_CANVAS3D_WRAP_MODE_CLAMP for s and t.
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   /// @param s Wrap mode for S-axis.
   /// @param t Wrap mode for T-axis.
   ///
   void wrap_set(Evas_Canvas3D_Wrap_Mode s_, Evas_Canvas3D_Wrap_Mode t_) const;

   /// @brief Get the wrap mode of the given texture.
   ///
   /// @see evas_canvas3d_texture_wrap_set()
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   /// @param[out] s Pointer to receive S-axis wrap mode.
   /// @param[out] t Pointer to receive T-axis wrap mode.
   ///
   void wrap_get(Evas_Canvas3D_Wrap_Mode* s_, Evas_Canvas3D_Wrap_Mode* t_) const;

   /// @brief Set the filter of the given texture.
   ///
   /// Default filters are both EVAS_CANVAS3D_TEXTURE_FILTER_NEAREST for s and t.
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   /// @param min Minification filter used when down-scaling.
   /// @param mag Magnification filter used when up-scaling.
   ///
   void filter_set(Evas_Canvas3D_Texture_Filter min_, Evas_Canvas3D_Texture_Filter mag_) const;

   /// @brief Get the filter of the given texture.
   ///
   /// @param texture       The given texture.
   /// @param min           Pointer to receive the minification filter.
   /// @param mag           Pointer to receive the magnification filter.
   ///
   /// @see evas_canvas3d_texture_filter_set()
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   /// @param[out] min Pointer to receive the minification filter.
   /// @param[out] mag Pointer to receive the magnification filter.
   ///
   void filter_get(Evas_Canvas3D_Texture_Filter* min_, Evas_Canvas3D_Texture_Filter* mag_) const;

   /// @brief Get the visibility flag of the source evas object of the given texture.
   ///
   /// @see evas_canvas3d_texture_source_visible_set()
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   bool source_visible_get() const;

   /// @brief Set the visibility flag of the source evas object of the given texture.
   ///
   /// Recommend to call evas_object_show() on the source object and controll the
   /// visibility using this function.
   ///
   /// By default, source object is visible.
   ///
   /// @see evas_canvas3d_texture_source_set()
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   void source_visible_set(bool visible_) const;

   /// @brief Get enable flag of generation texture unit with support atlas.
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   bool atlas_enable_get() const;

   /// @brief Set enable flag to generation texture unit with support atlas.
   ///
   /// Use this flag only in case not normalize texture coordinates.
   ///
   /// By default, is enabled.
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   void atlas_enable_set(bool use_atlas_) const;



   static Eo_Class const* _eo_class()
   {
      return(EVAS_CANVAS3D_TEXTURE_CLASS);
   }

   operator ::evas::canvas3d::texture() const;
   operator ::evas::canvas3d::texture&();
   operator ::evas::canvas3d::texture const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::canvas3d::texture*() const { return static_cast<::evas::canvas3d::texture*>(static_cast<D const*>(this)->p); }
      operator ::evas::canvas3d::texture const*() const { return static_cast<::evas::canvas3d::texture const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::canvas3d::texture const*() const { return static_cast<::evas::canvas3d::texture const*>(static_cast<D const*>(this)->p); }
   };
   /// @endcond

private:

   /// @internal
   Eo* _concrete_eo_ptr() const
   {
      return static_cast<::efl::eo::concrete const*>(static_cast<void const*>(this))->_eo_ptr();
   }

};

} }

}
/// @endcond

namespace evas { namespace canvas3d {

/// @brief Class texture
struct texture
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(eo::base)
      , EO_CXX_INHERIT(evas::canvas3d::object)
      , EO_CXX_INHERIT(evas::common_interface)
{
   //@{
   /**
      @brief Constructs a new evas::canvas3d::texture object.

      Constructs a new evas::canvas3d::texture object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::canvas3d::texture my_texture(efl::eo::parent = parent_object);
      @endcode

      @see texture(Eo* eo)
   */
   explicit texture(::efl::eo::parent_type _p)
      : texture(_ctors_call(_p))
   {}

   explicit texture()
      : texture(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit texture(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit texture(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   texture(texture const& other)
      : texture(eo_ref(other._eo_ptr()))
   {}

   ~texture() {}

   /// @brief Set the data of the given texture.
   ///
   /// @see evas_canvas3d_texture_file_set()
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   /// @param color_format Color format of the texture.
   /// @param w Width of the data.
   /// @param h Height of the data.
   /// @param data Pointer to the data.
   ///
   void data_set(Evas_Colorspace color_format_, int w_, int h_, const void * data_) const;

   /// @brief Set the data of the given texture from file.
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   /// @param file Path to the image file.
   /// @param key Key in the image file.
   ///
   void file_set(::efl::eina::string_view file_, ::efl::eina::string_view key_) const;

   /// @brief Set the data of the given texture from an evas object.
   ///
   /// Evas 3D support using existing evas object as a texture source. This feature
   /// make it possible using any exisiting evas object inside 3D scene.
   ///
   /// @see evas_canvas3d_texture_source_visible_set
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   /// @param source Source evas object to be used as the texture data.
   ///
   void source_set(::evas::object source_) const;

   /// @brief Get the color format of the given texture.
   ///
   /// EVAS_CANVAS3D_COLOR_FORMAT_RGBA will be returned if the texture has source object.
   /// Otherwise, the color format of the data will be returned.
   ///
   /// @see evas_canvas3d_texture_data_set()
   /// @see evas_canvas3d_texture_file_set()
   /// @see evas_canvas3d_texture_source_set()
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   Evas_Colorspace color_format_get() const;

   /// @brief Get the size of the given texture.
   ///
   /// If the texture has source object, the size of the source object will be
   /// returned. Otherwise, the size of the data (or image file) will be returned.
   ///
   /// @see evas_canvas3d_texture_data_set()
   /// @see evas_canvas3d_texture_file_set()
   /// @see evas_canvas3d_texture_source_set()
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   /// @param[out] w Pointer to receive the width of the texture size.
   /// @param[out] h Pointer to receive the height of the texture size.
   ///
   void size_get(int* w_, int* h_) const;

   /// @brief Set the wrap mode of the given texture.
   /// If the texture coordinate exceed range [0.0, 1.0] the values are modified
   /// according to the wrap mode.
   ///
   /// Default wrap modes are both EVAS_CANVAS3D_WRAP_MODE_CLAMP for s and t.
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   /// @param s Wrap mode for S-axis.
   /// @param t Wrap mode for T-axis.
   ///
   void wrap_set(Evas_Canvas3D_Wrap_Mode s_, Evas_Canvas3D_Wrap_Mode t_) const;

   /// @brief Get the wrap mode of the given texture.
   ///
   /// @see evas_canvas3d_texture_wrap_set()
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   /// @param[out] s Pointer to receive S-axis wrap mode.
   /// @param[out] t Pointer to receive T-axis wrap mode.
   ///
   void wrap_get(Evas_Canvas3D_Wrap_Mode* s_, Evas_Canvas3D_Wrap_Mode* t_) const;

   /// @brief Set the filter of the given texture.
   ///
   /// Default filters are both EVAS_CANVAS3D_TEXTURE_FILTER_NEAREST for s and t.
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   /// @param min Minification filter used when down-scaling.
   /// @param mag Magnification filter used when up-scaling.
   ///
   void filter_set(Evas_Canvas3D_Texture_Filter min_, Evas_Canvas3D_Texture_Filter mag_) const;

   /// @brief Get the filter of the given texture.
   ///
   /// @param texture       The given texture.
   /// @param min           Pointer to receive the minification filter.
   /// @param mag           Pointer to receive the magnification filter.
   ///
   /// @see evas_canvas3d_texture_filter_set()
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   /// @param[out] min Pointer to receive the minification filter.
   /// @param[out] mag Pointer to receive the magnification filter.
   ///
   void filter_get(Evas_Canvas3D_Texture_Filter* min_, Evas_Canvas3D_Texture_Filter* mag_) const;

   /// @brief Get the visibility flag of the source evas object of the given texture.
   ///
   /// @see evas_canvas3d_texture_source_visible_set()
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   bool source_visible_get() const;

   /// @brief Set the visibility flag of the source evas object of the given texture.
   ///
   /// Recommend to call evas_object_show() on the source object and controll the
   /// visibility using this function.
   ///
   /// By default, source object is visible.
   ///
   /// @see evas_canvas3d_texture_source_set()
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   void source_visible_set(bool visible_) const;

   /// @brief Get enable flag of generation texture unit with support atlas.
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   bool atlas_enable_get() const;

   /// @brief Set enable flag to generation texture unit with support atlas.
   ///
   /// Use this flag only in case not normalize texture coordinates.
   ///
   /// By default, is enabled.
   ///
   /// @ingroup Evas_Canvas3D_Texture
   ///
   void atlas_enable_set(bool use_atlas_) const;

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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::texture, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::texture, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::texture, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::texture, function_type>,
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
   callback_clicked_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CANVAS3D_OBJECT_EVENT_CLICKED, priority_,
            &::efl::eo::_detail::event_callback<::evas::canvas3d::texture, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::texture, function_type>,
         EVAS_CANVAS3D_OBJECT_EVENT_CLICKED );
   }

   template <typename T>
   void
   callback_clicked_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CANVAS3D_OBJECT_EVENT_CLICKED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_collision_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CANVAS3D_OBJECT_EVENT_COLLISION, priority_,
            &::efl::eo::_detail::event_callback<::evas::canvas3d::texture, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::texture, function_type>,
         EVAS_CANVAS3D_OBJECT_EVENT_COLLISION );
   }

   template <typename T>
   void
   callback_collision_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CANVAS3D_OBJECT_EVENT_COLLISION, info));
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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::texture, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::texture, function_type>,
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
      return(EVAS_CANVAS3D_TEXTURE_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::canvas3d::texture::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::eo_cxx::evas::canvas3d::object::address_of<address_of>
      , ::eo_cxx::evas::common_interface::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::canvas3d::texture* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::canvas3d::texture::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::eo_cxx::evas::canvas3d::object::address_const_of<address_const_of>
      , ::eo_cxx::evas::common_interface::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::canvas3d::texture const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_CANVAS3D_TEXTURE_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::canvas3d::texture) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::canvas3d::texture>::value, "");

} }


#include "evas_canvas3d_texture.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_CANVAS3D_TEXTURE_HH


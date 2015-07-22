/// @cond EO_CXX_EO_IMPL

inline void evas::canvas3d::texture::data_set(Evas_Colorspace color_format_, int w_, int h_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_data_set(color_format_, w_, h_, data_));
}

inline void evas::canvas3d::texture::file_set(::efl::eina::string_view file_, ::efl::eina::string_view key_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_file_set(::efl::eolian::to_c(file_), ::efl::eolian::to_c(key_)));
}

inline void evas::canvas3d::texture::source_set(::evas::object source_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_source_set(::efl::eolian::to_c(source_)));
}

inline Evas_Colorspace evas::canvas3d::texture::color_format_get() const
{
   Evas_Colorspace _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_texture_color_format_get());
   return _tmp_ret;
}

inline void evas::canvas3d::texture::size_get(int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_size_get(w_, h_));
}

inline void evas::canvas3d::texture::wrap_set(Evas_Canvas3D_Wrap_Mode s_, Evas_Canvas3D_Wrap_Mode t_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_wrap_set(s_, t_));
}

inline void evas::canvas3d::texture::wrap_get(Evas_Canvas3D_Wrap_Mode* s_, Evas_Canvas3D_Wrap_Mode* t_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_wrap_get(s_, t_));
}

inline void evas::canvas3d::texture::filter_set(Evas_Canvas3D_Texture_Filter min_, Evas_Canvas3D_Texture_Filter mag_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_filter_set(min_, mag_));
}

inline void evas::canvas3d::texture::filter_get(Evas_Canvas3D_Texture_Filter* min_, Evas_Canvas3D_Texture_Filter* mag_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_filter_get(min_, mag_));
}

inline bool evas::canvas3d::texture::source_visible_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_texture_source_visible_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::texture::source_visible_set(bool visible_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_source_visible_set(::efl::eolian::to_c(visible_)));
}

inline bool evas::canvas3d::texture::atlas_enable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_texture_atlas_enable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::texture::atlas_enable_set(bool use_atlas_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_atlas_enable_set(::efl::eolian::to_c(use_atlas_)));
}

inline void eo_cxx::evas::canvas3d::texture::data_set(Evas_Colorspace color_format_, int w_, int h_, const void * data_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_data_set(color_format_, w_, h_, data_));
}

inline void eo_cxx::evas::canvas3d::texture::file_set(::efl::eina::string_view file_, ::efl::eina::string_view key_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_file_set(::efl::eolian::to_c(file_), ::efl::eolian::to_c(key_)));
}

inline void eo_cxx::evas::canvas3d::texture::source_set(::evas::object source_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_source_set(::efl::eolian::to_c(source_)));
}

inline Evas_Colorspace eo_cxx::evas::canvas3d::texture::color_format_get() const
{
   Evas_Colorspace _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_texture_color_format_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas3d::texture::size_get(int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_size_get(w_, h_));
}

inline void eo_cxx::evas::canvas3d::texture::wrap_set(Evas_Canvas3D_Wrap_Mode s_, Evas_Canvas3D_Wrap_Mode t_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_wrap_set(s_, t_));
}

inline void eo_cxx::evas::canvas3d::texture::wrap_get(Evas_Canvas3D_Wrap_Mode* s_, Evas_Canvas3D_Wrap_Mode* t_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_wrap_get(s_, t_));
}

inline void eo_cxx::evas::canvas3d::texture::filter_set(Evas_Canvas3D_Texture_Filter min_, Evas_Canvas3D_Texture_Filter mag_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_filter_set(min_, mag_));
}

inline void eo_cxx::evas::canvas3d::texture::filter_get(Evas_Canvas3D_Texture_Filter* min_, Evas_Canvas3D_Texture_Filter* mag_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_filter_get(min_, mag_));
}

inline bool eo_cxx::evas::canvas3d::texture::source_visible_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_texture_source_visible_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::texture::source_visible_set(bool visible_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_source_visible_set(::efl::eolian::to_c(visible_)));
}

inline bool eo_cxx::evas::canvas3d::texture::atlas_enable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_texture_atlas_enable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::texture::atlas_enable_set(bool use_atlas_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_texture_atlas_enable_set(::efl::eolian::to_c(use_atlas_)));
}

inline ::eo_cxx::evas::canvas3d::texture::operator ::evas::canvas3d::texture() const
{
   return *static_cast<::evas::canvas3d::texture const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::canvas3d::texture::operator ::evas::canvas3d::texture&()
{
   return *static_cast<::evas::canvas3d::texture*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::canvas3d::texture::operator ::evas::canvas3d::texture const&() const
{
   return *static_cast<::evas::canvas3d::texture const*>(static_cast<void const*>(this));
}

template <typename T>
void evas_canvas3d_texture_data_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Colorspace color_format_, int w_, int h_, const void * data_)
{
   try
      {
         static_cast<T*>(self->this_)->data_set(color_format_, w_, h_, data_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_texture_file_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * file_, const char * key_)
{
   try
      {
         static_cast<T*>(self->this_)->file_set(::efl::eolian::to_cxx<::efl::eina::string_view>(file_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::efl::eina::string_view>(key_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_texture_source_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * source_)
{
   try
      {
         static_cast<T*>(self->this_)->source_set(::efl::eolian::to_cxx<::evas::object>(source_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Colorspace evas_canvas3d_texture_color_format_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->color_format_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Colorspace _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas3d_texture_size_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* w_, int* h_)
{
   try
      {
         static_cast<T*>(self->this_)->size_get(w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_texture_wrap_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Wrap_Mode s_, Evas_Canvas3D_Wrap_Mode t_)
{
   try
      {
         static_cast<T*>(self->this_)->wrap_set(s_, t_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_texture_wrap_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Wrap_Mode* s_, Evas_Canvas3D_Wrap_Mode* t_)
{
   try
      {
         static_cast<T*>(self->this_)->wrap_get(s_, t_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_texture_filter_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Texture_Filter min_, Evas_Canvas3D_Texture_Filter mag_)
{
   try
      {
         static_cast<T*>(self->this_)->filter_set(min_, mag_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_texture_filter_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Texture_Filter* min_, Evas_Canvas3D_Texture_Filter* mag_)
{
   try
      {
         static_cast<T*>(self->this_)->filter_get(min_, mag_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas3d_texture_source_visible_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->source_visible_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_texture_source_visible_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool visible_)
{
   try
      {
         static_cast<T*>(self->this_)->source_visible_set(::efl::eolian::to_cxx<bool>(visible_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas3d_texture_atlas_enable_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->atlas_enable_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_texture_atlas_enable_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool use_atlas_)
{
   try
      {
         static_cast<T*>(self->this_)->atlas_enable_set(::efl::eolian::to_cxx<bool>(use_atlas_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::canvas3d::texture >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::canvas3d::object >::template type<T>
         , virtual operations< ::evas::common_interface >::template type<T>
   {
      virtual void data_set(Evas_Colorspace color_format_, int w_, int h_, const void * data_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_texture_data_set(color_format_, w_, h_, data_));
      }

      virtual void file_set(::efl::eina::string_view file_, ::efl::eina::string_view key_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_texture_file_set(::efl::eolian::to_c(file_), ::efl::eolian::to_c(key_)));
      }

      virtual void source_set(::evas::object source_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_texture_source_set(::efl::eolian::to_c(source_)));
      }

      virtual Evas_Colorspace color_format_get()
      {
         Evas_Colorspace _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_texture_color_format_get());
            return _tmp_ret;
      }

      virtual void size_get(int* w_, int* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_texture_size_get(w_, h_));
      }

      virtual void wrap_set(Evas_Canvas3D_Wrap_Mode s_, Evas_Canvas3D_Wrap_Mode t_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_texture_wrap_set(s_, t_));
      }

      virtual void wrap_get(Evas_Canvas3D_Wrap_Mode* s_, Evas_Canvas3D_Wrap_Mode* t_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_texture_wrap_get(s_, t_));
      }

      virtual void filter_set(Evas_Canvas3D_Texture_Filter min_, Evas_Canvas3D_Texture_Filter mag_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_texture_filter_set(min_, mag_));
      }

      virtual void filter_get(Evas_Canvas3D_Texture_Filter* min_, Evas_Canvas3D_Texture_Filter* mag_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_texture_filter_get(min_, mag_));
      }

      virtual bool source_visible_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_texture_source_visible_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void source_visible_set(bool visible_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_texture_source_visible_set(::efl::eolian::to_c(visible_)));
      }

      virtual bool atlas_enable_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_texture_atlas_enable_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void atlas_enable_set(bool use_atlas_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_texture_atlas_enable_set(::efl::eolian::to_c(use_atlas_)));
      }

   };
};


template<>
struct operation_description_class_size< ::evas::canvas3d::texture >
{
   static constexpr int value = 
#if defined(TEXTURE_PROTECTED) && defined(TEXTURE_BETA)
      13
#elif defined(TEXTURE_PROTECTED)
      13
#elif defined(TEXTURE_BETA)
      13
#else
      13
#endif
      + operation_description_class_size<::evas::canvas3d::object >::value      + operation_description_class_size<::evas::common_interface >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::canvas3d::texture>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_data_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_data_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_file_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_file_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_source_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_source_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_color_format_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_color_format_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_size_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_size_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_wrap_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_wrap_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_wrap_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_wrap_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_filter_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_filter_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_filter_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_filter_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_source_visible_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_source_visible_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_source_visible_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_source_visible_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_atlas_enable_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_atlas_enable_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_atlas_enable_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_texture_atlas_enable_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::canvas3d::object>(), &ops[operation_description_class_size< ::evas::canvas3d::texture >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::common_interface>(), &ops[operation_description_class_size< ::evas::canvas3d::texture >::value + operation_description_class_size<::evas::canvas3d::object>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::canvas3d::texture>)
{
   return (EVAS_CANVAS3D_TEXTURE_CLASS);
}

} } }

/// @endcond


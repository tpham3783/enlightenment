/// @cond EO_CXX_EO_IMPL

inline void ecore_audio::vio_set(Ecore_Audio_Vio * vio_, void * data_, eo_key_data_free_func free_func_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_vio_set(vio_, data_, free_func_));
}

inline ::efl::eina::string_view ecore_audio::name_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_name_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void ecore_audio::name_set(::efl::eina::string_view name_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_name_set(::efl::eolian::to_c(name_)));
}

inline bool ecore_audio::paused_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_paused_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void ecore_audio::paused_set(bool paused_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_paused_set(::efl::eolian::to_c(paused_)));
}

inline double ecore_audio::volume_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_volume_get());
   return _tmp_ret;
}

inline void ecore_audio::volume_set(double volume_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_volume_set(volume_));
}

inline ::efl::eina::string_view ecore_audio::source_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_source_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool ecore_audio::source_set(::efl::eina::string_view source_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_source_set(::efl::eolian::to_c(source_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline Ecore_Audio_Format ecore_audio::format_get() const
{
   Ecore_Audio_Format _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_format_get());
   return _tmp_ret;
}

inline bool ecore_audio::format_set(Ecore_Audio_Format format_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_format_set(format_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::ecore_audio::vio_set(Ecore_Audio_Vio * vio_, void * data_, eo_key_data_free_func free_func_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_vio_set(vio_, data_, free_func_));
}

inline ::efl::eina::string_view eo_cxx::ecore_audio::name_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_name_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::ecore_audio::name_set(::efl::eina::string_view name_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_name_set(::efl::eolian::to_c(name_)));
}

inline bool eo_cxx::ecore_audio::paused_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_paused_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::ecore_audio::paused_set(bool paused_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_paused_set(::efl::eolian::to_c(paused_)));
}

inline double eo_cxx::ecore_audio::volume_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_volume_get());
   return _tmp_ret;
}

inline void eo_cxx::ecore_audio::volume_set(double volume_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_audio_obj_volume_set(volume_));
}

inline ::efl::eina::string_view eo_cxx::ecore_audio::source_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_source_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::ecore_audio::source_set(::efl::eina::string_view source_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_source_set(::efl::eolian::to_c(source_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline Ecore_Audio_Format eo_cxx::ecore_audio::format_get() const
{
   Ecore_Audio_Format _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_format_get());
   return _tmp_ret;
}

inline bool eo_cxx::ecore_audio::format_set(Ecore_Audio_Format format_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_audio_obj_format_set(format_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::eo_cxx::ecore_audio::operator ::ecore_audio() const
{
   return *static_cast<::ecore_audio const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::ecore_audio::operator ::ecore_audio&()
{
   return *static_cast<::ecore_audio*>(static_cast<void*>(this));
}

inline ::eo_cxx::ecore_audio::operator ::ecore_audio const&() const
{
   return *static_cast<::ecore_audio const*>(static_cast<void const*>(this));
}

template <typename T>
void _ecore_audio_vio_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Ecore_Audio_Vio * vio_, void * data_, eo_key_data_free_func free_func_)
{
   try
      {
         static_cast<T*>(self->this_)->vio_set(vio_, data_, free_func_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::string_view _ecore_audio_name_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->name_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const char * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void _ecore_audio_name_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * name_)
{
   try
      {
         static_cast<T*>(self->this_)->name_set(::efl::eolian::to_cxx<::efl::eina::string_view>(name_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool _ecore_audio_paused_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->paused_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void _ecore_audio_paused_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool paused_)
{
   try
      {
         static_cast<T*>(self->this_)->paused_set(::efl::eolian::to_cxx<bool>(paused_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double _ecore_audio_volume_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->volume_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void _ecore_audio_volume_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double volume_)
{
   try
      {
         static_cast<T*>(self->this_)->volume_set(volume_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::string_view _ecore_audio_source_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->source_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const char * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool _ecore_audio_source_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * source_)
{
   try
      {
         return static_cast<T*>(self->this_)->source_set(::efl::eolian::to_cxx<::efl::eina::string_view>(source_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
Ecore_Audio_Format _ecore_audio_format_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->format_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Ecore_Audio_Format _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
bool _ecore_audio_format_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Ecore_Audio_Format format_)
{
   try
      {
         return static_cast<T*>(self->this_)->format_set(format_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::ecore_audio >
{
   template <typename T>
   struct type
         : virtual operations< ::eo::base >::template type<T>
   {
      virtual void vio_set(Ecore_Audio_Vio * vio_, void * data_, eo_key_data_free_func free_func_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_audio_obj_vio_set(vio_, data_, free_func_));
      }

      virtual ::efl::eina::string_view name_get()
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_name_get());
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void name_set(::efl::eina::string_view name_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_audio_obj_name_set(::efl::eolian::to_c(name_)));
      }

      virtual bool paused_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_paused_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void paused_set(bool paused_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_audio_obj_paused_set(::efl::eolian::to_c(paused_)));
      }

      virtual double volume_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_volume_get());
            return _tmp_ret;
      }

      virtual void volume_set(double volume_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_audio_obj_volume_set(volume_));
      }

      virtual ::efl::eina::string_view source_get()
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_source_get());
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool source_set(::efl::eina::string_view source_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_source_set(::efl::eolian::to_c(source_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual Ecore_Audio_Format format_get()
      {
         Ecore_Audio_Format _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_format_get());
            return _tmp_ret;
      }

      virtual bool format_set(Ecore_Audio_Format format_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_audio_obj_format_set(format_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

   };
};


template<>
struct operation_description_class_size< ::ecore_audio >
{
   static constexpr int value = 
#if defined(ECORE_AUDIO_PROTECTED) && defined(ECORE_AUDIO_BETA)
      11
#elif defined(ECORE_AUDIO_PROTECTED)
      11
#elif defined(ECORE_AUDIO_BETA)
      11
#else
      11
#endif
      + operation_description_class_size<::eo::base >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::ecore_audio>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_vio_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_vio_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_name_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_name_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_name_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_name_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_paused_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_paused_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_paused_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_paused_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_volume_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_volume_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_volume_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_volume_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_source_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_source_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_source_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_source_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_format_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_format_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_audio_format_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_audio_obj_format_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::eo::base>(), &ops[operation_description_class_size< ::ecore_audio >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::ecore_audio>)
{
   return (ECORE_AUDIO_CLASS);
}

} } }

/// @endcond


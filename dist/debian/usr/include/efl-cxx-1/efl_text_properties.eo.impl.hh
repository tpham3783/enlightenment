/// @cond EO_CXX_EO_IMPL

inline void efl::text_properties::font_get(const char ** font_, Efl_Font_Size* size_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_text_properties_font_get(font_, size_));
}

inline void efl::text_properties::font_set(::efl::eina::string_view font_, Efl_Font_Size size_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_text_properties_font_set(::efl::eolian::to_c(font_), size_));
}

inline ::efl::eina::string_view efl::text_properties::font_source_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_text_properties_font_source_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void efl::text_properties::font_source_set(::efl::eina::string_view font_source_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_text_properties_font_source_set(::efl::eolian::to_c(font_source_)));
}

inline void eo_cxx::efl::text_properties::font_get(const char ** font_, Efl_Font_Size* size_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_text_properties_font_get(font_, size_));
}

inline void eo_cxx::efl::text_properties::font_set(::efl::eina::string_view font_, Efl_Font_Size size_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_text_properties_font_set(::efl::eolian::to_c(font_), size_));
}

inline ::efl::eina::string_view eo_cxx::efl::text_properties::font_source_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_text_properties_font_source_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::efl::text_properties::font_source_set(::efl::eina::string_view font_source_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_text_properties_font_source_set(::efl::eolian::to_c(font_source_)));
}

inline ::eo_cxx::efl::text_properties::operator ::efl::text_properties() const
{
   return *static_cast<::efl::text_properties const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::text_properties::operator ::efl::text_properties&()
{
   return *static_cast<::efl::text_properties*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::text_properties::operator ::efl::text_properties const&() const
{
   return *static_cast<::efl::text_properties const*>(static_cast<void const*>(this));
}

template <typename T>
void efl_text_properties_font_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char ** font_, Efl_Font_Size* size_)
{
   try
      {
         static_cast<T*>(self->this_)->font_get(font_, size_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_text_properties_font_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * font_, Efl_Font_Size size_)
{
   try
      {
         static_cast<T*>(self->this_)->font_set(::efl::eolian::to_cxx<::efl::eina::string_view>(font_, std::tuple<std::false_type>()), size_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::string_view efl_text_properties_font_source_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->font_source_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const char * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void efl_text_properties_font_source_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * font_source_)
{
   try
      {
         static_cast<T*>(self->this_)->font_source_set(::efl::eolian::to_cxx<::efl::eina::string_view>(font_source_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::text_properties >
{
   template <typename T>
   struct type
   {
      virtual void font_get(const char ** font_, Efl_Font_Size* size_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_text_properties_font_get(font_, size_));
      }

      virtual void font_set(::efl::eina::string_view font_, Efl_Font_Size size_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_text_properties_font_set(::efl::eolian::to_c(font_), size_));
      }

      virtual ::efl::eina::string_view font_source_get()
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_text_properties_font_source_get());
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void font_source_set(::efl::eina::string_view font_source_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_text_properties_font_source_set(::efl::eolian::to_c(font_source_)));
      }

   };
};


template<>
struct operation_description_class_size< ::efl::text_properties >
{
   static constexpr int value = 
#if defined(TEXT_PROPERTIES_PROTECTED) && defined(TEXT_PROPERTIES_BETA)
      4
#elif defined(TEXT_PROPERTIES_PROTECTED)
      4
#elif defined(TEXT_PROPERTIES_BETA)
      4
#else
      4
#endif
;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::text_properties>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::efl_text_properties_font_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_text_properties_font_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_text_properties_font_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_text_properties_font_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_text_properties_font_source_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_text_properties_font_source_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_text_properties_font_source_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_text_properties_font_source_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::text_properties>)
{
   return (EFL_TEXT_PROPERTIES_INTERFACE);
}

} } }

/// @endcond


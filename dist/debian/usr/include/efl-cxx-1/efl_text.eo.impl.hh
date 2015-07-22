/// @cond EO_CXX_EO_IMPL

inline ::efl::eina::string_view efl::text::text_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_text_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void efl::text::text_set(::efl::eina::string_view text_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_text_set(::efl::eolian::to_c(text_)));
}

inline ::efl::eina::string_view eo_cxx::efl::text::text_get() const
{
   const char * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_text_get());
   return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::efl::text::text_set(::efl::eina::string_view text_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_text_set(::efl::eolian::to_c(text_)));
}

inline ::eo_cxx::efl::text::operator ::efl::text() const
{
   return *static_cast<::efl::text const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::text::operator ::efl::text&()
{
   return *static_cast<::efl::text*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::text::operator ::efl::text const&() const
{
   return *static_cast<::efl::text const*>(static_cast<void const*>(this));
}

template <typename T>
::efl::eina::string_view efl_text_text_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->text_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         const char * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void efl_text_text_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * text_)
{
   try
      {
         static_cast<T*>(self->this_)->text_set(::efl::eolian::to_cxx<::efl::eina::string_view>(text_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::text >
{
   template <typename T>
   struct type
   {
      virtual ::efl::eina::string_view text_get()
      {
         const char * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_text_get());
            return ::efl::eolian::to_cxx<::efl::eina::string_view>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void text_set(::efl::eina::string_view text_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_text_set(::efl::eolian::to_c(text_)));
      }

   };
};


template<>
struct operation_description_class_size< ::efl::text >
{
   static constexpr int value = 
#if defined(TEXT_PROTECTED) && defined(TEXT_BETA)
      2
#elif defined(TEXT_PROTECTED)
      2
#elif defined(TEXT_BETA)
      2
#else
      2
#endif
;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::text>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::efl_text_text_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_text_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_text_text_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_text_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::text>)
{
   return (EFL_TEXT_INTERFACE);
}

} } }

/// @endcond


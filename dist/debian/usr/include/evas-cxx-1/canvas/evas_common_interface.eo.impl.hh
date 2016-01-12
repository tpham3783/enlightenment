/// @cond EO_CXX_EO_IMPL

inline ::evas::common_interface evas::common_interface::evas_get() const
{
   Evas_Common_Interface * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_common_evas_get());
   return ::efl::eolian::to_cxx<::evas::common_interface>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::common_interface eo_cxx::evas::common_interface::evas_get() const
{
   Evas_Common_Interface * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_common_evas_get());
   return ::efl::eolian::to_cxx<::evas::common_interface>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::eo_cxx::evas::common_interface::operator ::evas::common_interface() const
{
   return *static_cast<::evas::common_interface const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::common_interface::operator ::evas::common_interface&()
{
   return *static_cast<::evas::common_interface*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::common_interface::operator ::evas::common_interface const&() const
{
   return *static_cast<::evas::common_interface const*>(static_cast<void const*>(this));
}

template <typename T>
::evas::common_interface evas_common_interface_evas_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->evas_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Common_Interface * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::common_interface>(_tmp_ret, std::tuple<std::false_type>());
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::common_interface >
{
   template <typename T>
   struct type
   {
      virtual ::evas::common_interface evas_get()
      {
         Evas_Common_Interface * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_common_evas_get());
            return ::efl::eolian::to_cxx<::evas::common_interface>(_tmp_ret, std::tuple<std::false_type>());
      }

   };
};


template<>
struct operation_description_class_size< ::evas::common_interface >
{
   static constexpr int value = 
#if defined(COMMON_INTERFACE_PROTECTED) && defined(COMMON_INTERFACE_BETA)
      1
#elif defined(COMMON_INTERFACE_PROTECTED)
      1
#elif defined(COMMON_INTERFACE_BETA)
      1
#else
      1
#endif
;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::common_interface>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_common_interface_evas_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_common_evas_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::common_interface>)
{
   return (EVAS_COMMON_INTERFACE_INTERFACE);
}

} } }

/// @endcond


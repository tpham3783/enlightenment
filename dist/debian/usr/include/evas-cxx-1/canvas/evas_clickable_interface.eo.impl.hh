/// @cond EO_CXX_EO_IMPL

inline ::eo_cxx::evas::clickable_interface::operator ::evas::clickable_interface() const
{
   return *static_cast<::evas::clickable_interface const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::clickable_interface::operator ::evas::clickable_interface&()
{
   return *static_cast<::evas::clickable_interface*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::clickable_interface::operator ::evas::clickable_interface const&() const
{
   return *static_cast<::evas::clickable_interface const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::clickable_interface >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::signal_interface >::template type<T>
   {
   };
};


template<>
struct operation_description_class_size< ::evas::clickable_interface >
{
   static constexpr int value = 
#if defined(CLICKABLE_INTERFACE_PROTECTED) && defined(CLICKABLE_INTERFACE_BETA)
      0
#elif defined(CLICKABLE_INTERFACE_PROTECTED)
      0
#elif defined(CLICKABLE_INTERFACE_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::evas::signal_interface >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::clickable_interface>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::signal_interface>(), &ops[operation_description_class_size< ::evas::clickable_interface >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::clickable_interface>)
{
   return (EVAS_CLICKABLE_INTERFACE_INTERFACE);
}

} } }

/// @endcond


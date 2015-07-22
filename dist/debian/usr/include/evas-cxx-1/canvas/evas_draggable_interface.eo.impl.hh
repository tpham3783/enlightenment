/// @cond EO_CXX_EO_IMPL

inline ::eo_cxx::evas::draggable_interface::operator ::evas::draggable_interface() const
{
   return *static_cast<::evas::draggable_interface const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::draggable_interface::operator ::evas::draggable_interface&()
{
   return *static_cast<::evas::draggable_interface*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::draggable_interface::operator ::evas::draggable_interface const&() const
{
   return *static_cast<::evas::draggable_interface const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::draggable_interface >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::signal_interface >::template type<T>
   {
   };
};


template<>
struct operation_description_class_size< ::evas::draggable_interface >
{
   static constexpr int value = 
#if defined(DRAGGABLE_INTERFACE_PROTECTED) && defined(DRAGGABLE_INTERFACE_BETA)
      0
#elif defined(DRAGGABLE_INTERFACE_PROTECTED)
      0
#elif defined(DRAGGABLE_INTERFACE_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::evas::signal_interface >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::draggable_interface>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::signal_interface>(), &ops[operation_description_class_size< ::evas::draggable_interface >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::draggable_interface>)
{
   return (EVAS_DRAGGABLE_INTERFACE_INTERFACE);
}

} } }

/// @endcond


/// @cond EO_CXX_EO_IMPL

inline ::eo_cxx::evas::signal_interface::operator ::evas::signal_interface() const
{
   return *static_cast<::evas::signal_interface const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::signal_interface::operator ::evas::signal_interface&()
{
   return *static_cast<::evas::signal_interface*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::signal_interface::operator ::evas::signal_interface const&() const
{
   return *static_cast<::evas::signal_interface const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::signal_interface >
{
   template <typename T>
   struct type
   {
   };
};


template<>
struct operation_description_class_size< ::evas::signal_interface >
{
   static constexpr int value = 
#if defined(SIGNAL_INTERFACE_PROTECTED) && defined(SIGNAL_INTERFACE_BETA)
      0
#elif defined(SIGNAL_INTERFACE_PROTECTED)
      0
#elif defined(SIGNAL_INTERFACE_BETA)
      0
#else
      0
#endif
;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::signal_interface>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::signal_interface>)
{
   return (EVAS_SIGNAL_INTERFACE_INTERFACE);
}

} } }

/// @endcond


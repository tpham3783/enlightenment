/// @cond EO_CXX_EO_IMPL

inline ::eo_cxx::efl::vg::container::operator ::efl::vg::container() const
{
   return *static_cast<::efl::vg::container const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::vg::container::operator ::efl::vg::container&()
{
   return *static_cast<::efl::vg::container*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::vg::container::operator ::efl::vg::container const&() const
{
   return *static_cast<::efl::vg::container const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::vg::container >
{
   template <typename T>
   struct type
         : virtual operations< ::efl::vg::base >::template type<T>
   {
   };
};


template<>
struct operation_description_class_size< ::efl::vg::container >
{
   static constexpr int value = 
#if defined(CONTAINER_PROTECTED) && defined(CONTAINER_BETA)
      0
#elif defined(CONTAINER_PROTECTED)
      0
#elif defined(CONTAINER_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::efl::vg::base >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::vg::container>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::vg::base>(), &ops[operation_description_class_size< ::efl::vg::container >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::vg::container>)
{
   return (EFL_VG_CONTAINER_CLASS);
}

} } }

/// @endcond


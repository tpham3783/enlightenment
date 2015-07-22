/// @cond EO_CXX_EO_IMPL

inline ::eo_cxx::evas::smart_clipped::operator ::evas::smart_clipped() const
{
   return *static_cast<::evas::smart_clipped const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::smart_clipped::operator ::evas::smart_clipped&()
{
   return *static_cast<::evas::smart_clipped*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::smart_clipped::operator ::evas::smart_clipped const&() const
{
   return *static_cast<::evas::smart_clipped const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::smart_clipped >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::object_smart >::template type<T>
   {
   };
};


template<>
struct operation_description_class_size< ::evas::smart_clipped >
{
   static constexpr int value = 
#if defined(SMART_CLIPPED_PROTECTED) && defined(SMART_CLIPPED_BETA)
      0
#elif defined(SMART_CLIPPED_PROTECTED)
      0
#elif defined(SMART_CLIPPED_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::evas::object_smart >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::smart_clipped>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::object_smart>(), &ops[operation_description_class_size< ::evas::smart_clipped >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::smart_clipped>)
{
   return (EVAS_SMART_CLIPPED_CLASS);
}

} } }

/// @endcond


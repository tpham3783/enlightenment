/// @cond EO_CXX_EO_IMPL

inline ::eo_cxx::evas::rectangle::operator ::evas::rectangle() const
{
   return *static_cast<::evas::rectangle const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::rectangle::operator ::evas::rectangle&()
{
   return *static_cast<::evas::rectangle*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::rectangle::operator ::evas::rectangle const&() const
{
   return *static_cast<::evas::rectangle const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::rectangle >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::object >::template type<T>
   {
   };
};


template<>
struct operation_description_class_size< ::evas::rectangle >
{
   static constexpr int value = 
#if defined(RECTANGLE_PROTECTED) && defined(RECTANGLE_BETA)
      0
#elif defined(RECTANGLE_PROTECTED)
      0
#elif defined(RECTANGLE_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::evas::object >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::rectangle>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::object>(), &ops[operation_description_class_size< ::evas::rectangle >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::rectangle>)
{
   return (EVAS_RECTANGLE_CLASS);
}

} } }

/// @endcond


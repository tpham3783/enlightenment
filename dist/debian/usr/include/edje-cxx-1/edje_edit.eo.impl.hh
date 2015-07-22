/// @cond EO_CXX_EO_IMPL

inline ::eo_cxx::edje::edit::operator ::edje::edit() const
{
   return *static_cast<::edje::edit const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::edje::edit::operator ::edje::edit&()
{
   return *static_cast<::edje::edit*>(static_cast<void*>(this));
}

inline ::eo_cxx::edje::edit::operator ::edje::edit const&() const
{
   return *static_cast<::edje::edit const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::edje::edit >
{
   template <typename T>
   struct type
         : virtual operations< ::edje::object >::template type<T>
   {
   };
};


template<>
struct operation_description_class_size< ::edje::edit >
{
   static constexpr int value = 
#if defined(EDIT_PROTECTED) && defined(EDIT_BETA)
      0
#elif defined(EDIT_PROTECTED)
      0
#elif defined(EDIT_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::edje::object >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::edje::edit>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   initialize_operation_description<T>(::efl::eo::detail::tag<::edje::object>(), &ops[operation_description_class_size< ::edje::edit >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::edje::edit>)
{
   return (EDJE_EDIT_CLASS);
}

} } }

/// @endcond


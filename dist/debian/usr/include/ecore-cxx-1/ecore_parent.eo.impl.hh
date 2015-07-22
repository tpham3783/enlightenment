/// @cond EO_CXX_EO_IMPL

inline ::eo_cxx::ecore::parent::operator ::ecore::parent() const
{
   return *static_cast<::ecore::parent const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::ecore::parent::operator ::ecore::parent&()
{
   return *static_cast<::ecore::parent*>(static_cast<void*>(this));
}

inline ::eo_cxx::ecore::parent::operator ::ecore::parent const&() const
{
   return *static_cast<::ecore::parent const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::ecore::parent >
{
   template <typename T>
   struct type
         : virtual operations< ::eo::base >::template type<T>
   {
   };
};


template<>
struct operation_description_class_size< ::ecore::parent >
{
   static constexpr int value = 
#if defined(PARENT_PROTECTED) && defined(PARENT_BETA)
      0
#elif defined(PARENT_PROTECTED)
      0
#elif defined(PARENT_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::eo::base >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::ecore::parent>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   initialize_operation_description<T>(::efl::eo::detail::tag<::eo::base>(), &ops[operation_description_class_size< ::ecore::parent >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::ecore::parent>)
{
   return (ECORE_PARENT_CLASS);
}

} } }

/// @endcond


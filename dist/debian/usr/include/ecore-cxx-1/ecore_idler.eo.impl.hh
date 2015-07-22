/// @cond EO_CXX_EO_IMPL

template <typename F_func_>
inline ::ecore::idler::_c_constructor<F_func_> ecore::idler::constructor(F_func_ && func_)
{
   return _c_constructor<F_func_>(std::forward<F_func_>(func_));
}

inline ::eo_cxx::ecore::idler::operator ::ecore::idler() const
{
   return *static_cast<::ecore::idler const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::ecore::idler::operator ::ecore::idler&()
{
   return *static_cast<::ecore::idler*>(static_cast<void*>(this));
}

inline ::eo_cxx::ecore::idler::operator ::ecore::idler const&() const
{
   return *static_cast<::ecore::idler const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::ecore::idler >
{
   template <typename T>
   struct type
         : virtual operations< ::eo::base >::template type<T>
   {
   };
};


template<>
struct operation_description_class_size< ::ecore::idler >
{
   static constexpr int value = 
#if defined(IDLER_PROTECTED) && defined(IDLER_BETA)
      0
#elif defined(IDLER_PROTECTED)
      0
#elif defined(IDLER_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::eo::base >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::ecore::idler>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   initialize_operation_description<T>(::efl::eo::detail::tag<::eo::base>(), &ops[operation_description_class_size< ::ecore::idler >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::ecore::idler>)
{
   return (ECORE_IDLER_CLASS);
}

} } }

/// @endcond


/// @cond EO_CXX_EO_IMPL

template <typename F_func_>
inline ::ecore::idle::enterer::_c_before_constructor<F_func_> ecore::idle::enterer::before_constructor(F_func_ && func_)
{
   return _c_before_constructor<F_func_>(std::forward<F_func_>(func_));
}

template <typename F_func_>
inline ::ecore::idle::enterer::_c_after_constructor<F_func_> ecore::idle::enterer::after_constructor(F_func_ && func_)
{
   return _c_after_constructor<F_func_>(std::forward<F_func_>(func_));
}

inline ::eo_cxx::ecore::idle::enterer::operator ::ecore::idle::enterer() const
{
   return *static_cast<::ecore::idle::enterer const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::ecore::idle::enterer::operator ::ecore::idle::enterer&()
{
   return *static_cast<::ecore::idle::enterer*>(static_cast<void*>(this));
}

inline ::eo_cxx::ecore::idle::enterer::operator ::ecore::idle::enterer const&() const
{
   return *static_cast<::ecore::idle::enterer const*>(static_cast<void const*>(this));
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::ecore::idle::enterer >
{
   template <typename T>
   struct type
         : virtual operations< ::eo::base >::template type<T>
   {
   };
};


template<>
struct operation_description_class_size< ::ecore::idle::enterer >
{
   static constexpr int value = 
#if defined(ENTERER_PROTECTED) && defined(ENTERER_BETA)
      0
#elif defined(ENTERER_PROTECTED)
      0
#elif defined(ENTERER_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::eo::base >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::ecore::idle::enterer>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   initialize_operation_description<T>(::efl::eo::detail::tag<::eo::base>(), &ops[operation_description_class_size< ::ecore::idle::enterer >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::ecore::idle::enterer>)
{
   return (ECORE_IDLE_ENTERER_CLASS);
}

} } }

/// @endcond


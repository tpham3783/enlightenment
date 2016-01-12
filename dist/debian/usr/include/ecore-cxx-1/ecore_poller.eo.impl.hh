/// @cond EO_CXX_EO_IMPL

template <typename F_func_>
inline ::ecore::poller::_c_constructor<F_func_> ecore::poller::constructor(Ecore_Poller_Type type_, int interval_, F_func_ && func_)
{
   return _c_constructor<F_func_>(type_, interval_, std::forward<F_func_>(func_));
}

inline int ecore::poller::interval_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_poller_interval_get());
   return _tmp_ret;
}

inline bool ecore::poller::interval_set(int interval_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_poller_interval_set(interval_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline int eo_cxx::ecore::poller::interval_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_poller_interval_get());
   return _tmp_ret;
}

inline bool eo_cxx::ecore::poller::interval_set(int interval_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_poller_interval_set(interval_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::eo_cxx::ecore::poller::operator ::ecore::poller() const
{
   return *static_cast<::ecore::poller const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::ecore::poller::operator ::ecore::poller&()
{
   return *static_cast<::ecore::poller*>(static_cast<void*>(this));
}

inline ::eo_cxx::ecore::poller::operator ::ecore::poller const&() const
{
   return *static_cast<::ecore::poller const*>(static_cast<void const*>(this));
}

template <typename T>
int ecore_poller_interval_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->interval_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
bool ecore_poller_interval_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int interval_)
{
   try
      {
         return static_cast<T*>(self->this_)->interval_set(interval_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::ecore::poller >
{
   template <typename T>
   struct type
         : virtual operations< ::eo::base >::template type<T>
   {
      virtual int interval_get()
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_poller_interval_get());
            return _tmp_ret;
      }

      virtual bool interval_set(int interval_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_poller_interval_set(interval_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

   };
};


template<>
struct operation_description_class_size< ::ecore::poller >
{
   static constexpr int value = 
#if defined(POLLER_PROTECTED) && defined(POLLER_BETA)
      2
#elif defined(POLLER_PROTECTED)
      2
#elif defined(POLLER_BETA)
      2
#else
      2
#endif
      + operation_description_class_size<::eo::base >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::ecore::poller>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::ecore_poller_interval_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_poller_interval_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::ecore_poller_interval_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_poller_interval_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::eo::base>(), &ops[operation_description_class_size< ::ecore::poller >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::ecore::poller>)
{
   return (ECORE_POLLER_CLASS);
}

} } }

/// @endcond


/// @cond EO_CXX_EO_IMPL

template <typename F_func_>
inline ::ecore::timer::_c_constructor<F_func_> ecore::timer::constructor(double in_, F_func_ && func_)
{
   return _c_constructor<F_func_>(in_, std::forward<F_func_>(func_));
}

template <typename F_func_>
inline ::ecore::timer::_c_loop_constructor<F_func_> ecore::timer::loop_constructor(double in_, F_func_ && func_)
{
   return _c_loop_constructor<F_func_>(in_, std::forward<F_func_>(func_));
}

inline void ecore::timer::reset() const
{
   eo_do(_concrete_eo_ptr(), ::ecore_obj_timer_reset());
}

inline void ecore::timer::delay(double add_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_obj_timer_delay(add_));
}

inline double ecore::timer::interval_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_obj_timer_interval_get());
   return _tmp_ret;
}

inline void ecore::timer::interval_set(double in_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_obj_timer_interval_set(in_));
}

inline double ecore::timer::pending_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_obj_timer_pending_get());
   return _tmp_ret;
}

inline void eo_cxx::ecore::timer::reset() const
{
   eo_do(_concrete_eo_ptr(), ::ecore_obj_timer_reset());
}

inline void eo_cxx::ecore::timer::delay(double add_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_obj_timer_delay(add_));
}

inline double eo_cxx::ecore::timer::interval_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_obj_timer_interval_get());
   return _tmp_ret;
}

inline void eo_cxx::ecore::timer::interval_set(double in_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_obj_timer_interval_set(in_));
}

inline double eo_cxx::ecore::timer::pending_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_obj_timer_pending_get());
   return _tmp_ret;
}

inline ::eo_cxx::ecore::timer::operator ::ecore::timer() const
{
   return *static_cast<::ecore::timer const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::ecore::timer::operator ::ecore::timer&()
{
   return *static_cast<::ecore::timer*>(static_cast<void*>(this));
}

inline ::eo_cxx::ecore::timer::operator ::ecore::timer const&() const
{
   return *static_cast<::ecore::timer const*>(static_cast<void const*>(this));
}

template <typename T>
void ecore_timer_reset_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->reset();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void ecore_timer_delay_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double add_)
{
   try
      {
         static_cast<T*>(self->this_)->delay(add_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double ecore_timer_interval_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->interval_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void ecore_timer_interval_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double in_)
{
   try
      {
         static_cast<T*>(self->this_)->interval_set(in_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double ecore_timer_pending_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->pending_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::ecore::timer >
{
   template <typename T>
   struct type
         : virtual operations< ::eo::base >::template type<T>
   {
      virtual void reset()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_obj_timer_reset());
      }

      virtual void delay(double add_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_obj_timer_delay(add_));
      }

      virtual double interval_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_obj_timer_interval_get());
            return _tmp_ret;
      }

      virtual void interval_set(double in_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_obj_timer_interval_set(in_));
      }

      virtual double pending_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_obj_timer_pending_get());
            return _tmp_ret;
      }

   };
};


template<>
struct operation_description_class_size< ::ecore::timer >
{
   static constexpr int value = 
#if defined(TIMER_PROTECTED) && defined(TIMER_BETA)
      5
#elif defined(TIMER_PROTECTED)
      5
#elif defined(TIMER_BETA)
      5
#else
      5
#endif
      + operation_description_class_size<::eo::base >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::ecore::timer>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::ecore_timer_reset_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_obj_timer_reset);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::ecore_timer_delay_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_obj_timer_delay);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::ecore_timer_interval_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_obj_timer_interval_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::ecore_timer_interval_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_obj_timer_interval_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::ecore_timer_pending_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_obj_timer_pending_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::eo::base>(), &ops[operation_description_class_size< ::ecore::timer >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::ecore::timer>)
{
   return (ECORE_TIMER_CLASS);
}

} } }

/// @endcond


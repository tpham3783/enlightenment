/// @cond EO_CXX_EO_IMPL

inline int efl::control::priority_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_control_priority_get());
   return _tmp_ret;
}

inline void efl::control::priority_set(int priority_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_control_priority_set(priority_));
}

inline bool efl::control::suspend_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_control_suspend_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void efl::control::suspend_set(bool suspend_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_control_suspend_set(::efl::eolian::to_c(suspend_)));
}

inline int eo_cxx::efl::control::priority_get() const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_control_priority_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::control::priority_set(int priority_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_control_priority_set(priority_));
}

inline bool eo_cxx::efl::control::suspend_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_control_suspend_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::efl::control::suspend_set(bool suspend_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_control_suspend_set(::efl::eolian::to_c(suspend_)));
}

inline ::eo_cxx::efl::control::operator ::efl::control() const
{
   return *static_cast<::efl::control const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::control::operator ::efl::control&()
{
   return *static_cast<::efl::control*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::control::operator ::efl::control const&() const
{
   return *static_cast<::efl::control const*>(static_cast<void const*>(this));
}

template <typename T>
int efl_control_priority_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->priority_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_control_priority_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int priority_)
{
   try
      {
         static_cast<T*>(self->this_)->priority_set(priority_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool efl_control_suspend_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->suspend_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void efl_control_suspend_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool suspend_)
{
   try
      {
         static_cast<T*>(self->this_)->suspend_set(::efl::eolian::to_cxx<bool>(suspend_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::control >
{
   template <typename T>
   struct type
   {
      virtual int priority_get()
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_control_priority_get());
            return _tmp_ret;
      }

      virtual void priority_set(int priority_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_control_priority_set(priority_));
      }

      virtual bool suspend_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_control_suspend_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void suspend_set(bool suspend_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_control_suspend_set(::efl::eolian::to_c(suspend_)));
      }

   };
};


template<>
struct operation_description_class_size< ::efl::control >
{
   static constexpr int value = 
#if defined(CONTROL_PROTECTED) && defined(CONTROL_BETA)
      4
#elif defined(CONTROL_PROTECTED)
      4
#elif defined(CONTROL_BETA)
      4
#else
      4
#endif
;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::control>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::efl_control_priority_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_control_priority_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_control_priority_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_control_priority_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_control_suspend_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_control_suspend_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_control_suspend_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_control_suspend_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::control>)
{
   return (EFL_CONTROL_INTERFACE);
}

} } }

/// @endcond


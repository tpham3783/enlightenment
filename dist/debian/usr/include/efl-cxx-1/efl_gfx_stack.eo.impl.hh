/// @cond EO_CXX_EO_IMPL

inline void efl::gfx::stack::stack_below(::efl::gfx::stack below_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_stack_below(::efl::eolian::to_c(below_)));
}

inline void efl::gfx::stack::raise() const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_stack_raise());
}

inline void efl::gfx::stack::stack_above(::efl::gfx::stack above_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_stack_above(::efl::eolian::to_c(above_)));
}

inline void efl::gfx::stack::lower() const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_stack_lower());
}

inline short efl::gfx::stack::layer_get() const
{
   short _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_stack_layer_get());
   return _tmp_ret;
}

inline void efl::gfx::stack::layer_set(short l_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_stack_layer_set(l_));
}

inline ::efl::gfx::stack efl::gfx::stack::below_get() const
{
   Efl_Gfx_Stack * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_stack_below_get());
   return ::efl::eolian::to_cxx<::efl::gfx::stack>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::gfx::stack efl::gfx::stack::above_get() const
{
   Efl_Gfx_Stack * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_stack_above_get());
   return ::efl::eolian::to_cxx<::efl::gfx::stack>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::efl::gfx::stack::stack_below(::efl::gfx::stack below_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_stack_below(::efl::eolian::to_c(below_)));
}

inline void eo_cxx::efl::gfx::stack::raise() const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_stack_raise());
}

inline void eo_cxx::efl::gfx::stack::stack_above(::efl::gfx::stack above_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_stack_above(::efl::eolian::to_c(above_)));
}

inline void eo_cxx::efl::gfx::stack::lower() const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_stack_lower());
}

inline short eo_cxx::efl::gfx::stack::layer_get() const
{
   short _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_stack_layer_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::gfx::stack::layer_set(short l_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_stack_layer_set(l_));
}

inline ::efl::gfx::stack eo_cxx::efl::gfx::stack::below_get() const
{
   Efl_Gfx_Stack * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_stack_below_get());
   return ::efl::eolian::to_cxx<::efl::gfx::stack>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::gfx::stack eo_cxx::efl::gfx::stack::above_get() const
{
   Efl_Gfx_Stack * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_stack_above_get());
   return ::efl::eolian::to_cxx<::efl::gfx::stack>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::eo_cxx::efl::gfx::stack::operator ::efl::gfx::stack() const
{
   return *static_cast<::efl::gfx::stack const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::gfx::stack::operator ::efl::gfx::stack&()
{
   return *static_cast<::efl::gfx::stack*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::gfx::stack::operator ::efl::gfx::stack const&() const
{
   return *static_cast<::efl::gfx::stack const*>(static_cast<void const*>(this));
}

template <typename T>
void efl_gfx_stack_stack_below_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Efl_Gfx_Stack * below_)
{
   try
      {
         static_cast<T*>(self->this_)->stack_below(::efl::eolian::to_cxx<::efl::gfx::stack>(below_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_stack_raise_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->raise();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_stack_stack_above_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Efl_Gfx_Stack * above_)
{
   try
      {
         static_cast<T*>(self->this_)->stack_above(::efl::eolian::to_cxx<::efl::gfx::stack>(above_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_stack_lower_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->lower();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
short efl_gfx_stack_layer_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->layer_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         short _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_gfx_stack_layer_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, short l_)
{
   try
      {
         static_cast<T*>(self->this_)->layer_set(l_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::gfx::stack efl_gfx_stack_below_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->below_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_Gfx_Stack * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::gfx::stack>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::efl::gfx::stack efl_gfx_stack_above_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->above_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_Gfx_Stack * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::gfx::stack>(_tmp_ret, std::tuple<std::false_type>());
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::gfx::stack >
{
   template <typename T>
   struct type
   {
      virtual void stack_below(::efl::gfx::stack below_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_stack_below(::efl::eolian::to_c(below_)));
      }

      virtual void raise()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_stack_raise());
      }

      virtual void stack_above(::efl::gfx::stack above_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_stack_above(::efl::eolian::to_c(above_)));
      }

      virtual void lower()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_stack_lower());
      }

      virtual short layer_get()
      {
         short _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_gfx_stack_layer_get());
            return _tmp_ret;
      }

      virtual void layer_set(short l_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_stack_layer_set(l_));
      }

      virtual ::efl::gfx::stack below_get()
      {
         Efl_Gfx_Stack * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_gfx_stack_below_get());
            return ::efl::eolian::to_cxx<::efl::gfx::stack>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::efl::gfx::stack above_get()
      {
         Efl_Gfx_Stack * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_gfx_stack_above_get());
            return ::efl::eolian::to_cxx<::efl::gfx::stack>(_tmp_ret, std::tuple<std::false_type>());
      }

   };
};


template<>
struct operation_description_class_size< ::efl::gfx::stack >
{
   static constexpr int value = 
#if defined(STACK_PROTECTED) && defined(STACK_BETA)
      8
#elif defined(STACK_PROTECTED)
      8
#elif defined(STACK_BETA)
      8
#else
      8
#endif
;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::gfx::stack>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_stack_stack_below_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_stack_below);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_stack_raise_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_stack_raise);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_stack_stack_above_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_stack_above);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_stack_lower_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_stack_lower);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_stack_layer_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_stack_layer_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_stack_layer_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_stack_layer_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_stack_below_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_stack_below_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_stack_above_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_stack_above_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::gfx::stack>)
{
   return (EFL_GFX_STACK_INTERFACE);
}

} } }

/// @endcond


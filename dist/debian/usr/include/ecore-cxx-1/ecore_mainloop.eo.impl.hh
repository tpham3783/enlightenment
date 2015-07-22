/// @cond EO_CXX_EO_IMPL

inline void ecore_mainloop::iterate() const
{
   eo_do(_concrete_eo_ptr(), ::ecore_mainloop_iterate());
}

inline int ecore_mainloop::iterate_may_block(int may_block_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_mainloop_iterate_may_block(may_block_));
   return _tmp_ret;
}

inline void ecore_mainloop::begin() const
{
   eo_do(_concrete_eo_ptr(), ::ecore_mainloop_begin());
}

inline void ecore_mainloop::quit() const
{
   eo_do(_concrete_eo_ptr(), ::ecore_mainloop_quit());
}

inline bool ecore_mainloop::animator_ticked() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_mainloop_animator_ticked());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline Ecore_Select_Function ecore_mainloop::select_func_get() const
{
   Ecore_Select_Function _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_mainloop_select_func_get());
   return _tmp_ret;
}

inline void ecore_mainloop::select_func_set(Ecore_Select_Function select_func_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_mainloop_select_func_set(select_func_));
}

inline void eo_cxx::ecore_mainloop::iterate() const
{
   eo_do(_concrete_eo_ptr(), ::ecore_mainloop_iterate());
}

inline int eo_cxx::ecore_mainloop::iterate_may_block(int may_block_) const
{
   int _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_mainloop_iterate_may_block(may_block_));
   return _tmp_ret;
}

inline void eo_cxx::ecore_mainloop::begin() const
{
   eo_do(_concrete_eo_ptr(), ::ecore_mainloop_begin());
}

inline void eo_cxx::ecore_mainloop::quit() const
{
   eo_do(_concrete_eo_ptr(), ::ecore_mainloop_quit());
}

inline bool eo_cxx::ecore_mainloop::animator_ticked() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_mainloop_animator_ticked());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline Ecore_Select_Function eo_cxx::ecore_mainloop::select_func_get() const
{
   Ecore_Select_Function _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::ecore_mainloop_select_func_get());
   return _tmp_ret;
}

inline void eo_cxx::ecore_mainloop::select_func_set(Ecore_Select_Function select_func_) const
{
   eo_do(_concrete_eo_ptr(), ::ecore_mainloop_select_func_set(select_func_));
}

inline ::eo_cxx::ecore_mainloop::operator ::ecore_mainloop() const
{
   return *static_cast<::ecore_mainloop const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::ecore_mainloop::operator ::ecore_mainloop&()
{
   return *static_cast<::ecore_mainloop*>(static_cast<void*>(this));
}

inline ::eo_cxx::ecore_mainloop::operator ::ecore_mainloop const&() const
{
   return *static_cast<::ecore_mainloop const*>(static_cast<void const*>(this));
}

template <typename T>
void _ecore_mainloop_iterate_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->iterate();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
int _ecore_mainloop_iterate_may_block_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int may_block_)
{
   try
      {
         return static_cast<T*>(self->this_)->iterate_may_block(may_block_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         int _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void _ecore_mainloop_begin_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->begin();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void _ecore_mainloop_quit_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->quit();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool _ecore_mainloop_animator_ticked_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->animator_ticked();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
Ecore_Select_Function _ecore_mainloop_select_func_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->select_func_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Ecore_Select_Function _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void _ecore_mainloop_select_func_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Ecore_Select_Function select_func_)
{
   try
      {
         static_cast<T*>(self->this_)->select_func_set(select_func_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::ecore_mainloop >
{
   template <typename T>
   struct type
         : virtual operations< ::eo::base >::template type<T>
   {
      virtual void iterate()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_mainloop_iterate());
      }

      virtual int iterate_may_block(int may_block_)
      {
         int _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_mainloop_iterate_may_block(may_block_));
            return _tmp_ret;
      }

      virtual void begin()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_mainloop_begin());
      }

      virtual void quit()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_mainloop_quit());
      }

      virtual bool animator_ticked()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_mainloop_animator_ticked());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual Ecore_Select_Function select_func_get()
      {
         Ecore_Select_Function _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::ecore_mainloop_select_func_get());
            return _tmp_ret;
      }

      virtual void select_func_set(Ecore_Select_Function select_func_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::ecore_mainloop_select_func_set(select_func_));
      }

   };
};


template<>
struct operation_description_class_size< ::ecore_mainloop >
{
   static constexpr int value = 
#if defined(ECORE_MAINLOOP_PROTECTED) && defined(ECORE_MAINLOOP_BETA)
      7
#elif defined(ECORE_MAINLOOP_PROTECTED)
      7
#elif defined(ECORE_MAINLOOP_BETA)
      7
#else
      7
#endif
      + operation_description_class_size<::eo::base >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::ecore_mainloop>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::_ecore_mainloop_iterate_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_mainloop_iterate);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_mainloop_iterate_may_block_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_mainloop_iterate_may_block);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_mainloop_begin_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_mainloop_begin);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_mainloop_quit_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_mainloop_quit);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_mainloop_animator_ticked_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_mainloop_animator_ticked);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_mainloop_select_func_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_mainloop_select_func_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::_ecore_mainloop_select_func_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::ecore_mainloop_select_func_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::eo::base>(), &ops[operation_description_class_size< ::ecore_mainloop >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::ecore_mainloop>)
{
   return (ECORE_MAINLOOP_CLASS);
}

} } }

/// @endcond


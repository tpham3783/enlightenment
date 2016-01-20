/// @cond EO_CXX_EO_IMPL

#ifdef FILTER_PROTECTED
inline void evas::filter::ctor() const
{
   eo_do(_concrete_eo_ptr(), ::evas_filter_ctor());
}
#endif

#ifdef FILTER_PROTECTED
inline void evas::filter::dtor() const
{
   eo_do(_concrete_eo_ptr(), ::evas_filter_dtor());
}
#endif

#ifdef FILTER_PROTECTED
inline bool evas::filter::input_alpha() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_filter_input_alpha());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}
#endif

#ifdef FILTER_PROTECTED
inline bool evas::filter::input_render(void * filter_, void * drawctx_, int l_, int r_, int t_, int b_, bool do_async_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_filter_input_render(filter_, drawctx_, l_, r_, t_, b_, ::efl::eolian::to_c(do_async_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}
#endif

#ifdef FILTER_PROTECTED
inline void evas::filter::dirty() const
{
   eo_do(_concrete_eo_ptr(), ::evas_filter_dirty());
}
#endif

#ifdef FILTER_PROTECTED
inline void evas::filter::changed_set(bool val_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_filter_changed_set(::efl::eolian::to_c(val_)));
}
#endif

#ifdef FILTER_PROTECTED
inline void evas::filter::invalid_set(bool val_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_filter_invalid_set(::efl::eolian::to_c(val_)));
}
#endif

#ifdef FILTER_PROTECTED
inline void * evas::filter::output_buffer_get() const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_filter_output_buffer_get());
   return _tmp_ret;
}
#endif

#ifdef FILTER_PROTECTED
inline void eo_cxx::evas::filter::ctor() const
{
   eo_do(_concrete_eo_ptr(), ::evas_filter_ctor());
}
#endif

#ifdef FILTER_PROTECTED
inline void eo_cxx::evas::filter::dtor() const
{
   eo_do(_concrete_eo_ptr(), ::evas_filter_dtor());
}
#endif

#ifdef FILTER_PROTECTED
inline bool eo_cxx::evas::filter::input_alpha() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_filter_input_alpha());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}
#endif

#ifdef FILTER_PROTECTED
inline bool eo_cxx::evas::filter::input_render(void * filter_, void * drawctx_, int l_, int r_, int t_, int b_, bool do_async_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_filter_input_render(filter_, drawctx_, l_, r_, t_, b_, ::efl::eolian::to_c(do_async_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}
#endif

#ifdef FILTER_PROTECTED
inline void eo_cxx::evas::filter::dirty() const
{
   eo_do(_concrete_eo_ptr(), ::evas_filter_dirty());
}
#endif

#ifdef FILTER_PROTECTED
inline void eo_cxx::evas::filter::changed_set(bool val_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_filter_changed_set(::efl::eolian::to_c(val_)));
}
#endif

#ifdef FILTER_PROTECTED
inline void eo_cxx::evas::filter::invalid_set(bool val_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_filter_invalid_set(::efl::eolian::to_c(val_)));
}
#endif

#ifdef FILTER_PROTECTED
inline void * eo_cxx::evas::filter::output_buffer_get() const
{
   void * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_filter_output_buffer_get());
   return _tmp_ret;
}
#endif

inline ::eo_cxx::evas::filter::operator ::evas::filter() const
{
   return *static_cast<::evas::filter const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::filter::operator ::evas::filter&()
{
   return *static_cast<::evas::filter*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::filter::operator ::evas::filter const&() const
{
   return *static_cast<::evas::filter const*>(static_cast<void const*>(this));
}

#ifdef FILTER_PROTECTED
template <typename T>
void evas_filter_ctor_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->ctor();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}
#endif

#ifdef FILTER_PROTECTED
template <typename T>
void evas_filter_dtor_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->dtor();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}
#endif

#ifdef FILTER_PROTECTED
template <typename T>
bool evas_filter_input_alpha_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->input_alpha();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}
#endif

#ifdef FILTER_PROTECTED
template <typename T>
bool evas_filter_input_render_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, void * filter_, void * drawctx_, int l_, int r_, int t_, int b_, Eina_Bool do_async_)
{
   try
      {
         return static_cast<T*>(self->this_)->input_render(filter_, drawctx_, l_, r_, t_, b_, ::efl::eolian::to_cxx<bool>(do_async_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}
#endif

#ifdef FILTER_PROTECTED
template <typename T>
void evas_filter_dirty_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->dirty();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}
#endif

#ifdef FILTER_PROTECTED
template <typename T>
void evas_filter_changed_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool val_)
{
   try
      {
         static_cast<T*>(self->this_)->changed_set(::efl::eolian::to_cxx<bool>(val_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}
#endif

#ifdef FILTER_PROTECTED
template <typename T>
void evas_filter_invalid_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool val_)
{
   try
      {
         static_cast<T*>(self->this_)->invalid_set(::efl::eolian::to_cxx<bool>(val_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}
#endif

#ifdef FILTER_PROTECTED
template <typename T>
void * evas_filter_output_buffer_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->output_buffer_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         void * _tmp_ret{};
         return _tmp_ret;
      }
}
#endif

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::filter >
{
   template <typename T>
   struct type
         : virtual operations< ::efl::gfx::filter >::template type<T>
   {
#ifdef FILTER_PROTECTED
      virtual void ctor()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_filter_ctor());
      }
#endif

#ifdef FILTER_PROTECTED
      virtual void dtor()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_filter_dtor());
      }
#endif

#ifdef FILTER_PROTECTED
      virtual bool input_alpha()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_filter_input_alpha());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
#endif

#ifdef FILTER_PROTECTED
      virtual bool input_render(void * filter_, void * drawctx_, int l_, int r_, int t_, int b_, bool do_async_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_filter_input_render(filter_, drawctx_, l_, r_, t_, b_, ::efl::eolian::to_c(do_async_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
#endif

#ifdef FILTER_PROTECTED
      virtual void dirty()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_filter_dirty());
      }
#endif

#ifdef FILTER_PROTECTED
      virtual void changed_set(bool val_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_filter_changed_set(::efl::eolian::to_c(val_)));
      }
#endif

#ifdef FILTER_PROTECTED
      virtual void invalid_set(bool val_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_filter_invalid_set(::efl::eolian::to_c(val_)));
      }
#endif

#ifdef FILTER_PROTECTED
      virtual void * output_buffer_get()
      {
         void * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_filter_output_buffer_get());
            return _tmp_ret;
      }
#endif

   };
};


template<>
struct operation_description_class_size< ::evas::filter >
{
   static constexpr int value = 
#if defined(FILTER_PROTECTED) && defined(FILTER_BETA)
      8
#elif defined(FILTER_PROTECTED)
      8
#elif defined(FILTER_BETA)
      0
#else
      0
#endif
      + operation_description_class_size<::efl::gfx::filter >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::filter>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
#ifdef FILTER_PROTECTED
   ops[i].func = reinterpret_cast<void*>(& ::evas_filter_ctor_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_filter_ctor);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;
#endif

#ifdef FILTER_PROTECTED
   ops[i].func = reinterpret_cast<void*>(& ::evas_filter_dtor_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_filter_dtor);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;
#endif

#ifdef FILTER_PROTECTED
   ops[i].func = reinterpret_cast<void*>(& ::evas_filter_input_alpha_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_filter_input_alpha);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;
#endif

#ifdef FILTER_PROTECTED
   ops[i].func = reinterpret_cast<void*>(& ::evas_filter_input_render_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_filter_input_render);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;
#endif

#ifdef FILTER_PROTECTED
   ops[i].func = reinterpret_cast<void*>(& ::evas_filter_dirty_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_filter_dirty);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;
#endif

#ifdef FILTER_PROTECTED
   ops[i].func = reinterpret_cast<void*>(& ::evas_filter_changed_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_filter_changed_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;
#endif

#ifdef FILTER_PROTECTED
   ops[i].func = reinterpret_cast<void*>(& ::evas_filter_invalid_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_filter_invalid_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;
#endif

#ifdef FILTER_PROTECTED
   ops[i].func = reinterpret_cast<void*>(& ::evas_filter_output_buffer_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_filter_output_buffer_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;
#endif

   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::gfx::filter>(), &ops[operation_description_class_size< ::evas::filter >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::filter>)
{
   return (EVAS_FILTER_MIXIN);
}

} } }

/// @endcond


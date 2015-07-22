/// @cond EO_CXX_EO_IMPL

inline void evas::out::view_get(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_out_view_get(x_, y_, w_, h_));
}

inline void evas::out::view_set(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_out_view_set(x_, y_, w_, h_));
}

inline Evas_Engine_Info * evas::out::engine_info_get() const
{
   Evas_Engine_Info * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_out_engine_info_get());
   return _tmp_ret;
}

inline bool evas::out::engine_info_set(Evas_Engine_Info * info_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_out_engine_info_set(info_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::out::view_get(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_out_view_get(x_, y_, w_, h_));
}

inline void eo_cxx::evas::out::view_set(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_out_view_set(x_, y_, w_, h_));
}

inline Evas_Engine_Info * eo_cxx::evas::out::engine_info_get() const
{
   Evas_Engine_Info * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_out_engine_info_get());
   return _tmp_ret;
}

inline bool eo_cxx::evas::out::engine_info_set(Evas_Engine_Info * info_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_out_engine_info_set(info_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::eo_cxx::evas::out::operator ::evas::out() const
{
   return *static_cast<::evas::out const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::out::operator ::evas::out&()
{
   return *static_cast<::evas::out*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::out::operator ::evas::out const&() const
{
   return *static_cast<::evas::out const*>(static_cast<void const*>(this));
}

template <typename T>
void evas_out_view_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_)
{
   try
      {
         static_cast<T*>(self->this_)->view_get(x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_out_view_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_)
{
   try
      {
         static_cast<T*>(self->this_)->view_set(x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Engine_Info * evas_out_engine_info_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->engine_info_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Engine_Info * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
bool evas_out_engine_info_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Engine_Info * info_)
{
   try
      {
         return static_cast<T*>(self->this_)->engine_info_set(info_);
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
struct operations< ::evas::out >
{
   template <typename T>
   struct type
         : virtual operations< ::eo::base >::template type<T>
   {
      virtual void view_get(Evas_Coord* x_, Evas_Coord* y_, Evas_Coord* w_, Evas_Coord* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_out_view_get(x_, y_, w_, h_));
      }

      virtual void view_set(Evas_Coord x_, Evas_Coord y_, Evas_Coord w_, Evas_Coord h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_out_view_set(x_, y_, w_, h_));
      }

      virtual Evas_Engine_Info * engine_info_get()
      {
         Evas_Engine_Info * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_out_engine_info_get());
            return _tmp_ret;
      }

      virtual bool engine_info_set(Evas_Engine_Info * info_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_out_engine_info_set(info_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

   };
};


template<>
struct operation_description_class_size< ::evas::out >
{
   static constexpr int value = 
#if defined(OUT_PROTECTED) && defined(OUT_BETA)
      4
#elif defined(OUT_PROTECTED)
      4
#elif defined(OUT_BETA)
      4
#else
      4
#endif
      + operation_description_class_size<::eo::base >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::out>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_out_view_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_out_view_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_out_view_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_out_view_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_out_engine_info_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_out_engine_info_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_out_engine_info_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_out_engine_info_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::eo::base>(), &ops[operation_description_class_size< ::evas::out >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::out>)
{
   return (EVAS_OUT_CLASS);
}

} } }

/// @endcond


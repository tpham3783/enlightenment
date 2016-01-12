/// @cond EO_CXX_EO_IMPL

inline Efl_Gfx_Fill_Spread efl::gfx::fill::fill_spread_get() const
{
   Efl_Gfx_Fill_Spread _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_fill_spread_get());
   return _tmp_ret;
}

inline void efl::gfx::fill::fill_spread_set(Efl_Gfx_Fill_Spread spread_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_fill_spread_set(spread_));
}

inline void efl::gfx::fill::fill_get(int* x_, int* y_, int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_fill_get(x_, y_, w_, h_));
}

inline void efl::gfx::fill::fill_set(int x_, int y_, int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_fill_set(x_, y_, w_, h_));
}

inline Efl_Gfx_Fill_Spread eo_cxx::efl::gfx::fill::fill_spread_get() const
{
   Efl_Gfx_Fill_Spread _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_fill_spread_get());
   return _tmp_ret;
}

inline void eo_cxx::efl::gfx::fill::fill_spread_set(Efl_Gfx_Fill_Spread spread_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_fill_spread_set(spread_));
}

inline void eo_cxx::efl::gfx::fill::fill_get(int* x_, int* y_, int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_fill_get(x_, y_, w_, h_));
}

inline void eo_cxx::efl::gfx::fill::fill_set(int x_, int y_, int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_fill_set(x_, y_, w_, h_));
}

inline ::eo_cxx::efl::gfx::fill::operator ::efl::gfx::fill() const
{
   return *static_cast<::efl::gfx::fill const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::gfx::fill::operator ::efl::gfx::fill&()
{
   return *static_cast<::efl::gfx::fill*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::gfx::fill::operator ::efl::gfx::fill const&() const
{
   return *static_cast<::efl::gfx::fill const*>(static_cast<void const*>(this));
}

template <typename T>
Efl_Gfx_Fill_Spread efl_gfx_fill_fill_spread_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->fill_spread_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Efl_Gfx_Fill_Spread _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void efl_gfx_fill_fill_spread_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Efl_Gfx_Fill_Spread spread_)
{
   try
      {
         static_cast<T*>(self->this_)->fill_spread_set(spread_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_fill_fill_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* x_, int* y_, int* w_, int* h_)
{
   try
      {
         static_cast<T*>(self->this_)->fill_get(x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_fill_fill_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int x_, int y_, int w_, int h_)
{
   try
      {
         static_cast<T*>(self->this_)->fill_set(x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::gfx::fill >
{
   template <typename T>
   struct type
   {
      virtual Efl_Gfx_Fill_Spread fill_spread_get()
      {
         Efl_Gfx_Fill_Spread _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_gfx_fill_spread_get());
            return _tmp_ret;
      }

      virtual void fill_spread_set(Efl_Gfx_Fill_Spread spread_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_fill_spread_set(spread_));
      }

      virtual void fill_get(int* x_, int* y_, int* w_, int* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_fill_get(x_, y_, w_, h_));
      }

      virtual void fill_set(int x_, int y_, int w_, int h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_fill_set(x_, y_, w_, h_));
      }

   };
};


template<>
struct operation_description_class_size< ::efl::gfx::fill >
{
   static constexpr int value = 
#if defined(FILL_PROTECTED) && defined(FILL_BETA)
      4
#elif defined(FILL_PROTECTED)
      4
#elif defined(FILL_BETA)
      4
#else
      4
#endif
;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::gfx::fill>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_fill_fill_spread_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_fill_spread_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_fill_fill_spread_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_fill_spread_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_fill_fill_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_fill_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_fill_fill_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_fill_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::gfx::fill>)
{
   return (EFL_GFX_FILL_INTERFACE);
}

} } }

/// @endcond


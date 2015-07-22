/// @cond EO_CXX_EO_IMPL

inline void efl::gfx::view::size_get(int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_view_size_get(w_, h_));
}

inline void efl::gfx::view::size_set(int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_view_size_set(w_, h_));
}

inline void eo_cxx::efl::gfx::view::size_get(int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_view_size_get(w_, h_));
}

inline void eo_cxx::efl::gfx::view::size_set(int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_view_size_set(w_, h_));
}

inline ::eo_cxx::efl::gfx::view::operator ::efl::gfx::view() const
{
   return *static_cast<::efl::gfx::view const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::gfx::view::operator ::efl::gfx::view&()
{
   return *static_cast<::efl::gfx::view*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::gfx::view::operator ::efl::gfx::view const&() const
{
   return *static_cast<::efl::gfx::view const*>(static_cast<void const*>(this));
}

template <typename T>
void efl_gfx_view_size_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* w_, int* h_)
{
   try
      {
         static_cast<T*>(self->this_)->size_get(w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_view_size_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int w_, int h_)
{
   try
      {
         static_cast<T*>(self->this_)->size_set(w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::gfx::view >
{
   template <typename T>
   struct type
   {
      virtual void size_get(int* w_, int* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_view_size_get(w_, h_));
      }

      virtual void size_set(int w_, int h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_view_size_set(w_, h_));
      }

   };
};


template<>
struct operation_description_class_size< ::efl::gfx::view >
{
   static constexpr int value = 
#if defined(VIEW_PROTECTED) && defined(VIEW_BETA)
      2
#elif defined(VIEW_PROTECTED)
      2
#elif defined(VIEW_BETA)
      2
#else
      2
#endif
;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::gfx::view>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_view_size_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_view_size_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_view_size_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_view_size_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::gfx::view>)
{
   return (EFL_GFX_VIEW_INTERFACE);
}

} } }

/// @endcond


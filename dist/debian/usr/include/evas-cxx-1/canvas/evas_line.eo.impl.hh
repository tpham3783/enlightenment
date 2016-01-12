/// @cond EO_CXX_EO_IMPL

inline void evas::line::xy_get(Evas_Coord* x1_, Evas_Coord* y1_, Evas_Coord* x2_, Evas_Coord* y2_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_line_xy_get(x1_, y1_, x2_, y2_));
}

inline void evas::line::xy_set(Evas_Coord x1_, Evas_Coord y1_, Evas_Coord x2_, Evas_Coord y2_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_line_xy_set(x1_, y1_, x2_, y2_));
}

inline void eo_cxx::evas::line::xy_get(Evas_Coord* x1_, Evas_Coord* y1_, Evas_Coord* x2_, Evas_Coord* y2_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_line_xy_get(x1_, y1_, x2_, y2_));
}

inline void eo_cxx::evas::line::xy_set(Evas_Coord x1_, Evas_Coord y1_, Evas_Coord x2_, Evas_Coord y2_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_line_xy_set(x1_, y1_, x2_, y2_));
}

inline ::eo_cxx::evas::line::operator ::evas::line() const
{
   return *static_cast<::evas::line const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::line::operator ::evas::line&()
{
   return *static_cast<::evas::line*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::line::operator ::evas::line const&() const
{
   return *static_cast<::evas::line const*>(static_cast<void const*>(this));
}

template <typename T>
void evas_line_xy_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* x1_, Evas_Coord* y1_, Evas_Coord* x2_, Evas_Coord* y2_)
{
   try
      {
         static_cast<T*>(self->this_)->xy_get(x1_, y1_, x2_, y2_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_line_xy_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord x1_, Evas_Coord y1_, Evas_Coord x2_, Evas_Coord y2_)
{
   try
      {
         static_cast<T*>(self->this_)->xy_set(x1_, y1_, x2_, y2_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::line >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::object >::template type<T>
   {
      virtual void xy_get(Evas_Coord* x1_, Evas_Coord* y1_, Evas_Coord* x2_, Evas_Coord* y2_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_line_xy_get(x1_, y1_, x2_, y2_));
      }

      virtual void xy_set(Evas_Coord x1_, Evas_Coord y1_, Evas_Coord x2_, Evas_Coord y2_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_line_xy_set(x1_, y1_, x2_, y2_));
      }

   };
};


template<>
struct operation_description_class_size< ::evas::line >
{
   static constexpr int value = 
#if defined(LINE_PROTECTED) && defined(LINE_BETA)
      2
#elif defined(LINE_PROTECTED)
      2
#elif defined(LINE_BETA)
      2
#else
      2
#endif
      + operation_description_class_size<::evas::object >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::line>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_line_xy_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_line_xy_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_line_xy_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_line_xy_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::object>(), &ops[operation_description_class_size< ::evas::line >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::line>)
{
   return (EVAS_LINE_CLASS);
}

} } }

/// @endcond


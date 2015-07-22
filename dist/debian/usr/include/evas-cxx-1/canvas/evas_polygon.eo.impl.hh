/// @cond EO_CXX_EO_IMPL

inline void evas::polygon::point_add(Evas_Coord x_, Evas_Coord y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_polygon_point_add(x_, y_));
}

inline void evas::polygon::points_clear() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_polygon_points_clear());
}

inline void eo_cxx::evas::polygon::point_add(Evas_Coord x_, Evas_Coord y_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_polygon_point_add(x_, y_));
}

inline void eo_cxx::evas::polygon::points_clear() const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_polygon_points_clear());
}

inline ::eo_cxx::evas::polygon::operator ::evas::polygon() const
{
   return *static_cast<::evas::polygon const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::polygon::operator ::evas::polygon&()
{
   return *static_cast<::evas::polygon*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::polygon::operator ::evas::polygon const&() const
{
   return *static_cast<::evas::polygon const*>(static_cast<void const*>(this));
}

template <typename T>
void evas_polygon_point_add_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord x_, Evas_Coord y_)
{
   try
      {
         static_cast<T*>(self->this_)->point_add(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_polygon_points_clear_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         static_cast<T*>(self->this_)->points_clear();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::polygon >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::object >::template type<T>
   {
      virtual void point_add(Evas_Coord x_, Evas_Coord y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_polygon_point_add(x_, y_));
      }

      virtual void points_clear()
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_polygon_points_clear());
      }

   };
};


template<>
struct operation_description_class_size< ::evas::polygon >
{
   static constexpr int value = 
#if defined(POLYGON_PROTECTED) && defined(POLYGON_BETA)
      2
#elif defined(POLYGON_PROTECTED)
      2
#elif defined(POLYGON_BETA)
      2
#else
      2
#endif
      + operation_description_class_size<::evas::object >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::polygon>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_polygon_point_add_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_polygon_point_add);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_polygon_points_clear_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_polygon_points_clear);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::object>(), &ops[operation_description_class_size< ::evas::polygon >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::polygon>)
{
   return (EVAS_POLYGON_CLASS);
}

} } }

/// @endcond


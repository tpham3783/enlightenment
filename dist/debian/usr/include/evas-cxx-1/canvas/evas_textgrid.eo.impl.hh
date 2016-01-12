/// @cond EO_CXX_EO_IMPL

inline void evas::textgrid::update_add(int x_, int y_, int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textgrid_update_add(x_, y_, w_, h_));
}

inline void evas::textgrid::cellrow_set(int y_, const Evas_Textgrid_Cell * row_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textgrid_cellrow_set(y_, row_));
}

inline Evas_Textgrid_Cell * evas::textgrid::cellrow_get(int y_) const
{
   Evas_Textgrid_Cell * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textgrid_cellrow_get(y_));
   return _tmp_ret;
}

inline void evas::textgrid::palette_set(Evas_Textgrid_Palette pal_, int idx_, int r_, int g_, int b_, int a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textgrid_palette_set(pal_, idx_, r_, g_, b_, a_));
}

inline void evas::textgrid::palette_get(Evas_Textgrid_Palette pal_, int idx_, int* r_, int* g_, int* b_, int* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textgrid_palette_get(pal_, idx_, r_, g_, b_, a_));
}

inline Evas_Textgrid_Font_Style evas::textgrid::supported_font_styles_get() const
{
   Evas_Textgrid_Font_Style _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textgrid_supported_font_styles_get());
   return _tmp_ret;
}

inline void evas::textgrid::supported_font_styles_set(Evas_Textgrid_Font_Style styles_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textgrid_supported_font_styles_set(styles_));
}

inline void evas::textgrid::size_get(int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textgrid_size_get(w_, h_));
}

inline void evas::textgrid::size_set(int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textgrid_size_set(w_, h_));
}

inline void evas::textgrid::cell_size_get(int* width_, int* height_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textgrid_cell_size_get(width_, height_));
}

inline void eo_cxx::evas::textgrid::update_add(int x_, int y_, int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textgrid_update_add(x_, y_, w_, h_));
}

inline void eo_cxx::evas::textgrid::cellrow_set(int y_, const Evas_Textgrid_Cell * row_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textgrid_cellrow_set(y_, row_));
}

inline Evas_Textgrid_Cell * eo_cxx::evas::textgrid::cellrow_get(int y_) const
{
   Evas_Textgrid_Cell * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textgrid_cellrow_get(y_));
   return _tmp_ret;
}

inline void eo_cxx::evas::textgrid::palette_set(Evas_Textgrid_Palette pal_, int idx_, int r_, int g_, int b_, int a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textgrid_palette_set(pal_, idx_, r_, g_, b_, a_));
}

inline void eo_cxx::evas::textgrid::palette_get(Evas_Textgrid_Palette pal_, int idx_, int* r_, int* g_, int* b_, int* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textgrid_palette_get(pal_, idx_, r_, g_, b_, a_));
}

inline Evas_Textgrid_Font_Style eo_cxx::evas::textgrid::supported_font_styles_get() const
{
   Evas_Textgrid_Font_Style _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_textgrid_supported_font_styles_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::textgrid::supported_font_styles_set(Evas_Textgrid_Font_Style styles_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textgrid_supported_font_styles_set(styles_));
}

inline void eo_cxx::evas::textgrid::size_get(int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textgrid_size_get(w_, h_));
}

inline void eo_cxx::evas::textgrid::size_set(int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textgrid_size_set(w_, h_));
}

inline void eo_cxx::evas::textgrid::cell_size_get(int* width_, int* height_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_textgrid_cell_size_get(width_, height_));
}

inline ::eo_cxx::evas::textgrid::operator ::evas::textgrid() const
{
   return *static_cast<::evas::textgrid const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::textgrid::operator ::evas::textgrid&()
{
   return *static_cast<::evas::textgrid*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::textgrid::operator ::evas::textgrid const&() const
{
   return *static_cast<::evas::textgrid const*>(static_cast<void const*>(this));
}

template <typename T>
void evas_textgrid_update_add_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int x_, int y_, int w_, int h_)
{
   try
      {
         static_cast<T*>(self->this_)->update_add(x_, y_, w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_textgrid_cellrow_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int y_, const Evas_Textgrid_Cell * row_)
{
   try
      {
         static_cast<T*>(self->this_)->cellrow_set(y_, row_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Textgrid_Cell * evas_textgrid_cellrow_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int y_)
{
   try
      {
         return static_cast<T*>(self->this_)->cellrow_get(y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Textgrid_Cell * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_textgrid_palette_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Textgrid_Palette pal_, int idx_, int r_, int g_, int b_, int a_)
{
   try
      {
         static_cast<T*>(self->this_)->palette_set(pal_, idx_, r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_textgrid_palette_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Textgrid_Palette pal_, int idx_, int* r_, int* g_, int* b_, int* a_)
{
   try
      {
         static_cast<T*>(self->this_)->palette_get(pal_, idx_, r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Textgrid_Font_Style evas_textgrid_supported_font_styles_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->supported_font_styles_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Textgrid_Font_Style _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_textgrid_supported_font_styles_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Textgrid_Font_Style styles_)
{
   try
      {
         static_cast<T*>(self->this_)->supported_font_styles_set(styles_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_textgrid_size_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* w_, int* h_)
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
void evas_textgrid_size_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int w_, int h_)
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

template <typename T>
void evas_textgrid_cell_size_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* width_, int* height_)
{
   try
      {
         static_cast<T*>(self->this_)->cell_size_get(width_, height_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::textgrid >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::object >::template type<T>
         , virtual operations< ::efl::text_properties >::template type<T>
   {
      virtual void update_add(int x_, int y_, int w_, int h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textgrid_update_add(x_, y_, w_, h_));
      }

      virtual void cellrow_set(int y_, const Evas_Textgrid_Cell * row_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textgrid_cellrow_set(y_, row_));
      }

      virtual Evas_Textgrid_Cell * cellrow_get(int y_)
      {
         Evas_Textgrid_Cell * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_textgrid_cellrow_get(y_));
            return _tmp_ret;
      }

      virtual void palette_set(Evas_Textgrid_Palette pal_, int idx_, int r_, int g_, int b_, int a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textgrid_palette_set(pal_, idx_, r_, g_, b_, a_));
      }

      virtual void palette_get(Evas_Textgrid_Palette pal_, int idx_, int* r_, int* g_, int* b_, int* a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textgrid_palette_get(pal_, idx_, r_, g_, b_, a_));
      }

      virtual Evas_Textgrid_Font_Style supported_font_styles_get()
      {
         Evas_Textgrid_Font_Style _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_textgrid_supported_font_styles_get());
            return _tmp_ret;
      }

      virtual void supported_font_styles_set(Evas_Textgrid_Font_Style styles_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textgrid_supported_font_styles_set(styles_));
      }

      virtual void size_get(int* w_, int* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textgrid_size_get(w_, h_));
      }

      virtual void size_set(int w_, int h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textgrid_size_set(w_, h_));
      }

      virtual void cell_size_get(int* width_, int* height_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_textgrid_cell_size_get(width_, height_));
      }

   };
};


template<>
struct operation_description_class_size< ::evas::textgrid >
{
   static constexpr int value = 
#if defined(TEXTGRID_PROTECTED) && defined(TEXTGRID_BETA)
      10
#elif defined(TEXTGRID_PROTECTED)
      10
#elif defined(TEXTGRID_BETA)
      10
#else
      10
#endif
      + operation_description_class_size<::evas::object >::value      + operation_description_class_size<::efl::text_properties >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::textgrid>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_textgrid_update_add_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textgrid_update_add);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textgrid_cellrow_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textgrid_cellrow_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textgrid_cellrow_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textgrid_cellrow_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textgrid_palette_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textgrid_palette_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textgrid_palette_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textgrid_palette_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textgrid_supported_font_styles_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textgrid_supported_font_styles_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textgrid_supported_font_styles_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textgrid_supported_font_styles_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textgrid_size_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textgrid_size_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textgrid_size_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textgrid_size_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_textgrid_cell_size_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_textgrid_cell_size_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::object>(), &ops[operation_description_class_size< ::evas::textgrid >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::efl::text_properties>(), &ops[operation_description_class_size< ::evas::textgrid >::value + operation_description_class_size<::evas::object>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::textgrid>)
{
   return (EVAS_TEXTGRID_CLASS);
}

} } }

/// @endcond


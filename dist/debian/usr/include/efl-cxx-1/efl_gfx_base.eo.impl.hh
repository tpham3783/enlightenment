/// @cond EO_CXX_EO_IMPL

inline void efl::gfx::base::position_get(int* x_, int* y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_position_get(x_, y_));
}

inline void efl::gfx::base::position_set(int x_, int y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_position_set(x_, y_));
}

inline void efl::gfx::base::size_get(int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_size_get(w_, h_));
}

inline void efl::gfx::base::size_set(int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_size_set(w_, h_));
}

inline void efl::gfx::base::color_get(int* r_, int* g_, int* b_, int* a_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_color_get(r_, g_, b_, a_));
}

inline void efl::gfx::base::color_set(int r_, int g_, int b_, int a_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_color_set(r_, g_, b_, a_));
}

inline bool efl::gfx::base::color_part_get(::efl::eina::string_view part_, int* r_, int* g_, int* b_, int* a_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_color_part_get(::efl::eolian::to_c(part_), r_, g_, b_, a_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool efl::gfx::base::color_part_set(::efl::eina::string_view part_, int r_, int g_, int b_, int a_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_color_part_set(::efl::eolian::to_c(part_), r_, g_, b_, a_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool efl::gfx::base::visible_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_visible_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void efl::gfx::base::visible_set(bool v_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_visible_set(::efl::eolian::to_c(v_)));
}

inline void eo_cxx::efl::gfx::base::position_get(int* x_, int* y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_position_get(x_, y_));
}

inline void eo_cxx::efl::gfx::base::position_set(int x_, int y_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_position_set(x_, y_));
}

inline void eo_cxx::efl::gfx::base::size_get(int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_size_get(w_, h_));
}

inline void eo_cxx::efl::gfx::base::size_set(int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_size_set(w_, h_));
}

inline void eo_cxx::efl::gfx::base::color_get(int* r_, int* g_, int* b_, int* a_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_color_get(r_, g_, b_, a_));
}

inline void eo_cxx::efl::gfx::base::color_set(int r_, int g_, int b_, int a_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_color_set(r_, g_, b_, a_));
}

inline bool eo_cxx::efl::gfx::base::color_part_get(::efl::eina::string_view part_, int* r_, int* g_, int* b_, int* a_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_color_part_get(::efl::eolian::to_c(part_), r_, g_, b_, a_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::efl::gfx::base::color_part_set(::efl::eina::string_view part_, int r_, int g_, int b_, int a_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_color_part_set(::efl::eolian::to_c(part_), r_, g_, b_, a_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::efl::gfx::base::visible_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_gfx_visible_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::efl::gfx::base::visible_set(bool v_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_gfx_visible_set(::efl::eolian::to_c(v_)));
}

inline ::eo_cxx::efl::gfx::base::operator ::efl::gfx::base() const
{
   return *static_cast<::efl::gfx::base const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::gfx::base::operator ::efl::gfx::base&()
{
   return *static_cast<::efl::gfx::base*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::gfx::base::operator ::efl::gfx::base const&() const
{
   return *static_cast<::efl::gfx::base const*>(static_cast<void const*>(this));
}

template <typename T>
void efl_gfx_base_position_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* x_, int* y_)
{
   try
      {
         static_cast<T*>(self->this_)->position_get(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_base_position_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int x_, int y_)
{
   try
      {
         static_cast<T*>(self->this_)->position_set(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_base_size_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* w_, int* h_)
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
void efl_gfx_base_size_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int w_, int h_)
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
void efl_gfx_base_color_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* r_, int* g_, int* b_, int* a_)
{
   try
      {
         static_cast<T*>(self->this_)->color_get(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_gfx_base_color_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int r_, int g_, int b_, int a_)
{
   try
      {
         static_cast<T*>(self->this_)->color_set(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool efl_gfx_base_color_part_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, int* r_, int* g_, int* b_, int* a_)
{
   try
      {
         return static_cast<T*>(self->this_)->color_part_get(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool efl_gfx_base_color_part_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const char * part_, int r_, int g_, int b_, int a_)
{
   try
      {
         return static_cast<T*>(self->this_)->color_part_set(::efl::eolian::to_cxx<::efl::eina::string_view>(part_, std::tuple<std::false_type>()), r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool efl_gfx_base_visible_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->visible_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void efl_gfx_base_visible_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool v_)
{
   try
      {
         static_cast<T*>(self->this_)->visible_set(::efl::eolian::to_cxx<bool>(v_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::gfx::base >
{
   template <typename T>
   struct type
   {
      virtual void position_get(int* x_, int* y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_position_get(x_, y_));
      }

      virtual void position_set(int x_, int y_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_position_set(x_, y_));
      }

      virtual void size_get(int* w_, int* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_size_get(w_, h_));
      }

      virtual void size_set(int w_, int h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_size_set(w_, h_));
      }

      virtual void color_get(int* r_, int* g_, int* b_, int* a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_color_get(r_, g_, b_, a_));
      }

      virtual void color_set(int r_, int g_, int b_, int a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_color_set(r_, g_, b_, a_));
      }

      virtual bool color_part_get(::efl::eina::string_view part_, int* r_, int* g_, int* b_, int* a_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_gfx_color_part_get(::efl::eolian::to_c(part_), r_, g_, b_, a_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool color_part_set(::efl::eina::string_view part_, int r_, int g_, int b_, int a_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_gfx_color_part_set(::efl::eolian::to_c(part_), r_, g_, b_, a_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool visible_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_gfx_visible_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void visible_set(bool v_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_gfx_visible_set(::efl::eolian::to_c(v_)));
      }

   };
};


template<>
struct operation_description_class_size< ::efl::gfx::base >
{
   static constexpr int value = 
#if defined(BASE_PROTECTED) && defined(BASE_BETA)
      10
#elif defined(BASE_PROTECTED)
      10
#elif defined(BASE_BETA)
      10
#else
      10
#endif
;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::gfx::base>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_base_position_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_position_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_base_position_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_position_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_base_size_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_size_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_base_size_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_size_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_base_color_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_color_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_base_color_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_color_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_base_color_part_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_color_part_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_base_color_part_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_color_part_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_base_visible_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_visible_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_gfx_base_visible_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_gfx_visible_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::gfx::base>)
{
   return (EFL_GFX_BASE_INTERFACE);
}

} } }

/// @endcond


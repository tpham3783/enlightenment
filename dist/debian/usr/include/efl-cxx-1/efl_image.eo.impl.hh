/// @cond EO_CXX_EO_IMPL

inline bool efl::image::animated_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_image_animated_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void efl::image::load_size_get(int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_image_load_size_get(w_, h_));
}

inline void efl::image::load_size_set(int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_image_load_size_set(w_, h_));
}

inline bool efl::image::smooth_scale_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_image_smooth_scale_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void efl::image::smooth_scale_set(bool smooth_scale_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_image_smooth_scale_set(::efl::eolian::to_c(smooth_scale_)));
}

inline double efl::image::ratio_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_image_ratio_get());
   return _tmp_ret;
}

inline bool eo_cxx::efl::image::animated_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_image_animated_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::efl::image::load_size_get(int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_image_load_size_get(w_, h_));
}

inline void eo_cxx::efl::image::load_size_set(int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_image_load_size_set(w_, h_));
}

inline bool eo_cxx::efl::image::smooth_scale_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_image_smooth_scale_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::efl::image::smooth_scale_set(bool smooth_scale_) const
{
   eo_do(_concrete_eo_ptr(), ::efl_image_smooth_scale_set(::efl::eolian::to_c(smooth_scale_)));
}

inline double eo_cxx::efl::image::ratio_get() const
{
   double _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::efl_image_ratio_get());
   return _tmp_ret;
}

inline ::eo_cxx::efl::image::operator ::efl::image() const
{
   return *static_cast<::efl::image const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::efl::image::operator ::efl::image&()
{
   return *static_cast<::efl::image*>(static_cast<void*>(this));
}

inline ::eo_cxx::efl::image::operator ::efl::image const&() const
{
   return *static_cast<::efl::image const*>(static_cast<void const*>(this));
}

template <typename T>
bool efl_image_animated_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->animated_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void efl_image_load_size_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* w_, int* h_)
{
   try
      {
         static_cast<T*>(self->this_)->load_size_get(w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void efl_image_load_size_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int w_, int h_)
{
   try
      {
         static_cast<T*>(self->this_)->load_size_set(w_, h_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool efl_image_smooth_scale_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->smooth_scale_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void efl_image_smooth_scale_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool smooth_scale_)
{
   try
      {
         static_cast<T*>(self->this_)->smooth_scale_set(::efl::eolian::to_cxx<bool>(smooth_scale_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
double efl_image_ratio_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->ratio_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         double _tmp_ret{};
         return _tmp_ret;
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::efl::image >
{
   template <typename T>
   struct type
   {
      virtual bool animated_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_image_animated_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void load_size_get(int* w_, int* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_image_load_size_get(w_, h_));
      }

      virtual void load_size_set(int w_, int h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_image_load_size_set(w_, h_));
      }

      virtual bool smooth_scale_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_image_smooth_scale_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void smooth_scale_set(bool smooth_scale_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::efl_image_smooth_scale_set(::efl::eolian::to_c(smooth_scale_)));
      }

      virtual double ratio_get()
      {
         double _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::efl_image_ratio_get());
            return _tmp_ret;
      }

   };
};


template<>
struct operation_description_class_size< ::efl::image >
{
   static constexpr int value = 
#if defined(IMAGE_PROTECTED) && defined(IMAGE_BETA)
      6
#elif defined(IMAGE_PROTECTED)
      6
#elif defined(IMAGE_BETA)
      6
#else
      6
#endif
;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::efl::image>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::efl_image_animated_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_image_animated_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_image_load_size_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_image_load_size_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_image_load_size_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_image_load_size_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_image_smooth_scale_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_image_smooth_scale_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_image_smooth_scale_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_image_smooth_scale_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::efl_image_ratio_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::efl_image_ratio_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   return 0;
}
inline Eo_Class const* get_eo_class(tag<::efl::image>)
{
   return (EFL_IMAGE_INTERFACE);
}

} } }

/// @endcond


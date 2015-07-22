/// @cond EO_CXX_EO_IMPL

inline void evas::canvas3d::light::ambient_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_ambient_set(r_, g_, b_, a_));
}

inline void evas::canvas3d::light::ambient_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_ambient_get(r_, g_, b_, a_));
}

inline void evas::canvas3d::light::diffuse_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_diffuse_set(r_, g_, b_, a_));
}

inline void evas::canvas3d::light::diffuse_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_diffuse_get(r_, g_, b_, a_));
}

inline void evas::canvas3d::light::specular_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_specular_set(r_, g_, b_, a_));
}

inline void evas::canvas3d::light::specular_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_specular_get(r_, g_, b_, a_));
}

inline void evas::canvas3d::light::attenuation_set(Evas_Real constant_, Evas_Real linear_, Evas_Real quadratic_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_attenuation_set(constant_, linear_, quadratic_));
}

inline void evas::canvas3d::light::attenuation_get(Evas_Real* constant_, Evas_Real* linear_, Evas_Real* quadratic_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_attenuation_get(constant_, linear_, quadratic_));
}

inline void evas::canvas3d::light::projection_matrix_set(const Evas_Real * matrix_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_projection_matrix_set(matrix_));
}

inline void evas::canvas3d::light::projection_matrix_get(Evas_Real* matrix_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_projection_matrix_get(matrix_));
}

inline void evas::canvas3d::light::projection_perspective_set(Evas_Real fovy_, Evas_Real aspect_, Evas_Real dnear_, Evas_Real dfar_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_projection_perspective_set(fovy_, aspect_, dnear_, dfar_));
}

inline void evas::canvas3d::light::projection_frustum_set(Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_projection_frustum_set(left_, right_, bottom_, top_, dnear_, dfar_));
}

inline void evas::canvas3d::light::projection_ortho_set(Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_projection_ortho_set(left_, right_, bottom_, top_, dnear_, dfar_));
}

inline bool evas::canvas3d::light::directional_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_light_directional_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::light::directional_set(bool directional_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_directional_set(::efl::eolian::to_c(directional_)));
}

inline Evas_Real evas::canvas3d::light::spot_exponent_get() const
{
   Evas_Real _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_light_spot_exponent_get());
   return _tmp_ret;
}

inline void evas::canvas3d::light::spot_exponent_set(Evas_Real exponent_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_spot_exponent_set(exponent_));
}

inline Evas_Real evas::canvas3d::light::spot_cutoff_get() const
{
   Evas_Real _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_light_spot_cutoff_get());
   return _tmp_ret;
}

inline void evas::canvas3d::light::spot_cutoff_set(Evas_Real cutoff_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_spot_cutoff_set(cutoff_));
}

inline bool evas::canvas3d::light::attenuation_enable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_light_attenuation_enable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::light::attenuation_enable_set(bool enable_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_attenuation_enable_set(::efl::eolian::to_c(enable_)));
}

inline void eo_cxx::evas::canvas3d::light::ambient_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_ambient_set(r_, g_, b_, a_));
}

inline void eo_cxx::evas::canvas3d::light::ambient_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_ambient_get(r_, g_, b_, a_));
}

inline void eo_cxx::evas::canvas3d::light::diffuse_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_diffuse_set(r_, g_, b_, a_));
}

inline void eo_cxx::evas::canvas3d::light::diffuse_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_diffuse_get(r_, g_, b_, a_));
}

inline void eo_cxx::evas::canvas3d::light::specular_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_specular_set(r_, g_, b_, a_));
}

inline void eo_cxx::evas::canvas3d::light::specular_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_specular_get(r_, g_, b_, a_));
}

inline void eo_cxx::evas::canvas3d::light::attenuation_set(Evas_Real constant_, Evas_Real linear_, Evas_Real quadratic_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_attenuation_set(constant_, linear_, quadratic_));
}

inline void eo_cxx::evas::canvas3d::light::attenuation_get(Evas_Real* constant_, Evas_Real* linear_, Evas_Real* quadratic_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_attenuation_get(constant_, linear_, quadratic_));
}

inline void eo_cxx::evas::canvas3d::light::projection_matrix_set(const Evas_Real * matrix_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_projection_matrix_set(matrix_));
}

inline void eo_cxx::evas::canvas3d::light::projection_matrix_get(Evas_Real* matrix_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_projection_matrix_get(matrix_));
}

inline void eo_cxx::evas::canvas3d::light::projection_perspective_set(Evas_Real fovy_, Evas_Real aspect_, Evas_Real dnear_, Evas_Real dfar_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_projection_perspective_set(fovy_, aspect_, dnear_, dfar_));
}

inline void eo_cxx::evas::canvas3d::light::projection_frustum_set(Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_projection_frustum_set(left_, right_, bottom_, top_, dnear_, dfar_));
}

inline void eo_cxx::evas::canvas3d::light::projection_ortho_set(Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_projection_ortho_set(left_, right_, bottom_, top_, dnear_, dfar_));
}

inline bool eo_cxx::evas::canvas3d::light::directional_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_light_directional_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::light::directional_set(bool directional_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_directional_set(::efl::eolian::to_c(directional_)));
}

inline Evas_Real eo_cxx::evas::canvas3d::light::spot_exponent_get() const
{
   Evas_Real _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_light_spot_exponent_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas3d::light::spot_exponent_set(Evas_Real exponent_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_spot_exponent_set(exponent_));
}

inline Evas_Real eo_cxx::evas::canvas3d::light::spot_cutoff_get() const
{
   Evas_Real _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_light_spot_cutoff_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::canvas3d::light::spot_cutoff_set(Evas_Real cutoff_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_spot_cutoff_set(cutoff_));
}

inline bool eo_cxx::evas::canvas3d::light::attenuation_enable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_light_attenuation_enable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::light::attenuation_enable_set(bool enable_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_light_attenuation_enable_set(::efl::eolian::to_c(enable_)));
}

inline ::eo_cxx::evas::canvas3d::light::operator ::evas::canvas3d::light() const
{
   return *static_cast<::evas::canvas3d::light const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::canvas3d::light::operator ::evas::canvas3d::light&()
{
   return *static_cast<::evas::canvas3d::light*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::canvas3d::light::operator ::evas::canvas3d::light const&() const
{
   return *static_cast<::evas::canvas3d::light const*>(static_cast<void const*>(this));
}

template <typename T>
void evas_canvas3d_light_ambient_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_)
{
   try
      {
         static_cast<T*>(self->this_)->ambient_set(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_light_ambient_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_)
{
   try
      {
         static_cast<T*>(self->this_)->ambient_get(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_light_diffuse_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_)
{
   try
      {
         static_cast<T*>(self->this_)->diffuse_set(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_light_diffuse_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_)
{
   try
      {
         static_cast<T*>(self->this_)->diffuse_get(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_light_specular_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_)
{
   try
      {
         static_cast<T*>(self->this_)->specular_set(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_light_specular_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_)
{
   try
      {
         static_cast<T*>(self->this_)->specular_get(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_light_attenuation_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real constant_, Evas_Real linear_, Evas_Real quadratic_)
{
   try
      {
         static_cast<T*>(self->this_)->attenuation_set(constant_, linear_, quadratic_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_light_attenuation_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real* constant_, Evas_Real* linear_, Evas_Real* quadratic_)
{
   try
      {
         static_cast<T*>(self->this_)->attenuation_get(constant_, linear_, quadratic_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_light_projection_matrix_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, const Evas_Real * matrix_)
{
   try
      {
         static_cast<T*>(self->this_)->projection_matrix_set(matrix_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_light_projection_matrix_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real* matrix_)
{
   try
      {
         static_cast<T*>(self->this_)->projection_matrix_get(matrix_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_light_projection_perspective_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real fovy_, Evas_Real aspect_, Evas_Real dnear_, Evas_Real dfar_)
{
   try
      {
         static_cast<T*>(self->this_)->projection_perspective_set(fovy_, aspect_, dnear_, dfar_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_light_projection_frustum_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_)
{
   try
      {
         static_cast<T*>(self->this_)->projection_frustum_set(left_, right_, bottom_, top_, dnear_, dfar_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_light_projection_ortho_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_)
{
   try
      {
         static_cast<T*>(self->this_)->projection_ortho_set(left_, right_, bottom_, top_, dnear_, dfar_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas3d_light_directional_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->directional_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_light_directional_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool directional_)
{
   try
      {
         static_cast<T*>(self->this_)->directional_set(::efl::eolian::to_cxx<bool>(directional_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Real evas_canvas3d_light_spot_exponent_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->spot_exponent_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Real _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas3d_light_spot_exponent_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real exponent_)
{
   try
      {
         static_cast<T*>(self->this_)->spot_exponent_set(exponent_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Evas_Real evas_canvas3d_light_spot_cutoff_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->spot_cutoff_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Real _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_canvas3d_light_spot_cutoff_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real cutoff_)
{
   try
      {
         static_cast<T*>(self->this_)->spot_cutoff_set(cutoff_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas3d_light_attenuation_enable_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->attenuation_enable_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_light_attenuation_enable_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool enable_)
{
   try
      {
         static_cast<T*>(self->this_)->attenuation_enable_set(::efl::eolian::to_cxx<bool>(enable_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::canvas3d::light >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::canvas3d::object >::template type<T>
         , virtual operations< ::evas::common_interface >::template type<T>
   {
      virtual void ambient_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_light_ambient_set(r_, g_, b_, a_));
      }

      virtual void ambient_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_light_ambient_get(r_, g_, b_, a_));
      }

      virtual void diffuse_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_light_diffuse_set(r_, g_, b_, a_));
      }

      virtual void diffuse_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_light_diffuse_get(r_, g_, b_, a_));
      }

      virtual void specular_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_light_specular_set(r_, g_, b_, a_));
      }

      virtual void specular_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_light_specular_get(r_, g_, b_, a_));
      }

      virtual void attenuation_set(Evas_Real constant_, Evas_Real linear_, Evas_Real quadratic_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_light_attenuation_set(constant_, linear_, quadratic_));
      }

      virtual void attenuation_get(Evas_Real* constant_, Evas_Real* linear_, Evas_Real* quadratic_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_light_attenuation_get(constant_, linear_, quadratic_));
      }

      virtual void projection_matrix_set(const Evas_Real * matrix_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_light_projection_matrix_set(matrix_));
      }

      virtual void projection_matrix_get(Evas_Real* matrix_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_light_projection_matrix_get(matrix_));
      }

      virtual void projection_perspective_set(Evas_Real fovy_, Evas_Real aspect_, Evas_Real dnear_, Evas_Real dfar_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_light_projection_perspective_set(fovy_, aspect_, dnear_, dfar_));
      }

      virtual void projection_frustum_set(Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_light_projection_frustum_set(left_, right_, bottom_, top_, dnear_, dfar_));
      }

      virtual void projection_ortho_set(Evas_Real left_, Evas_Real right_, Evas_Real bottom_, Evas_Real top_, Evas_Real dnear_, Evas_Real dfar_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_light_projection_ortho_set(left_, right_, bottom_, top_, dnear_, dfar_));
      }

      virtual bool directional_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_light_directional_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void directional_set(bool directional_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_light_directional_set(::efl::eolian::to_c(directional_)));
      }

      virtual Evas_Real spot_exponent_get()
      {
         Evas_Real _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_light_spot_exponent_get());
            return _tmp_ret;
      }

      virtual void spot_exponent_set(Evas_Real exponent_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_light_spot_exponent_set(exponent_));
      }

      virtual Evas_Real spot_cutoff_get()
      {
         Evas_Real _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_light_spot_cutoff_get());
            return _tmp_ret;
      }

      virtual void spot_cutoff_set(Evas_Real cutoff_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_light_spot_cutoff_set(cutoff_));
      }

      virtual bool attenuation_enable_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_light_attenuation_enable_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void attenuation_enable_set(bool enable_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_light_attenuation_enable_set(::efl::eolian::to_c(enable_)));
      }

   };
};


template<>
struct operation_description_class_size< ::evas::canvas3d::light >
{
   static constexpr int value = 
#if defined(LIGHT_PROTECTED) && defined(LIGHT_BETA)
      21
#elif defined(LIGHT_PROTECTED)
      21
#elif defined(LIGHT_BETA)
      21
#else
      21
#endif
      + operation_description_class_size<::evas::canvas3d::object >::value      + operation_description_class_size<::evas::common_interface >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::canvas3d::light>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_ambient_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_ambient_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_ambient_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_ambient_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_diffuse_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_diffuse_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_diffuse_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_diffuse_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_specular_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_specular_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_specular_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_specular_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_attenuation_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_attenuation_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_attenuation_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_attenuation_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_projection_matrix_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_projection_matrix_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_projection_matrix_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_projection_matrix_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_projection_perspective_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_projection_perspective_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_projection_frustum_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_projection_frustum_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_projection_ortho_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_projection_ortho_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_directional_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_directional_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_directional_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_directional_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_spot_exponent_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_spot_exponent_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_spot_exponent_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_spot_exponent_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_spot_cutoff_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_spot_cutoff_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_spot_cutoff_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_spot_cutoff_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_attenuation_enable_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_attenuation_enable_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_light_attenuation_enable_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_light_attenuation_enable_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::canvas3d::object>(), &ops[operation_description_class_size< ::evas::canvas3d::light >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::common_interface>(), &ops[operation_description_class_size< ::evas::canvas3d::light >::value + operation_description_class_size<::evas::canvas3d::object>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::canvas3d::light>)
{
   return (EVAS_CANVAS3D_LIGHT_CLASS);
}

} } }

/// @endcond


/// @cond EO_CXX_EO_IMPL

inline void evas::canvas3d::scene::size_set(int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_scene_size_set(w_, h_));
}

inline void evas::canvas3d::scene::size_get(int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_scene_size_get(w_, h_));
}

inline void evas::canvas3d::scene::background_color_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_scene_background_color_set(r_, g_, b_, a_));
}

inline void evas::canvas3d::scene::background_color_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_scene_background_color_get(r_, g_, b_, a_));
}

inline bool evas::canvas3d::scene::pick(Evas_Real x_, Evas_Real y_, ::evas::canvas3d::node* node_, ::evas::canvas3d::mesh* mesh_, Evas_Real* s_, Evas_Real* t_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_scene_pick(x_, y_, ::efl::eolian::to_c(node_), ::efl::eolian::to_c(mesh_), s_, t_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::canvas3d::node evas::canvas3d::scene::exist(Evas_Real x_, Evas_Real y_, ::evas::canvas3d::node node_) const
{
   Evas_Canvas3D_Node * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_scene_exist(x_, y_, ::efl::eolian::to_c(node_)));
   return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::range_list< ::evas::canvas3d::node > evas::canvas3d::scene::pick_member_list_get(Evas_Real x_, Evas_Real y_) const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_scene_pick_member_list_get(x_, y_));
   return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::canvas3d::node >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline void evas::canvas3d::scene::shadows_enable_set(bool shadows_enabled_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_scene_shadows_enable_set(::efl::eolian::to_c(shadows_enabled_)));
}

inline bool evas::canvas3d::scene::shadows_enable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_scene_shadows_enable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::canvas3d::scene::color_pick_enable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_scene_color_pick_enable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::canvas3d::scene::color_pick_enable_set(bool color_pick_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_scene_color_pick_enable_set(::efl::eolian::to_c(color_pick_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::canvas3d::node evas::canvas3d::scene::root_node_get() const
{
   Evas_Canvas3D_Node * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_scene_root_node_get());
   return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::scene::root_node_set(::evas::canvas3d::node node_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_scene_root_node_set(::efl::eolian::to_c(node_)));
}

inline ::evas::canvas3d::node evas::canvas3d::scene::camera_node_get() const
{
   Evas_Canvas3D_Node * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_scene_camera_node_get());
   return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::canvas3d::scene::camera_node_set(::evas::canvas3d::node node_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_scene_camera_node_set(::efl::eolian::to_c(node_)));
}

inline void eo_cxx::evas::canvas3d::scene::size_set(int w_, int h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_scene_size_set(w_, h_));
}

inline void eo_cxx::evas::canvas3d::scene::size_get(int* w_, int* h_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_scene_size_get(w_, h_));
}

inline void eo_cxx::evas::canvas3d::scene::background_color_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_scene_background_color_set(r_, g_, b_, a_));
}

inline void eo_cxx::evas::canvas3d::scene::background_color_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_scene_background_color_get(r_, g_, b_, a_));
}

inline bool eo_cxx::evas::canvas3d::scene::pick(Evas_Real x_, Evas_Real y_, ::evas::canvas3d::node* node_, ::evas::canvas3d::mesh* mesh_, Evas_Real* s_, Evas_Real* t_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_scene_pick(x_, y_, ::efl::eolian::to_c(node_), ::efl::eolian::to_c(mesh_), s_, t_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::canvas3d::node eo_cxx::evas::canvas3d::scene::exist(Evas_Real x_, Evas_Real y_, ::evas::canvas3d::node node_) const
{
   Evas_Canvas3D_Node * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_scene_exist(x_, y_, ::efl::eolian::to_c(node_)));
   return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::efl::eina::range_list< ::evas::canvas3d::node > eo_cxx::evas::canvas3d::scene::pick_member_list_get(Evas_Real x_, Evas_Real y_) const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_scene_pick_member_list_get(x_, y_));
   return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::canvas3d::node >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
}

inline void eo_cxx::evas::canvas3d::scene::shadows_enable_set(bool shadows_enabled_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_scene_shadows_enable_set(::efl::eolian::to_c(shadows_enabled_)));
}

inline bool eo_cxx::evas::canvas3d::scene::shadows_enable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_scene_shadows_enable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::canvas3d::scene::color_pick_enable_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_scene_color_pick_enable_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::canvas3d::scene::color_pick_enable_set(bool color_pick_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_scene_color_pick_enable_set(::efl::eolian::to_c(color_pick_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::evas::canvas3d::node eo_cxx::evas::canvas3d::scene::root_node_get() const
{
   Evas_Canvas3D_Node * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_scene_root_node_get());
   return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::scene::root_node_set(::evas::canvas3d::node node_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_scene_root_node_set(::efl::eolian::to_c(node_)));
}

inline ::evas::canvas3d::node eo_cxx::evas::canvas3d::scene::camera_node_get() const
{
   Evas_Canvas3D_Node * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_canvas3d_scene_camera_node_get());
   return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::canvas3d::scene::camera_node_set(::evas::canvas3d::node node_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_canvas3d_scene_camera_node_set(::efl::eolian::to_c(node_)));
}

inline ::eo_cxx::evas::canvas3d::scene::operator ::evas::canvas3d::scene() const
{
   return *static_cast<::evas::canvas3d::scene const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::canvas3d::scene::operator ::evas::canvas3d::scene&()
{
   return *static_cast<::evas::canvas3d::scene*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::canvas3d::scene::operator ::evas::canvas3d::scene const&() const
{
   return *static_cast<::evas::canvas3d::scene const*>(static_cast<void const*>(this));
}

template <typename T>
void evas_canvas3d_scene_size_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int w_, int h_)
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
void evas_canvas3d_scene_size_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* w_, int* h_)
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
void evas_canvas3d_scene_background_color_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_)
{
   try
      {
         static_cast<T*>(self->this_)->background_color_set(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_canvas3d_scene_background_color_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_)
{
   try
      {
         static_cast<T*>(self->this_)->background_color_get(r_, g_, b_, a_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas3d_scene_pick_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real x_, Evas_Real y_, Evas_Canvas3D_Node ** node_, Evas_Canvas3D_Mesh ** mesh_, Evas_Real* s_, Evas_Real* t_)
{
   try
      {
         return static_cast<T*>(self->this_)->pick(x_, y_, ::efl::eolian::to_cxx<::evas::canvas3d::node*>(node_, std::tuple<std::false_type>()), ::efl::eolian::to_cxx<::evas::canvas3d::mesh*>(mesh_, std::tuple<std::false_type>()), s_, t_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::evas::canvas3d::node evas_canvas3d_scene_exist_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real x_, Evas_Real y_, Evas_Canvas3D_Node * node_)
{
   try
      {
         return static_cast<T*>(self->this_)->exist(x_, y_, ::efl::eolian::to_cxx<::evas::canvas3d::node>(node_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Canvas3D_Node * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::efl::eina::range_list< ::evas::canvas3d::node > evas_canvas3d_scene_pick_member_list_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Real x_, Evas_Real y_)
{
   try
      {
         return static_cast<T*>(self->this_)->pick_member_list_get(x_, y_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::canvas3d::node >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_scene_shadows_enable_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool shadows_enabled_)
{
   try
      {
         static_cast<T*>(self->this_)->shadows_enable_set(::efl::eolian::to_cxx<bool>(shadows_enabled_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_canvas3d_scene_shadows_enable_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->shadows_enable_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool evas_canvas3d_scene_color_pick_enable_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->color_pick_enable_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool evas_canvas3d_scene_color_pick_enable_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool color_pick_)
{
   try
      {
         return static_cast<T*>(self->this_)->color_pick_enable_set(::efl::eolian::to_cxx<bool>(color_pick_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
::evas::canvas3d::node evas_canvas3d_scene_root_node_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->root_node_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Canvas3D_Node * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_scene_root_node_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Node * node_)
{
   try
      {
         static_cast<T*>(self->this_)->root_node_set(::efl::eolian::to_cxx<::evas::canvas3d::node>(node_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::evas::canvas3d::node evas_canvas3d_scene_camera_node_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->camera_node_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Canvas3D_Node * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_canvas3d_scene_camera_node_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Canvas3D_Node * node_)
{
   try
      {
         static_cast<T*>(self->this_)->camera_node_set(::efl::eolian::to_cxx<::evas::canvas3d::node>(node_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::canvas3d::scene >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::canvas3d::object >::template type<T>
         , virtual operations< ::evas::common_interface >::template type<T>
   {
      virtual void size_set(int w_, int h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_scene_size_set(w_, h_));
      }

      virtual void size_get(int* w_, int* h_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_scene_size_get(w_, h_));
      }

      virtual void background_color_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_scene_background_color_set(r_, g_, b_, a_));
      }

      virtual void background_color_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_scene_background_color_get(r_, g_, b_, a_));
      }

      virtual bool pick(Evas_Real x_, Evas_Real y_, ::evas::canvas3d::node* node_, ::evas::canvas3d::mesh* mesh_, Evas_Real* s_, Evas_Real* t_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_scene_pick(x_, y_, ::efl::eolian::to_c(node_), ::efl::eolian::to_c(mesh_), s_, t_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::evas::canvas3d::node exist(Evas_Real x_, Evas_Real y_, ::evas::canvas3d::node node_)
      {
         Evas_Canvas3D_Node * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_scene_exist(x_, y_, ::efl::eolian::to_c(node_)));
            return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::efl::eina::range_list< ::evas::canvas3d::node > pick_member_list_get(Evas_Real x_, Evas_Real y_)
      {
         Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_scene_pick_member_list_get(x_, y_));
            return ::efl::eolian::to_cxx<::efl::eina::range_list< ::evas::canvas3d::node >>(_tmp_ret, std::tuple<std::false_type, std::false_type>());
      }

      virtual void shadows_enable_set(bool shadows_enabled_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_scene_shadows_enable_set(::efl::eolian::to_c(shadows_enabled_)));
      }

      virtual bool shadows_enable_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_scene_shadows_enable_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool color_pick_enable_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_scene_color_pick_enable_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool color_pick_enable_set(bool color_pick_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_scene_color_pick_enable_set(::efl::eolian::to_c(color_pick_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual ::evas::canvas3d::node root_node_get()
      {
         Evas_Canvas3D_Node * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_scene_root_node_get());
            return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void root_node_set(::evas::canvas3d::node node_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_scene_root_node_set(::efl::eolian::to_c(node_)));
      }

      virtual ::evas::canvas3d::node camera_node_get()
      {
         Evas_Canvas3D_Node * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_canvas3d_scene_camera_node_get());
            return ::efl::eolian::to_cxx<::evas::canvas3d::node>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void camera_node_set(::evas::canvas3d::node node_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_canvas3d_scene_camera_node_set(::efl::eolian::to_c(node_)));
      }

   };
};


template<>
struct operation_description_class_size< ::evas::canvas3d::scene >
{
   static constexpr int value = 
#if defined(SCENE_PROTECTED) && defined(SCENE_BETA)
      15
#elif defined(SCENE_PROTECTED)
      15
#elif defined(SCENE_BETA)
      15
#else
      15
#endif
      + operation_description_class_size<::evas::canvas3d::object >::value      + operation_description_class_size<::evas::common_interface >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::canvas3d::scene>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_size_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_size_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_size_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_size_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_background_color_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_background_color_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_background_color_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_background_color_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_pick_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_pick);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_exist_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_exist);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_pick_member_list_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_pick_member_list_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_shadows_enable_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_shadows_enable_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_shadows_enable_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_shadows_enable_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_color_pick_enable_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_color_pick_enable_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_color_pick_enable_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_color_pick_enable_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_root_node_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_root_node_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_root_node_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_root_node_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_camera_node_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_camera_node_get);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_camera_node_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_canvas3d_scene_camera_node_set);
   ops[i].op = EO_OP_OVERRIDE;
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ops[i].doc = NULL;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::canvas3d::object>(), &ops[operation_description_class_size< ::evas::canvas3d::scene >::value]);
   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::common_interface>(), &ops[operation_description_class_size< ::evas::canvas3d::scene >::value + operation_description_class_size<::evas::canvas3d::object>::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::canvas3d::scene>)
{
   return (EVAS_CANVAS3D_SCENE_CLASS);
}

} } }

/// @endcond


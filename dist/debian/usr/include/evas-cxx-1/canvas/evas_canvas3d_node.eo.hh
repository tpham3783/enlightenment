#ifndef EFL_GENERATED_EVAS_CANVAS3D_NODE_HH
#define EFL_GENERATED_EVAS_CANVAS3D_NODE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_canvas3d_node.eo.h"
}

#include "evas_canvas3d_object.eo.hh"
#include "evas_common_interface.eo.hh"
#include <evas_canvas3d_light.eo.hh>
#include <evas_canvas3d_mesh.eo.hh>
#include <evas_canvas3d_object.eo.hh>

namespace evas { namespace canvas3d {

struct node;

} }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas { namespace canvas3d {

struct node
{
   Evas_Canvas3D_Node_Type type_get() const;

   /// @param member 
   ///
   void member_add(::evas::canvas3d::node member_) const;

   /// @param member 
   ///
   void member_del(::evas::canvas3d::node member_) const;

   ::evas::canvas3d::node parent_get() const;

   ::efl::eina::crange_list< ::evas::canvas3d::node > member_list_get() const;

   /// @param x 
   /// @param y 
   /// @param z 
   ///
   void position_set(Evas_Real x_, Evas_Real y_, Evas_Real z_) const;

   /// @param x 
   /// @param y 
   /// @param z 
   /// @param w 
   ///
   void orientation_set(Evas_Real x_, Evas_Real y_, Evas_Real z_, Evas_Real w_) const;

   /// @param angle 
   /// @param x 
   /// @param y 
   /// @param z 
   ///
   void orientation_angle_axis_set(Evas_Real angle_, Evas_Real x_, Evas_Real y_, Evas_Real z_) const;

   /// @param x 
   /// @param y 
   /// @param z 
   ///
   void scale_set(Evas_Real x_, Evas_Real y_, Evas_Real z_) const;

   /// @param space 
   /// @param[out] x 
   /// @param[out] y 
   /// @param[out] z 
   ///
   void position_get(Evas_Canvas3D_Space space_, Evas_Real* x_, Evas_Real* y_, Evas_Real* z_) const;

   /// @param space 
   /// @param[out] x 
   /// @param[out] y 
   /// @param[out] z 
   /// @param[out] w 
   ///
   void orientation_get(Evas_Canvas3D_Space space_, Evas_Real* x_, Evas_Real* y_, Evas_Real* z_, Evas_Real* w_) const;

   /// @param space 
   /// @param[out] x 
   /// @param[out] y 
   /// @param[out] z 
   ///
   void scale_get(Evas_Canvas3D_Space space_, Evas_Real* x_, Evas_Real* y_, Evas_Real* z_) const;

   /// @param target_space 
   /// @param x 
   /// @param y 
   /// @param z 
   /// @param up_space 
   /// @param ux 
   /// @param uy 
   /// @param uz 
   ///
   void look_at_set(Evas_Canvas3D_Space target_space_, Evas_Real x_, Evas_Real y_, Evas_Real z_, Evas_Canvas3D_Space up_space_, Evas_Real ux_, Evas_Real uy_, Evas_Real uz_) const;

   /// @param mesh 
   ///
   void mesh_add(::evas::canvas3d::mesh mesh_) const;

   /// @param mesh 
   ///
   void mesh_del(::evas::canvas3d::mesh mesh_) const;

   ::efl::eina::crange_list< ::evas::canvas3d::mesh > mesh_list_get() const;

   /// @param x 
   /// @param y 
   /// @param z 
   /// @param x2 
   /// @param y2 
   /// @param z2 
   ///
   void bounding_box_get(Evas_Real * x_, Evas_Real * y_, Evas_Real * z_, Evas_Real * x2_, Evas_Real * y2_, Evas_Real * z2_) const;

   /// @param x 
   /// @param y 
   /// @param z 
   /// @param r 
   ///
   void bounding_sphere_get(Evas_Real * x_, Evas_Real * y_, Evas_Real * z_, Evas_Real * r_) const;

   bool position_inherit_get() const;

   void position_inherit_set(bool inherit_) const;

   bool orientation_inherit_get() const;

   void orientation_inherit_set(bool inherit_) const;

   bool scale_inherit_get() const;

   void scale_inherit_set(bool inherit_) const;

   ::evas::canvas3d::object camera_get() const;

   void camera_set(::evas::canvas3d::object camera_) const;

   ::evas::canvas3d::light light_get() const;

   void light_set(::evas::canvas3d::light light_) const;

   int mesh_frame_get(::evas::canvas3d::mesh mesh_) const;

   void mesh_frame_set(::evas::canvas3d::mesh mesh_, int frame_) const;

   ::evas::canvas3d::node billboard_target_get() const;

   void billboard_target_set(::evas::canvas3d::node target_) const;



   static Eo_Class const* _eo_class()
   {
      return(EVAS_CANVAS3D_NODE_CLASS);
   }

   operator ::evas::canvas3d::node() const;
   operator ::evas::canvas3d::node&();
   operator ::evas::canvas3d::node const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::canvas3d::node*() const { return static_cast<::evas::canvas3d::node*>(static_cast<D const*>(this)->p); }
      operator ::evas::canvas3d::node const*() const { return static_cast<::evas::canvas3d::node const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::canvas3d::node const*() const { return static_cast<::evas::canvas3d::node const*>(static_cast<D const*>(this)->p); }
   };
   /// @endcond

private:

   /// @internal
   Eo* _concrete_eo_ptr() const
   {
      return static_cast<::efl::eo::concrete const*>(static_cast<void const*>(this))->_eo_ptr();
   }

};

} }

}
/// @endcond

namespace evas { namespace canvas3d {

/// @brief Class node
struct node
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(eo::base)
      , EO_CXX_INHERIT(evas::canvas3d::object)
      , EO_CXX_INHERIT(evas::common_interface)
{
   /// @cond LOCAL
   struct _c_constructor
   {

      explicit _c_constructor(Evas_Canvas3D_Node_Type type_)
         : type_(type_)
      {}
      void operator()()
      {
         ::evas_canvas3d_node_constructor(type_);
      }
      void register_ev_del_free_callback(Eo* _eoptr)
      {
         (void) _eoptr;
      }

      Evas_Canvas3D_Node_Type type_;
   };
   /// @endcond

   //@{
   /**
      @brief Constructs a new evas::canvas3d::node object.

      Constructs a new evas::canvas3d::node object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Since this class have a necessary constructor method, you must call it
      in the right place within this constructor parameters.

      Example:
      @code
      evas::canvas3d::node my_node(efl::eo::parent = parent_object,
         my_node.constructor(type_));
      @endcode

      @see node::constructor
      @see node(Eo* eo)
   */
   explicit node(::efl::eo::parent_type _p, _c_constructor _c0)
      : node(_ctors_call(_p, _c0))
   {}

   explicit node(_c_constructor _c0)
      : node(_ctors_call(::efl::eo::parent = nullptr, _c0))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit node(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit node(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   node(node const& other)
      : node(eo_ref(other._eo_ptr()))
   {}

   ~node() {}

   /// @param type 
   ///
   static _c_constructor constructor(Evas_Canvas3D_Node_Type type_);

   Evas_Canvas3D_Node_Type type_get() const;

   /// @param member 
   ///
   void member_add(::evas::canvas3d::node member_) const;

   /// @param member 
   ///
   void member_del(::evas::canvas3d::node member_) const;

   ::evas::canvas3d::node parent_get() const;

   ::efl::eina::crange_list< ::evas::canvas3d::node > member_list_get() const;

   /// @param x 
   /// @param y 
   /// @param z 
   ///
   void position_set(Evas_Real x_, Evas_Real y_, Evas_Real z_) const;

   /// @param x 
   /// @param y 
   /// @param z 
   /// @param w 
   ///
   void orientation_set(Evas_Real x_, Evas_Real y_, Evas_Real z_, Evas_Real w_) const;

   /// @param angle 
   /// @param x 
   /// @param y 
   /// @param z 
   ///
   void orientation_angle_axis_set(Evas_Real angle_, Evas_Real x_, Evas_Real y_, Evas_Real z_) const;

   /// @param x 
   /// @param y 
   /// @param z 
   ///
   void scale_set(Evas_Real x_, Evas_Real y_, Evas_Real z_) const;

   /// @param space 
   /// @param[out] x 
   /// @param[out] y 
   /// @param[out] z 
   ///
   void position_get(Evas_Canvas3D_Space space_, Evas_Real* x_, Evas_Real* y_, Evas_Real* z_) const;

   /// @param space 
   /// @param[out] x 
   /// @param[out] y 
   /// @param[out] z 
   /// @param[out] w 
   ///
   void orientation_get(Evas_Canvas3D_Space space_, Evas_Real* x_, Evas_Real* y_, Evas_Real* z_, Evas_Real* w_) const;

   /// @param space 
   /// @param[out] x 
   /// @param[out] y 
   /// @param[out] z 
   ///
   void scale_get(Evas_Canvas3D_Space space_, Evas_Real* x_, Evas_Real* y_, Evas_Real* z_) const;

   /// @param target_space 
   /// @param x 
   /// @param y 
   /// @param z 
   /// @param up_space 
   /// @param ux 
   /// @param uy 
   /// @param uz 
   ///
   void look_at_set(Evas_Canvas3D_Space target_space_, Evas_Real x_, Evas_Real y_, Evas_Real z_, Evas_Canvas3D_Space up_space_, Evas_Real ux_, Evas_Real uy_, Evas_Real uz_) const;

   /// @param mesh 
   ///
   void mesh_add(::evas::canvas3d::mesh mesh_) const;

   /// @param mesh 
   ///
   void mesh_del(::evas::canvas3d::mesh mesh_) const;

   ::efl::eina::crange_list< ::evas::canvas3d::mesh > mesh_list_get() const;

   /// @param x 
   /// @param y 
   /// @param z 
   /// @param x2 
   /// @param y2 
   /// @param z2 
   ///
   void bounding_box_get(Evas_Real * x_, Evas_Real * y_, Evas_Real * z_, Evas_Real * x2_, Evas_Real * y2_, Evas_Real * z2_) const;

   /// @param x 
   /// @param y 
   /// @param z 
   /// @param r 
   ///
   void bounding_sphere_get(Evas_Real * x_, Evas_Real * y_, Evas_Real * z_, Evas_Real * r_) const;

   bool position_inherit_get() const;

   void position_inherit_set(bool inherit_) const;

   bool orientation_inherit_get() const;

   void orientation_inherit_set(bool inherit_) const;

   bool scale_inherit_get() const;

   void scale_inherit_set(bool inherit_) const;

   ::evas::canvas3d::object camera_get() const;

   void camera_set(::evas::canvas3d::object camera_) const;

   ::evas::canvas3d::light light_get() const;

   void light_set(::evas::canvas3d::light light_) const;

   int mesh_frame_get(::evas::canvas3d::mesh mesh_) const;

   void mesh_frame_set(::evas::canvas3d::mesh mesh_, int frame_) const;

   ::evas::canvas3d::node billboard_target_get() const;

   void billboard_target_set(::evas::canvas3d::node target_) const;

   template <typename F>
   ::efl::eo::signal_connection
   callback_callback_add_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EO_BASE_EVENT_CALLBACK_ADD, priority_,
            &::efl::eo::_detail::event_callback<::evas::canvas3d::node, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::node, function_type>,
         EO_BASE_EVENT_CALLBACK_ADD );
   }

   template <typename T>
   void
   callback_callback_add_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EO_BASE_EVENT_CALLBACK_ADD, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_callback_del_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EO_BASE_EVENT_CALLBACK_DEL, priority_,
            &::efl::eo::_detail::event_callback<::evas::canvas3d::node, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::node, function_type>,
         EO_BASE_EVENT_CALLBACK_DEL );
   }

   template <typename T>
   void
   callback_callback_del_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EO_BASE_EVENT_CALLBACK_DEL, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_clicked_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CANVAS3D_OBJECT_EVENT_CLICKED, priority_,
            &::efl::eo::_detail::event_callback<::evas::canvas3d::node, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::node, function_type>,
         EVAS_CANVAS3D_OBJECT_EVENT_CLICKED );
   }

   template <typename T>
   void
   callback_clicked_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CANVAS3D_OBJECT_EVENT_CLICKED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_collision_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_CANVAS3D_OBJECT_EVENT_COLLISION, priority_,
            &::efl::eo::_detail::event_callback<::evas::canvas3d::node, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::node, function_type>,
         EVAS_CANVAS3D_OBJECT_EVENT_COLLISION );
   }

   template <typename T>
   void
   callback_collision_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_CANVAS3D_OBJECT_EVENT_COLLISION, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_del_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EO_BASE_EVENT_DEL, priority_,
            &::efl::eo::_detail::event_callback<::evas::canvas3d::node, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::node, function_type>,
         EO_BASE_EVENT_DEL );
   }

   template <typename T>
   void
   callback_del_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EO_BASE_EVENT_DEL, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_CANVAS3D_NODE_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::canvas3d::node::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::eo_cxx::evas::canvas3d::object::address_of<address_of>
      , ::eo_cxx::evas::common_interface::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::canvas3d::node* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::canvas3d::node::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::eo_cxx::evas::canvas3d::object::address_const_of<address_const_of>
      , ::eo_cxx::evas::common_interface::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::canvas3d::node const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p, _c_constructor _c0)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_CANVAS3D_NODE_CLASS, _p._eo_raw, _c0());

      _c0.register_ev_del_free_callback(_ret_eo);
      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::canvas3d::node) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::canvas3d::node>::value, "");

} }


#include "evas_canvas3d_node.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_CANVAS3D_NODE_HH


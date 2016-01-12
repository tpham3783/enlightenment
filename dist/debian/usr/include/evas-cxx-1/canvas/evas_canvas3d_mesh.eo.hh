#ifndef EFL_GENERATED_EVAS_CANVAS3D_MESH_HH
#define EFL_GENERATED_EVAS_CANVAS3D_MESH_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_canvas3d_mesh.eo.h"
}

#include "evas_canvas3d_object.eo.hh"
#include "evas_common_interface.eo.hh"
#include "efl_file.eo.hh"
#include <evas_canvas3d_material.eo.hh>
#include <evas_canvas3d_primitive.eo.hh>

namespace evas { namespace canvas3d {

struct mesh;

} }

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas { namespace canvas3d {

struct mesh
{
   /// @param frame 
   /// @param attrib 
   /// @param stride 
   /// @param data 
   ///
   void frame_vertex_data_set(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_, int stride_, const void * data_) const;

   /// @param frame 
   /// @param attrib 
   /// @param stride 
   /// @param data 
   ///
   void frame_vertex_data_copy_set(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_, int stride_, const void * data_) const;

   /// @param frame 
   /// @param attrib 
   ///
   void * frame_vertex_data_map(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_) const;

   /// @param frame 
   /// @param attrib 
   ///
   void frame_vertex_data_unmap(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_) const;

   /// @param frame 
   /// @param attrib 
   ///
   int frame_vertex_stride_get(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_) const;

   /// @param format 
   /// @param count 
   /// @param indices 
   ///
   void index_data_set(Evas_Canvas3D_Index_Format format_, int count_, const void * indices_) const;

   /// @param frame 
   /// @param vertex 
   /// @param index 
   ///
   void convex_hull_data_get(int frame_, Eina_Inarray * vertex_, Eina_Inarray * index_) const;

   /// @param format 
   /// @param count 
   /// @param indices 
   ///
   void index_data_copy_set(Evas_Canvas3D_Index_Format format_, int count_, const void * indices_) const;

   Evas_Canvas3D_Index_Format index_format_get() const;

   int index_count_get() const;

   void * index_data_map() const;

   void index_data_unmap() const;

   /// @param frame 
   ///
   bool frame_exist(int frame_) const;

   /// @param frame 
   ///
   void frame_add(int frame_) const;

   /// @param frame 
   ///
   void frame_del(int frame_) const;

   /// @param r 
   /// @param g 
   /// @param b 
   /// @param a 
   ///
   void fog_color_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const;

   /// @param[out] r 
   /// @param[out] g 
   /// @param[out] b 
   /// @param[out] a 
   ///
   void fog_color_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const;

   /// @param sfactor 
   /// @param dfactor 
   ///
   void blending_func_set(Evas_Canvas3D_Blend_Func sfactor_, Evas_Canvas3D_Blend_Func dfactor_) const;

   /// @param[out] sfactor 
   /// @param[out] dfactor 
   ///
   void blending_func_get(Evas_Canvas3D_Blend_Func* sfactor_, Evas_Canvas3D_Blend_Func* dfactor_) const;

   /// @param frame 
   /// @param primitive 
   ///
   void from_primitive_set(int frame_, ::evas::canvas3d::primitive primitive_) const;

   Evas_Canvas3D_Shade_Mode shade_mode_get() const;

   void shade_mode_set(Evas_Canvas3D_Shade_Mode mode_) const;

   bool color_pick_enable_get() const;

   void color_pick_enable_set(bool enabled_) const;

   unsigned int vertex_count_get() const;

   void vertex_count_set(unsigned int count_) const;

   bool fog_enable_get() const;

   void fog_enable_set(bool enabled_) const;

   bool alpha_test_enable_get() const;

   void alpha_test_enable_set(bool enabled_) const;

   void alpha_func_get(Evas_Canvas3D_Comparison* comparison_func_, Evas_Real* ref_value_) const;

   void alpha_func_set(Evas_Canvas3D_Comparison comparison_func_, Evas_Real ref_value_) const;

   bool blending_enable_get() const;

   void blending_enable_set(bool blending_) const;

   ::evas::canvas3d::material frame_material_get(int frame_) const;

   void frame_material_set(int frame_, ::evas::canvas3d::material material_) const;

   Evas_Canvas3D_Vertex_Assembly vertex_assembly_get() const;

   void vertex_assembly_set(Evas_Canvas3D_Vertex_Assembly assembly_) const;

   void shadows_edges_filtering_get(int* blur_level_, Evas_Real* edges_size_) const;

   void shadows_edges_filtering_set(int blur_level_, Evas_Real edges_size_) const;

   Evas_Real shadows_constant_bias_get() const;

   void shadows_constant_bias_set(Evas_Real bias_) const;



   static Eo_Class const* _eo_class()
   {
      return(EVAS_CANVAS3D_MESH_CLASS);
   }

   operator ::evas::canvas3d::mesh() const;
   operator ::evas::canvas3d::mesh&();
   operator ::evas::canvas3d::mesh const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::canvas3d::mesh*() const { return static_cast<::evas::canvas3d::mesh*>(static_cast<D const*>(this)->p); }
      operator ::evas::canvas3d::mesh const*() const { return static_cast<::evas::canvas3d::mesh const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::canvas3d::mesh const*() const { return static_cast<::evas::canvas3d::mesh const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class mesh
struct mesh
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(efl::file)
      , EO_CXX_INHERIT(eo::base)
      , EO_CXX_INHERIT(evas::canvas3d::object)
      , EO_CXX_INHERIT(evas::common_interface)
{
   //@{
   /**
      @brief Constructs a new evas::canvas3d::mesh object.

      Constructs a new evas::canvas3d::mesh object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::canvas3d::mesh my_mesh(efl::eo::parent = parent_object);
      @endcode

      @see mesh(Eo* eo)
   */
   explicit mesh(::efl::eo::parent_type _p)
      : mesh(_ctors_call(_p))
   {}

   explicit mesh()
      : mesh(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit mesh(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit mesh(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   mesh(mesh const& other)
      : mesh(eo_ref(other._eo_ptr()))
   {}

   ~mesh() {}

   /// @param frame 
   /// @param attrib 
   /// @param stride 
   /// @param data 
   ///
   void frame_vertex_data_set(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_, int stride_, const void * data_) const;

   /// @param frame 
   /// @param attrib 
   /// @param stride 
   /// @param data 
   ///
   void frame_vertex_data_copy_set(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_, int stride_, const void * data_) const;

   /// @param frame 
   /// @param attrib 
   ///
   void * frame_vertex_data_map(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_) const;

   /// @param frame 
   /// @param attrib 
   ///
   void frame_vertex_data_unmap(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_) const;

   /// @param frame 
   /// @param attrib 
   ///
   int frame_vertex_stride_get(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_) const;

   /// @param format 
   /// @param count 
   /// @param indices 
   ///
   void index_data_set(Evas_Canvas3D_Index_Format format_, int count_, const void * indices_) const;

   /// @param frame 
   /// @param vertex 
   /// @param index 
   ///
   void convex_hull_data_get(int frame_, Eina_Inarray * vertex_, Eina_Inarray * index_) const;

   /// @param format 
   /// @param count 
   /// @param indices 
   ///
   void index_data_copy_set(Evas_Canvas3D_Index_Format format_, int count_, const void * indices_) const;

   Evas_Canvas3D_Index_Format index_format_get() const;

   int index_count_get() const;

   void * index_data_map() const;

   void index_data_unmap() const;

   /// @param frame 
   ///
   bool frame_exist(int frame_) const;

   /// @param frame 
   ///
   void frame_add(int frame_) const;

   /// @param frame 
   ///
   void frame_del(int frame_) const;

   /// @param r 
   /// @param g 
   /// @param b 
   /// @param a 
   ///
   void fog_color_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const;

   /// @param[out] r 
   /// @param[out] g 
   /// @param[out] b 
   /// @param[out] a 
   ///
   void fog_color_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const;

   /// @param sfactor 
   /// @param dfactor 
   ///
   void blending_func_set(Evas_Canvas3D_Blend_Func sfactor_, Evas_Canvas3D_Blend_Func dfactor_) const;

   /// @param[out] sfactor 
   /// @param[out] dfactor 
   ///
   void blending_func_get(Evas_Canvas3D_Blend_Func* sfactor_, Evas_Canvas3D_Blend_Func* dfactor_) const;

   /// @param frame 
   /// @param primitive 
   ///
   void from_primitive_set(int frame_, ::evas::canvas3d::primitive primitive_) const;

   Evas_Canvas3D_Shade_Mode shade_mode_get() const;

   void shade_mode_set(Evas_Canvas3D_Shade_Mode mode_) const;

   bool color_pick_enable_get() const;

   void color_pick_enable_set(bool enabled_) const;

   unsigned int vertex_count_get() const;

   void vertex_count_set(unsigned int count_) const;

   bool fog_enable_get() const;

   void fog_enable_set(bool enabled_) const;

   bool alpha_test_enable_get() const;

   void alpha_test_enable_set(bool enabled_) const;

   void alpha_func_get(Evas_Canvas3D_Comparison* comparison_func_, Evas_Real* ref_value_) const;

   void alpha_func_set(Evas_Canvas3D_Comparison comparison_func_, Evas_Real ref_value_) const;

   bool blending_enable_get() const;

   void blending_enable_set(bool blending_) const;

   ::evas::canvas3d::material frame_material_get(int frame_) const;

   void frame_material_set(int frame_, ::evas::canvas3d::material material_) const;

   Evas_Canvas3D_Vertex_Assembly vertex_assembly_get() const;

   void vertex_assembly_set(Evas_Canvas3D_Vertex_Assembly assembly_) const;

   void shadows_edges_filtering_get(int* blur_level_, Evas_Real* edges_size_) const;

   void shadows_edges_filtering_set(int blur_level_, Evas_Real edges_size_) const;

   Evas_Real shadows_constant_bias_get() const;

   void shadows_constant_bias_set(Evas_Real bias_) const;

   template <typename F>
   ::efl::eo::signal_connection
   callback_async_error_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EFL_FILE_EVENT_ASYNC_ERROR, priority_,
            &::efl::eo::_detail::event_callback<::evas::canvas3d::mesh, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::mesh, function_type>,
         EFL_FILE_EVENT_ASYNC_ERROR );
   }

   template <typename T>
   void
   callback_async_error_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_FILE_EVENT_ASYNC_ERROR, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_async_opened_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EFL_FILE_EVENT_ASYNC_OPENED, priority_,
            &::efl::eo::_detail::event_callback<::evas::canvas3d::mesh, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::mesh, function_type>,
         EFL_FILE_EVENT_ASYNC_OPENED );
   }

   template <typename T>
   void
   callback_async_opened_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_FILE_EVENT_ASYNC_OPENED, info));
   }

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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::mesh, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::mesh, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::mesh, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::mesh, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::mesh, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::mesh, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::mesh, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::mesh, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::canvas3d::mesh, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::canvas3d::mesh, function_type>,
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
      return(EVAS_CANVAS3D_MESH_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::canvas3d::mesh::address_of<address_of>
      , ::eo_cxx::efl::file::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::eo_cxx::evas::canvas3d::object::address_of<address_of>
      , ::eo_cxx::evas::common_interface::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::canvas3d::mesh* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::canvas3d::mesh::address_const_of<address_const_of>
      , ::eo_cxx::efl::file::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::eo_cxx::evas::canvas3d::object::address_const_of<address_const_of>
      , ::eo_cxx::evas::common_interface::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::canvas3d::mesh const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_CANVAS3D_MESH_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::canvas3d::mesh) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::canvas3d::mesh>::value, "");

} }


#include "evas_canvas3d_mesh.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_CANVAS3D_MESH_HH


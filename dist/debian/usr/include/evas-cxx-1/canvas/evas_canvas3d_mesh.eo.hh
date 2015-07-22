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
   /// @brief Set the vertex data of the key frame of the given mesh.
   ///
   /// This function make evas read from the given buffer whenever it requires.
   /// If you want to release the buffer after calling this functions, use
   /// evas_canvas3d_mesh_frame_vertex_data_copy_set() instead.
   ///
   /// After setting the vertex data, further modifications should be protected
   /// by map/unmap pair.
   ///
   /// @see evas_canvas3d_mesh_frame_vertex_data_copy_set()
   /// @see evas_canvas3d_mesh_frame_vertex_data_map()
   /// @see evas_canvas3d_mesh_frame_vertex_data_unmap()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param frame The number of the key frame.
   /// @param attrib Vertex attribute ID.
   /// @param stride Stride to go to the next vertex (in bytes).
   /// @param data Pointer to the vertex data buffer.
   ///
   void frame_vertex_data_set(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_, int stride_, const void * data_) const;

   /// @brief Set the vertex data of the key frame of the given mesh by copying from a buffer.
   /// This function allocates internal vertex buffer and copy from the given
   /// buffer. So you can release the buffer. If you want to modify the vertex data
   /// use evas_canvas3d_mesh_frame_vertex_data_map(). After finishing the modifications,
   /// you should call evas_canvas3d_mesh_frame_vertex_data_unmap().
   ///
   /// @see evas_canvas3d_mesh_frame_vertex_data_set()
   /// @see evas_canvas3d_mesh_frame_vertex_data_map()
   /// @see evas_canvas3d_mesh_frame_vertex_data_unmap()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param frame The number of the key frame.
   /// @param attrib Vertex attribute ID.
   /// @param stride Stride to go to the next vertex (in bytes).
   /// @param data Pointer to the vertex data buffer.
   ///
   void frame_vertex_data_copy_set(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_, int stride_, const void * data_) const;

   /// @brief Map the vertex buffer of the key frame of the given mesh.
   ///
   /// After manipulating the mapped buffer, evas_canvas3d_mesh_frame_vertex_data_unmap()
   /// should be called to properly download the data to the engine. If the data
   /// was set using evas_canvas3d_mesh_frame_vertex_data_set(), pointer to the original
   /// buffer will be returned. Otherwise, the returned pointer can differ every
   /// time calling this function.
   ///
   /// @see evas_canvas3d_mesh_frame_vertex_data_unmap()
   /// @return Starting address of the mapped vertex buffer.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param frame The number of the key frame.
   /// @param attrib Vertex attribute ID.
   ///
   void * frame_vertex_data_map(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_) const;

   /// @brief Unmap the vertex buffer of the key frame of the given mesh.
   ///
   /// @see evas_canvas3d_mesh_frame_vertex_data_map()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param frame The number of the key frame.
   /// @param attrib Vertex attribute ID.
   ///
   void frame_vertex_data_unmap(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_) const;

   /// @brief Get the vertex buffer stride of the key frame of the given mesh.
   ///
   /// This function returns valid stride only when the vertex buffer is mapped.
   /// If the data was set with evas_canvas3d_mesh_frame_vertex_data_set(), the original
   /// stride will be returned unchanged.
   ///
   /// @see evas_canvas3d_mesh_frame_vertex_data_map()
   ///
   /// @return           Stride to go to the next vertex (in bytes).
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param frame The number of the key frame.
   /// @param attrib Vertex attribute ID.
   ///
   int frame_vertex_stride_get(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_) const;

   /// @brief Set the vertex index data of the given mesh.
   ///
   /// When the index data is set, Evas 3D assembles vertices using the index data.
   /// If you want to free the data buffer, use evas_canvas3d_mesh_index_data_copy_set().
   /// Further modifications should be made within map/unmap pair.
   ///
   /// @see evas_canvas3d_mesh_index_data_copy_set()
   /// @see evas_canvas3d_mesh_index_data_map()
   /// @see evas_canvas3d_mesh_index_data_unmap()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param format Vertex index data format.
   /// @param count Vertex index count.
   /// @param indices Pointer to the index data.
   ///
   void index_data_set(Evas_Canvas3D_Index_Format format_, int count_, const void * indices_) const;

   /// @brief Set the vertex index data of the given mesh by copying from a buffer.
   ///
   /// This function allocates internal index buffer any copy data from the given
   /// buffer. Futher modifications can be made within map/unmap pair.
   ///
   /// @see evas_canvas3d_mesh_index_data_set()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param format Vertex index data format.
   /// @param count Vertex index count.
   /// @param indices Pointer to the index data.
   ///
   void index_data_copy_set(Evas_Canvas3D_Index_Format format_, int count_, const void * indices_) const;

   /// @brief Get the format of the index data of the given mesh.
   ///
   ///
   /// Returns valid format only when the index buffer is mapped. First map the
   /// index buffer and then query the properties of the mapped buffer. If the index
   /// data was set by evas_canvas3d_mesh_index_data_set(), the original format will be
   /// returned. Otherwise the format can differ every time you call the
   /// evas_canvas3d_mesh_index_data_map() function.
   ///
   /// @see evas_canvas3d_mesh_index_data_map()
   ///
   /// @return           Format of the index data.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   Evas_Canvas3D_Index_Format index_format_get() const;

   /// @brief Get the count of the index data of the given mesh.
   ///
   /// This function returns the index count of the last called data_set function.
   ///
   /// @see evas_canvas3d_mesh_index_data_set()
   /// @see evas_canvas3d_mesh_index_data_copy_set()
   ///
   /// @return           Index data count.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   int index_count_get() const;

   /// @brief Map the index buffer of the given mesh.
   ///
   /// evas_canvas3d_mesh_index_data_unmap() should be called after modifications. If the
   /// data was set using evas_canvas3d_mesh_index_data_set(), the original pointer will
   /// be returned, otherwise, the returned pointer may differ every time you call
   /// this function.
   ///
   /// @see evas_canvas3d_mesh_index_data_unmap()
   ///
   /// @return           Pointer to the mapped buffer.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void * index_data_map() const;

   /// @brief Unmap the index buffer of the given mesh.
   ///
   /// @see evas_canvas3d_mesh_index_data_map()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void index_data_unmap() const;

   /// @brief Add a key frame to the given mesh.
   ///
   /// @param mesh    The given mesh.
   /// @param frame   The number of the key frame to be added.
   ///
   /// If specified frame is already exist, error message will be generated.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param frame The number of the key frame to be added.
   ///
   void frame_add(int frame_) const;

   /// @brief Delete a key frame from the given mesh.
   ///
   /// @param mesh    The given mesh.
   /// @param frame   The number of the key frame to be deleted.
   ///
   /// @see evas_canvas3d_mesh_frame_add()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param frame The number of the key frame to be added.
   ///
   void frame_del(int frame_) const;

   /// @brief Set the fog color and density for the given mesh.
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param r The red component of the fog color.
   /// @param g The green component of the fog color.
   /// @param b The blue component of the fog color.
   /// @param a The transparency of fog.
   ///
   void fog_color_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const;

   /// @brief Set the fog color and density for the given mesh.
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param[out] r Pointer to receive red component of the fog color.
   /// @param[out] g Pointer to receive green component of the fog color.
   /// @param[out] b Pointer to receive blue component of the fog color.
   /// @param[out] a Pointer to receive transparency of fog.
   ///
   void fog_color_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const;

   /// @brief Set the blending function for given mesh
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param sfactor Specifies how the red, green, blue, and alpha source blending factors are computed.
   /// @param dfactor Specifies how the red, green, blue, and alpha destination blending factors are computed.
   ///
   void blending_func_set(Evas_Canvas3D_Blend_Func sfactor_, Evas_Canvas3D_Blend_Func dfactor_) const;

   /// @brief Get blending blending function for given mesh
   /// @see eavs_3d_mesh_blending_func_set()
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param[out] sfactor Pointer to receive source blendin factors key.
   /// @param[out] dfactor Pointer to receive destination blendin factors key.
   ///
   void blending_func_get(Evas_Canvas3D_Blend_Func* sfactor_, Evas_Canvas3D_Blend_Func* dfactor_) const;

   /// @brief Set the data of given mesh frame from the given primitive
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param frame Specifies data of which frame of given mesh will be set.
   /// @param primitive Specifies which data will be set.
   ///
   void from_primitive_set(int frame_, ::evas::canvas3d::primitive primitive_) const;

   /// @brief Get the shade mode of the given mesh.
   ///
   /// @see eavs_3d_mesh_shade_mode_set()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   Evas_Canvas3D_Shade_Mode shade_mode_get() const;

   /// @brief Set the shade mode of the given mesh.
   ///
   /// Default shade mode is EVAS_CANVAS3D_SHADE_MODE_VERTEX_COLOR.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void shade_mode_set(Evas_Canvas3D_Shade_Mode mode_) const;

   /// @brief Get status of color picking of the mesh.
   ///
   /// @see color_pick_enable_set()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   bool color_pick_enable_get() const;

   /// @brief Set posibility color picking.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void color_pick_enable_set(bool enabled_) const;

   /// @brief * Get the vertex count of the given mesh.
   /// *
   /// * @see evas_canvas3d_mesh_vertex_count_set()
   /// *
   /// * @ingroup Evas_Canvas3D_Mesh
   ///
   unsigned int vertex_count_get() const;

   /// @brief Set the vertex count of the given mesh.
   ///
   /// Each key frame should have same vertex count to be properly interpolated.
   /// Key frames have their own vertex data and the data should have more vertices
   /// than the mesh's vertex count.
   ///
   /// Default vertex count is 0.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void vertex_count_set(unsigned int count_) const;

   /// @brief Get the enable status of fog effect for given mesh
   ///
   /// @see fog_enable_set()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   bool fog_enable_get() const;

   /// @brief Enable or disable fog effect for given mesh.
   ///
   /// Default fog is disabled.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void fog_enable_set(bool enabled_) const;

   /// @brief Get the enable status of alpha test for given mesh
   ///
   /// @see alpha_test_enable_set()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   bool alpha_test_enable_get() const;

   /// @brief Get the enable status of alpha test for given mesh
   ///
   /// Default alpha test disabled.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void alpha_test_enable_set(bool enabled_) const;

   /// @brief Get the reference value and the comparison function for alpha testing
   ///
   /// @see eavs_3d_mesh_alpha_test_param_set()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void alpha_func_get(Evas_Canvas3D_Comparison* comparison_func_, Evas_Real* ref_value_) const;

   /// @brief The alpha test discards fragments depending on the outcome of a comparison
   /// between an incoming fragment's alpha value and a constant reference value
   /// This func specifies the reference value and the comparison function.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void alpha_func_set(Evas_Canvas3D_Comparison comparison_func_, Evas_Real ref_value_) const;

   /// @brief Get blending enable status for given mesh.
   ///
   /// @see eavs_3d_mesh_blending_enable_set()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   bool blending_enable_get() const;

   /// @brief Enable or disable blending for given mesh.
   ///
   /// Default blending disabled.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void blending_enable_set(bool blending_) const;

   /// @brief Get the material of the key frame of the given mesh.
   ///
   /// @see evas_canvas3d_mesh_frame_material_set()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   ::evas::canvas3d::material frame_material_get(int frame_) const;

   /// @brief Set the material of the key frame of the given mesh.
   ///
   /// Setting different materials for each key frame is useful for doing animations
   /// like GIF images or color changing animationas.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void frame_material_set(int frame_, ::evas::canvas3d::material material_) const;

   /// @brief Get the vertex assembly of the given mesh.
   ///
   /// @see evas_canvas3d_mesh_vertex_assembly_set()
   ///
   /// @return  The vertex assembly.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   Evas_Canvas3D_Vertex_Assembly vertex_assembly_get() const;

   /// @brief Set the vertex assembly of the given mesh.
   ///
   /// Vertex assembly defines how the engine organizes vertices into geometric
   /// primitives.
   ///
   /// Default vertex assembly is EVAS_CANVAS3D_VERTEX_ASSEMBLY_TRIANGLES.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void vertex_assembly_set(Evas_Canvas3D_Vertex_Assembly assembly_) const;



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

   /// @brief Set the vertex data of the key frame of the given mesh.
   ///
   /// This function make evas read from the given buffer whenever it requires.
   /// If you want to release the buffer after calling this functions, use
   /// evas_canvas3d_mesh_frame_vertex_data_copy_set() instead.
   ///
   /// After setting the vertex data, further modifications should be protected
   /// by map/unmap pair.
   ///
   /// @see evas_canvas3d_mesh_frame_vertex_data_copy_set()
   /// @see evas_canvas3d_mesh_frame_vertex_data_map()
   /// @see evas_canvas3d_mesh_frame_vertex_data_unmap()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param frame The number of the key frame.
   /// @param attrib Vertex attribute ID.
   /// @param stride Stride to go to the next vertex (in bytes).
   /// @param data Pointer to the vertex data buffer.
   ///
   void frame_vertex_data_set(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_, int stride_, const void * data_) const;

   /// @brief Set the vertex data of the key frame of the given mesh by copying from a buffer.
   /// This function allocates internal vertex buffer and copy from the given
   /// buffer. So you can release the buffer. If you want to modify the vertex data
   /// use evas_canvas3d_mesh_frame_vertex_data_map(). After finishing the modifications,
   /// you should call evas_canvas3d_mesh_frame_vertex_data_unmap().
   ///
   /// @see evas_canvas3d_mesh_frame_vertex_data_set()
   /// @see evas_canvas3d_mesh_frame_vertex_data_map()
   /// @see evas_canvas3d_mesh_frame_vertex_data_unmap()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param frame The number of the key frame.
   /// @param attrib Vertex attribute ID.
   /// @param stride Stride to go to the next vertex (in bytes).
   /// @param data Pointer to the vertex data buffer.
   ///
   void frame_vertex_data_copy_set(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_, int stride_, const void * data_) const;

   /// @brief Map the vertex buffer of the key frame of the given mesh.
   ///
   /// After manipulating the mapped buffer, evas_canvas3d_mesh_frame_vertex_data_unmap()
   /// should be called to properly download the data to the engine. If the data
   /// was set using evas_canvas3d_mesh_frame_vertex_data_set(), pointer to the original
   /// buffer will be returned. Otherwise, the returned pointer can differ every
   /// time calling this function.
   ///
   /// @see evas_canvas3d_mesh_frame_vertex_data_unmap()
   /// @return Starting address of the mapped vertex buffer.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param frame The number of the key frame.
   /// @param attrib Vertex attribute ID.
   ///
   void * frame_vertex_data_map(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_) const;

   /// @brief Unmap the vertex buffer of the key frame of the given mesh.
   ///
   /// @see evas_canvas3d_mesh_frame_vertex_data_map()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param frame The number of the key frame.
   /// @param attrib Vertex attribute ID.
   ///
   void frame_vertex_data_unmap(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_) const;

   /// @brief Get the vertex buffer stride of the key frame of the given mesh.
   ///
   /// This function returns valid stride only when the vertex buffer is mapped.
   /// If the data was set with evas_canvas3d_mesh_frame_vertex_data_set(), the original
   /// stride will be returned unchanged.
   ///
   /// @see evas_canvas3d_mesh_frame_vertex_data_map()
   ///
   /// @return           Stride to go to the next vertex (in bytes).
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param frame The number of the key frame.
   /// @param attrib Vertex attribute ID.
   ///
   int frame_vertex_stride_get(int frame_, Evas_Canvas3D_Vertex_Attrib attrib_) const;

   /// @brief Set the vertex index data of the given mesh.
   ///
   /// When the index data is set, Evas 3D assembles vertices using the index data.
   /// If you want to free the data buffer, use evas_canvas3d_mesh_index_data_copy_set().
   /// Further modifications should be made within map/unmap pair.
   ///
   /// @see evas_canvas3d_mesh_index_data_copy_set()
   /// @see evas_canvas3d_mesh_index_data_map()
   /// @see evas_canvas3d_mesh_index_data_unmap()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param format Vertex index data format.
   /// @param count Vertex index count.
   /// @param indices Pointer to the index data.
   ///
   void index_data_set(Evas_Canvas3D_Index_Format format_, int count_, const void * indices_) const;

   /// @brief Set the vertex index data of the given mesh by copying from a buffer.
   ///
   /// This function allocates internal index buffer any copy data from the given
   /// buffer. Futher modifications can be made within map/unmap pair.
   ///
   /// @see evas_canvas3d_mesh_index_data_set()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param format Vertex index data format.
   /// @param count Vertex index count.
   /// @param indices Pointer to the index data.
   ///
   void index_data_copy_set(Evas_Canvas3D_Index_Format format_, int count_, const void * indices_) const;

   /// @brief Get the format of the index data of the given mesh.
   ///
   ///
   /// Returns valid format only when the index buffer is mapped. First map the
   /// index buffer and then query the properties of the mapped buffer. If the index
   /// data was set by evas_canvas3d_mesh_index_data_set(), the original format will be
   /// returned. Otherwise the format can differ every time you call the
   /// evas_canvas3d_mesh_index_data_map() function.
   ///
   /// @see evas_canvas3d_mesh_index_data_map()
   ///
   /// @return           Format of the index data.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   Evas_Canvas3D_Index_Format index_format_get() const;

   /// @brief Get the count of the index data of the given mesh.
   ///
   /// This function returns the index count of the last called data_set function.
   ///
   /// @see evas_canvas3d_mesh_index_data_set()
   /// @see evas_canvas3d_mesh_index_data_copy_set()
   ///
   /// @return           Index data count.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   int index_count_get() const;

   /// @brief Map the index buffer of the given mesh.
   ///
   /// evas_canvas3d_mesh_index_data_unmap() should be called after modifications. If the
   /// data was set using evas_canvas3d_mesh_index_data_set(), the original pointer will
   /// be returned, otherwise, the returned pointer may differ every time you call
   /// this function.
   ///
   /// @see evas_canvas3d_mesh_index_data_unmap()
   ///
   /// @return           Pointer to the mapped buffer.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void * index_data_map() const;

   /// @brief Unmap the index buffer of the given mesh.
   ///
   /// @see evas_canvas3d_mesh_index_data_map()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void index_data_unmap() const;

   /// @brief Add a key frame to the given mesh.
   ///
   /// @param mesh    The given mesh.
   /// @param frame   The number of the key frame to be added.
   ///
   /// If specified frame is already exist, error message will be generated.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param frame The number of the key frame to be added.
   ///
   void frame_add(int frame_) const;

   /// @brief Delete a key frame from the given mesh.
   ///
   /// @param mesh    The given mesh.
   /// @param frame   The number of the key frame to be deleted.
   ///
   /// @see evas_canvas3d_mesh_frame_add()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param frame The number of the key frame to be added.
   ///
   void frame_del(int frame_) const;

   /// @brief Set the fog color and density for the given mesh.
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param r The red component of the fog color.
   /// @param g The green component of the fog color.
   /// @param b The blue component of the fog color.
   /// @param a The transparency of fog.
   ///
   void fog_color_set(Evas_Real r_, Evas_Real g_, Evas_Real b_, Evas_Real a_) const;

   /// @brief Set the fog color and density for the given mesh.
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param[out] r Pointer to receive red component of the fog color.
   /// @param[out] g Pointer to receive green component of the fog color.
   /// @param[out] b Pointer to receive blue component of the fog color.
   /// @param[out] a Pointer to receive transparency of fog.
   ///
   void fog_color_get(Evas_Real* r_, Evas_Real* g_, Evas_Real* b_, Evas_Real* a_) const;

   /// @brief Set the blending function for given mesh
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param sfactor Specifies how the red, green, blue, and alpha source blending factors are computed.
   /// @param dfactor Specifies how the red, green, blue, and alpha destination blending factors are computed.
   ///
   void blending_func_set(Evas_Canvas3D_Blend_Func sfactor_, Evas_Canvas3D_Blend_Func dfactor_) const;

   /// @brief Get blending blending function for given mesh
   /// @see eavs_3d_mesh_blending_func_set()
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param[out] sfactor Pointer to receive source blendin factors key.
   /// @param[out] dfactor Pointer to receive destination blendin factors key.
   ///
   void blending_func_get(Evas_Canvas3D_Blend_Func* sfactor_, Evas_Canvas3D_Blend_Func* dfactor_) const;

   /// @brief Set the data of given mesh frame from the given primitive
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   /// @param frame Specifies data of which frame of given mesh will be set.
   /// @param primitive Specifies which data will be set.
   ///
   void from_primitive_set(int frame_, ::evas::canvas3d::primitive primitive_) const;

   /// @brief Get the shade mode of the given mesh.
   ///
   /// @see eavs_3d_mesh_shade_mode_set()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   Evas_Canvas3D_Shade_Mode shade_mode_get() const;

   /// @brief Set the shade mode of the given mesh.
   ///
   /// Default shade mode is EVAS_CANVAS3D_SHADE_MODE_VERTEX_COLOR.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void shade_mode_set(Evas_Canvas3D_Shade_Mode mode_) const;

   /// @brief Get status of color picking of the mesh.
   ///
   /// @see color_pick_enable_set()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   bool color_pick_enable_get() const;

   /// @brief Set posibility color picking.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void color_pick_enable_set(bool enabled_) const;

   /// @brief * Get the vertex count of the given mesh.
   /// *
   /// * @see evas_canvas3d_mesh_vertex_count_set()
   /// *
   /// * @ingroup Evas_Canvas3D_Mesh
   ///
   unsigned int vertex_count_get() const;

   /// @brief Set the vertex count of the given mesh.
   ///
   /// Each key frame should have same vertex count to be properly interpolated.
   /// Key frames have their own vertex data and the data should have more vertices
   /// than the mesh's vertex count.
   ///
   /// Default vertex count is 0.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void vertex_count_set(unsigned int count_) const;

   /// @brief Get the enable status of fog effect for given mesh
   ///
   /// @see fog_enable_set()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   bool fog_enable_get() const;

   /// @brief Enable or disable fog effect for given mesh.
   ///
   /// Default fog is disabled.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void fog_enable_set(bool enabled_) const;

   /// @brief Get the enable status of alpha test for given mesh
   ///
   /// @see alpha_test_enable_set()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   bool alpha_test_enable_get() const;

   /// @brief Get the enable status of alpha test for given mesh
   ///
   /// Default alpha test disabled.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void alpha_test_enable_set(bool enabled_) const;

   /// @brief Get the reference value and the comparison function for alpha testing
   ///
   /// @see eavs_3d_mesh_alpha_test_param_set()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void alpha_func_get(Evas_Canvas3D_Comparison* comparison_func_, Evas_Real* ref_value_) const;

   /// @brief The alpha test discards fragments depending on the outcome of a comparison
   /// between an incoming fragment's alpha value and a constant reference value
   /// This func specifies the reference value and the comparison function.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void alpha_func_set(Evas_Canvas3D_Comparison comparison_func_, Evas_Real ref_value_) const;

   /// @brief Get blending enable status for given mesh.
   ///
   /// @see eavs_3d_mesh_blending_enable_set()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   bool blending_enable_get() const;

   /// @brief Enable or disable blending for given mesh.
   ///
   /// Default blending disabled.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void blending_enable_set(bool blending_) const;

   /// @brief Get the material of the key frame of the given mesh.
   ///
   /// @see evas_canvas3d_mesh_frame_material_set()
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   ::evas::canvas3d::material frame_material_get(int frame_) const;

   /// @brief Set the material of the key frame of the given mesh.
   ///
   /// Setting different materials for each key frame is useful for doing animations
   /// like GIF images or color changing animationas.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void frame_material_set(int frame_, ::evas::canvas3d::material material_) const;

   /// @brief Get the vertex assembly of the given mesh.
   ///
   /// @see evas_canvas3d_mesh_vertex_assembly_set()
   ///
   /// @return  The vertex assembly.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   Evas_Canvas3D_Vertex_Assembly vertex_assembly_get() const;

   /// @brief Set the vertex assembly of the given mesh.
   ///
   /// Vertex assembly defines how the engine organizes vertices into geometric
   /// primitives.
   ///
   /// Default vertex assembly is EVAS_CANVAS3D_VERTEX_ASSEMBLY_TRIANGLES.
   ///
   /// @ingroup Evas_Canvas3D_Mesh
   ///
   void vertex_assembly_set(Evas_Canvas3D_Vertex_Assembly assembly_) const;

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


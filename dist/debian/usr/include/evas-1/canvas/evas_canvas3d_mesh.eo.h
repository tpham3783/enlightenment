#ifndef _EVAS_CANVAS3D_MESH_EO_H_
#define _EVAS_CANVAS3D_MESH_EO_H_

#ifndef _EVAS_CANVAS3D_MESH_EO_CLASS_TYPE
#define _EVAS_CANVAS3D_MESH_EO_CLASS_TYPE

typedef Eo Evas_Canvas3D_Mesh;

#endif

#ifndef _EVAS_CANVAS3D_MESH_EO_TYPES
#define _EVAS_CANVAS3D_MESH_EO_TYPES


#endif
#define EVAS_CANVAS3D_MESH_CLASS evas_canvas3d_mesh_class_get()

EAPI const Eo_Class *evas_canvas3d_mesh_class_get(void) EINA_CONST;

/**
 * Set the shade mode of the given mesh.
 *
 * Default shade mode is EVAS_CANVAS3D_SHADE_MODE_VERTEX_COLOR.
 *
 * @ingroup Evas_Canvas3D_Mesh
 *
 * @param[in] mode The shade mode.
 */
EOAPI void  evas_canvas3d_mesh_shade_mode_set(Evas_Canvas3D_Shade_Mode mode);

/**
 * Get the shade mode of the given mesh.
 *
 * @see eavs_3d_mesh_shade_mode_set()
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI Evas_Canvas3D_Shade_Mode  evas_canvas3d_mesh_shade_mode_get(void);

/**
 * Set posibility color picking.
 *
 * @ingroup Evas_Canvas3D_Mesh
 *
 * @param[in] enabled Posibility flag
 */
EOAPI void  evas_canvas3d_mesh_color_pick_enable_set(Eina_Bool enabled);

/**
 * Get status of color picking of the mesh.
 *
 * @see color_pick_enable_set()
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI Eina_Bool  evas_canvas3d_mesh_color_pick_enable_get(void);

/**
 * Set the vertex count of the given mesh.
 *
 * Each key frame should have same vertex count to be properly interpolated.
 * Key frames have their own vertex data and the data should have more vertices
 * than the mesh's vertex count.
 *
 * Default vertex count is 0.
 *
 * @ingroup Evas_Canvas3D_Mesh
 *
 * @param[in] count Vertex count.
 */
EOAPI void  evas_canvas3d_mesh_vertex_count_set(unsigned int count);

/**
 * * Get the vertex count of the given mesh.
 * *
 * * @see evas_canvas3d_mesh_vertex_count_set()
 * *
 * * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI unsigned int  evas_canvas3d_mesh_vertex_count_get(void);

/**
 * Enable or disable fog effect for given mesh.
 *
 * Default fog is disabled.
 *
 * @ingroup Evas_Canvas3D_Mesh
 *
 * @param[in] enabled Fog enabled status.
 */
EOAPI void  evas_canvas3d_mesh_fog_enable_set(Eina_Bool enabled);

/**
 * Get the enable status of fog effect for given mesh
 *
 * @see fog_enable_set()
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI Eina_Bool  evas_canvas3d_mesh_fog_enable_get(void);

/**
 * Get the enable status of alpha test for given mesh
 *
 * Default alpha test disabled.
 *
 * @ingroup Evas_Canvas3D_Mesh
 *
 * @param[in] enabled Alpha test status.
 */
EOAPI void  evas_canvas3d_mesh_alpha_test_enable_set(Eina_Bool enabled);

/**
 * Get the enable status of alpha test for given mesh
 *
 * @see alpha_test_enable_set()
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI Eina_Bool  evas_canvas3d_mesh_alpha_test_enable_get(void);

/**
 * The alpha test discards fragments depending on the outcome of a comparison
 * between an incoming fragment's alpha value and a constant reference value
 * This func specifies the reference value and the comparison function.
 *
 * @ingroup Evas_Canvas3D_Mesh
 *
 * @param[in] comparison_func Specifies the alpha comparison function.
 * @param[in] ref_value Specifies the reference value that incoming alpha values are compared to.
 */
EOAPI void  evas_canvas3d_mesh_alpha_func_set(Evas_Canvas3D_Comparison comparison_func, Evas_Real ref_value);

/**
 * Get the reference value and the comparison function for alpha testing
 *
 * @see eavs_3d_mesh_alpha_test_param_set()
 *
 * @ingroup Evas_Canvas3D_Mesh
 *
 * @param[out] comparison_func Specifies the alpha comparison function.
 * @param[out] ref_value Specifies the reference value that incoming alpha values are compared to.
 */
EOAPI void  evas_canvas3d_mesh_alpha_func_get(Evas_Canvas3D_Comparison *comparison_func, Evas_Real *ref_value);

/**
 * Enable or disable blending for given mesh.
 *
 * Default blending disabled.
 *
 * @ingroup Evas_Canvas3D_Mesh
 *
 * @param[in] blending The blending state.
 */
EOAPI void  evas_canvas3d_mesh_blending_enable_set(Eina_Bool blending);

/**
 * Get blending enable status for given mesh.
 *
 * @see eavs_3d_mesh_blending_enable_set()
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI Eina_Bool  evas_canvas3d_mesh_blending_enable_get(void);

/**
 * Set the material of the key frame of the given mesh.
 *
 * Setting different materials for each key frame is useful for doing animations
 * like GIF images or color changing animationas.
 *
 * @ingroup Evas_Canvas3D_Mesh
 *
 * @param[in] frame The number of the key frame.
 * @param[in] material The material to be set to the key frame.
 */
EOAPI void  evas_canvas3d_mesh_frame_material_set(int frame, Evas_Canvas3D_Material *material);

/**
 * Get the material of the key frame of the given mesh.
 *
 * @see evas_canvas3d_mesh_frame_material_set()
 *
 * @ingroup Evas_Canvas3D_Mesh
 *
 * @param[in] frame The number of the key frame.
 */
EOAPI Evas_Canvas3D_Material * evas_canvas3d_mesh_frame_material_get(int frame);

/**
 * Set the vertex assembly of the given mesh.
 *
 * Vertex assembly defines how the engine organizes vertices into geometric
 * primitives.
 *
 * Default vertex assembly is EVAS_CANVAS3D_VERTEX_ASSEMBLY_TRIANGLES.
 *
 * @ingroup Evas_Canvas3D_Mesh
 *
 * @param[in] assembly Vertex assembly.
 */
EOAPI void  evas_canvas3d_mesh_vertex_assembly_set(Evas_Canvas3D_Vertex_Assembly assembly);

/**
 * Get the vertex assembly of the given mesh.
 *
 * @see evas_canvas3d_mesh_vertex_assembly_set()
 *
 * @return  The vertex assembly.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI Evas_Canvas3D_Vertex_Assembly  evas_canvas3d_mesh_vertex_assembly_get(void);

/**
 * Set the vertex data of the key frame of the given mesh.
 *
 * This function make evas read from the given buffer whenever it requires.
 * If you want to release the buffer after calling this functions, use
 * evas_canvas3d_mesh_frame_vertex_data_copy_set() instead.
 *
 * After setting the vertex data, further modifications should be protected
 * by map/unmap pair.
 *
 * @see evas_canvas3d_mesh_frame_vertex_data_copy_set()
 * @see evas_canvas3d_mesh_frame_vertex_data_map()
 * @see evas_canvas3d_mesh_frame_vertex_data_unmap()
 *
 * @ingroup Evas_Canvas3D_Mesh
 * 
 *
 * @param[in] frame The number of the key frame.
 * @param[in] attrib Vertex attribute ID.
 * @param[in] stride Stride to go to the next vertex (in bytes).
 * @param[in] data Pointer to the vertex data buffer.
 */
EOAPI void  evas_canvas3d_mesh_frame_vertex_data_set(int frame, Evas_Canvas3D_Vertex_Attrib attrib, int stride, const void *data);

/**
 * Set the vertex data of the key frame of the given mesh by copying from a buffer.
 * This function allocates internal vertex buffer and copy from the given
 * buffer. So you can release the buffer. If you want to modify the vertex data
 * use evas_canvas3d_mesh_frame_vertex_data_map(). After finishing the modifications,
 * you should call evas_canvas3d_mesh_frame_vertex_data_unmap().
 *
 * @see evas_canvas3d_mesh_frame_vertex_data_set()
 * @see evas_canvas3d_mesh_frame_vertex_data_map()
 * @see evas_canvas3d_mesh_frame_vertex_data_unmap()
 *
 * @ingroup Evas_Canvas3D_Mesh
 * 
 *
 * @param[in] frame The number of the key frame.
 * @param[in] attrib Vertex attribute ID.
 * @param[in] stride Stride to go to the next vertex (in bytes).
 * @param[in] data Pointer to the vertex data buffer.
 */
EOAPI void  evas_canvas3d_mesh_frame_vertex_data_copy_set(int frame, Evas_Canvas3D_Vertex_Attrib attrib, int stride, const void *data);

/**
 * Map the vertex buffer of the key frame of the given mesh.
 *
 * After manipulating the mapped buffer, evas_canvas3d_mesh_frame_vertex_data_unmap()
 * should be called to properly download the data to the engine. If the data
 * was set using evas_canvas3d_mesh_frame_vertex_data_set(), pointer to the original
 * buffer will be returned. Otherwise, the returned pointer can differ every
 * time calling this function.
 *
 * @see evas_canvas3d_mesh_frame_vertex_data_unmap()
 * @return Starting address of the mapped vertex buffer.
 *
 * @ingroup Evas_Canvas3D_Mesh
 * 
 *
 * @param[in] frame The number of the key frame.
 * @param[in] attrib Vertex attribute ID.
 */
EOAPI void * evas_canvas3d_mesh_frame_vertex_data_map(int frame, Evas_Canvas3D_Vertex_Attrib attrib);

/**
 * Unmap the vertex buffer of the key frame of the given mesh.
 *
 * @see evas_canvas3d_mesh_frame_vertex_data_map()
 *
 * @ingroup Evas_Canvas3D_Mesh
 * 
 *
 * @param[in] frame The number of the key frame.
 * @param[in] attrib Vertex attribute ID.
 */
EOAPI void  evas_canvas3d_mesh_frame_vertex_data_unmap(int frame, Evas_Canvas3D_Vertex_Attrib attrib);

/**
 * Get the vertex buffer stride of the key frame of the given mesh.
 *
 * This function returns valid stride only when the vertex buffer is mapped.
 * If the data was set with evas_canvas3d_mesh_frame_vertex_data_set(), the original
 * stride will be returned unchanged.
 *
 * @see evas_canvas3d_mesh_frame_vertex_data_map()
 *
 * @return           Stride to go to the next vertex (in bytes).
 *
 * @ingroup Evas_Canvas3D_Mesh
 * 
 *
 * @param[in] frame The number of the key frame.
 * @param[in] attrib Vertex attribute ID.
 */
EOAPI int  evas_canvas3d_mesh_frame_vertex_stride_get(int frame, Evas_Canvas3D_Vertex_Attrib attrib);

/**
 * Set the vertex index data of the given mesh.
 *
 * When the index data is set, Evas 3D assembles vertices using the index data.
 * If you want to free the data buffer, use evas_canvas3d_mesh_index_data_copy_set().
 * Further modifications should be made within map/unmap pair.
 *
 * @see evas_canvas3d_mesh_index_data_copy_set()
 * @see evas_canvas3d_mesh_index_data_map()
 * @see evas_canvas3d_mesh_index_data_unmap()
 *
 * @ingroup Evas_Canvas3D_Mesh
 * 
 *
 * @param[in] format Vertex index data format.
 * @param[in] count Vertex index count.
 * @param[in] indices Pointer to the index data.
 */
EOAPI void  evas_canvas3d_mesh_index_data_set(Evas_Canvas3D_Index_Format format, int count, const void *indices);

/**
 * Set the vertex index data of the given mesh by copying from a buffer.
 *
 * This function allocates internal index buffer any copy data from the given
 * buffer. Futher modifications can be made within map/unmap pair.
 *
 * @see evas_canvas3d_mesh_index_data_set()
 *
 * @ingroup Evas_Canvas3D_Mesh
 * 
 *
 * @param[in] format Vertex index data format.
 * @param[in] count Vertex index count.
 * @param[in] indices Pointer to the index data.
 */
EOAPI void  evas_canvas3d_mesh_index_data_copy_set(Evas_Canvas3D_Index_Format format, int count, const void *indices);

/**
 * Get the format of the index data of the given mesh.
 *
 *
 * Returns valid format only when the index buffer is mapped. First map the
 * index buffer and then query the properties of the mapped buffer. If the index
 * data was set by evas_canvas3d_mesh_index_data_set(), the original format will be
 * returned. Otherwise the format can differ every time you call the
 * evas_canvas3d_mesh_index_data_map() function.
 *
 * @see evas_canvas3d_mesh_index_data_map()
 *
 * @return           Format of the index data.
 *
 * @ingroup Evas_Canvas3D_Mesh
 * 
 */
EOAPI Evas_Canvas3D_Index_Format  evas_canvas3d_mesh_index_format_get(void);

/**
 * Get the count of the index data of the given mesh.
 *
 * This function returns the index count of the last called data_set function.
 *
 * @see evas_canvas3d_mesh_index_data_set()
 * @see evas_canvas3d_mesh_index_data_copy_set()
 *
 * @return           Index data count.
 *
 * @ingroup Evas_Canvas3D_Mesh
 * 
 */
EOAPI int  evas_canvas3d_mesh_index_count_get(void);

/**
 * Map the index buffer of the given mesh.
 *
 * evas_canvas3d_mesh_index_data_unmap() should be called after modifications. If the
 * data was set using evas_canvas3d_mesh_index_data_set(), the original pointer will
 * be returned, otherwise, the returned pointer may differ every time you call
 * this function.
 *
 * @see evas_canvas3d_mesh_index_data_unmap()
 *
 * @return           Pointer to the mapped buffer.
 *
 * @ingroup Evas_Canvas3D_Mesh
 * 
 */
EOAPI void * evas_canvas3d_mesh_index_data_map(void);

/**
 * Unmap the index buffer of the given mesh.
 *
 * @see evas_canvas3d_mesh_index_data_map()
 *
 * @ingroup Evas_Canvas3D_Mesh
 * 
 */
EOAPI void  evas_canvas3d_mesh_index_data_unmap(void);

/**
 * Add a key frame to the given mesh.
 *
 * @param mesh    The given mesh.
 * @param frame   The number of the key frame to be added.
 *
 * If specified frame is already exist, error message will be generated.
 *
 * @ingroup Evas_Canvas3D_Mesh
 * 
 *
 * @param[in] frame The number of the key frame to be added.
 */
EOAPI void  evas_canvas3d_mesh_frame_add(int frame);

/**
 * Delete a key frame from the given mesh.
 *
 * @param mesh    The given mesh.
 * @param frame   The number of the key frame to be deleted.
 *
 * @see evas_canvas3d_mesh_frame_add()
 *
 * @ingroup Evas_Canvas3D_Mesh
 * 
 *
 * @param[in] frame The number of the key frame to be added.
 */
EOAPI void  evas_canvas3d_mesh_frame_del(int frame);

/**
 * Set the fog color and density for the given mesh.
 * @ingroup Evas_Canvas3D_Mesh
 * 
 *
 * @param[in] r The red component of the fog color.
 * @param[in] g The green component of the fog color.
 * @param[in] b The blue component of the fog color.
 * @param[in] a The transparency of fog.
 */
EOAPI void  evas_canvas3d_mesh_fog_color_set(Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

/**
 * Set the fog color and density for the given mesh.
 * @ingroup Evas_Canvas3D_Mesh
 * 
 *
 * @param[out] r Pointer to receive red component of the fog color.
 * @param[out] g Pointer to receive green component of the fog color.
 * @param[out] b Pointer to receive blue component of the fog color.
 * @param[out] a Pointer to receive transparency of fog.
 */
EOAPI void  evas_canvas3d_mesh_fog_color_get(Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

/**
 * Set the blending function for given mesh
 * @ingroup Evas_Canvas3D_Mesh
 * 
 *
 * @param[in] sfactor Specifies how the red, green, blue, and alpha source blending factors are computed.
 * @param[in] dfactor Specifies how the red, green, blue, and alpha destination blending factors are computed.
 */
EOAPI void  evas_canvas3d_mesh_blending_func_set(Evas_Canvas3D_Blend_Func sfactor, Evas_Canvas3D_Blend_Func dfactor);

/**
 * Get blending blending function for given mesh
 * @see eavs_3d_mesh_blending_func_set()
 * @ingroup Evas_Canvas3D_Mesh
 * 
 *
 * @param[out] sfactor Pointer to receive source blendin factors key.
 * @param[out] dfactor Pointer to receive destination blendin factors key.
 */
EOAPI void  evas_canvas3d_mesh_blending_func_get(Evas_Canvas3D_Blend_Func *sfactor, Evas_Canvas3D_Blend_Func *dfactor);

/**
 * Set the data of given mesh frame from the given primitive
 * @ingroup Evas_Canvas3D_Mesh
 * 
 *
 * @param[in] frame Specifies data of which frame of given mesh will be set.
 * @param[in] primitive Specifies which data will be set.
 */
EOAPI void  evas_canvas3d_mesh_from_primitive_set(int frame, Evas_Canvas3D_Primitive *primitive);


#endif

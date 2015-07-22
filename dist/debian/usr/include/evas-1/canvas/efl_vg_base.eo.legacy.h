#ifndef _EFL_VG_BASE_EO_LEGACY_H_
#define _EFL_VG_BASE_EO_LEGACY_H_

#ifndef _EFL_VG_BASE_EO_CLASS_TYPE
#define _EFL_VG_BASE_EO_CLASS_TYPE

typedef Eo Efl_VG_Base;

#endif

#ifndef _EFL_VG_BASE_EO_TYPES
#define _EFL_VG_BASE_EO_TYPES


#endif

/**
 * @brief Give the bounding box in screen coordinate as being drawn.
 *
 * It will start as the control box until it is refined once the shape is
 * computed.
 *
 * @param[out] r bounding box to be returned.
 *
 * @since 1.14
 *
 * @ingroup Efl_VG_Base
 */
EAPI void evas_vg_node_bounds_get(Efl_VG_Base *obj, Eina_Rectangle *r);

/**
 * @brief Sets the transformation matrix to be used for this node object.
 *
 * Note: Pass @c null to cancel the applied transformation.
 *
 * @param[in] m transformation matrix.
 *
 * @since 1.14
 *
 * @ingroup Efl_VG_Base
 */
EAPI void evas_vg_node_transformation_set(Efl_VG_Base *obj, const Eina_Matrix3 *m);

/**
 * @brief Gets the transformation matrix used for this node object.
 *
 * @return transformation matrix.
 *
 * @since 1.14
 *
 * @ingroup Efl_VG_Base
 */
EAPI const Eina_Matrix3 *evas_vg_node_transformation_get(const Efl_VG_Base *obj);

/**
 * @brief Sets the origin position of this node object.
 *
 * This origin position affects to node transformation.
 *
 * @param[in] x @c origin x position.
 * @param[in] y @c origin y position.
 *
 * @since 1.14
 *
 * @ingroup Efl_VG_Base
 */
EAPI void evas_vg_node_origin_set(Efl_VG_Base *obj, double x, double y);

/**
 * @brief Gets the origin position of this node object.
 *
 * @param[out] x @c origin x position.
 * @param[out] y @c origin y position.
 *
 * @since 1.14
 *
 * @ingroup Efl_VG_Base
 */
EAPI void evas_vg_node_origin_get(const Efl_VG_Base *obj, double *x, double *y);

/**
 * No description supplied.
 *
 * @param[in] m No description supplied.
 */
EAPI void evas_vg_node_mask_set(Efl_VG_Base *obj, Efl_VG *m);

/**
 * No description supplied.
 */
EAPI Efl_VG *evas_vg_node_mask_get(const Efl_VG_Base *obj);

#endif

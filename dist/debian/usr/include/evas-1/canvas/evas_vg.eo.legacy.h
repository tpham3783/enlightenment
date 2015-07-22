#ifndef _EVAS_VG_EO_LEGACY_H_
#define _EVAS_VG_EO_LEGACY_H_

#ifndef _EVAS_VG_EO_CLASS_TYPE
#define _EVAS_VG_EO_CLASS_TYPE

typedef Eo Evas_VG;

#endif

#ifndef _EVAS_VG_EO_TYPES
#define _EVAS_VG_EO_TYPES


#endif

/**
 * Get the root node of the evas_object_vg.
 *
 * @note To manually create the shape object and show in the Vg
 * object canvas you must create the hirarchy and set the
 * parent as root node.
 * @since 1.14
 */
EAPI Efl_VG *evas_object_vg_root_node_get(const Evas_VG *obj);

#endif

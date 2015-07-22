#ifndef _ELM_GRID_EO_H_
#define _ELM_GRID_EO_H_

#ifndef _ELM_GRID_EO_CLASS_TYPE
#define _ELM_GRID_EO_CLASS_TYPE

typedef Eo Elm_Grid;

#endif

#ifndef _ELM_GRID_EO_TYPES
#define _ELM_GRID_EO_TYPES


#endif
#define ELM_GRID_CLASS elm_grid_class_get()

EAPI const Eo_Class *elm_grid_class_get(void) EINA_CONST;

/**
 * Set the virtual size of the grid
 *
 * @ingroup Grid
 *
 * @param[in] w The virtual width of the grid
 * @param[in] h The virtual height of the grid
 */
EOAPI void  elm_obj_grid_size_set(Evas_Coord w, Evas_Coord h);

/**
 * Get the virtual size of the grid
 *
 * @ingroup Grid
 *
 * @param[out] w The virtual width of the grid
 * @param[out] h The virtual height of the grid
 */
EOAPI void  elm_obj_grid_size_get(Evas_Coord *w, Evas_Coord *h);

/**
 * Get the list of the children for the grid.
 *
 * @note This is a duplicate of the list kept by the grid internally.
 * It's up to the user to destroy it when it no longer needs it.
 * It's possible to remove objects from the grid when walking this
 * list, but these removals won't be reflected on it.
 *
 * @ingroup Grid
 */
EOAPI Eina_List * elm_obj_grid_children_get(void);

/**
 * Faster way to remove all child objects from a grid object.
 *
 * @ingroup Grid
 * 
 *
 * @param[in] clear If true, it will delete just removed children
 */
EOAPI void  elm_obj_grid_clear(Eina_Bool clear);

/**
 * Unpack a child from a grid object
 *
 * @ingroup Grid
 * 
 *
 * @param[in] subobj The child to unpack
 */
EOAPI void  elm_obj_grid_unpack(Evas_Object *subobj);

/**
 * Pack child at given position and size
 *
 * @ingroup Grid
 * 
 *
 * @param[in] subobj The child to pack
 * @param[in] x The virtual x coord at which to pack it
 * @param[in] y The virtual y coord at which to pack it
 * @param[in] w The virtual width at which to pack it
 * @param[in] h The virtual height at which to pack it
 */
EOAPI void  elm_obj_grid_pack(Evas_Object *subobj, Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h);


#endif

#ifndef _EVAS_POLYGON_EO_LEGACY_H_
#define _EVAS_POLYGON_EO_LEGACY_H_

#ifndef _EVAS_POLYGON_EO_CLASS_TYPE
#define _EVAS_POLYGON_EO_CLASS_TYPE

typedef Eo Evas_Polygon;

#endif

#ifndef _EVAS_POLYGON_EO_TYPES
#define _EVAS_POLYGON_EO_TYPES


#endif

/**
 * @brief Adds the given point to the given evas polygon object.
 *
 * @param[in] y The Y coordinate of the given point.
 *
 * @ingroup Evas_Polygon
 */
EAPI void evas_object_polygon_point_add(Evas_Polygon *obj, Evas_Coord x, Evas_Coord y);

/** Removes all of the points from the given evas polygon object.
 *
 * @ingroup Evas_Polygon
 */
EAPI void evas_object_polygon_points_clear(Evas_Polygon *obj);

#endif

#ifndef _ELM_PAN_EO_LEGACY_H_
#define _ELM_PAN_EO_LEGACY_H_

#ifndef _ELM_PAN_EO_CLASS_TYPE
#define _ELM_PAN_EO_CLASS_TYPE

typedef Eo Elm_Pan;

#endif

#ifndef _ELM_PAN_EO_TYPES
#define _ELM_PAN_EO_TYPES


#endif

/**
 * No description supplied by the EAPI.
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 */
EAPI void elm_pan_gravity_set(Elm_Pan *obj, double x, double y);

/**
 * No description supplied by the EAPI.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 */
EAPI void elm_pan_gravity_get(const Elm_Pan *obj, double *x, double *y);

/**
 * No description supplied by the EAPI.
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 */
EAPI void elm_pan_pos_set(Elm_Pan *obj, Evas_Coord x, Evas_Coord y);

/**
 * No description supplied by the EAPI.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 */
EAPI void elm_pan_pos_get(const Elm_Pan *obj, Evas_Coord *x, Evas_Coord *y);

/**
 * No description supplied by the EAPI.
 *
 * @param[out] w No description supplied.
 * @param[out] h No description supplied.
 */
EAPI void elm_pan_content_size_get(const Elm_Pan *obj, Evas_Coord *w, Evas_Coord *h);

/**
 * No description supplied by the EAPI.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 */
EAPI void elm_pan_pos_min_get(const Elm_Pan *obj, Evas_Coord *x, Evas_Coord *y);

/**
 * No description supplied by the EAPI.
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 */
EAPI void elm_pan_pos_max_get(const Elm_Pan *obj, Evas_Coord *x, Evas_Coord *y);

#endif

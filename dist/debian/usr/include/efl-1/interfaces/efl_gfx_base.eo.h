#ifndef _EFL_GFX_BASE_EO_H_
#define _EFL_GFX_BASE_EO_H_

#ifndef _EFL_GFX_BASE_EO_CLASS_TYPE
#define _EFL_GFX_BASE_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Base;

#endif

#ifndef _EFL_GFX_BASE_EO_TYPES
#define _EFL_GFX_BASE_EO_TYPES

typedef enum
{
  EFL_GFX_COLORSPACE_ARGB8888 = 0, /** ARGB 32 bits per pixel, high-byte is
                                    * Alpha, accessed one 32-bit word at a time
                                    */
  EFL_GFX_COLORSPACE_GRY8 = 4 /** 8-bit gray image, or alpha only */
} Efl_Gfx_Colorspace;

typedef enum
{
  EFL_GFX_RENDER_OP_BLEND = 0, /** Alpha blending onto destination (default); d
                                * = d*(1-sa) + s */
  EFL_GFX_RENDER_OP_COPY = 1, /** Copy source to destination; d = s */
  EFL_GFX_RENDER_OP_LAST
} Efl_Gfx_Render_Op;

typedef enum
{
  EFL_GFX_COLOR_TYPE_BITS8 = 0, /** Color is encoded in the top 8 bits of the
                                 * unsigned short as a unsigned char. */
  EFL_GFX_COLOR_TYPE_BITS16, /** Color is encoded in the 16 bits as an unsigned
                              * char. */
  EFL_GFX_COLOR_TYPE_LAST
} Efl_Gfx_Color_Type;

/** Define an RGBA color.
 *
 * @ingroup Efl_Gfx
 */
typedef struct _Efl_Gfx_Color
{
  unsigned short r; /** The red component. */
  unsigned short g; /** The green component. */
  unsigned short b; /** The blue component. */
  unsigned short a; /** The alpha component. */
  Efl_Gfx_Color_Type type;
} Efl_Gfx_Color;


#endif
#define EFL_GFX_BASE_INTERFACE efl_gfx_base_interface_get()

EAPI const Eo_Class *efl_gfx_base_interface_get(void) EINA_CONST;

/**
 * @brief Move the given Evas object to the given location inside its canvas'
 * viewport.
 *
 * @param[in] x
 * @param[in] y
 *
 * @ingroup Efl_Gfx_Base
 */
EOAPI void efl_gfx_position_set(int x, int y);

/**
 * @brief Retrieves the position of the given Evas object.
 *
 * @param[out] x
 * @param[out] y
 *
 * @ingroup Efl_Gfx_Base
 */
EOAPI void efl_gfx_position_get(int *x, int *y);

/**
 * @brief Changes the size of the given Evas object.
 *
 * @param[in] w
 * @param[in] h
 *
 * @ingroup Efl_Gfx_Base
 */
EOAPI void efl_gfx_size_set(int w, int h);

/**
 * @brief Retrieves the (rectangular) size of the given Evas object.
 *
 * @param[out] w
 * @param[out] h
 *
 * @ingroup Efl_Gfx_Base
 */
EOAPI void efl_gfx_size_get(int *w, int *h);

/**
 * @brief Sets the general/main color of the given Evas object to the given
 * one.
 *
 * See also @ref efl_gfx_color_get (for an example)
 *
 * These color values are expected to be premultiplied by alpha.
 *
 * @param[in] r The red component of the given color.
 * @param[in] g The green component of the given color.
 * @param[in] b The blue component of the given color.
 * @param[in] a The alpha component of the given color.
 *
 * @ingroup Efl_Gfx_Base
 */
EOAPI void efl_gfx_color_set(int r, int g, int b, int a);

/**
 * @brief Retrieves the general/main color of the given Evas object.
 *
 * Retrieves the main color's RGB component (and alpha channel) values, which
 * range from 0 to 255. For the alpha channel, which defines the object's
 * transparency level, 0 means totally transparent, while 255 means opaque.
 * These color values are premultiplied by the alpha value.
 *
 * Usually youll use this attribute for text and rectangle objects, where the
 * main color is their unique one. If set for objects which themselves have
 * colors, like the images one, those colors get modulated by this one.
 *
 * All newly created Evas rectangles get the default color values of 255 255
 * 255 255 (opaque white).
 *
 * Use null pointers on the components you're not interested in: they'll be
 * ignored by the function.
 *
 * See the full @ref Example_Evas_Object_Manipulation "example".
 *
 * @param[out] r The red component of the given color.
 * @param[out] g The green component of the given color.
 * @param[out] b The blue component of the given color.
 * @param[out] a The alpha component of the given color.
 *
 * @ingroup Efl_Gfx_Base
 */
EOAPI void efl_gfx_color_get(int *r, int *g, int *b, int *a);

/**
 * @brief Sets a specifc color of the given Efl.Gfx.Base object to the given
 * one.
 *
 * See also @ref efl_gfx_color_get (for an example)
 *
 * These color values are expected to be premultiplied by alpha.
 *
 * @param[in] part The part you are interested in.
 * @param[in] r The red component of the given color.
 * @param[in] g The green component of the given color.
 * @param[in] b The blue component of the given color.
 * @param[in] a The alpha component of the given color.
 *
 * @ingroup Efl_Gfx_Base
 */
EOAPI Eina_Bool efl_gfx_color_part_set(const char * part, int r, int g, int b, int a);

/**
 * @brief Retrieves a specific color of the given Evas object.
 *
 * Retrieves a specific color's RGB component (and alpha channel) values, which
 * range from 0 to 255. For the alpha channel, which defines the object's
 * transparency level, 0 means totally transparent, while 255 means opaque.
 * These color values are premultiplied by the alpha value.
 *
 * The main color being mapped to null.
 *
 * Usually youll use this attribute for text and rectangle objects, where the
 * main color is their unique one. If set for objects which themselves have
 * colors, like the images one, those colors get modulated by this one.
 *
 * Use null pointers on the components you're not interested in: they'll be
 * ignored by the function.
 *
 * @param[in] part The part you are interested in.
 * @param[out] r The red component of the given color.
 * @param[out] g The green component of the given color.
 * @param[out] b The blue component of the given color.
 * @param[out] a The alpha component of the given color.
 *
 * @ingroup Efl_Gfx_Base
 */
EOAPI Eina_Bool efl_gfx_color_part_get(const char * part, int *r, int *g, int *b, int *a);

/**
 * @brief Makes the given Evas object visible or invisible.
 *
 * @param[in] v true if to make the object visible, false otherwise
 *
 * @ingroup Efl_Gfx_Base
 */
EOAPI void efl_gfx_visible_set(Eina_Bool v);

/**
 * @brief Retrieves whether or not the given Evas object is visible.
 *
 * @return true if to make the object visible, false otherwise
 *
 * @ingroup Efl_Gfx_Base
 */
EOAPI Eina_Bool efl_gfx_visible_get(void);


#endif

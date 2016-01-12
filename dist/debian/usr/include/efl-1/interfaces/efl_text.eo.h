#ifndef _EFL_TEXT_EO_H_
#define _EFL_TEXT_EO_H_

#ifndef _EFL_TEXT_EO_CLASS_TYPE
#define _EFL_TEXT_EO_CLASS_TYPE

typedef Eo Efl_Text;

#endif

#ifndef _EFL_TEXT_EO_TYPES
#define _EFL_TEXT_EO_TYPES


#endif
#define EFL_TEXT_INTERFACE efl_text_interface_get()

EAPI const Eo_Class *efl_text_interface_get(void) EINA_CONST;

/**
 * @brief Sets the text string to be displayed by the given text object.
 *
 * See also @ref efl_text_get.
 *
 * @param[in] text Text string to display on it.
 *
 * @ingroup Efl_Text
 */
EOAPI void efl_text_set(const char *text);

/**
 * @brief Retrieves the text string currently being displayed by the given text
 * object.
 *
 * Do not free() the return value.
 *
 * See also @ref efl_text_set.
 *
 * @return Text string to display on it.
 *
 * @ingroup Efl_Text
 */
EOAPI const char *efl_text_get(void);


#endif

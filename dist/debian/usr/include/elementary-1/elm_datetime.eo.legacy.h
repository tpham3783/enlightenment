#ifndef _ELM_DATETIME_EO_LEGACY_H_
#define _ELM_DATETIME_EO_LEGACY_H_

#ifndef _ELM_DATETIME_EO_CLASS_TYPE
#define _ELM_DATETIME_EO_CLASS_TYPE

typedef Eo Elm_Datetime;

#endif

#ifndef _ELM_DATETIME_EO_TYPES
#define _ELM_DATETIME_EO_TYPES

/** Identifies a Datetime field, The widget supports 6 fields : Year, month,
 * Date, Hour, Minute, AM/PM
 *
 * @ingroup Elm_Datetime
 */
typedef enum
{
  ELM_DATETIME_YEAR = 0, /** Indicates Year field. */
  ELM_DATETIME_MONTH = 1, /** Indicates Month field. */
  ELM_DATETIME_DATE = 2, /** Indicates Date field. */
  ELM_DATETIME_HOUR = 3, /** Indicates Hour field. */
  ELM_DATETIME_MINUTE = 4, /** Indicates Minute field. */
  ELM_DATETIME_AMPM = 5 /** Indicates AM/PM field . */
} Elm_Datetime_Field_Type;


#endif

/**
 * @brief Set the datetime format. Format is a combination of allowed Libc date
 * format specifiers like: "%b %d, %Y %I : %M %p".
 *
 * Maximum allowed format length is 64 chars.
 *
 * Format can include separators for each individual datetime field except for
 * AM/PM field.
 *
 * Each separator can be a maximum of 6 UTF-8 bytes. Space is also taken as a
 * separator.
 *
 * These specifiers can be arranged in any order and the widget will display
 * the fields accordingly.
 *
 * Default format is taken as per the system locale settings.
 *
 * @param[in] fmt The datetime format.
 *
 * @ingroup Elm_Datetime
 */
EAPI void elm_datetime_format_set(Elm_Datetime *obj, const char *fmt);

/**
 * @brief Get the datetime format.
 *
 * @return The datetime format.
 *
 * @ingroup Elm_Datetime
 */
EAPI const char *elm_datetime_format_get(const Elm_Datetime *obj);

/**
 * @brief Set the field limits of a field.
 *
 * Limits can be set to individual fields, independently, except for AM/PM
 * field. Any field can display the values only in between these minimum and
 * maximum limits unless the corresponding time value is restricted from
 * MinTime to MaxTime. That is, min/max field limits always works under the
 * limitations of mintime/maxtime.
 *
 * There is no provision to set the limits of AM/PM field.
 *
 * @param[in] min Reference to field's minimum value.
 * @param[in] max Reference to field's maximum value.
 *
 * @ingroup Elm_Datetime
 */
EAPI void elm_datetime_field_limit_set(Elm_Datetime *obj, Elm_Datetime_Field_Type fieldtype, int min, int max);

/**
 * @brief Get the field limits of a field.
 *
 * Limits can be set to individual fields, independently, except for AM/PM
 * field. Any field can display the values only in between these minimum and
 * maximum limits unless the corresponding time value is restricted from
 * MinTime to MaxTime. That is, min/max field limits always works under the
 * limitations of mintime/maxtime.
 *
 * There is no provision to set the limits of AM/PM field.
 *
 * @param[out] min Reference to field's minimum value.
 * @param[out] max Reference to field's maximum value.
 *
 * @ingroup Elm_Datetime
 */
EAPI void elm_datetime_field_limit_get(const Elm_Datetime *obj, Elm_Datetime_Field_Type fieldtype, int *min, int *max);

/**
 * @brief Set the lower boundary of a field.
 *
 * Year: years since 1900. Negative value represents year below 1900 (year
 * value -30 represents 1870). Year default range is from 70 to 137.
 *
 * Month: default value range is from 0 to 11.
 *
 * Date: default value range is from 1 to 31 according to the month value.
 *
 * Hour: default value will be in terms of 24 hr format (0~23)
 *
 * Minute: default value range is from 0 to 59.
 *
 * @param[in] mintime Time structure containing the minimum time value.
 *
 * @return @c true if minimum value is accepted.
 *
 * @ingroup Elm_Datetime
 */
EAPI Eina_Bool elm_datetime_value_min_set(Elm_Datetime *obj, const Elm_Datetime_Time *mintime);

/**
 * @brief Get the lower boundary of a field.
 *
 * Year: years since 1900. Negative value represents year below 1900 (year
 * value -30 represents 1870). Year default range is from 70 to 137.
 *
 * Month: default value range is from 0 to 11.
 *
 * Date: default value range is from 1 to 31 according to the month value.
 *
 * Hour: default value will be in terms of 24 hr format (0~23)
 *
 * Minute: default value range is from 0 to 59.
 *
 * @param[in,out] mintime Time structure.
 *
 * @return @c true if minimum value is successfully returned.
 *
 * @ingroup Elm_Datetime
 */
EAPI Eina_Bool elm_datetime_value_min_get(const Elm_Datetime *obj, Elm_Datetime_Time *mintime);

/**
 * @brief Set the current value of a Datetime object.
 *
 * Year: years since 1900. Negative value represents year below 1900 (year
 * value -30 represents 1870). Year default range is from 70 to 137.
 *
 * Month: default value range is from 0 to 11.
 *
 * Date: default value range is from 1 to 31 according to the month value.
 *
 * Hour: default value will be in terms of 24 hr format (0~23)
 *
 * Minute: default value range is from 0 to 59.
 *
 * @param[in] newtime Time structure filled with values to be set.
 *
 * @return @c true if current time is set successfully.
 *
 * @ingroup Elm_Datetime
 */
EAPI Eina_Bool elm_datetime_value_set(Elm_Datetime *obj, const Elm_Datetime_Time *newtime);

/**
 * @brief Get the current value of a Datetime object.
 *
 * Year: years since 1900. Negative value represents year below 1900 (year
 * value -30 represents 1870). Year default range is from 70 to 137.
 *
 * Month: default value range is from 0 to 11.
 *
 * Date: default value range is from 1 to 31 according to the month value.
 *
 * Hour: default value will be in terms of 24 hr format (0~23)
 *
 * Minute: default value range is from 0 to 59.
 *
 * @param[in,out] currtime Time structure.
 *
 * @return @c true if current time is returned successfully.
 *
 * @ingroup Elm_Datetime
 */
EAPI Eina_Bool elm_datetime_value_get(const Elm_Datetime *obj, Elm_Datetime_Time *currtime);

/**
 * @brief Set a field to be visible or not.
 *
 * Setting this API to @c true does not ensure that the field is visible, apart
 * from this, the field's format must be present in Datetime overall format.
 *  If a field's visibility is set to @c false then it won't appear even though
 * its format is present in overall format. So if and only if this API is set
 * true and the corresponding field's format is present in Datetime format, the
 * field is visible.
 *
 * By default the field visibility is set to @c true.
 *
 * @param[in] visible @c true field can be visible, @c false otherwise.
 *
 * @ingroup Elm_Datetime
 */
EAPI void elm_datetime_field_visible_set(Elm_Datetime *obj, Elm_Datetime_Field_Type fieldtype, Eina_Bool visible);

/**
 * @brief Get whether a field can be visible/not.
 *
 * @param[in] fieldtype Type of the field. #ELM_DATETIME_YEAR etc.
 *
 * @return @c true, if field can be visible. @c false otherwise.
 *
 * @ingroup Elm_Datetime
 */
EAPI Eina_Bool elm_datetime_field_visible_get(const Elm_Datetime *obj, Elm_Datetime_Field_Type fieldtype);

/**
 * @brief Set the upper boundary of a field.
 *
 * Year: years since 1900. Negative value represents year below 1900 (year
 * value -30 represents 1870). Year default range is from 70 to 137.
 *
 * Month: default value range is from 0 to 11.
 *
 * Date: default value range is from 1 to 31 according to the month value.
 *
 * Hour: default value will be in terms of 24 hr format (0~23)
 *
 * Minute: default value range is from 0 to 59.
 *
 * @param[in] maxtime Time structure containing the maximum time value.
 *
 * @return @c true if maximum value is accepted.
 *
 * @ingroup Elm_Datetime
 */
EAPI Eina_Bool elm_datetime_value_max_set(Elm_Datetime *obj, const Elm_Datetime_Time *maxtime);

/**
 * @brief Get the upper boundary of a field.
 *
 * Year: years since 1900. Negative value represents year below 1900 (year
 * value -30 represents 1870). Year default range is from 70 to 137.
 *
 * Month: default value range is from 0 to 11.
 *
 * Date: default value range is from 1 to 31 according to the month value.
 *
 * Hour: default value will be in terms of 24 hr format (0~23)
 *
 * Minute: default value range is from 0 to 59.
 *
 * @param[in,out] maxtime Time structure containing the maximum time value.
 *
 * @return @c true if maximum value is returned successfully.
 *
 * @ingroup Elm_Datetime
 */
EAPI Eina_Bool elm_datetime_value_max_get(const Elm_Datetime *obj, Elm_Datetime_Time *maxtime);

#endif

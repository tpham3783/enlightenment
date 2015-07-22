#ifndef _ELM_CLOCK_EO_LEGACY_H_
#define _ELM_CLOCK_EO_LEGACY_H_

#ifndef _ELM_CLOCK_EO_CLASS_TYPE
#define _ELM_CLOCK_EO_CLASS_TYPE

typedef Eo Elm_Clock;

#endif

#ifndef _ELM_CLOCK_EO_TYPES
#define _ELM_CLOCK_EO_TYPES

/**
 * @brief Identifiers for which clock digits should be editable, when a clock
 * widget is in edition mode. Values may be OR-ed together to make a mask,
 * naturally.
 *
 * See also @ref elm_clock_edit_set, @ref elm_clock_edit_mode_set.
 *
 * @ingroup Elm_Clock
 */
typedef enum
{
  ELM_CLOCK_EDIT_DEFAULT = 0, /** Default value. Means that all digits are
                               * editable, when in edition mode. */
  ELM_CLOCK_EDIT_HOUR_DECIMAL = 1 /* 1 << 0 */, /** Decimal digit of hours
                                                 * value should be editable. */
  ELM_CLOCK_EDIT_HOUR_UNIT = 2 /* 1 << 1 */, /** Unit digit of hours value
                                              * should be editable. */
  ELM_CLOCK_EDIT_MIN_DECIMAL = 4 /* 1 << 2 */, /** Decimal digit of minutes
                                                * value should be editable. */
  ELM_CLOCK_EDIT_MIN_UNIT = 8 /* 1 << 3 */, /** Unit digit of minutes value
                                             * should be editable. */
  ELM_CLOCK_EDIT_SEC_DECIMAL = 16 /* 1 << 4 */, /** Decimal digit of seconds
                                                 * value should be editable. */
  ELM_CLOCK_EDIT_SEC_UNIT = 32 /* 1 << 5 */, /** Unit digit of seconds value
                                              * should be editable. */
  ELM_CLOCK_EDIT_ALL = 63 /* (1 << 6) - 1 */ /** All digits should be editable.
                                              */
} Elm_Clock_Edit_Mode;


#endif

/**
 * @brief Set if the given clock widget must show hours in military or am/pm
 * mode
 *
 * This function sets if the clock must show hours in military or am/pm mode.
 * In some countries like Brazil the military mode (00-24h-format) is used, in
 * opposition to the USA, where the am/pm mode is more commonly used.
 *
 * See also @ref elm_clock_show_am_pm_get.
 *
 * @param[in] am_pm @c true to put it in am/pm mode, @c false to military mode
 *
 * @ingroup Elm_Clock
 */
EAPI void elm_clock_show_am_pm_set(Elm_Clock *obj, Eina_Bool am_pm);

/**
 * @brief Get if the given clock widget shows hours in military or am/pm mode
 *
 * This function gets if the clock shows hours in military or am/pm mode.
 *
 * See also @ref elm_clock_show_am_pm_set for more details.
 *
 * @return @c true to put it in am/pm mode, @c false to military mode
 *
 * @ingroup Elm_Clock
 */
EAPI Eina_Bool elm_clock_show_am_pm_get(const Elm_Clock *obj);

/**
 * @brief Set the first interval on time updates for a user mouse button hold
 * on clock widgets' time edition.
 *
 * This interval value is decreased while the user holds the mouse pointer
 * either incrementing or decrementing a given the clock digit's value.
 *
 * This helps the user to get to a given time distant from the current one
 * easier/faster, as it will start to flip quicker and quicker on mouse button
 * holds.
 *
 * The calculation for the next flip interval value, starting from the one set
 * with this call, is the previous interval divided by 1.05, so it decreases a
 * little bit.
 *
 * The default starting interval value for automatic flips is 0.85 seconds.
 *
 * See also @ref elm_clock_first_interval_get.
 *
 * @param[in] interval The first interval value in seconds
 *
 * @ingroup Elm_Clock
 */
EAPI void elm_clock_first_interval_set(Elm_Clock *obj, double interval);

/**
 * @brief Get the first interval on time updates for a user mouse button hold
 * on clock widgets' time edition.
 *
 * See also @ref elm_clock_first_interval_set for more details.
 *
 * @return The first interval value in seconds
 *
 * @ingroup Elm_Clock
 */
EAPI double elm_clock_first_interval_get(const Elm_Clock *obj);

/**
 * @brief Set if the given clock widget must show time with seconds or not
 *
 * This function sets if the given clock must show or not elapsed seconds. By
 * default, they are not shown.
 *
 * See also @ref elm_clock_show_seconds_get.
 *
 * @param[in] seconds @c true to show seconds, @c false otherwise.
 *
 * @ingroup Elm_Clock
 */
EAPI void elm_clock_show_seconds_set(Elm_Clock *obj, Eina_Bool seconds);

/**
 * @brief Get whether the given clock widget is showing time with seconds or
 * not
 *
 * This function gets whether @c obj is showing or not the elapsed seconds.
 *
 * See also @ref elm_clock_show_seconds_set.
 *
 * @return @c true to show seconds, @c false otherwise.
 *
 * @ingroup Elm_Clock
 */
EAPI Eina_Bool elm_clock_show_seconds_get(const Elm_Clock *obj);

/**
 * @brief Set whether a given clock widget is under edition mode or under
 * (default) displaying-only mode.
 *
 * This function makes a clock's time to be editable or not by user
 * interaction. When in edition mode, clocks stop ticking, until one brings
 * them back to canonical mode. The @ref elm_clock_edit_mode_set function will
 * influence which digits of the clock will be editable.
 *
 * Note: am/pm sheets, if being shown, will always be editable under edition
 * mode.
 *
 * See also @ref elm_clock_edit_get.
 *
 * @param[in] edit @c true to put it in edition, @c false to put it back to
 * "displaying only" mode
 *
 * @ingroup Elm_Clock
 */
EAPI void elm_clock_edit_set(Elm_Clock *obj, Eina_Bool edit);

/**
 * @brief Get whether a given clock widget is under editing mode or under
 * (default) displaying-only mode.
 *
 * This function retrieves whether the clock's time can be edited or not by
 * user interaction.
 *
 * See also @ref elm_clock_edit_set for more details
 *
 * @return @c true to put it in edition, @c false to put it back to "displaying
 * only" mode
 *
 * @ingroup Elm_Clock
 */
EAPI Eina_Bool elm_clock_edit_get(const Elm_Clock *obj);

/**
 * @brief Set whether the given clock widget should be paused or not.
 *
 * This function pauses or starts the clock widget.
 *
 * See also @ref elm_clock_pause_get.
 *
 * @param[in] paused @c true to pause clock, @c false otherwise
 *
 * @since 1.9
 *
 * @ingroup Elm_Clock
 */
EAPI void elm_clock_pause_set(Elm_Clock *obj, Eina_Bool paused);

/**
 * @brief Get whether the given clock widget is paused.
 *
 * This function gets whether the clock is paused or not.
 *
 * See also @ref elm_clock_pause_set.
 *
 * @return @c true to pause clock, @c false otherwise
 *
 * @since 1.9
 *
 * @ingroup Elm_Clock
 */
EAPI Eina_Bool elm_clock_pause_get(const Elm_Clock *obj);

/**
 * @brief Set a clock widget's time, programmatically
 *
 * This function updates the time that is showed by the clock widget.
 *
 * Values must be set within 0-23 for hours and 0-59 for minutes and seconds,
 * even if the clock is not in "military" mode.
 *
 * Warning: The behavior for values set out of those ranges is undefined.
 *
 * @param[in] hrs The hours to set
 * @param[in] min The minutes to set
 * @param[in] sec The seconds to set
 *
 * @ingroup Elm_Clock
 */
EAPI void elm_clock_time_set(Elm_Clock *obj, int hrs, int min, int sec);

/**
 * @brief Get a clock widget's time values
 *
 * This function gets the time set for @c obj, returning it on the variables
 * passed as the arguments to function
 *
 * Note: Use @c null pointers on the time values you're not interested in:
 * they'll be ignored by the function.
 *
 * @param[out] hrs The hours to set
 * @param[out] min The minutes to set
 * @param[out] sec The seconds to set
 *
 * @ingroup Elm_Clock
 */
EAPI void elm_clock_time_get(const Elm_Clock *obj, int *hrs, int *min, int *sec);

/**
 * @brief Set what digits of the given clock widget should be editable when in
 * edition mode.
 *
 * See also @ref elm_clock_edit_mode_get.
 *
 * @param[in] digedit Bit mask indicating the digits to be editable (values in
 * #Elm_Clock_Edit_Mode).
 *
 * @ingroup Elm_Clock
 */
EAPI void elm_clock_edit_mode_set(Elm_Clock *obj, Elm_Clock_Edit_Mode digedit);

/**
 * @brief Get what digits of the given clock widget should be editable when in
 * edition mode.
 *
 * See also @ref elm_clock_edit_mode_set for more details.
 *
 * @return Bit mask indicating the digits to be editable (values in
 * #Elm_Clock_Edit_Mode).
 *
 * @ingroup Elm_Clock
 */
EAPI Elm_Clock_Edit_Mode elm_clock_edit_mode_get(const Elm_Clock *obj);

#endif

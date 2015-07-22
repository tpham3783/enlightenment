#ifndef _EFL_GFX_STACK_EO_H_
#define _EFL_GFX_STACK_EO_H_

#ifndef _EFL_GFX_STACK_EO_CLASS_TYPE
#define _EFL_GFX_STACK_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Stack;

#endif

#ifndef _EFL_GFX_STACK_EO_TYPES
#define _EFL_GFX_STACK_EO_TYPES


#endif
#define EFL_GFX_STACK_INTERFACE efl_gfx_stack_interface_get()

EAPI const Eo_Class *efl_gfx_stack_interface_get(void) EINA_CONST;

/**
 * @brief Sets the layer of its canvas that the given object will be part of.
 *
 * If you don't use this function, you'll be dealing with an unique layer of
 * objects, the default one. Additional layers are handy when you don't want a
 * set of objects to interfere with another set with regard to stacking. Two
 * layers are completely disjoint in that matter.
 *
 * This is a low-level function, which you'd be using when something should be
 * always on top, for example.
 *
 * Warning: Be careful, it doesn't make sense to change the layer of smart
 * objects' children. Smart objects have a layer of their own, which should
 * contain all their children objects.
 *
 * See also @ref efl_gfx_stack_layer_get()
 *
 * @param[in] l The number of the layer to place the object on. Must be between
 * #EVAS_LAYER_MIN and #EVAS_LAYER_MAX.
 *
 * @ingroup Efl_Gfx_Stack
 */
EOAPI void  efl_gfx_stack_layer_set(short l);

/**
 * @brief Retrieves the layer of its canvas that the given object is part of.
 *
 * See also @ref efl_gfx_stack_layer_set()
 *
 * @return The number of the layer to place the object on. Must be between
 * #EVAS_LAYER_MIN and #EVAS_LAYER_MAX.
 *
 * @ingroup Efl_Gfx_Stack
 */
EOAPI short  efl_gfx_stack_layer_get(void);

/**
 * @brief Get the Evas object stacked right below @c obj
 *
 * This function will traverse layers in its search, if there are objects on
 * layers below the one @c obj is placed at.
 *
 * See also @ref efl_gfx_stack_layer_get(), @ref efl_gfx_stack_layer_set() and
 * @ref efl_gfx_stack_below_get()
 *
 * @return the #Efl_Gfx_Stack directly below @c obj, if any, or @c null, if
 * none
 *
 * @ingroup Efl_Gfx_Stack
 */
EOAPI Efl_Gfx_Stack * efl_gfx_stack_below_get(void);

/**
 * @brief Get the Evas object stacked right above @c obj
 *
 * This function will traverse layers in its search, if there are objects on
 * layers above the one @c obj is placed at.
 *
 * See also @ref efl_gfx_stack_layer_get(), @ref efl_gfx_stack_layer_set() and
 * @ref efl_gfx_stack_below_get()
 *
 * @return the #Efl_Gfx_Stack directly below @c obj, if any, or @c null, if
 * none
 *
 * @ingroup Efl_Gfx_Stack
 */
EOAPI Efl_Gfx_Stack * efl_gfx_stack_above_get(void);

/**
 * @brief Stack @c obj immediately @c below
 *
 * Objects, in a given canvas, are stacked in the order they get added to it.
 *  This means that, if they overlap, the highest ones will cover the lowest
 * ones, in that order. This function is a way to change the stacking order for
 * the objects.
 *
 * This function is intended to be used with objects belonging to the same
 * layer in a given canvas, otherwise it will fail (and accomplish nothing).
 *
 * If you have smart objects on your canvas and @c obj is a member of one of
 * them, then @c below must also be a member of the same smart object.
 *
 * Similarly, if @c obj is not a member of a smart object, @c below must not be
 * either.
 *
 * See also @ref efl_gfx_stack_layer_get(), @ref efl_gfx_stack_layer_set() and
 * @ref efl_gfx_stack_below()
 *
 * @param[in] below the object below which to stack
 *
 * @ingroup Efl_Gfx_Stack
 */
EOAPI void  efl_gfx_stack_below(Efl_Gfx_Stack *below);

/**
 * @brief Raise @c obj to the top of its layer.
 *
 * @c obj will, then, be the highest one in the layer it belongs to. Object on
 * other layers won't get touched.
 *
 * See also @ref efl_gfx_stack_above(), @ref efl_gfx_stack_below() and
 * @ref efl_gfx_stack_lower()
 *
 * @ingroup Efl_Gfx_Stack
 */
EOAPI void  efl_gfx_stack_raise(void);

/**
 * @brief Stack @c obj immediately @c above
 *
 * Objects, in a given canvas, are stacked in the order they get added to it.
 *  This means that, if they overlap, the highest ones will cover the lowest
 * ones, in that order. This function is a way to change the stacking order for
 * the objects.
 *
 * This function is intended to be used with objects belonging to the same
 * layer in a given canvas, otherwise it will fail (and accomplish nothing).
 *
 * If you have smart objects on your canvas and @c obj is a member of one of
 * them, then @c above must also be a member of the same smart object.
 *
 * Similarly, if @c obj is not a member of a smart object, @c above must not be
 * either.
 *
 * See also @ref efl_gfx_stack_layer_get(), @ref efl_gfx_stack_layer_set() and
 * @ref efl_gfx_stack_below()
 *
 * @param[in] above the object above which to stack
 *
 * @ingroup Efl_Gfx_Stack
 */
EOAPI void  efl_gfx_stack_above(Efl_Gfx_Stack *above);

/**
 * @brief Lower @c obj to the bottom of its layer.
 *
 * @c obj will, then, be the lowest one in the layer it belongs to. Objects on
 * other layers won't get touched.
 *
 * See also @ref efl_gfx_stack_above(), @ref efl_gfx_stack_below() and
 * @ref efl_gfx_stack_raise()
 *
 * @ingroup Efl_Gfx_Stack
 */
EOAPI void  efl_gfx_stack_lower(void);


#endif

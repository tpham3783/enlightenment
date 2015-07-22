#ifndef _ECORE_AUDIO_OUT_PULSE_EO_H_
#define _ECORE_AUDIO_OUT_PULSE_EO_H_

#ifndef _ECORE_AUDIO_OUT_PULSE_EO_CLASS_TYPE
#define _ECORE_AUDIO_OUT_PULSE_EO_CLASS_TYPE

typedef Eo Ecore_Audio_Out_Pulse;

#endif

#ifndef _ECORE_AUDIO_OUT_PULSE_EO_TYPES
#define _ECORE_AUDIO_OUT_PULSE_EO_TYPES


#endif
#define ECORE_AUDIO_OUT_PULSE_CLASS ecore_audio_out_pulse_class_get()

EAPI const Eo_Class *ecore_audio_out_pulse_class_get(void) EINA_CONST;

EOAPI extern const Eo_Event_Description _ECORE_AUDIO_OUT_PULSE_EVENT_CONTEXT_READY;
EOAPI extern const Eo_Event_Description _ECORE_AUDIO_OUT_PULSE_EVENT_CONTEXT_FAIL;

/** Called when the output is ready for playback.
 *
 * @ingroup Ecore_Audio_Out_Pulse
 */
#define ECORE_AUDIO_OUT_PULSE_EVENT_CONTEXT_READY (&(_ECORE_AUDIO_OUT_PULSE_EVENT_CONTEXT_READY))

/** Called when context fails.
 *
 * @ingroup Ecore_Audio_Out_Pulse
 */
#define ECORE_AUDIO_OUT_PULSE_EVENT_CONTEXT_FAIL (&(_ECORE_AUDIO_OUT_PULSE_EVENT_CONTEXT_FAIL))

#endif

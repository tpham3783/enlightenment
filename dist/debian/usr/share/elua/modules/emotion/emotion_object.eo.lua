-- EFL LuaJIT bindings: emotion_object.eo (class Emotion.Object)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.emotion_object_class_get()
    eo.class_register("Emotion_Object", {"Evas_Object_Smart"}, {"Efl_File", "Efl_Player", "Efl_Image"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *emotion_object_class_get(void);
    void emotion_obj_option_set(const char * opt, const char * val);
    Eina_Bool emotion_obj_engine_set(const char * module_filename);
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_FRAME_DECODE;
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_POSITION_UPDATE;
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_LENGTH_CHANGE;
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_FRAME_RESIZE;
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_DECODE_STOP;
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_PLAYBACK_STARTED;
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_PLAYBACK_FINISHED;
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_AUDIO_LEVEL_CHANGE;
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_CHANNELS_CHANGE;
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_TITLE_CHANGE;
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_PROGRESS_CHANGE;
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_REF_CHANGE;
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_BUTTON_NUM_CHANGE;
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_BUTTON_CHANGE;
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_OPEN_DONE;
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_POSITION_SAVE_SUCCEED;
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_POSITION_SAVE_FAILED;
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_POSITION_LOAD_SUCCEED;
    extern const Eo_Event_Description _EMOTION_OBJECT_EVENT_POSITION_LOAD_FAILED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    option_set = function(self, opt, val)
        eo.__do_start(self, __class)
        __lib.emotion_obj_option_set(opt, val)
        eo.__do_end()
    end,

    engine_set = function(self, module_filename)
        eo.__do_start(self, __class)
        local v = __lib.emotion_obj_engine_set(module_filename)
        eo.__do_end()
    end,

    __events = {
        ["frame_decode"] = __lib._EMOTION_OBJECT_EVENT_FRAME_DECODE,
        ["position_update"] = __lib._EMOTION_OBJECT_EVENT_POSITION_UPDATE,
        ["length_change"] = __lib._EMOTION_OBJECT_EVENT_LENGTH_CHANGE,
        ["frame_resize"] = __lib._EMOTION_OBJECT_EVENT_FRAME_RESIZE,
        ["decode_stop"] = __lib._EMOTION_OBJECT_EVENT_DECODE_STOP,
        ["playback_started"] = __lib._EMOTION_OBJECT_EVENT_PLAYBACK_STARTED,
        ["playback_finished"] = __lib._EMOTION_OBJECT_EVENT_PLAYBACK_FINISHED,
        ["audio_level_change"] = __lib._EMOTION_OBJECT_EVENT_AUDIO_LEVEL_CHANGE,
        ["channels_change"] = __lib._EMOTION_OBJECT_EVENT_CHANNELS_CHANGE,
        ["title_change"] = __lib._EMOTION_OBJECT_EVENT_TITLE_CHANGE,
        ["progress_change"] = __lib._EMOTION_OBJECT_EVENT_PROGRESS_CHANGE,
        ["ref_change"] = __lib._EMOTION_OBJECT_EVENT_REF_CHANGE,
        ["button_num_change"] = __lib._EMOTION_OBJECT_EVENT_BUTTON_NUM_CHANGE,
        ["button_change"] = __lib._EMOTION_OBJECT_EVENT_BUTTON_CHANGE,
        ["open_done"] = __lib._EMOTION_OBJECT_EVENT_OPEN_DONE,
        ["position_save,succeed"] = __lib._EMOTION_OBJECT_EVENT_POSITION_SAVE_SUCCEED,
        ["position_save,failed"] = __lib._EMOTION_OBJECT_EVENT_POSITION_SAVE_FAILED,
        ["position_load,succeed"] = __lib._EMOTION_OBJECT_EVENT_POSITION_LOAD_SUCCEED,
        ["position_load,failed"] = __lib._EMOTION_OBJECT_EVENT_POSITION_LOAD_FAILED
    },

    __properties = {
        ["option"] = { 0, 0, 0, 2, false, true },
        ["engine"] = { 0, 0, 0, 1, false, true }
    }
}

M.Object = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Emotion_Object").__eo_ctor,
                            1, ...)
end

return M

-- EFL LuaJIT bindings: evas_object_smart.eo (class Evas.Object_Smart)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_object_smart_class_get()
    eo.class_register("Evas_Object_Smart", {"Evas_Object"}, {"Evas_Signal_Interface"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_object_smart_class_get(void);
    void evas_obj_smart_need_recalculate_set(Eina_Bool value);
    Eina_Bool evas_obj_smart_need_recalculate_get(void);
    void evas_obj_smart_clip_set(Evas_Object * clip);
    void evas_obj_smart_color_set(int r, int g, int b, int a);
    void evas_obj_smart_data_set(void * data);
    Eina_List *evas_obj_smart_members_get(void);
    Evas_Smart *evas_obj_smart_get(void);
    void evas_obj_smart_show(void);
    void evas_obj_smart_move(Evas_Coord x, Evas_Coord y);
    Eina_Bool evas_obj_smart_callbacks_descriptions_set(const Evas_Smart_Cb_Description * descriptions);
    void evas_obj_smart_callbacks_descriptions_get(const Evas_Smart_Cb_Description ** *class_descriptions, unsigned int *class_count, const Evas_Smart_Cb_Description ** *instance_descriptions, unsigned int *instance_count);
    Eina_Iterator *evas_obj_smart_iterator_new(void);
    void evas_obj_smart_callback_description_find(const char * name, const Evas_Smart_Cb_Description * *class_description, const Evas_Smart_Cb_Description * *instance_description);
    void evas_obj_smart_hide(void);
    void evas_obj_smart_calculate(void);
    void evas_obj_smart_add(void);
    void evas_obj_smart_member_add(Evas_Object * sub_obj);
    void evas_obj_smart_resize(Evas_Coord w, Evas_Coord h);
    void evas_obj_smart_clip_unset(void);
    void evas_obj_smart_changed(void);
    void evas_obj_smart_member_del(Evas_Object * sub_obj);
    void evas_obj_smart_del(void);
    void evas_obj_smart_attach(Evas_Smart * s);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    need_recalculate_set = function(self, value)
        eo.__do_start(self, __class)
        __lib.evas_obj_smart_need_recalculate_set(value)
        eo.__do_end()
    end,

    need_recalculate_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_smart_need_recalculate_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    clip_set = function(self, clip)
        eo.__do_start(self, __class)
        __lib.evas_obj_smart_clip_set(clip)
        eo.__do_end()
    end,

    color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.evas_obj_smart_color_set(r, g, b, a)
        eo.__do_end()
    end,

    data_set = function(self, data)
        eo.__do_start(self, __class)
        __lib.evas_obj_smart_data_set(data)
        eo.__do_end()
    end,

    members_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_smart_members_get()
        eo.__do_end()
    end,

    smart_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_smart_get()
        eo.__do_end()
    end,

    show = function(self)
        eo.__do_start(self, __class)
        __lib.evas_obj_smart_show()
        eo.__do_end()
    end,

    move = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.evas_obj_smart_move(x, y)
        eo.__do_end()
    end,

    callbacks_descriptions_set = function(self, descriptions)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_smart_callbacks_descriptions_set(descriptions)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    callbacks_descriptions_get = function(self)
        eo.__do_start(self, __class)
        local class_descriptions = ffi.new("const Evas_Smart_Cb_Description **[1]")
        local class_count = ffi.new("unsigned int[1]")
        local instance_descriptions = ffi.new("const Evas_Smart_Cb_Description **[1]")
        local instance_count = ffi.new("unsigned int[1]")
        __lib.evas_obj_smart_callbacks_descriptions_get(class_descriptions, class_count, instance_descriptions, instance_count)
        eo.__do_end()
        return class_descriptions[0], class_count[0], instance_descriptions[0], instance_count[0]
    end,

    iterator_new = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_smart_iterator_new()
        eo.__do_end()
        return v
    end,

    callback_description_find = function(self, name)
        eo.__do_start(self, __class)
        local class_description = ffi.new("const Evas_Smart_Cb_Description *[1]")
        local instance_description = ffi.new("const Evas_Smart_Cb_Description *[1]")
        __lib.evas_obj_smart_callback_description_find(name, class_description, instance_description)
        eo.__do_end()
        return class_description[0], instance_description[0]
    end,

    hide = function(self)
        eo.__do_start(self, __class)
        __lib.evas_obj_smart_hide()
        eo.__do_end()
    end,

    calculate = function(self)
        eo.__do_start(self, __class)
        __lib.evas_obj_smart_calculate()
        eo.__do_end()
    end,

    add = function(self)
        eo.__do_start(self, __class)
        __lib.evas_obj_smart_add()
        eo.__do_end()
    end,

    member_add = function(self, sub_obj)
        eo.__do_start(self, __class)
        __lib.evas_obj_smart_member_add(sub_obj)
        eo.__do_end()
    end,

    resize = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.evas_obj_smart_resize(w, h)
        eo.__do_end()
    end,

    clip_unset = function(self)
        eo.__do_start(self, __class)
        __lib.evas_obj_smart_clip_unset()
        eo.__do_end()
    end,

    changed = function(self)
        eo.__do_start(self, __class)
        __lib.evas_obj_smart_changed()
        eo.__do_end()
    end,

    member_del = function(self, sub_obj)
        eo.__do_start(self, __class)
        __lib.evas_obj_smart_member_del(sub_obj)
        eo.__do_end()
    end,

    del = function(self)
        eo.__do_start(self, __class)
        __lib.evas_obj_smart_del()
        eo.__do_end()
    end,

    attach = function(self, s)
        eo.__do_start(self, __class)
        __lib.evas_obj_smart_attach(s)
        eo.__do_end()
    end,

    __properties = {
        ["need_recalculate"] = { 0, 0, 1, 1, true, true },
        ["members"] = { 0, 0, 1, 0, true, false },
        ["data"] = { 0, 0, 0, 1, false, true },
        ["color"] = { 0, 0, 0, 4, false, true },
        ["clip"] = { 0, 0, 0, 1, false, true },
        ["smart"] = { 0, 0, 1, 0, true, false }
    }
}

M.Object_Smart = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Object_Smart").__eo_ctor,
                            1, ...)
end

return M

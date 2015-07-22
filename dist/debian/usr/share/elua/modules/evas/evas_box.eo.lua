-- EFL LuaJIT bindings: evas_box.eo (class Evas.Box)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_box_class_get()
    eo.class_register("Evas_Box", {"Evas_Smart_Clipped"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_box_class_get(void);
    void evas_obj_box_align_set(double horizontal, double vertical);
    void evas_obj_box_align_get(double *horizontal, double *vertical);
    void evas_obj_box_padding_set(Evas_Coord horizontal, Evas_Coord vertical);
    void evas_obj_box_padding_get(Evas_Coord *horizontal, Evas_Coord *vertical);
    void evas_obj_box_layout_set(Evas_Object_Box_Layout cb, const void * data, Eina_Free_Cb free_data);
    void evas_obj_box_layout_horizontal(Evas_Object_Box_Data * priv, void * data);
    void evas_obj_box_layout_vertical(Evas_Object_Box_Data * priv, void * data);
    void evas_obj_box_layout_homogeneous_max_size_horizontal(Evas_Object_Box_Data * priv, void * data);
    Evas_Object *evas_obj_box_internal_remove(Evas_Object * child);
    void evas_obj_box_layout_flow_vertical(Evas_Object_Box_Data * priv, void * data);
    void evas_obj_box_internal_option_free(Evas_Object_Box_Option * opt);
    Evas_Object_Box_Option *evas_obj_box_insert_after(Evas_Object * child, const Evas_Object * reference);
    Eina_Bool evas_obj_box_remove_all(Eina_Bool clear);
    Eina_Iterator *evas_obj_box_iterator_new(void);
    Evas_Object *evas_obj_box_add_to(void);
    Evas_Object_Box_Option *evas_obj_box_append(Evas_Object * child);
    int evas_obj_box_option_property_id_get(const char * name);
    Evas_Object_Box_Option *evas_obj_box_prepend(Evas_Object * child);
    Eina_Accessor *evas_obj_box_accessor_new(void);
    Evas_Object_Box_Option *evas_obj_box_internal_append(Evas_Object * child);
    Eina_Bool evas_obj_box_option_property_vset(Evas_Object_Box_Option * opt, int property, va_list * args);
    Evas_Object *evas_obj_box_internal_remove_at(unsigned int pos);
    Eina_Bool evas_obj_box_remove_at(unsigned int pos);
    Eina_Bool evas_obj_box_option_property_vget(Evas_Object_Box_Option * opt, int property, va_list * args);
    Evas_Object_Box_Option *evas_obj_box_internal_insert_at(Evas_Object * child, unsigned int pos);
    Evas_Object_Box_Option *evas_obj_box_insert_before(Evas_Object * child, const Evas_Object * reference);
    const char *evas_obj_box_option_property_name_get(int property);
    Evas_Object_Box_Option *evas_obj_box_internal_insert_before(Evas_Object * child, const Evas_Object * reference);
    void evas_obj_box_layout_homogeneous_horizontal(Evas_Object_Box_Data * priv, void * data);
    Evas_Object_Box_Option *evas_obj_box_internal_option_new(Evas_Object * child);
    void evas_obj_box_layout_homogeneous_max_size_vertical(Evas_Object_Box_Data * priv, void * data);
    Evas_Object_Box_Option *evas_obj_box_internal_insert_after(Evas_Object * child, const Evas_Object * reference);
    Evas_Object_Box_Option *evas_obj_box_insert_at(Evas_Object * child, unsigned int pos);
    Evas_Object_Box_Option *evas_obj_box_internal_prepend(Evas_Object * child);
    Eina_Bool evas_obj_box_remove(Evas_Object * child);
    void evas_obj_box_layout_stack(Evas_Object_Box_Data * priv, void * data);
    void evas_obj_box_layout_homogeneous_vertical(Evas_Object_Box_Data * priv, void * data);
    void evas_obj_box_layout_flow_horizontal(Evas_Object_Box_Data * priv, void * data);
    extern const Eo_Event_Description _EVAS_BOX_EVENT_CHILD_ADDED;
    extern const Eo_Event_Description _EVAS_BOX_EVENT_CHILD_REMOVED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    align_set = function(self, horizontal, vertical)
        eo.__do_start(self, __class)
        __lib.evas_obj_box_align_set(horizontal, vertical)
        eo.__do_end()
    end,

    align_get = function(self)
        eo.__do_start(self, __class)
        local horizontal = ffi.new("double[1]")
        local vertical = ffi.new("double[1]")
        __lib.evas_obj_box_align_get(horizontal, vertical)
        eo.__do_end()
        return tonumber(horizontal[0]), tonumber(vertical[0])
    end,

    padding_set = function(self, horizontal, vertical)
        eo.__do_start(self, __class)
        __lib.evas_obj_box_padding_set(horizontal, vertical)
        eo.__do_end()
    end,

    padding_get = function(self)
        eo.__do_start(self, __class)
        local horizontal = ffi.new("Evas_Coord[1]")
        local vertical = ffi.new("Evas_Coord[1]")
        __lib.evas_obj_box_padding_get(horizontal, vertical)
        eo.__do_end()
        return horizontal[0], vertical[0]
    end,

    layout_set = function(self, cb, data, free_data)
        eo.__do_start(self, __class)
        __lib.evas_obj_box_layout_set(cb, data, free_data)
        eo.__do_end()
    end,

    layout_horizontal = function(self, priv, data)
        eo.__do_start(self, __class)
        __lib.evas_obj_box_layout_horizontal(priv, data)
        eo.__do_end()
    end,

    layout_vertical = function(self, priv, data)
        eo.__do_start(self, __class)
        __lib.evas_obj_box_layout_vertical(priv, data)
        eo.__do_end()
    end,

    layout_homogeneous_max_size_horizontal = function(self, priv, data)
        eo.__do_start(self, __class)
        __lib.evas_obj_box_layout_homogeneous_max_size_horizontal(priv, data)
        eo.__do_end()
    end,

    internal_remove = function(self, child)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_internal_remove(child)
        eo.__do_end()
        return v
    end,

    layout_flow_vertical = function(self, priv, data)
        eo.__do_start(self, __class)
        __lib.evas_obj_box_layout_flow_vertical(priv, data)
        eo.__do_end()
    end,

    internal_option_free = function(self, opt)
        eo.__do_start(self, __class)
        __lib.evas_obj_box_internal_option_free(opt)
        eo.__do_end()
    end,

    insert_after = function(self, child, reference)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_insert_after(child, reference)
        eo.__do_end()
        return v
    end,

    remove_all = function(self, clear)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_remove_all(clear)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    iterator_new = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_iterator_new()
        eo.__do_end()
        return v
    end,

    add_to = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_add_to()
        eo.__do_end()
        return v
    end,

    append = function(self, child)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_append(child)
        eo.__do_end()
        return v
    end,

    option_property_id_get = function(self, name)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_option_property_id_get(name)
        eo.__do_end()
        return tonumber(v)
    end,

    prepend = function(self, child)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_prepend(child)
        eo.__do_end()
        return v
    end,

    accessor_new = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_accessor_new()
        eo.__do_end()
        return v
    end,

    internal_append = function(self, child)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_internal_append(child)
        eo.__do_end()
        return v
    end,

    option_property_vset = function(self, opt, property, args)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_option_property_vset(opt, property, args)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    internal_remove_at = function(self, pos)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_internal_remove_at(pos)
        eo.__do_end()
        return v
    end,

    remove_at = function(self, pos)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_remove_at(pos)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    option_property_vget = function(self, opt, property, args)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_option_property_vget(opt, property, args)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    internal_insert_at = function(self, child, pos)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_internal_insert_at(child, pos)
        eo.__do_end()
        return v
    end,

    insert_before = function(self, child, reference)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_insert_before(child, reference)
        eo.__do_end()
        return v
    end,

    option_property_name_get = function(self, property)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_option_property_name_get(property)
        eo.__do_end()
        return ffi.string(v)
    end,

    internal_insert_before = function(self, child, reference)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_internal_insert_before(child, reference)
        eo.__do_end()
        return v
    end,

    layout_homogeneous_horizontal = function(self, priv, data)
        eo.__do_start(self, __class)
        __lib.evas_obj_box_layout_homogeneous_horizontal(priv, data)
        eo.__do_end()
    end,

    internal_option_new = function(self, child)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_internal_option_new(child)
        eo.__do_end()
        return v
    end,

    layout_homogeneous_max_size_vertical = function(self, priv, data)
        eo.__do_start(self, __class)
        __lib.evas_obj_box_layout_homogeneous_max_size_vertical(priv, data)
        eo.__do_end()
    end,

    internal_insert_after = function(self, child, reference)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_internal_insert_after(child, reference)
        eo.__do_end()
        return v
    end,

    insert_at = function(self, child, pos)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_insert_at(child, pos)
        eo.__do_end()
        return v
    end,

    internal_prepend = function(self, child)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_internal_prepend(child)
        eo.__do_end()
        return v
    end,

    remove = function(self, child)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_box_remove(child)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    layout_stack = function(self, priv, data)
        eo.__do_start(self, __class)
        __lib.evas_obj_box_layout_stack(priv, data)
        eo.__do_end()
    end,

    layout_homogeneous_vertical = function(self, priv, data)
        eo.__do_start(self, __class)
        __lib.evas_obj_box_layout_homogeneous_vertical(priv, data)
        eo.__do_end()
    end,

    layout_flow_horizontal = function(self, priv, data)
        eo.__do_start(self, __class)
        __lib.evas_obj_box_layout_flow_horizontal(priv, data)
        eo.__do_end()
    end,

    __events = {
        ["child,added"] = __lib._EVAS_BOX_EVENT_CHILD_ADDED,
        ["child,removed"] = __lib._EVAS_BOX_EVENT_CHILD_REMOVED
    },

    __properties = {
        ["padding"] = { 0, 0, 2, 2, true, true },
        ["align"] = { 0, 0, 2, 2, true, true },
        ["layout"] = { 0, 0, 0, 3, false, true }
    }
}

M.Box = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Box").__eo_ctor,
                            1, ...)
end

return M

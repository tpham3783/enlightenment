-- EFL LuaJIT bindings: efl_model_base.eo (class Efl.Model.Base)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_model_base_interface_get()
    eo.class_register("Efl_Model_Base", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_model_base_interface_get(void);
    Efl_Model_Load_Status efl_model_load_status_get(void);
    Efl_Model_Load_Status efl_model_properties_get(Eina_Array * const *properties);
    Efl_Model_Load_Status efl_model_property_set(const char * property, const Eina_Value * value);
    Efl_Model_Load_Status efl_model_property_get(const char * property, const Eina_Value * *value);
    Efl_Model_Load_Status efl_model_children_slice_get(unsigned int start, unsigned int count, Eina_Accessor * *children_accessor);
    Efl_Model_Load_Status efl_model_children_count_get(unsigned int *children_count);
    void efl_model_load(void);
    void efl_model_unload(void);
    void efl_model_properties_load(void);
    void efl_model_children_load(void);
    Eo_Base *efl_model_child_add(void);
    Efl_Model_Load_Status efl_model_child_del(Eo_Base * child);
    extern const Eo_Event_Description _EFL_MODEL_BASE_EVENT_LOAD_STATUS;
    extern const Eo_Event_Description _EFL_MODEL_BASE_EVENT_PROPERTIES_CHANGED;
    extern const Eo_Event_Description _EFL_MODEL_BASE_EVENT_CHILD_ADDED;
    extern const Eo_Event_Description _EFL_MODEL_BASE_EVENT_CHILD_REMOVED;
    extern const Eo_Event_Description _EFL_MODEL_BASE_EVENT_CHILDREN_COUNT_CHANGED;
]]

local __M = util.get_namespace(M, { "model" })
__body = {
    load_status_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_model_load_status_get()
        eo.__do_end()
    end,

    properties_get = function(self)
        eo.__do_start(self, __class)
        local properties = ffi.new("Eina_Array * const[1]")
        local v = __lib.efl_model_properties_get(properties)
        eo.__do_end()
        return properties[0]
    end,

    property_set = function(self, property, value)
        eo.__do_start(self, __class)
        local v = __lib.efl_model_property_set(property, value)
        eo.__do_end()
    end,

    property_get = function(self, property)
        eo.__do_start(self, __class)
        local value = ffi.new("const Eina_Value *[1]")
        local v = __lib.efl_model_property_get(property, value)
        eo.__do_end()
        return value[0]
    end,

    children_slice_get = function(self, start, count)
        eo.__do_start(self, __class)
        local children_accessor = ffi.new("Eina_Accessor *[1]")
        local v = __lib.efl_model_children_slice_get(start, count, children_accessor)
        eo.__do_end()
        return children_accessor[0]
    end,

    children_count_get = function(self)
        eo.__do_start(self, __class)
        local children_count = ffi.new("unsigned int[1]")
        local v = __lib.efl_model_children_count_get(children_count)
        eo.__do_end()
        return children_count[0]
    end,

    load = function(self)
        eo.__do_start(self, __class)
        __lib.efl_model_load()
        eo.__do_end()
    end,

    unload = function(self)
        eo.__do_start(self, __class)
        __lib.efl_model_unload()
        eo.__do_end()
    end,

    properties_load = function(self)
        eo.__do_start(self, __class)
        __lib.efl_model_properties_load()
        eo.__do_end()
    end,

    children_load = function(self)
        eo.__do_start(self, __class)
        __lib.efl_model_children_load()
        eo.__do_end()
    end,

    child_add = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_model_child_add()
        eo.__do_end()
        return v
    end,

    child_del = function(self, child)
        eo.__do_start(self, __class)
        local v = __lib.efl_model_child_del(child)
        eo.__do_end()
        return v
    end,

    __events = {
        ["load,status"] = __lib._EFL_MODEL_BASE_EVENT_LOAD_STATUS,
        ["properties,changed"] = __lib._EFL_MODEL_BASE_EVENT_PROPERTIES_CHANGED,
        ["child,added"] = __lib._EFL_MODEL_BASE_EVENT_CHILD_ADDED,
        ["child,removed"] = __lib._EFL_MODEL_BASE_EVENT_CHILD_REMOVED,
        ["children,count,changed"] = __lib._EFL_MODEL_BASE_EVENT_CHILDREN_COUNT_CHANGED
    },

    __properties = {
        ["children_count"] = { 0, 0, 1, 0, true, false },
        ["load_status"] = { 0, 0, 1, 0, true, false },
        ["property"] = { 1, 1, 1, 1, true, true },
        ["children_slice"] = { 2, 0, 1, 0, true, false },
        ["properties"] = { 0, 0, 1, 0, true, false }
    }
}
__body["__iface_Efl_Model_Base"] = true

return M

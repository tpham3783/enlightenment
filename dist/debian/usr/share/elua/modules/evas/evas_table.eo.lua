-- EFL LuaJIT bindings: evas_table.eo (class Evas.Table)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_table_class_get()
    eo.class_register("Evas_Table", {"Evas_Smart_Clipped"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_table_class_get(void);
    void evas_obj_table_homogeneous_set(Evas_Object_Table_Homogeneous_Mode homogeneous);
    Evas_Object_Table_Homogeneous_Mode evas_obj_table_homogeneous_get(void);
    void evas_obj_table_align_set(double horizontal, double vertical);
    void evas_obj_table_align_get(double *horizontal, double *vertical);
    void evas_obj_table_padding_set(Evas_Coord horizontal, Evas_Coord vertical);
    void evas_obj_table_padding_get(Evas_Coord *horizontal, Evas_Coord *vertical);
    void evas_obj_table_mirrored_set(Eina_Bool mirrored);
    Eina_Bool evas_obj_table_mirrored_get(void);
    void evas_obj_table_col_row_size_get(int *cols, int *rows);
    Eina_List *evas_obj_table_children_get(void);
    Evas_Object *evas_obj_table_child_get(unsigned short col, unsigned short row);
    void evas_obj_table_clear(Eina_Bool clear);
    Eina_Accessor *evas_obj_table_accessor_new(void);
    Eina_Iterator *evas_obj_table_iterator_new(void);
    Evas_Object *evas_obj_table_add_to(void);
    Eina_Bool evas_obj_table_pack_get(Evas_Object * child, unsigned short *col, unsigned short *row, unsigned short *colspan, unsigned short *rowspan);
    Eina_Bool evas_obj_table_pack(Evas_Object * child, unsigned short col, unsigned short row, unsigned short colspan, unsigned short rowspan);
    Eina_Bool evas_obj_table_unpack(Evas_Object * child);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    homogeneous_set = function(self, homogeneous)
        eo.__do_start(self, __class)
        __lib.evas_obj_table_homogeneous_set(homogeneous)
        eo.__do_end()
    end,

    homogeneous_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_table_homogeneous_get()
        eo.__do_end()
        return v
    end,

    align_set = function(self, horizontal, vertical)
        eo.__do_start(self, __class)
        __lib.evas_obj_table_align_set(horizontal, vertical)
        eo.__do_end()
    end,

    align_get = function(self)
        eo.__do_start(self, __class)
        local horizontal = ffi.new("double[1]")
        local vertical = ffi.new("double[1]")
        __lib.evas_obj_table_align_get(horizontal, vertical)
        eo.__do_end()
        return tonumber(horizontal[0]), tonumber(vertical[0])
    end,

    padding_set = function(self, horizontal, vertical)
        eo.__do_start(self, __class)
        __lib.evas_obj_table_padding_set(horizontal, vertical)
        eo.__do_end()
    end,

    padding_get = function(self)
        eo.__do_start(self, __class)
        local horizontal = ffi.new("Evas_Coord[1]")
        local vertical = ffi.new("Evas_Coord[1]")
        __lib.evas_obj_table_padding_get(horizontal, vertical)
        eo.__do_end()
        return horizontal[0], vertical[0]
    end,

    mirrored_set = function(self, mirrored)
        eo.__do_start(self, __class)
        __lib.evas_obj_table_mirrored_set(mirrored)
        eo.__do_end()
    end,

    mirrored_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_table_mirrored_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    col_row_size_get = function(self)
        eo.__do_start(self, __class)
        local cols = ffi.new("int[1]")
        local rows = ffi.new("int[1]")
        __lib.evas_obj_table_col_row_size_get(cols, rows)
        eo.__do_end()
        return tonumber(cols[0]), tonumber(rows[0])
    end,

    children_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_table_children_get()
        eo.__do_end()
    end,

    child_get = function(self, col, row)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_table_child_get(col, row)
        eo.__do_end()
        return v
    end,

    clear = function(self, clear)
        eo.__do_start(self, __class)
        __lib.evas_obj_table_clear(clear)
        eo.__do_end()
    end,

    accessor_new = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_table_accessor_new()
        eo.__do_end()
        return v
    end,

    iterator_new = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_table_iterator_new()
        eo.__do_end()
        return v
    end,

    add_to = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_table_add_to()
        eo.__do_end()
        return v
    end,

    pack_get = function(self, child)
        eo.__do_start(self, __class)
        local col = ffi.new("unsigned short[1]")
        local row = ffi.new("unsigned short[1]")
        local colspan = ffi.new("unsigned short[1]")
        local rowspan = ffi.new("unsigned short[1]")
        local v = __lib.evas_obj_table_pack_get(child, col, row, colspan, rowspan)
        eo.__do_end()
        return ((v) ~= 0), col[0], row[0], colspan[0], rowspan[0]
    end,

    pack = function(self, child, col, row, colspan, rowspan)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_table_pack(child, col, row, colspan, rowspan)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    unpack = function(self, child)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_table_unpack(child)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["padding"] = { 0, 0, 2, 2, true, true },
        ["col_row_size"] = { 0, 0, 2, 0, true, false },
        ["align"] = { 0, 0, 2, 2, true, true },
        ["mirrored"] = { 0, 0, 1, 1, true, true },
        ["children"] = { 0, 0, 1, 0, true, false },
        ["homogeneous"] = { 0, 0, 1, 1, true, true },
        ["child"] = { 2, 0, 1, 0, true, false }
    }
}

M.Table = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Table").__eo_ctor,
                            1, ...)
end

return M

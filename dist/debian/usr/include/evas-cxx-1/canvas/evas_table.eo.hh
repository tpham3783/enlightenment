#ifndef EFL_GENERATED_EVAS_TABLE_HH
#define EFL_GENERATED_EVAS_TABLE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_table.eo.h"
}

#include "evas_smart_clipped.eo.hh"
#include <evas_object.eo.hh>

namespace evas {

struct table;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas {

struct table
{
   /// @brief Faster way to remove all child objects from a table object.
   ///
   /// @param clear if true, it will delete just removed children.
   ///
   void clear(bool clear_) const;

   /// @brief Get an accessor to get random access to the list of children for the table.
   ///
   /// @note Do not remove or delete objects while walking the list.
   ///
   Eina_Accessor * accessor_new() const;

   /// @brief Get an iterator to walk the list of children for the table.
   ///
   /// @note Do not remove or delete objects while walking the list.
   ///
   Eina_Iterator * iterator_new() const;

   /// @brief @brief Create a table that is child of a given element @a parent.
   ///
   /// @see evas_object_table_add()
   ///
   ::evas::object add_to() const;

   /// @brief Get packing location of a child of table
   ///
   /// @return 1 on success, 0 on failure.
   /// @since 1.1
   ///
   /// @param child The child object to add.
   /// @param[out] col pointer to store relative-horizontal position to place child.
   /// @param[out] row pointer to store relative-vertical position to place child.
   /// @param[out] colspan pointer to store how many relative-horizontal position to use for this child.
   /// @param[out] rowspan pointer to store how many relative-vertical position to use for this child.
   ///
   bool pack_get(::evas::object child_, unsigned short* col_, unsigned short* row_, unsigned short* colspan_, unsigned short* rowspan_) const;

   /// @brief Add a new child to a table object or set its current packing.
   ///
   /// Note that columns and rows only guarantee 16bit unsigned values at best.
   /// That means that col + colspan AND row + rowspan must fit inside 16bit
   /// unsigned values cleanly. You will be warned once values exceed 15bit
   /// storage, and attempting to use values not able to fit in 16bits will
   /// result in failure.
   ///
   /// @return 1 on success, 0 on failure.
   ///
   /// @param child The child object to add.
   /// @param col relative-horizontal position to place child.
   /// @param row relative-vertical position to place child.
   /// @param colspan how many relative-horizontal position to use for this child.
   /// @param rowspan how many relative-vertical position to use for this child.
   ///
   bool pack(::evas::object child_, unsigned short col_, unsigned short row_, unsigned short colspan_, unsigned short rowspan_) const;

   /// @brief Remove child from table.
   ///
   /// @note removing a child will immediately call a walk over children in order
   /// to recalculate numbers of columns and rows. If you plan to remove
   /// all children, use evas_object_table_clear() instead.
   ///
   /// @return 1 on success, 0 on failure.
   ///
   /// @param child 
   ///
   bool unpack(::evas::object child_) const;

   /// @brief Get the current layout homogeneous mode.
   ///
   /// @see evas_object_table_homogeneous_set()
   ///
   Evas_Object_Table_Homogeneous_Mode homogeneous_get() const;

   /// @brief @brief Set how this table should layout children.
   ///
   /// @todo consider aspect hint and respect it.
   ///
   /// @par EVAS_OBJECT_TABLE_HOMOGENEOUS_NONE
   /// If table does not use homogeneous mode then columns and rows will
   /// be calculated based on hints of individual cells. This operation
   /// mode is more flexible, but more complex and heavy to calculate as
   /// well. @b Weight properties are handled as a boolean expand. Negative
   /// alignment will be considered as 0.5. This is the default.
   ///
   /// @todo @c EVAS_OBJECT_TABLE_HOMOGENEOUS_NONE should balance weight.
   ///
   /// @par EVAS_OBJECT_TABLE_HOMOGENEOUS_TABLE
   /// When homogeneous is relative to table the own table size is divided
   /// equally among children, filling the whole table area. That is, if
   /// table has @c WIDTH and @c COLUMNS, each cell will get <tt>WIDTH /
   /// COLUMNS</tt> pixels. If children have minimum size that is larger
   /// than this amount (including padding), then it will overflow and be
   /// aligned respecting the alignment hint, possible overlapping sibling
   /// cells. @b Weight hint is used as a boolean, if greater than zero it
   /// will make the child expand in that axis, taking as much space as
   /// possible (bounded to maximum size hint). Negative alignment will be
   /// considered as 0.5.
   ///
   /// @par EVAS_OBJECT_TABLE_HOMOGENEOUS_ITEM
   /// When homogeneous is relative to item it means the greatest minimum
   /// cell size will be used. That is, if no element is set to expand,
   /// the table will have its contents to a minimum size, the bounding
   /// box of all these children will be aligned relatively to the table
   /// object using evas_object_table_align_get(). If the table area is
   /// too small to hold this minimum bounding box, then the objects will
   /// keep their size and the bounding box will overflow the box area,
   /// still respecting the alignment. @b Weight hint is used as a
   /// boolean, if greater than zero it will make that cell expand in that
   /// axis, toggling the <b>expand mode</b>, which makes the table behave
   /// much like @b EVAS_OBJECT_TABLE_HOMOGENEOUS_TABLE, except that the
   /// bounding box will overflow and items will not overlap siblings. If
   /// no minimum size is provided at all then the table will fallback to
   /// expand mode as well.
   ///
   void homogeneous_set(Evas_Object_Table_Homogeneous_Mode homogeneous_) const;

   /// @brief Get alignment of the whole bounding box of contents.
   ///
   void align_get(double* horizontal_, double* vertical_) const;

   /// @brief Set the alignment of the whole bounding box of contents.
   ///
   void align_set(double horizontal_, double vertical_) const;

   /// @brief Get padding between cells.
   ///
   void padding_get(Evas_Coord* horizontal_, Evas_Coord* vertical_) const;

   /// @brief Set padding between cells.
   ///
   void padding_set(Evas_Coord horizontal_, Evas_Coord vertical_) const;

   /// @brief Gets the mirrored mode of the table.
   ///
   /// @return @c EINA_TRUE if it's a mirrored table, @c EINA_FALSE otherwise.
   /// @since 1.1
   /// @see evas_object_table_mirrored_set()
   ///
   bool mirrored_get() const;

   /// @brief Sets the mirrored mode of the table. In mirrored mode the table items go
   /// from right to left instead of left to right. That is, 1,1 is top right, not
   /// top left.
   ///
   /// @since 1.1
   ///
   void mirrored_set(bool mirrored_) const;

   /// @brief Get the number of columns and rows this table takes.
   ///
   /// @note columns and rows are virtual entities, one can specify a table
   /// with a single object that takes 4 columns and 5 rows. The only
   /// difference for a single cell table is that paddings will be
   /// accounted proportionally.
   ///
   void col_row_size_get(int* cols_, int* rows_) const;

   /// @brief Get the list of children for the table.
   ///
   /// @note This is a duplicate of the list kept by the table internally.
   /// It's up to the user to destroy it when it no longer needs it.
   /// It's possible to remove objects from the table when walking this
   /// list, but these removals won't be reflected on it.
   ///
   ::efl::eina::list< ::evas::object > children_get() const;

   /// @brief Get the child of the table at the given coordinates
   ///
   /// @note This does not take into account col/row spanning
   ///
   ::evas::object child_get(unsigned short col_, unsigned short row_) const;



   static Eo_Class const* _eo_class()
   {
      return(EVAS_TABLE_CLASS);
   }

   operator ::evas::table() const;
   operator ::evas::table&();
   operator ::evas::table const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::table*() const { return static_cast<::evas::table*>(static_cast<D const*>(this)->p); }
      operator ::evas::table const*() const { return static_cast<::evas::table const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::table const*() const { return static_cast<::evas::table const*>(static_cast<D const*>(this)->p); }
   };
   /// @endcond

private:

   /// @internal
   Eo* _concrete_eo_ptr() const
   {
      return static_cast<::efl::eo::concrete const*>(static_cast<void const*>(this))->_eo_ptr();
   }

};

}

}
/// @endcond

namespace evas {

/// @brief Class table
struct table
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(efl::gfx::base)
      , EO_CXX_INHERIT(efl::gfx::stack)
      , EO_CXX_INHERIT(eo::base)
      , EO_CXX_INHERIT(evas::common_interface)
      , EO_CXX_INHERIT(evas::object)
      , EO_CXX_INHERIT(evas::object_smart)
      , EO_CXX_INHERIT(evas::signal_interface)
      , EO_CXX_INHERIT(evas::smart_clipped)
{
   //@{
   /**
      @brief Constructs a new evas::table object.

      Constructs a new evas::table object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::table my_table(efl::eo::parent = parent_object);
      @endcode

      @see table(Eo* eo)
   */
   explicit table(::efl::eo::parent_type _p)
      : table(_ctors_call(_p))
   {}

   explicit table()
      : table(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit table(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit table(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   table(table const& other)
      : table(eo_ref(other._eo_ptr()))
   {}

   ~table() {}

   /// @brief Faster way to remove all child objects from a table object.
   ///
   /// @param clear if true, it will delete just removed children.
   ///
   void clear(bool clear_) const;

   /// @brief Get an accessor to get random access to the list of children for the table.
   ///
   /// @note Do not remove or delete objects while walking the list.
   ///
   Eina_Accessor * accessor_new() const;

   /// @brief Get an iterator to walk the list of children for the table.
   ///
   /// @note Do not remove or delete objects while walking the list.
   ///
   Eina_Iterator * iterator_new() const;

   /// @brief @brief Create a table that is child of a given element @a parent.
   ///
   /// @see evas_object_table_add()
   ///
   ::evas::object add_to() const;

   /// @brief Get packing location of a child of table
   ///
   /// @return 1 on success, 0 on failure.
   /// @since 1.1
   ///
   /// @param child The child object to add.
   /// @param[out] col pointer to store relative-horizontal position to place child.
   /// @param[out] row pointer to store relative-vertical position to place child.
   /// @param[out] colspan pointer to store how many relative-horizontal position to use for this child.
   /// @param[out] rowspan pointer to store how many relative-vertical position to use for this child.
   ///
   bool pack_get(::evas::object child_, unsigned short* col_, unsigned short* row_, unsigned short* colspan_, unsigned short* rowspan_) const;

   /// @brief Add a new child to a table object or set its current packing.
   ///
   /// Note that columns and rows only guarantee 16bit unsigned values at best.
   /// That means that col + colspan AND row + rowspan must fit inside 16bit
   /// unsigned values cleanly. You will be warned once values exceed 15bit
   /// storage, and attempting to use values not able to fit in 16bits will
   /// result in failure.
   ///
   /// @return 1 on success, 0 on failure.
   ///
   /// @param child The child object to add.
   /// @param col relative-horizontal position to place child.
   /// @param row relative-vertical position to place child.
   /// @param colspan how many relative-horizontal position to use for this child.
   /// @param rowspan how many relative-vertical position to use for this child.
   ///
   bool pack(::evas::object child_, unsigned short col_, unsigned short row_, unsigned short colspan_, unsigned short rowspan_) const;

   /// @brief Remove child from table.
   ///
   /// @note removing a child will immediately call a walk over children in order
   /// to recalculate numbers of columns and rows. If you plan to remove
   /// all children, use evas_object_table_clear() instead.
   ///
   /// @return 1 on success, 0 on failure.
   ///
   /// @param child 
   ///
   bool unpack(::evas::object child_) const;

   /// @brief Get the current layout homogeneous mode.
   ///
   /// @see evas_object_table_homogeneous_set()
   ///
   Evas_Object_Table_Homogeneous_Mode homogeneous_get() const;

   /// @brief @brief Set how this table should layout children.
   ///
   /// @todo consider aspect hint and respect it.
   ///
   /// @par EVAS_OBJECT_TABLE_HOMOGENEOUS_NONE
   /// If table does not use homogeneous mode then columns and rows will
   /// be calculated based on hints of individual cells. This operation
   /// mode is more flexible, but more complex and heavy to calculate as
   /// well. @b Weight properties are handled as a boolean expand. Negative
   /// alignment will be considered as 0.5. This is the default.
   ///
   /// @todo @c EVAS_OBJECT_TABLE_HOMOGENEOUS_NONE should balance weight.
   ///
   /// @par EVAS_OBJECT_TABLE_HOMOGENEOUS_TABLE
   /// When homogeneous is relative to table the own table size is divided
   /// equally among children, filling the whole table area. That is, if
   /// table has @c WIDTH and @c COLUMNS, each cell will get <tt>WIDTH /
   /// COLUMNS</tt> pixels. If children have minimum size that is larger
   /// than this amount (including padding), then it will overflow and be
   /// aligned respecting the alignment hint, possible overlapping sibling
   /// cells. @b Weight hint is used as a boolean, if greater than zero it
   /// will make the child expand in that axis, taking as much space as
   /// possible (bounded to maximum size hint). Negative alignment will be
   /// considered as 0.5.
   ///
   /// @par EVAS_OBJECT_TABLE_HOMOGENEOUS_ITEM
   /// When homogeneous is relative to item it means the greatest minimum
   /// cell size will be used. That is, if no element is set to expand,
   /// the table will have its contents to a minimum size, the bounding
   /// box of all these children will be aligned relatively to the table
   /// object using evas_object_table_align_get(). If the table area is
   /// too small to hold this minimum bounding box, then the objects will
   /// keep their size and the bounding box will overflow the box area,
   /// still respecting the alignment. @b Weight hint is used as a
   /// boolean, if greater than zero it will make that cell expand in that
   /// axis, toggling the <b>expand mode</b>, which makes the table behave
   /// much like @b EVAS_OBJECT_TABLE_HOMOGENEOUS_TABLE, except that the
   /// bounding box will overflow and items will not overlap siblings. If
   /// no minimum size is provided at all then the table will fallback to
   /// expand mode as well.
   ///
   void homogeneous_set(Evas_Object_Table_Homogeneous_Mode homogeneous_) const;

   /// @brief Get alignment of the whole bounding box of contents.
   ///
   void align_get(double* horizontal_, double* vertical_) const;

   /// @brief Set the alignment of the whole bounding box of contents.
   ///
   void align_set(double horizontal_, double vertical_) const;

   /// @brief Get padding between cells.
   ///
   void padding_get(Evas_Coord* horizontal_, Evas_Coord* vertical_) const;

   /// @brief Set padding between cells.
   ///
   void padding_set(Evas_Coord horizontal_, Evas_Coord vertical_) const;

   /// @brief Gets the mirrored mode of the table.
   ///
   /// @return @c EINA_TRUE if it's a mirrored table, @c EINA_FALSE otherwise.
   /// @since 1.1
   /// @see evas_object_table_mirrored_set()
   ///
   bool mirrored_get() const;

   /// @brief Sets the mirrored mode of the table. In mirrored mode the table items go
   /// from right to left instead of left to right. That is, 1,1 is top right, not
   /// top left.
   ///
   /// @since 1.1
   ///
   void mirrored_set(bool mirrored_) const;

   /// @brief Get the number of columns and rows this table takes.
   ///
   /// @note columns and rows are virtual entities, one can specify a table
   /// with a single object that takes 4 columns and 5 rows. The only
   /// difference for a single cell table is that paddings will be
   /// accounted proportionally.
   ///
   void col_row_size_get(int* cols_, int* rows_) const;

   /// @brief Get the list of children for the table.
   ///
   /// @note This is a duplicate of the list kept by the table internally.
   /// It's up to the user to destroy it when it no longer needs it.
   /// It's possible to remove objects from the table when walking this
   /// list, but these removals won't be reflected on it.
   ///
   ::efl::eina::list< ::evas::object > children_get() const;

   /// @brief Get the child of the table at the given coordinates
   ///
   /// @note This does not take into account col/row spanning
   ///
   ::evas::object child_get(unsigned short col_, unsigned short row_) const;

   template <typename F>
   ::efl::eo::signal_connection
   callback_callback_add_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EO_BASE_EVENT_CALLBACK_ADD, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EO_BASE_EVENT_CALLBACK_ADD );
   }

   template <typename T>
   void
   callback_callback_add_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EO_BASE_EVENT_CALLBACK_ADD, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_callback_del_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EO_BASE_EVENT_CALLBACK_DEL, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EO_BASE_EVENT_CALLBACK_DEL );
   }

   template <typename T>
   void
   callback_callback_del_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EO_BASE_EVENT_CALLBACK_DEL, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_changed_size_hints_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_CHANGED_SIZE_HINTS, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_CHANGED_SIZE_HINTS );
   }

   template <typename T>
   void
   callback_changed_size_hints_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_CHANGED_SIZE_HINTS, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_focus_in_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_FOCUS_IN, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_FOCUS_IN );
   }

   template <typename T>
   void
   callback_focus_in_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_FOCUS_IN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_focus_out_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_FOCUS_OUT, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_FOCUS_OUT );
   }

   template <typename T>
   void
   callback_focus_out_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_FOCUS_OUT, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_free_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_FREE, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_FREE );
   }

   template <typename T>
   void
   callback_free_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_FREE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_hide_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_HIDE, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_HIDE );
   }

   template <typename T>
   void
   callback_hide_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_HIDE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_hold_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_HOLD, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_HOLD );
   }

   template <typename T>
   void
   callback_hold_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_HOLD, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_image_preloaded_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_IMAGE_PRELOADED, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_IMAGE_PRELOADED );
   }

   template <typename T>
   void
   callback_image_preloaded_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_IMAGE_PRELOADED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_image_resize_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_IMAGE_RESIZE, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_IMAGE_RESIZE );
   }

   template <typename T>
   void
   callback_image_resize_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_IMAGE_RESIZE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_image_unloaded_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_IMAGE_UNLOADED, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_IMAGE_UNLOADED );
   }

   template <typename T>
   void
   callback_image_unloaded_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_IMAGE_UNLOADED, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_key_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_KEY_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_KEY_DOWN );
   }

   template <typename T>
   void
   callback_key_down_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_KEY_DOWN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_key_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_KEY_UP, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_KEY_UP );
   }

   template <typename T>
   void
   callback_key_up_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_KEY_UP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_DOWN );
   }

   template <typename T>
   void
   callback_mouse_down_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_DOWN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_in_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_IN, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_IN );
   }

   template <typename T>
   void
   callback_mouse_in_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_IN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_move_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_MOVE, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_MOVE );
   }

   template <typename T>
   void
   callback_mouse_move_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_MOVE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_out_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_OUT, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_OUT );
   }

   template <typename T>
   void
   callback_mouse_out_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_OUT, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_UP, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_UP );
   }

   template <typename T>
   void
   callback_mouse_up_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_UP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_mouse_wheel_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOUSE_WHEEL, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_MOUSE_WHEEL );
   }

   template <typename T>
   void
   callback_mouse_wheel_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOUSE_WHEEL, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_move_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MOVE, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_MOVE );
   }

   template <typename T>
   void
   callback_move_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MOVE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_multi_down_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MULTI_DOWN, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_MULTI_DOWN );
   }

   template <typename T>
   void
   callback_multi_down_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MULTI_DOWN, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_multi_move_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MULTI_MOVE, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_MULTI_MOVE );
   }

   template <typename T>
   void
   callback_multi_move_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MULTI_MOVE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_multi_up_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_MULTI_UP, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_MULTI_UP );
   }

   template <typename T>
   void
   callback_multi_up_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_MULTI_UP, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_resize_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_RESIZE, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_RESIZE );
   }

   template <typename T>
   void
   callback_resize_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_RESIZE, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_restack_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_RESTACK, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_RESTACK );
   }

   template <typename T>
   void
   callback_restack_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_RESTACK, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_show_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EVAS_OBJECT_EVENT_SHOW, priority_,
            &::efl::eo::_detail::event_callback<::evas::table, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::table, function_type>,
         EVAS_OBJECT_EVENT_SHOW );
   }

   template <typename T>
   void
   callback_show_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EVAS_OBJECT_EVENT_SHOW, info));
   }



   static Eo_Class const* _eo_class()
   {
      return(EVAS_TABLE_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::table::address_of<address_of>
      , ::eo_cxx::efl::gfx::base::address_of<address_of>
      , ::eo_cxx::efl::gfx::stack::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::eo_cxx::evas::common_interface::address_of<address_of>
      , ::eo_cxx::evas::object::address_of<address_of>
      , ::eo_cxx::evas::object_smart::address_of<address_of>
      , ::eo_cxx::evas::signal_interface::address_of<address_of>
      , ::eo_cxx::evas::smart_clipped::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::table* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::table::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::base::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::stack::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::eo_cxx::evas::common_interface::address_const_of<address_const_of>
      , ::eo_cxx::evas::object::address_const_of<address_const_of>
      , ::eo_cxx::evas::object_smart::address_const_of<address_const_of>
      , ::eo_cxx::evas::signal_interface::address_const_of<address_const_of>
      , ::eo_cxx::evas::smart_clipped::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::table const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_TABLE_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::table) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::table>::value, "");

}


#include "evas_table.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_TABLE_HH


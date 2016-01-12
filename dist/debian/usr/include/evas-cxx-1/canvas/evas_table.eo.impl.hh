/// @cond EO_CXX_EO_IMPL

inline void evas::table::clear(bool clear_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_table_clear(::efl::eolian::to_c(clear_)));
}

inline Eina_Accessor * evas::table::accessor_new() const
{
   Eina_Accessor * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_accessor_new());
   return _tmp_ret;
}

inline Eina_Iterator * evas::table::iterator_new() const
{
   Eina_Iterator * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_iterator_new());
   return _tmp_ret;
}

inline ::evas::object evas::table::add_to() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_add_to());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::table::pack_get(::evas::object child_, unsigned short* col_, unsigned short* row_, unsigned short* colspan_, unsigned short* rowspan_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_pack_get(::efl::eolian::to_c(child_), col_, row_, colspan_, rowspan_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::table::pack(::evas::object child_, unsigned short col_, unsigned short row_, unsigned short colspan_, unsigned short rowspan_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_pack(::efl::eolian::to_c(child_), col_, row_, colspan_, rowspan_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool evas::table::unpack(::evas::object child_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_unpack(::efl::eolian::to_c(child_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline Evas_Object_Table_Homogeneous_Mode evas::table::homogeneous_get() const
{
   Evas_Object_Table_Homogeneous_Mode _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_homogeneous_get());
   return _tmp_ret;
}

inline void evas::table::homogeneous_set(Evas_Object_Table_Homogeneous_Mode homogeneous_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_table_homogeneous_set(homogeneous_));
}

inline void evas::table::align_get(double* horizontal_, double* vertical_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_table_align_get(horizontal_, vertical_));
}

inline void evas::table::align_set(double horizontal_, double vertical_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_table_align_set(horizontal_, vertical_));
}

inline void evas::table::padding_get(Evas_Coord* horizontal_, Evas_Coord* vertical_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_table_padding_get(horizontal_, vertical_));
}

inline void evas::table::padding_set(Evas_Coord horizontal_, Evas_Coord vertical_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_table_padding_set(horizontal_, vertical_));
}

inline bool evas::table::mirrored_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_mirrored_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void evas::table::mirrored_set(bool mirrored_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_table_mirrored_set(::efl::eolian::to_c(mirrored_)));
}

inline void evas::table::col_row_size_get(int* cols_, int* rows_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_table_col_row_size_get(cols_, rows_));
}

inline ::efl::eina::list< ::evas::object > evas::table::children_get() const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_children_get());
   return ::efl::eolian::to_cxx<::efl::eina::list< ::evas::object >>(_tmp_ret, std::tuple<std::true_type, std::false_type>());
}

inline ::evas::object evas::table::child_get(unsigned short col_, unsigned short row_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_child_get(col_, row_));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::table::clear(bool clear_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_table_clear(::efl::eolian::to_c(clear_)));
}

inline Eina_Accessor * eo_cxx::evas::table::accessor_new() const
{
   Eina_Accessor * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_accessor_new());
   return _tmp_ret;
}

inline Eina_Iterator * eo_cxx::evas::table::iterator_new() const
{
   Eina_Iterator * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_iterator_new());
   return _tmp_ret;
}

inline ::evas::object eo_cxx::evas::table::add_to() const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_add_to());
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::table::pack_get(::evas::object child_, unsigned short* col_, unsigned short* row_, unsigned short* colspan_, unsigned short* rowspan_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_pack_get(::efl::eolian::to_c(child_), col_, row_, colspan_, rowspan_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::table::pack(::evas::object child_, unsigned short col_, unsigned short row_, unsigned short colspan_, unsigned short rowspan_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_pack(::efl::eolian::to_c(child_), col_, row_, colspan_, rowspan_));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline bool eo_cxx::evas::table::unpack(::evas::object child_) const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_unpack(::efl::eolian::to_c(child_)));
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline Evas_Object_Table_Homogeneous_Mode eo_cxx::evas::table::homogeneous_get() const
{
   Evas_Object_Table_Homogeneous_Mode _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_homogeneous_get());
   return _tmp_ret;
}

inline void eo_cxx::evas::table::homogeneous_set(Evas_Object_Table_Homogeneous_Mode homogeneous_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_table_homogeneous_set(homogeneous_));
}

inline void eo_cxx::evas::table::align_get(double* horizontal_, double* vertical_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_table_align_get(horizontal_, vertical_));
}

inline void eo_cxx::evas::table::align_set(double horizontal_, double vertical_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_table_align_set(horizontal_, vertical_));
}

inline void eo_cxx::evas::table::padding_get(Evas_Coord* horizontal_, Evas_Coord* vertical_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_table_padding_get(horizontal_, vertical_));
}

inline void eo_cxx::evas::table::padding_set(Evas_Coord horizontal_, Evas_Coord vertical_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_table_padding_set(horizontal_, vertical_));
}

inline bool eo_cxx::evas::table::mirrored_get() const
{
   Eina_Bool _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_mirrored_get());
   return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
}

inline void eo_cxx::evas::table::mirrored_set(bool mirrored_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_table_mirrored_set(::efl::eolian::to_c(mirrored_)));
}

inline void eo_cxx::evas::table::col_row_size_get(int* cols_, int* rows_) const
{
   eo_do(_concrete_eo_ptr(), ::evas_obj_table_col_row_size_get(cols_, rows_));
}

inline ::efl::eina::list< ::evas::object > eo_cxx::evas::table::children_get() const
{
   Eina_List * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_children_get());
   return ::efl::eolian::to_cxx<::efl::eina::list< ::evas::object >>(_tmp_ret, std::tuple<std::true_type, std::false_type>());
}

inline ::evas::object eo_cxx::evas::table::child_get(unsigned short col_, unsigned short row_) const
{
   Evas_Object * _tmp_ret;
   eo_do(_concrete_eo_ptr(), _tmp_ret = ::evas_obj_table_child_get(col_, row_));
   return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
}

inline ::eo_cxx::evas::table::operator ::evas::table() const
{
   return *static_cast<::evas::table const*>(static_cast<void const*>(this));
}

inline ::eo_cxx::evas::table::operator ::evas::table&()
{
   return *static_cast<::evas::table*>(static_cast<void*>(this));
}

inline ::eo_cxx::evas::table::operator ::evas::table const&() const
{
   return *static_cast<::evas::table const*>(static_cast<void const*>(this));
}

template <typename T>
void evas_table_clear_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool clear_)
{
   try
      {
         static_cast<T*>(self->this_)->clear(::efl::eolian::to_cxx<bool>(clear_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
Eina_Accessor * evas_table_accessor_new_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->accessor_new();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Accessor * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
Eina_Iterator * evas_table_iterator_new_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->iterator_new();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Iterator * _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
::evas::object evas_table_add_to_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->add_to();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool evas_table_pack_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_, unsigned short* col_, unsigned short* row_, unsigned short* colspan_, unsigned short* rowspan_)
{
   try
      {
         return static_cast<T*>(self->this_)->pack_get(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()), col_, row_, colspan_, rowspan_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool evas_table_pack_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_, unsigned short col_, unsigned short row_, unsigned short colspan_, unsigned short rowspan_)
{
   try
      {
         return static_cast<T*>(self->this_)->pack(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()), col_, row_, colspan_, rowspan_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
bool evas_table_unpack_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object * child_)
{
   try
      {
         return static_cast<T*>(self->this_)->unpack(::efl::eolian::to_cxx<::evas::object>(child_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
Evas_Object_Table_Homogeneous_Mode evas_table_homogeneous_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->homogeneous_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object_Table_Homogeneous_Mode _tmp_ret{};
         return _tmp_ret;
      }
}

template <typename T>
void evas_table_homogeneous_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Object_Table_Homogeneous_Mode homogeneous_)
{
   try
      {
         static_cast<T*>(self->this_)->homogeneous_set(homogeneous_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_table_align_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double* horizontal_, double* vertical_)
{
   try
      {
         static_cast<T*>(self->this_)->align_get(horizontal_, vertical_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_table_align_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, double horizontal_, double vertical_)
{
   try
      {
         static_cast<T*>(self->this_)->align_set(horizontal_, vertical_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_table_padding_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord* horizontal_, Evas_Coord* vertical_)
{
   try
      {
         static_cast<T*>(self->this_)->padding_get(horizontal_, vertical_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_table_padding_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Evas_Coord horizontal_, Evas_Coord vertical_)
{
   try
      {
         static_cast<T*>(self->this_)->padding_set(horizontal_, vertical_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
bool evas_table_mirrored_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->mirrored_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_Bool _tmp_ret{};
         return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }
}

template <typename T>
void evas_table_mirrored_set_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, Eina_Bool mirrored_)
{
   try
      {
         static_cast<T*>(self->this_)->mirrored_set(::efl::eolian::to_cxx<bool>(mirrored_, std::tuple<std::false_type>()));
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
void evas_table_col_row_size_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, int* cols_, int* rows_)
{
   try
      {
         static_cast<T*>(self->this_)->col_row_size_get(cols_, rows_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
      }
}

template <typename T>
::efl::eina::list< ::evas::object > evas_table_children_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self)
{
   try
      {
         return static_cast<T*>(self->this_)->children_get();
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Eina_List * _tmp_ret{};
         return ::efl::eolian::to_cxx<::efl::eina::list< ::evas::object >>(_tmp_ret, std::tuple<std::true_type, std::false_type>());
      }
}

template <typename T>
::evas::object evas_table_child_get_wrapper(Eo* objid EINA_UNUSED, ::efl::eo::detail::Inherit_Private_Data* self, unsigned short col_, unsigned short row_)
{
   try
      {
         return static_cast<T*>(self->this_)->child_get(col_, row_);
      }
   catch (...)
      {
         eina_error_set( ::efl::eina::unknown_error() );
         Evas_Object * _tmp_ret{};
         return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }
}

namespace efl { namespace eo { namespace detail {

template<>
struct operations< ::evas::table >
{
   template <typename T>
   struct type
         : virtual operations< ::evas::smart_clipped >::template type<T>
   {
      virtual void clear(bool clear_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_table_clear(::efl::eolian::to_c(clear_)));
      }

      virtual Eina_Accessor * accessor_new()
      {
         Eina_Accessor * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_table_accessor_new());
            return _tmp_ret;
      }

      virtual Eina_Iterator * iterator_new()
      {
         Eina_Iterator * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_table_iterator_new());
            return _tmp_ret;
      }

      virtual ::evas::object add_to()
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_table_add_to());
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool pack_get(::evas::object child_, unsigned short* col_, unsigned short* row_, unsigned short* colspan_, unsigned short* rowspan_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_table_pack_get(::efl::eolian::to_c(child_), col_, row_, colspan_, rowspan_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool pack(::evas::object child_, unsigned short col_, unsigned short row_, unsigned short colspan_, unsigned short rowspan_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_table_pack(::efl::eolian::to_c(child_), col_, row_, colspan_, rowspan_));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual bool unpack(::evas::object child_)
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_table_unpack(::efl::eolian::to_c(child_)));
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual Evas_Object_Table_Homogeneous_Mode homogeneous_get()
      {
         Evas_Object_Table_Homogeneous_Mode _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_table_homogeneous_get());
            return _tmp_ret;
      }

      virtual void homogeneous_set(Evas_Object_Table_Homogeneous_Mode homogeneous_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_table_homogeneous_set(homogeneous_));
      }

      virtual void align_get(double* horizontal_, double* vertical_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_table_align_get(horizontal_, vertical_));
      }

      virtual void align_set(double horizontal_, double vertical_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_table_align_set(horizontal_, vertical_));
      }

      virtual void padding_get(Evas_Coord* horizontal_, Evas_Coord* vertical_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_table_padding_get(horizontal_, vertical_));
      }

      virtual void padding_set(Evas_Coord horizontal_, Evas_Coord vertical_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_table_padding_set(horizontal_, vertical_));
      }

      virtual bool mirrored_get()
      {
         Eina_Bool _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_table_mirrored_get());
            return ::efl::eolian::to_cxx<bool>(_tmp_ret, std::tuple<std::false_type>());
      }

      virtual void mirrored_set(bool mirrored_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_table_mirrored_set(::efl::eolian::to_c(mirrored_)));
      }

      virtual void col_row_size_get(int* cols_, int* rows_)
      {

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               ::evas_obj_table_col_row_size_get(cols_, rows_));
      }

      virtual ::efl::eina::list< ::evas::object > children_get()
      {
         Eina_List * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_table_children_get());
            return ::efl::eolian::to_cxx<::efl::eina::list< ::evas::object >>(_tmp_ret, std::tuple<std::true_type, std::false_type>());
      }

      virtual ::evas::object child_get(unsigned short col_, unsigned short row_)
      {
         Evas_Object * _tmp_ret = {};

         eo_do_super(dynamic_cast<T*>(this)->_eo_ptr(),
               dynamic_cast<T*>(this)->_eo_class(),
               _tmp_ret = ::evas_obj_table_child_get(col_, row_));
            return ::efl::eolian::to_cxx<::evas::object>(_tmp_ret, std::tuple<std::false_type>());
      }

   };
};


template<>
struct operation_description_class_size< ::evas::table >
{
   static constexpr int value = 
#if defined(TABLE_PROTECTED) && defined(TABLE_BETA)
      18
#elif defined(TABLE_PROTECTED)
      18
#elif defined(TABLE_BETA)
      18
#else
      18
#endif
      + operation_description_class_size<::evas::smart_clipped >::value;
};

template <typename T>
int initialize_operation_description(::efl::eo::detail::tag<::evas::table>
                                 , Eo_Op_Description* ops)
{
   int i = 0;
   (void)i;
   (void)ops;
   ops[i].func = reinterpret_cast<void*>(& ::evas_table_clear_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_table_clear);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_table_accessor_new_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_table_accessor_new);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_table_iterator_new_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_table_iterator_new);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_table_add_to_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_table_add_to);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_table_pack_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_table_pack_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_table_pack_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_table_pack);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_table_unpack_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_table_unpack);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_table_homogeneous_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_table_homogeneous_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_table_homogeneous_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_table_homogeneous_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_table_align_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_table_align_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_table_align_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_table_align_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_table_padding_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_table_padding_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_table_padding_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_table_padding_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_table_mirrored_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_table_mirrored_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_table_mirrored_set_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_table_mirrored_set);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_table_col_row_size_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_table_col_row_size_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_table_children_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_table_children_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   ops[i].func = reinterpret_cast<void*>(& ::evas_table_child_get_wrapper<T>);
   ops[i].api_func = reinterpret_cast<void*>(& ::evas_obj_table_child_get);
   ops[i].op_type = EO_OP_TYPE_REGULAR;
   ++i;

   initialize_operation_description<T>(::efl::eo::detail::tag<::evas::smart_clipped>(), &ops[operation_description_class_size< ::evas::table >::value]);
   return 0;
}
inline Eo_Class const* get_eo_class(tag<::evas::table>)
{
   return (EVAS_TABLE_CLASS);
}

} } }

/// @endcond


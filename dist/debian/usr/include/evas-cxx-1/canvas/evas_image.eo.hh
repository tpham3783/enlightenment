#ifndef EFL_GENERATED_EVAS_IMAGE_HH
#define EFL_GENERATED_EVAS_IMAGE_HH

extern "C"
{
#include <Efl.h>
}
#include <Eo.hh>

#include <eo_cxx_interop.hh>

extern "C"
{
#include "evas_image.eo.h"
}

#include "evas_object.eo.hh"
#include "efl_file.eo.hh"
#include "efl_image.eo.hh"
#include "efl_gfx_fill.eo.hh"
#include "efl_gfx_view.eo.hh"
#include "evas_filter.eo.hh"
#include <evas_canvas3d_scene.eo.hh>
#include <evas_object.eo.hh>

namespace evas {

struct image;

}

/// @cond EO_CXX_ABSTRACT
namespace eo_cxx {

namespace evas {

struct image
{
   /// @brief Begin preloading an image object's image data in the background
   ///
   void preload_begin() const;

   /// @brief Mark a sub-region of the given image object to be redrawn.
   ///
   /// This function schedules a particular rectangular region of an image
   /// object to be updated (redrawn) at the next rendering cycle.
   ///
   /// @param x X-offset of the region to be updated.
   /// @param y Y-offset of the region to be updated.
   /// @param w Width of the region to be updated.
   /// @param h Height of the region to be updated.
   ///
   void data_update_add(int x_, int y_, int w_, int h_) const;

   /// @brief Get the duration of a sequence of frames.
   ///
   /// This returns total duration that the specified sequence of frames should
   /// take in seconds.
   ///
   /// If you set start_frame to 1 and frame_num 0, you get frame 1's duration
   /// If you set start_frame to 1 and frame_num 1, you get frame 1's duration +
   /// frame2's duration
   ///
   /// @see evas_object_image_animated_get()
   /// @see evas_object_image_animated_frame_count_get()
   /// @see evas_object_image_animated_loop_type_get()
   /// @see evas_object_image_animated_loop_count_get()
   /// @see evas_object_image_animated_frame_duration_get()
   /// @see evas_object_image_animated_frame_set()
   /// @since 1.1
   ///
   /// @param start_frame The first frame
   /// @param frame_num Number of frames in the sequence
   ///
   double animated_frame_duration_get(int start_frame_, int frame_num_) const;

   /// @brief Sets the raw image data of the given image object.
   ///
   /// Note that the raw data must be of the same size (see
   /// evas_object_image_size_set(), which has to be called @b before this
   /// one) and colorspace (see evas_object_image_colorspace_set()) of the
   /// image. If data is @c NULL, the current image data will be
   /// freed. Naturally, if one does not set an image object's data
   /// manually, it will still have one, allocated by Evas.
   ///
   /// @see evas_object_image_data_get()
   ///
   /// @param data The raw data, or @c NULL.
   ///
   void data_set(void * data_) const;

   /// @brief Get a pointer to the raw image data of the given image object.
   ///
   /// @return The raw image data.
   ///
   /// This function returns a pointer to an image object's internal pixel
   /// buffer, for reading only or read/write. If you request it for
   /// writing, the image will be marked dirty so that it gets redrawn at
   /// the next update.
   ///
   /// Each time you call this function on an image object, its data
   /// buffer will have an internal reference counter
   /// incremented. Decrement it back by using
   /// evas_object_image_data_set().
   ///
   /// This is best suited for when you want to modify an existing image,
   /// without changing its dimensions.
   ///
   /// @note The contents' format returned by it depend on the color
   /// space of the given image object.
   ///
   /// @note You may want to use evas_object_image_data_update_add() to
   /// inform data changes, if you did any.
   ///
   /// @see evas_object_image_data_set()
   ///
   /// @param for_writing Whether the data being retrieved will be
   /// modified (@c EINA_TRUE) or not (@c EINA_FALSE).
   ///
   void * data_get(bool for_writing_) const;

   /// @brief Cancel preloading an image object's image data in the background
   ///
   void preload_cancel() const;

   /// @brief Get the DPI resolution of a loaded image object in the canvas.
   ///
   /// @return The DPI resolution of the given canvas image.
   ///
   /// This function returns the DPI resolution of the given canvas image.
   ///
   /// @see evas_object_image_load_dpi_set() for more details
   ///
   double load_dpi_get() const;

   /// @brief Set the DPI resolution of an image object's source image.
   ///
   /// This function sets the DPI resolution of a given loaded canvas
   /// image. Most useful for the SVG image loader.
   ///
   /// @see evas_object_image_load_dpi_get()
   ///
   void load_dpi_set(double dpi_) const;

   /// @brief Determine whether an object is clipped by source object's clipper.
   ///
   /// @return @c EINA_TRUE if source clip is enabled, @c EINA_FALSE otherwise.
   ///
   /// @see evas_object_clip_set()
   /// @see evas_object_image_source_set()
   /// @see evas_object_image_source_clip_set()
   /// @since 1.8
   ///
   bool source_clip_get() const;

   /// @brief Clip the proxy object with the source object's clipper.
   ///
   /// @see evas_object_clip_set()
   /// @see evas_object_image_source_set()
   /// @since 1.8
   ///
   void source_clip_set(bool source_clip_) const;

   /// @brief Get the current source object of an image object.
   ///
   /// @return Source object (if any), or @c NULL, if not in "proxy mode"
   /// (or on errors).
   ///
   /// @see evas_object_image_source_set() for more details
   ///
   ::evas::object source_get() const;

   /// @brief Set the source object on an image object to used as a @b proxy.
   ///
   /// @return @c EINA_TRUE on success, @c EINA_FALSE on error.
   ///
   /// If an image object is set to behave as a @b proxy, it will mirror
   /// the rendering contents of a given @b source object in its drawing
   /// region, without affecting that source in any way. The source must
   /// be another valid Evas object. Other effects may be applied to the
   /// proxy, such as a map (see evas_object_map_set()) to create a
   /// reflection of the original object (for example).
   ///
   /// Any existing source object on @p obj will be removed after this
   /// call. Setting @p src to @c NULL clears the proxy object (not in
   /// "proxy state" anymore).
   ///
   /// @warning You cannot set a proxy as another proxy's source.
   ///
   /// @see evas_object_image_source_get()
   /// @see evas_object_image_source_unset()
   /// @see evas_object_image_source_visible_set()
   ///
   bool source_set(::evas::object src_) const;

   /// @brief Retrieve whether the image object's fill property should track the
   /// object's size.
   ///
   /// @return @c EINA_TRUE if it is tracking, @c EINA_FALSE, if not (and
   /// evas_object_fill_set() must be called manually).
   ///
   /// @see evas_object_image_filled_set() for more information
   ///
   bool filled_get() const;

   /// @brief Set whether the image object's fill property should track the
   /// object's size.
   ///
   /// If @p setting is @c EINA_TRUE, then every evas_object_resize() will
   /// @b automatically trigger a call to evas_object_image_fill_set()
   /// with the that new size (and @c 0, @c 0 as source image's origin),
   /// so the bound image will fill the whole object's area.
   ///
   /// @see evas_object_image_filled_add()
   /// @see evas_object_image_fill_get()
   ///
   void filled_set(bool filled_) const;

   /// @brief Get the content hint setting of a given image object of the canvas.
   ///
   /// @return hint The content hint value set on it, one of the
   /// #Evas_Image_Content_Hint ones (#EVAS_IMAGE_CONTENT_HINT_NONE means
   /// an error).
   ///
   /// This function returns the content hint value of the given image of
   /// the canvas.
   ///
   /// @see evas_object_image_content_hint_set()
   ///
   Evas_Image_Content_Hint content_hint_get() const;

   /// @brief Set the content hint setting of a given image object of the canvas.
   ///
   /// This function sets the content hint value of the given image of the
   /// canvas. For example, if you're on the GL engine and your driver
   /// implementation supports it, setting this hint to
   /// #EVAS_IMAGE_CONTENT_HINT_DYNAMIC will make it need @b zero copies
   /// at texture upload time, which is an "expensive" operation.
   ///
   /// @see evas_object_image_content_hint_get()
   ///
   void content_hint_set(Evas_Image_Content_Hint hint_) const;

   /// @brief Retrieve the coordinates of a given image object's selective
   /// (source image) load region.
   ///
   /// @note Use @c NULL pointers on the coordinates you're not interested
   /// in: they'll be ignored by the function.
   ///
   /// @see evas_object_image_load_region_get()
   ///
   void load_region_get(int* x_, int* y_, int* w_, int* h_) const;

   /// @brief Inform a given image object to load a selective region of its
   /// source image.
   ///
   /// This function is useful when one is not showing all of an image's
   /// area on its image object.
   ///
   /// @note The image loader for the image format in question has to
   /// support selective region loading in order to this function to take
   /// effect.
   ///
   /// @see evas_object_image_load_region_get()
   ///
   void load_region_set(int x_, int y_, int w_, int h_) const;

   /// @brief Retrieve whether alpha channel data is being used on the given
   /// image object.
   ///
   /// @return Whether the alpha channel data is being used (@c EINA_TRUE)
   /// or not (@c EINA_FALSE).
   ///
   /// This function returns @c EINA_TRUE if the image object's alpha
   /// channel is being used, or @c EINA_FALSE otherwise.
   ///
   /// See @ref evas_object_image_alpha_set() for more details.
   ///
   bool alpha_get() const;

   /// @brief Enable or disable alpha channel usage on the given image object.
   ///
   /// This function sets a flag on an image object indicating whether or
   /// not to use alpha channel data. A value of @c EINA_TRUE makes it use
   /// alpha channel data, and @c EINA_FALSE makes it ignore that
   /// data. Note that this has nothing to do with an object's color as
   /// manipulated by evas_object_color_set().
   ///
   /// @see evas_object_image_alpha_get()
   ///
   void alpha_set(bool alpha_) const;

   /// @brief Retrieve the dimensions for an image object's border, a region
   /// which @b won't ever be scaled together with its center.
   ///
   /// @note Use @c NULL pointers on the border components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// See @ref evas_object_image_border_set() for more details.
   ///
   void border_get(int* l_, int* r_, int* t_, int* b_) const;

   /// @brief Set the dimensions for an image object's border, a region which @b
   /// won't ever be scaled together with its center.
   ///
   /// When Evas is rendering, an image source may be scaled to fit the
   /// size of its image object. This function sets an area from the
   /// borders of the image inwards which is @b not to be scaled. This
   /// function is useful for making frames and for widget theming, where,
   /// for example, buttons may be of varying sizes, but their border size
   /// must remain constant.
   ///
   /// The units used for @p l, @p r, @p t and @p b are canvas units.
   ///
   /// @note The border region itself @b may be scaled by the
   /// evas_object_image_border_scale_set() function.
   ///
   /// @note By default, image objects have no borders set, i. e. @c l, @c
   /// r, @c t and @c b start as @c 0.
   ///
   /// See the following figures for visual explanation:\n
   /// @htmlonly
   /// <img src="image-borders.png" style="max-width: 100%;" />
   /// <a href="image-borders.png">Full-size</a>
   /// @endhtmlonly
   /// @image rtf image-borders.png
   /// @image latex image-borders.eps width=\textwidth
   /// @htmlonly
   /// <img src="border-effect.png" style="max-width: 100%;" />
   /// <a href="border-effect.png">Full-size</a>
   /// @endhtmlonly
   /// @image rtf border-effect.png
   /// @image latex border-effect.eps width=\textwidth
   ///
   /// @see evas_object_image_border_get()
   /// @see evas_object_image_border_center_fill_set()
   ///
   void border_set(int l_, int r_, int t_, int b_) const;

   /// @brief Retrieves the scaling factor (multiplier) for the borders of an
   /// image object.
   ///
   /// @return The scale factor set for its borders
   ///
   /// @see evas_object_image_border_set()
   /// @see evas_object_image_border_scale_set()
   ///
   double border_scale_get() const;

   /// @brief Sets the scaling factor (multiplier) for the borders of an image
   /// object.
   ///
   /// @see evas_object_image_border_set()
   /// @see evas_object_image_border_scale_get()
   ///
   void border_scale_set(double scale_) const;

   /// @brief Retrieves whether the given image object is dirty (needs to be redrawn).
   ///
   /// @return Whether the image is dirty.
   ///
   bool pixels_dirty_get() const;

   /// @brief Mark whether the given image object is dirty and needs to request its pixels.
   ///
   /// This function will only properly work if a pixels get callback has been set.
   ///
   /// @warning use this function if you really know what you are doing.
   ///
   /// @see evas_object_image_pixels_get_callback_set()
   ///
   void pixels_dirty_set(bool dirty_) const;

   /// @brief Get the video surface linekd to a given image of the canvas
   ///
   /// @return The video surface of the given canvas image.
   /// @since 1.1
   ///
   /// This function returns the video surface linked to a given canvas image.
   ///
   const Evas_Video_Surface * video_surface_get() const;

   /// @brief Set the video surface linked to a given image of the canvas
   ///
   /// This function links a video surface to a given canvas image.
   ///
   void video_surface_set(Evas_Video_Surface * surf_) const;

   /// @brief Get the video surface capabilities to a given image of the canvas
   ///
   unsigned int video_surface_caps_get() const;

   /// @brief Set the video surface capabilities to a given image of the canvas
   ///
   void video_surface_caps_set(unsigned int caps_) const;

   /// @brief Get if the orientation information in the image file should be honored.
   ///
   /// @since 1.1
   ///
   bool load_orientation_get() const;

   /// @brief Define if the orientation information in the image file should be honored.
   ///
   /// @since 1.1
   ///
   void load_orientation_set(bool enable_) const;

   /// @brief Retrieves @b how the center part of the given image object (not the
   /// borders) is to be drawn when Evas is rendering it.
   ///
   /// @return fill Fill mode of the center region of @p obj (a value in
   /// #Evas_Border_Fill_Mode).
   ///
   /// See @ref evas_object_image_fill_set() for more details.
   ///
   Evas_Border_Fill_Mode border_center_fill_get() const;

   /// @brief Sets @b how the center part of the given image object (not the
   /// borders) should be drawn when Evas is rendering it.
   ///
   /// This function sets how the center part of the image object's source
   /// image is to be drawn, which must be one of the values in
   /// #Evas_Border_Fill_Mode. By center we mean the complementary part of
   /// that defined by evas_object_image_border_set(). This one is very
   /// useful for making frames and decorations. You would most probably
   /// also be using a filled image (as in evas_object_image_filled_set())
   /// to use as a frame.
   ///
   /// @see evas_object_image_border_center_fill_get()
   ///
   void border_center_fill_set(Evas_Border_Fill_Mode fill_) const;

   /// @brief Get the state of the source object visibility.
   ///
   /// @return @c EINA_TRUE if source object is visible, @c EINA_FALSE otherwise.
   ///
   /// @see evas_object_image_source_visible_set()
   /// @see evas_object_image_source_set()
   /// @see evas_object_show()
   /// @see evas_object_hide()
   /// @since 1.8
   ///
   bool source_visible_get() const;

   /// @brief Set the source object to be visible or not.
   ///
   /// If the @p visible set to @c EINA_FALSE, the source object of the proxy(@p obj
   /// ) will be invisible.
   ///
   /// This API works differently to evas_object_show() and evas_object_hide().
   /// Once source object is hidden by evas_object_hide() then the proxy object will
   /// be hidden as well. Actually in this case both objects are excluded from the
   /// Evas internal update circle.
   ///
   /// By this API, instead, one can toggle the visibility of a proxy's source
   /// object remaining the proxy visibility untouched.
   ///
   /// @warning If the all of proxies are deleted, then the source visibility of the
   /// source object will be cancelled.
   ///
   /// @see evas_object_image_source_visible_get()
   /// @see evas_object_image_source_set()
   /// @see evas_object_show()
   /// @see evas_object_hide()
   /// @since 1.8
   ///
   void source_visible_set(bool visible_) const;

   /// @brief Get the native surface of a given image of the canvas
   ///
   /// @return The native surface of the given canvas image.
   ///
   /// This function returns the native surface of a given canvas image.
   ///
   Evas_Native_Surface * native_surface_get() const;

   /// @brief Set the native surface of a given image of the canvas
   ///
   /// This function sets a native surface of a given canvas image.
   ///
   void native_surface_set(Evas_Native_Surface * surf_) const;

   /// @brief get the scale down factor of a given image object's source image,
   /// when loading it.
   ///
   /// @see evas_object_image_load_scale_down_set() for more details
   ///
   int load_scale_down_get() const;

   /// @brief Set the scale down factor of a given image object's source image,
   /// when loading it.
   ///
   /// This function sets the scale down factor of a given canvas
   /// image. Most useful for the SVG image loader.
   ///
   /// @see evas_object_image_load_scale_down_get()
   ///
   void load_scale_down_set(int scale_down_) const;

   /// @brief Get the scale hint of a given image of the canvas.
   ///
   /// @return The scale hint value set on @p obj, a value in
   /// #Evas_Image_Scale_Hint.
   ///
   /// This function returns the scale hint value of the given image
   /// object of the canvas.
   ///
   /// @see evas_object_image_scale_hint_set() for more details.
   ///
   Evas_Image_Scale_Hint scale_hint_get() const;

   /// @brief Set the scale hint of a given image of the canvas.
   ///
   /// This function sets the scale hint value of the given image object
   /// in the canvas, which will affect how Evas is to cache scaled
   /// versions of its original source image.
   ///
   /// @see evas_object_image_scale_hint_get()
   ///
   void scale_hint_set(Evas_Image_Scale_Hint hint_) const;

   /// @brief Determine whether an object is set to source events.
   ///
   /// @return @c EINA_TRUE if source object has events, @c EINA_FALSE otherwise.
   ///
   /// @see evas_object_image_source_set()
   /// @see evas_object_image_source_visible_set()
   /// @see evas_object_image_source_events_set()
   /// @since 1.8
   ///
   bool source_events_get() const;

   /// @brief Set whether an Evas object is to source events.
   ///
   /// Set whether an Evas object is to repeat events to source.
   ///
   /// If @p source is @c EINA_TRUE, it will make events on @p obj to also be
   /// repeated for the source object (see evas_object_image_source_set()). Even the
   /// @p obj and source geometries are different, the event position will be
   /// transformed to the source object's space.
   ///
   /// If @p source is @c EINA_FALSE, events occurring on @p obj will be
   /// processed only on it.
   ///
   /// @see evas_object_image_source_get()
   /// @see evas_object_image_source_visible_set()
   /// @see evas_object_image_source_events_get()
   /// @since 1.8
   ///
   void source_events_set(bool source_) const;

   /// @brief Get the colorspace of a given image of the canvas.
   ///
   /// @return The colorspace of the image.
   ///
   /// This function returns the colorspace of given canvas image.
   ///
   Evas_Colorspace colorspace_get() const;

   /// @brief Set the colorspace of a given image of the canvas.
   ///
   /// This function sets the colorspace of given canvas image.
   ///
   void colorspace_set(Evas_Colorspace cspace_) const;

   /// @brief Set the callback function to get pixels from a canvas' image.
   ///
   /// This functions sets a function to be the callback function that get
   /// pixels from a image of the canvas.
   ///
   void pixels_get_callback_set(Evas_Object_Image_Pixels_Get_Cb func_, void * data_) const;

   /// @brief Replaces the raw image data of the given image object.
   ///
   /// This function lets the application replace an image object's
   /// internal pixel buffer with an user-allocated one. For best results,
   /// you should generally first call evas_object_image_size_set() with
   /// the width and height for the new buffer.
   ///
   /// This call is best suited for when you will be using image data with
   /// different dimensions than the existing image data, if any. If you
   /// only need to modify the existing image in some fashion, then using
   /// evas_object_image_data_get() is probably what you are after.
   ///
   /// Note that the caller is responsible for freeing the buffer when
   /// finished with it, as user-set image data will not be automatically
   /// freed when the image object is deleted.
   ///
   /// See @ref evas_object_image_data_get() for more details.
   ///
   void data_copy_set(void * data_) const;

   /// @brief Set the frame to current frame of an image object
   ///
   /// This set image object's current frame to frame_num with 1 being the first
   /// frame.
   ///
   /// @see evas_object_image_animated_get()
   /// @see evas_object_image_animated_frame_count_get()
   /// @see evas_object_image_animated_loop_type_get()
   /// @see evas_object_image_animated_loop_count_get()
   /// @see evas_object_image_animated_frame_duration_get()
   /// @see evas_object_image_animated_frame_set()
   /// @since 1.1
   ///
   void animated_frame_set(int frame_index_) const;

   /// @brief Get the support state of a given image
   ///
   /// @return The region support state
   /// @since 1.2
   ///
   /// This function returns the state of the region support of given image
   ///
   bool region_support_get() const;

   /// @brief Retrieves a number representing any error that occurred during the
   /// last loading of the given image object's source image.
   ///
   /// @return A value giving the last error that occurred. It should be
   /// one of the #Evas_Load_Error values. #EVAS_LOAD_ERROR_NONE
   /// is returned if there was no error.
   ///
   Evas_Load_Error load_error_get() const;

   /// @brief Get the total number of frames of the image object.
   ///
   /// @return The number of frames
   ///
   /// This returns total number of frames the image object supports (if animated)
   ///
   /// @see evas_object_image_animated_get()
   /// @see evas_object_image_animated_frame_count_get()
   /// @see evas_object_image_animated_loop_type_get()
   /// @see evas_object_image_animated_loop_count_get()
   /// @see evas_object_image_animated_frame_duration_get()
   /// @see evas_object_image_animated_frame_set()
   /// @since 1.1
   ///
   int animated_frame_count_get() const;

   /// @brief Retrieves the row stride of the given image object.
   ///
   /// @return The stride of the image (<b>in bytes</b>).
   ///
   /// The row stride is the number of bytes between the start of a row
   /// and the start of the next row for image data.
   ///
   int stride_get() const;

   /// @brief Get the kind of looping the image object does.
   ///
   /// @return Loop type of the image object
   ///
   /// This returns the kind of looping the image object wants to do.
   ///
   /// If it returns EVAS_IMAGE_ANIMATED_HINT_LOOP, you should display frames in a sequence like:
   /// 1->2->3->1->2->3->1...
   /// If it returns EVAS_IMAGE_ANIMATED_HINT_PINGPONG, it is better to
   /// display frames in a sequence like: 1->2->3->2->1->2->3->1...
   ///
   /// The default type is EVAS_IMAGE_ANIMATED_HINT_LOOP.
   ///
   /// @see evas_object_image_animated_get()
   /// @see evas_object_image_animated_frame_count_get()
   /// @see evas_object_image_animated_loop_type_get()
   /// @see evas_object_image_animated_loop_count_get()
   /// @see evas_object_image_animated_frame_duration_get()
   /// @see evas_object_image_animated_frame_set()
   /// @since 1.1
   ///
   Evas_Image_Animated_Loop_Hint animated_loop_type_get() const;

   /// @brief Get the number times the animation of the object loops.
   ///
   /// @return The number of loop of an animated image object
   ///
   /// This returns loop count of image. The loop count is the number of times
   /// the animation will play fully from first to last frame until the animation
   /// should stop (at the final frame).
   ///
   /// If 0 is returned, then looping should happen indefinitely (no limit to
   /// the number of times it loops).
   ///
   /// @see evas_object_image_animated_get()
   /// @see evas_object_image_animated_frame_count_get()
   /// @see evas_object_image_animated_loop_type_get()
   /// @see evas_object_image_animated_loop_count_get()
   /// @see evas_object_image_animated_frame_duration_get()
   /// @see evas_object_image_animated_frame_set()
   /// @since 1.1
   ///
   int animated_loop_count_get() const;

   /// @brief Get the 3D scene of a given image of the canvas.
   ///
   /// @return The 3d scene of the given canvas image.
   ///
   /// This function returns the 3d scene of a given canvas image.
   ///
   /// @see evas_object_image_scene_get
   /// @since 1.10
   ///
   ::evas::canvas3d::scene scene_get() const;

   /// @brief Set the 3D scene of a given image of the canvas.
   ///
   /// This function sets a 3d scene of a given canvas image.
   ///
   /// @see evas_object_image_scene_set
   /// @since 1.10
   ///
   void scene_set(::evas::canvas3d::scene scene_) const;

   /// @brief Get the image orientation.
   ///
   /// @return The image orientation @ref Evas_Image_Orient
   ///
   /// @see evas_object_image_orient_set()
   /// @see @ref Evas_Image_Orient
   ///
   /// @since 1.14
   ///
   Evas_Image_Orient orient_get() const;

   /// @brief Set the image orientation.
   ///
   /// This function allows to rotate or flip the image.
   ///
   /// @see evas_object_image_orient_get()
   /// @see @ref Evas_Image_Orient
   ///
   /// @since 1.14
   ///
   void orient_set(Evas_Image_Orient orient_) const;



   static Eo_Class const* _eo_class()
   {
      return(EVAS_IMAGE_CLASS);
   }

   operator ::evas::image() const;
   operator ::evas::image&();
   operator ::evas::image const&() const;

   /// @cond LOCAL
   template <typename D>
   struct address_of
   {
      operator ::evas::image*() const { return static_cast<::evas::image*>(static_cast<D const*>(this)->p); }
      operator ::evas::image const*() const { return static_cast<::evas::image const*>(static_cast<D const*>(this)->p); }
   };

   template <typename D>
   struct address_const_of
   {
      operator ::evas::image const*() const { return static_cast<::evas::image const*>(static_cast<D const*>(this)->p); }
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

/// @brief Class image
struct image
      : ::efl::eo::concrete
      , EO_CXX_INHERIT(efl::file)
      , EO_CXX_INHERIT(efl::gfx::base)
      , EO_CXX_INHERIT(efl::gfx::fill)
      , EO_CXX_INHERIT(efl::gfx::filter)
      , EO_CXX_INHERIT(efl::gfx::stack)
      , EO_CXX_INHERIT(efl::gfx::view)
      , EO_CXX_INHERIT(efl::image)
      , EO_CXX_INHERIT(eo::base)
      , EO_CXX_INHERIT(evas::common_interface)
      , EO_CXX_INHERIT(evas::filter)
      , EO_CXX_INHERIT(evas::object)
{
   //@{
   /**
      @brief Constructs a new evas::image object.

      Constructs a new evas::image object. If you want this object to be a child
      of another Eo object, use an @ref efl::eo::parent expression, like the example.

      Example:
      @code
      evas::image my_image(efl::eo::parent = parent_object);
      @endcode

      @see image(Eo* eo)
   */
   explicit image(::efl::eo::parent_type _p)
      : image(_ctors_call(_p))
   {}

   explicit image()
      : image(_ctors_call(::efl::eo::parent = nullptr))
   {}
   //@}

   /// @brief Eo Constructor.
   ///
   /// Constructs the object from an Eo* pointer stealing its ownership.
   ///
   /// @param eo The Eo object pointer.
   ///
   explicit image(Eo* eo)
      : ::efl::eo::concrete(eo)
   {}

   /// @brief nullptr_t Constructor.
   ///
   /// Constructs an empty (null) object.
   ///
   explicit image(std::nullptr_t)
      : ::efl::eo::concrete(nullptr)
   {}

   /// @brief Copy Constructor.
   ///
   image(image const& other)
      : image(eo_ref(other._eo_ptr()))
   {}

   ~image() {}

   /// @brief Begin preloading an image object's image data in the background
   ///
   void preload_begin() const;

   /// @brief Mark a sub-region of the given image object to be redrawn.
   ///
   /// This function schedules a particular rectangular region of an image
   /// object to be updated (redrawn) at the next rendering cycle.
   ///
   /// @param x X-offset of the region to be updated.
   /// @param y Y-offset of the region to be updated.
   /// @param w Width of the region to be updated.
   /// @param h Height of the region to be updated.
   ///
   void data_update_add(int x_, int y_, int w_, int h_) const;

   /// @brief Get the duration of a sequence of frames.
   ///
   /// This returns total duration that the specified sequence of frames should
   /// take in seconds.
   ///
   /// If you set start_frame to 1 and frame_num 0, you get frame 1's duration
   /// If you set start_frame to 1 and frame_num 1, you get frame 1's duration +
   /// frame2's duration
   ///
   /// @see evas_object_image_animated_get()
   /// @see evas_object_image_animated_frame_count_get()
   /// @see evas_object_image_animated_loop_type_get()
   /// @see evas_object_image_animated_loop_count_get()
   /// @see evas_object_image_animated_frame_duration_get()
   /// @see evas_object_image_animated_frame_set()
   /// @since 1.1
   ///
   /// @param start_frame The first frame
   /// @param frame_num Number of frames in the sequence
   ///
   double animated_frame_duration_get(int start_frame_, int frame_num_) const;

   /// @brief Sets the raw image data of the given image object.
   ///
   /// Note that the raw data must be of the same size (see
   /// evas_object_image_size_set(), which has to be called @b before this
   /// one) and colorspace (see evas_object_image_colorspace_set()) of the
   /// image. If data is @c NULL, the current image data will be
   /// freed. Naturally, if one does not set an image object's data
   /// manually, it will still have one, allocated by Evas.
   ///
   /// @see evas_object_image_data_get()
   ///
   /// @param data The raw data, or @c NULL.
   ///
   void data_set(void * data_) const;

   /// @brief Get a pointer to the raw image data of the given image object.
   ///
   /// @return The raw image data.
   ///
   /// This function returns a pointer to an image object's internal pixel
   /// buffer, for reading only or read/write. If you request it for
   /// writing, the image will be marked dirty so that it gets redrawn at
   /// the next update.
   ///
   /// Each time you call this function on an image object, its data
   /// buffer will have an internal reference counter
   /// incremented. Decrement it back by using
   /// evas_object_image_data_set().
   ///
   /// This is best suited for when you want to modify an existing image,
   /// without changing its dimensions.
   ///
   /// @note The contents' format returned by it depend on the color
   /// space of the given image object.
   ///
   /// @note You may want to use evas_object_image_data_update_add() to
   /// inform data changes, if you did any.
   ///
   /// @see evas_object_image_data_set()
   ///
   /// @param for_writing Whether the data being retrieved will be
   /// modified (@c EINA_TRUE) or not (@c EINA_FALSE).
   ///
   void * data_get(bool for_writing_) const;

   /// @brief Cancel preloading an image object's image data in the background
   ///
   void preload_cancel() const;

   /// @brief Get the DPI resolution of a loaded image object in the canvas.
   ///
   /// @return The DPI resolution of the given canvas image.
   ///
   /// This function returns the DPI resolution of the given canvas image.
   ///
   /// @see evas_object_image_load_dpi_set() for more details
   ///
   double load_dpi_get() const;

   /// @brief Set the DPI resolution of an image object's source image.
   ///
   /// This function sets the DPI resolution of a given loaded canvas
   /// image. Most useful for the SVG image loader.
   ///
   /// @see evas_object_image_load_dpi_get()
   ///
   void load_dpi_set(double dpi_) const;

   /// @brief Determine whether an object is clipped by source object's clipper.
   ///
   /// @return @c EINA_TRUE if source clip is enabled, @c EINA_FALSE otherwise.
   ///
   /// @see evas_object_clip_set()
   /// @see evas_object_image_source_set()
   /// @see evas_object_image_source_clip_set()
   /// @since 1.8
   ///
   bool source_clip_get() const;

   /// @brief Clip the proxy object with the source object's clipper.
   ///
   /// @see evas_object_clip_set()
   /// @see evas_object_image_source_set()
   /// @since 1.8
   ///
   void source_clip_set(bool source_clip_) const;

   /// @brief Get the current source object of an image object.
   ///
   /// @return Source object (if any), or @c NULL, if not in "proxy mode"
   /// (or on errors).
   ///
   /// @see evas_object_image_source_set() for more details
   ///
   ::evas::object source_get() const;

   /// @brief Set the source object on an image object to used as a @b proxy.
   ///
   /// @return @c EINA_TRUE on success, @c EINA_FALSE on error.
   ///
   /// If an image object is set to behave as a @b proxy, it will mirror
   /// the rendering contents of a given @b source object in its drawing
   /// region, without affecting that source in any way. The source must
   /// be another valid Evas object. Other effects may be applied to the
   /// proxy, such as a map (see evas_object_map_set()) to create a
   /// reflection of the original object (for example).
   ///
   /// Any existing source object on @p obj will be removed after this
   /// call. Setting @p src to @c NULL clears the proxy object (not in
   /// "proxy state" anymore).
   ///
   /// @warning You cannot set a proxy as another proxy's source.
   ///
   /// @see evas_object_image_source_get()
   /// @see evas_object_image_source_unset()
   /// @see evas_object_image_source_visible_set()
   ///
   bool source_set(::evas::object src_) const;

   /// @brief Retrieve whether the image object's fill property should track the
   /// object's size.
   ///
   /// @return @c EINA_TRUE if it is tracking, @c EINA_FALSE, if not (and
   /// evas_object_fill_set() must be called manually).
   ///
   /// @see evas_object_image_filled_set() for more information
   ///
   bool filled_get() const;

   /// @brief Set whether the image object's fill property should track the
   /// object's size.
   ///
   /// If @p setting is @c EINA_TRUE, then every evas_object_resize() will
   /// @b automatically trigger a call to evas_object_image_fill_set()
   /// with the that new size (and @c 0, @c 0 as source image's origin),
   /// so the bound image will fill the whole object's area.
   ///
   /// @see evas_object_image_filled_add()
   /// @see evas_object_image_fill_get()
   ///
   void filled_set(bool filled_) const;

   /// @brief Get the content hint setting of a given image object of the canvas.
   ///
   /// @return hint The content hint value set on it, one of the
   /// #Evas_Image_Content_Hint ones (#EVAS_IMAGE_CONTENT_HINT_NONE means
   /// an error).
   ///
   /// This function returns the content hint value of the given image of
   /// the canvas.
   ///
   /// @see evas_object_image_content_hint_set()
   ///
   Evas_Image_Content_Hint content_hint_get() const;

   /// @brief Set the content hint setting of a given image object of the canvas.
   ///
   /// This function sets the content hint value of the given image of the
   /// canvas. For example, if you're on the GL engine and your driver
   /// implementation supports it, setting this hint to
   /// #EVAS_IMAGE_CONTENT_HINT_DYNAMIC will make it need @b zero copies
   /// at texture upload time, which is an "expensive" operation.
   ///
   /// @see evas_object_image_content_hint_get()
   ///
   void content_hint_set(Evas_Image_Content_Hint hint_) const;

   /// @brief Retrieve the coordinates of a given image object's selective
   /// (source image) load region.
   ///
   /// @note Use @c NULL pointers on the coordinates you're not interested
   /// in: they'll be ignored by the function.
   ///
   /// @see evas_object_image_load_region_get()
   ///
   void load_region_get(int* x_, int* y_, int* w_, int* h_) const;

   /// @brief Inform a given image object to load a selective region of its
   /// source image.
   ///
   /// This function is useful when one is not showing all of an image's
   /// area on its image object.
   ///
   /// @note The image loader for the image format in question has to
   /// support selective region loading in order to this function to take
   /// effect.
   ///
   /// @see evas_object_image_load_region_get()
   ///
   void load_region_set(int x_, int y_, int w_, int h_) const;

   /// @brief Retrieve whether alpha channel data is being used on the given
   /// image object.
   ///
   /// @return Whether the alpha channel data is being used (@c EINA_TRUE)
   /// or not (@c EINA_FALSE).
   ///
   /// This function returns @c EINA_TRUE if the image object's alpha
   /// channel is being used, or @c EINA_FALSE otherwise.
   ///
   /// See @ref evas_object_image_alpha_set() for more details.
   ///
   bool alpha_get() const;

   /// @brief Enable or disable alpha channel usage on the given image object.
   ///
   /// This function sets a flag on an image object indicating whether or
   /// not to use alpha channel data. A value of @c EINA_TRUE makes it use
   /// alpha channel data, and @c EINA_FALSE makes it ignore that
   /// data. Note that this has nothing to do with an object's color as
   /// manipulated by evas_object_color_set().
   ///
   /// @see evas_object_image_alpha_get()
   ///
   void alpha_set(bool alpha_) const;

   /// @brief Retrieve the dimensions for an image object's border, a region
   /// which @b won't ever be scaled together with its center.
   ///
   /// @note Use @c NULL pointers on the border components you're not
   /// interested in: they'll be ignored by the function.
   ///
   /// See @ref evas_object_image_border_set() for more details.
   ///
   void border_get(int* l_, int* r_, int* t_, int* b_) const;

   /// @brief Set the dimensions for an image object's border, a region which @b
   /// won't ever be scaled together with its center.
   ///
   /// When Evas is rendering, an image source may be scaled to fit the
   /// size of its image object. This function sets an area from the
   /// borders of the image inwards which is @b not to be scaled. This
   /// function is useful for making frames and for widget theming, where,
   /// for example, buttons may be of varying sizes, but their border size
   /// must remain constant.
   ///
   /// The units used for @p l, @p r, @p t and @p b are canvas units.
   ///
   /// @note The border region itself @b may be scaled by the
   /// evas_object_image_border_scale_set() function.
   ///
   /// @note By default, image objects have no borders set, i. e. @c l, @c
   /// r, @c t and @c b start as @c 0.
   ///
   /// See the following figures for visual explanation:\n
   /// @htmlonly
   /// <img src="image-borders.png" style="max-width: 100%;" />
   /// <a href="image-borders.png">Full-size</a>
   /// @endhtmlonly
   /// @image rtf image-borders.png
   /// @image latex image-borders.eps width=\textwidth
   /// @htmlonly
   /// <img src="border-effect.png" style="max-width: 100%;" />
   /// <a href="border-effect.png">Full-size</a>
   /// @endhtmlonly
   /// @image rtf border-effect.png
   /// @image latex border-effect.eps width=\textwidth
   ///
   /// @see evas_object_image_border_get()
   /// @see evas_object_image_border_center_fill_set()
   ///
   void border_set(int l_, int r_, int t_, int b_) const;

   /// @brief Retrieves the scaling factor (multiplier) for the borders of an
   /// image object.
   ///
   /// @return The scale factor set for its borders
   ///
   /// @see evas_object_image_border_set()
   /// @see evas_object_image_border_scale_set()
   ///
   double border_scale_get() const;

   /// @brief Sets the scaling factor (multiplier) for the borders of an image
   /// object.
   ///
   /// @see evas_object_image_border_set()
   /// @see evas_object_image_border_scale_get()
   ///
   void border_scale_set(double scale_) const;

   /// @brief Retrieves whether the given image object is dirty (needs to be redrawn).
   ///
   /// @return Whether the image is dirty.
   ///
   bool pixels_dirty_get() const;

   /// @brief Mark whether the given image object is dirty and needs to request its pixels.
   ///
   /// This function will only properly work if a pixels get callback has been set.
   ///
   /// @warning use this function if you really know what you are doing.
   ///
   /// @see evas_object_image_pixels_get_callback_set()
   ///
   void pixels_dirty_set(bool dirty_) const;

   /// @brief Get the video surface linekd to a given image of the canvas
   ///
   /// @return The video surface of the given canvas image.
   /// @since 1.1
   ///
   /// This function returns the video surface linked to a given canvas image.
   ///
   const Evas_Video_Surface * video_surface_get() const;

   /// @brief Set the video surface linked to a given image of the canvas
   ///
   /// This function links a video surface to a given canvas image.
   ///
   void video_surface_set(Evas_Video_Surface * surf_) const;

   /// @brief Get the video surface capabilities to a given image of the canvas
   ///
   unsigned int video_surface_caps_get() const;

   /// @brief Set the video surface capabilities to a given image of the canvas
   ///
   void video_surface_caps_set(unsigned int caps_) const;

   /// @brief Get if the orientation information in the image file should be honored.
   ///
   /// @since 1.1
   ///
   bool load_orientation_get() const;

   /// @brief Define if the orientation information in the image file should be honored.
   ///
   /// @since 1.1
   ///
   void load_orientation_set(bool enable_) const;

   /// @brief Retrieves @b how the center part of the given image object (not the
   /// borders) is to be drawn when Evas is rendering it.
   ///
   /// @return fill Fill mode of the center region of @p obj (a value in
   /// #Evas_Border_Fill_Mode).
   ///
   /// See @ref evas_object_image_fill_set() for more details.
   ///
   Evas_Border_Fill_Mode border_center_fill_get() const;

   /// @brief Sets @b how the center part of the given image object (not the
   /// borders) should be drawn when Evas is rendering it.
   ///
   /// This function sets how the center part of the image object's source
   /// image is to be drawn, which must be one of the values in
   /// #Evas_Border_Fill_Mode. By center we mean the complementary part of
   /// that defined by evas_object_image_border_set(). This one is very
   /// useful for making frames and decorations. You would most probably
   /// also be using a filled image (as in evas_object_image_filled_set())
   /// to use as a frame.
   ///
   /// @see evas_object_image_border_center_fill_get()
   ///
   void border_center_fill_set(Evas_Border_Fill_Mode fill_) const;

   /// @brief Get the state of the source object visibility.
   ///
   /// @return @c EINA_TRUE if source object is visible, @c EINA_FALSE otherwise.
   ///
   /// @see evas_object_image_source_visible_set()
   /// @see evas_object_image_source_set()
   /// @see evas_object_show()
   /// @see evas_object_hide()
   /// @since 1.8
   ///
   bool source_visible_get() const;

   /// @brief Set the source object to be visible or not.
   ///
   /// If the @p visible set to @c EINA_FALSE, the source object of the proxy(@p obj
   /// ) will be invisible.
   ///
   /// This API works differently to evas_object_show() and evas_object_hide().
   /// Once source object is hidden by evas_object_hide() then the proxy object will
   /// be hidden as well. Actually in this case both objects are excluded from the
   /// Evas internal update circle.
   ///
   /// By this API, instead, one can toggle the visibility of a proxy's source
   /// object remaining the proxy visibility untouched.
   ///
   /// @warning If the all of proxies are deleted, then the source visibility of the
   /// source object will be cancelled.
   ///
   /// @see evas_object_image_source_visible_get()
   /// @see evas_object_image_source_set()
   /// @see evas_object_show()
   /// @see evas_object_hide()
   /// @since 1.8
   ///
   void source_visible_set(bool visible_) const;

   /// @brief Get the native surface of a given image of the canvas
   ///
   /// @return The native surface of the given canvas image.
   ///
   /// This function returns the native surface of a given canvas image.
   ///
   Evas_Native_Surface * native_surface_get() const;

   /// @brief Set the native surface of a given image of the canvas
   ///
   /// This function sets a native surface of a given canvas image.
   ///
   void native_surface_set(Evas_Native_Surface * surf_) const;

   /// @brief get the scale down factor of a given image object's source image,
   /// when loading it.
   ///
   /// @see evas_object_image_load_scale_down_set() for more details
   ///
   int load_scale_down_get() const;

   /// @brief Set the scale down factor of a given image object's source image,
   /// when loading it.
   ///
   /// This function sets the scale down factor of a given canvas
   /// image. Most useful for the SVG image loader.
   ///
   /// @see evas_object_image_load_scale_down_get()
   ///
   void load_scale_down_set(int scale_down_) const;

   /// @brief Get the scale hint of a given image of the canvas.
   ///
   /// @return The scale hint value set on @p obj, a value in
   /// #Evas_Image_Scale_Hint.
   ///
   /// This function returns the scale hint value of the given image
   /// object of the canvas.
   ///
   /// @see evas_object_image_scale_hint_set() for more details.
   ///
   Evas_Image_Scale_Hint scale_hint_get() const;

   /// @brief Set the scale hint of a given image of the canvas.
   ///
   /// This function sets the scale hint value of the given image object
   /// in the canvas, which will affect how Evas is to cache scaled
   /// versions of its original source image.
   ///
   /// @see evas_object_image_scale_hint_get()
   ///
   void scale_hint_set(Evas_Image_Scale_Hint hint_) const;

   /// @brief Determine whether an object is set to source events.
   ///
   /// @return @c EINA_TRUE if source object has events, @c EINA_FALSE otherwise.
   ///
   /// @see evas_object_image_source_set()
   /// @see evas_object_image_source_visible_set()
   /// @see evas_object_image_source_events_set()
   /// @since 1.8
   ///
   bool source_events_get() const;

   /// @brief Set whether an Evas object is to source events.
   ///
   /// Set whether an Evas object is to repeat events to source.
   ///
   /// If @p source is @c EINA_TRUE, it will make events on @p obj to also be
   /// repeated for the source object (see evas_object_image_source_set()). Even the
   /// @p obj and source geometries are different, the event position will be
   /// transformed to the source object's space.
   ///
   /// If @p source is @c EINA_FALSE, events occurring on @p obj will be
   /// processed only on it.
   ///
   /// @see evas_object_image_source_get()
   /// @see evas_object_image_source_visible_set()
   /// @see evas_object_image_source_events_get()
   /// @since 1.8
   ///
   void source_events_set(bool source_) const;

   /// @brief Get the colorspace of a given image of the canvas.
   ///
   /// @return The colorspace of the image.
   ///
   /// This function returns the colorspace of given canvas image.
   ///
   Evas_Colorspace colorspace_get() const;

   /// @brief Set the colorspace of a given image of the canvas.
   ///
   /// This function sets the colorspace of given canvas image.
   ///
   void colorspace_set(Evas_Colorspace cspace_) const;

   /// @brief Set the callback function to get pixels from a canvas' image.
   ///
   /// This functions sets a function to be the callback function that get
   /// pixels from a image of the canvas.
   ///
   void pixels_get_callback_set(Evas_Object_Image_Pixels_Get_Cb func_, void * data_) const;

   /// @brief Replaces the raw image data of the given image object.
   ///
   /// This function lets the application replace an image object's
   /// internal pixel buffer with an user-allocated one. For best results,
   /// you should generally first call evas_object_image_size_set() with
   /// the width and height for the new buffer.
   ///
   /// This call is best suited for when you will be using image data with
   /// different dimensions than the existing image data, if any. If you
   /// only need to modify the existing image in some fashion, then using
   /// evas_object_image_data_get() is probably what you are after.
   ///
   /// Note that the caller is responsible for freeing the buffer when
   /// finished with it, as user-set image data will not be automatically
   /// freed when the image object is deleted.
   ///
   /// See @ref evas_object_image_data_get() for more details.
   ///
   void data_copy_set(void * data_) const;

   /// @brief Set the frame to current frame of an image object
   ///
   /// This set image object's current frame to frame_num with 1 being the first
   /// frame.
   ///
   /// @see evas_object_image_animated_get()
   /// @see evas_object_image_animated_frame_count_get()
   /// @see evas_object_image_animated_loop_type_get()
   /// @see evas_object_image_animated_loop_count_get()
   /// @see evas_object_image_animated_frame_duration_get()
   /// @see evas_object_image_animated_frame_set()
   /// @since 1.1
   ///
   void animated_frame_set(int frame_index_) const;

   /// @brief Get the support state of a given image
   ///
   /// @return The region support state
   /// @since 1.2
   ///
   /// This function returns the state of the region support of given image
   ///
   bool region_support_get() const;

   /// @brief Retrieves a number representing any error that occurred during the
   /// last loading of the given image object's source image.
   ///
   /// @return A value giving the last error that occurred. It should be
   /// one of the #Evas_Load_Error values. #EVAS_LOAD_ERROR_NONE
   /// is returned if there was no error.
   ///
   Evas_Load_Error load_error_get() const;

   /// @brief Get the total number of frames of the image object.
   ///
   /// @return The number of frames
   ///
   /// This returns total number of frames the image object supports (if animated)
   ///
   /// @see evas_object_image_animated_get()
   /// @see evas_object_image_animated_frame_count_get()
   /// @see evas_object_image_animated_loop_type_get()
   /// @see evas_object_image_animated_loop_count_get()
   /// @see evas_object_image_animated_frame_duration_get()
   /// @see evas_object_image_animated_frame_set()
   /// @since 1.1
   ///
   int animated_frame_count_get() const;

   /// @brief Retrieves the row stride of the given image object.
   ///
   /// @return The stride of the image (<b>in bytes</b>).
   ///
   /// The row stride is the number of bytes between the start of a row
   /// and the start of the next row for image data.
   ///
   int stride_get() const;

   /// @brief Get the kind of looping the image object does.
   ///
   /// @return Loop type of the image object
   ///
   /// This returns the kind of looping the image object wants to do.
   ///
   /// If it returns EVAS_IMAGE_ANIMATED_HINT_LOOP, you should display frames in a sequence like:
   /// 1->2->3->1->2->3->1...
   /// If it returns EVAS_IMAGE_ANIMATED_HINT_PINGPONG, it is better to
   /// display frames in a sequence like: 1->2->3->2->1->2->3->1...
   ///
   /// The default type is EVAS_IMAGE_ANIMATED_HINT_LOOP.
   ///
   /// @see evas_object_image_animated_get()
   /// @see evas_object_image_animated_frame_count_get()
   /// @see evas_object_image_animated_loop_type_get()
   /// @see evas_object_image_animated_loop_count_get()
   /// @see evas_object_image_animated_frame_duration_get()
   /// @see evas_object_image_animated_frame_set()
   /// @since 1.1
   ///
   Evas_Image_Animated_Loop_Hint animated_loop_type_get() const;

   /// @brief Get the number times the animation of the object loops.
   ///
   /// @return The number of loop of an animated image object
   ///
   /// This returns loop count of image. The loop count is the number of times
   /// the animation will play fully from first to last frame until the animation
   /// should stop (at the final frame).
   ///
   /// If 0 is returned, then looping should happen indefinitely (no limit to
   /// the number of times it loops).
   ///
   /// @see evas_object_image_animated_get()
   /// @see evas_object_image_animated_frame_count_get()
   /// @see evas_object_image_animated_loop_type_get()
   /// @see evas_object_image_animated_loop_count_get()
   /// @see evas_object_image_animated_frame_duration_get()
   /// @see evas_object_image_animated_frame_set()
   /// @since 1.1
   ///
   int animated_loop_count_get() const;

   /// @brief Get the 3D scene of a given image of the canvas.
   ///
   /// @return The 3d scene of the given canvas image.
   ///
   /// This function returns the 3d scene of a given canvas image.
   ///
   /// @see evas_object_image_scene_get
   /// @since 1.10
   ///
   ::evas::canvas3d::scene scene_get() const;

   /// @brief Set the 3D scene of a given image of the canvas.
   ///
   /// This function sets a 3d scene of a given canvas image.
   ///
   /// @see evas_object_image_scene_set
   /// @since 1.10
   ///
   void scene_set(::evas::canvas3d::scene scene_) const;

   /// @brief Get the image orientation.
   ///
   /// @return The image orientation @ref Evas_Image_Orient
   ///
   /// @see evas_object_image_orient_set()
   /// @see @ref Evas_Image_Orient
   ///
   /// @since 1.14
   ///
   Evas_Image_Orient orient_get() const;

   /// @brief Set the image orientation.
   ///
   /// This function allows to rotate or flip the image.
   ///
   /// @see evas_object_image_orient_get()
   /// @see @ref Evas_Image_Orient
   ///
   /// @since 1.14
   ///
   void orient_set(Evas_Image_Orient orient_) const;

   template <typename F>
   ::efl::eo::signal_connection
   callback_async_error_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EFL_FILE_EVENT_ASYNC_ERROR, priority_,
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
         EFL_FILE_EVENT_ASYNC_ERROR );
   }

   template <typename T>
   void
   callback_async_error_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_FILE_EVENT_ASYNC_ERROR, info));
   }

   template <typename F>
   ::efl::eo::signal_connection
   callback_async_opened_add(F && callback_,
                        ::efl::eo::callback_priority priority_ =
                        ::efl::eo::callback_priorities::default_)
   {
      typedef typename std::remove_reference<F>::type function_type;
      ::std::unique_ptr<function_type> f ( new function_type(std::forward<F>(callback_)) );
      eo_do(_concrete_eo_ptr(),
            eo_event_callback_priority_add
            (EFL_FILE_EVENT_ASYNC_OPENED, priority_,
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
         EFL_FILE_EVENT_ASYNC_OPENED );
   }

   template <typename T>
   void
   callback_async_opened_call(T* info)
   {
      eo_do(_concrete_eo_ptr(), eo_event_callback_call
            (EFL_FILE_EVENT_ASYNC_OPENED, info));
   }

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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
            &::efl::eo::_detail::event_callback<::evas::image, function_type>, f.get()));
      return ::efl::eo::make_signal_connection
         (f, _concrete_eo_ptr(), &::efl::eo::_detail::event_callback<::evas::image, function_type>,
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
      return(EVAS_IMAGE_CLASS);
   }

   /// @cond LOCAL
   struct address_of
      : ::eo_cxx::evas::image::address_of<address_of>
      , ::eo_cxx::efl::file::address_of<address_of>
      , ::eo_cxx::efl::gfx::base::address_of<address_of>
      , ::eo_cxx::efl::gfx::fill::address_of<address_of>
      , ::eo_cxx::efl::gfx::filter::address_of<address_of>
      , ::eo_cxx::efl::gfx::stack::address_of<address_of>
      , ::eo_cxx::efl::gfx::view::address_of<address_of>
      , ::eo_cxx::efl::image::address_of<address_of>
      , ::eo_cxx::eo::base::address_of<address_of>
      , ::eo_cxx::evas::common_interface::address_of<address_of>
      , ::eo_cxx::evas::filter::address_of<address_of>
      , ::eo_cxx::evas::object::address_of<address_of>
      , ::efl::eo::detail::concrete_address_of
   {
      explicit address_of(::evas::image* p)
         : ::efl::eo::detail::concrete_address_of(p)
      {}
   };
   address_of operator&() { return address_of(this); }

   struct address_const_of
      : ::eo_cxx::evas::image::address_const_of<address_const_of>
      , ::eo_cxx::efl::file::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::base::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::fill::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::filter::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::stack::address_const_of<address_const_of>
      , ::eo_cxx::efl::gfx::view::address_const_of<address_const_of>
      , ::eo_cxx::efl::image::address_const_of<address_const_of>
      , ::eo_cxx::eo::base::address_const_of<address_const_of>
      , ::eo_cxx::evas::common_interface::address_const_of<address_const_of>
      , ::eo_cxx::evas::filter::address_const_of<address_const_of>
      , ::eo_cxx::evas::object::address_const_of<address_const_of>
      , ::efl::eo::detail::concrete_address_const_of
   {
      explicit address_const_of(::evas::image const* p)
         : ::efl::eo::detail::concrete_address_const_of(p)
      {}
   };
   address_const_of operator&() const { return address_const_of(this); }

   /// @endcond

private:

   /// @internal
   static Eo* _ctors_call(::efl::eo::parent_type _p)
   {
      Eo* _ret_eo = eo_add_ref(EVAS_IMAGE_CLASS, _p._eo_raw);

      return _ret_eo;
   }

   /// @internal
   Eo* _concrete_eo_ptr() const { return _eo_ptr(); }
};

static_assert(sizeof(::evas::image) == sizeof(Eo*), "");
static_assert(std::is_standard_layout<::evas::image>::value, "");

}


#include "evas_image.eo.impl.hh"

#endif // EFL_GENERATED_EVAS_IMAGE_HH


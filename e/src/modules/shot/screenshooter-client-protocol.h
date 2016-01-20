#ifndef SCREENSHOOTER_CLIENT_PROTOCOL_H
#define SCREENSHOOTER_CLIENT_PROTOCOL_H

#ifdef  __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

struct wl_client;
struct wl_resource;

struct screenshooter;
struct wl_buffer;
struct wl_output;

extern const struct wl_interface screenshooter_interface;

struct screenshooter_listener {
	/**
	 * done - (none)
	 */
	void (*done)(void *data,
		     struct screenshooter *screenshooter);
};

static inline int
screenshooter_add_listener(struct screenshooter *screenshooter,
			   const struct screenshooter_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) screenshooter,
				     (void (**)(void)) listener, data);
}

#define SCREENSHOOTER_SHOOT	0

static inline void
screenshooter_set_user_data(struct screenshooter *screenshooter, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) screenshooter, user_data);
}

static inline void *
screenshooter_get_user_data(struct screenshooter *screenshooter)
{
	return wl_proxy_get_user_data((struct wl_proxy *) screenshooter);
}

static inline void
screenshooter_destroy(struct screenshooter *screenshooter)
{
	wl_proxy_destroy((struct wl_proxy *) screenshooter);
}

static inline void
screenshooter_shoot(struct screenshooter *screenshooter, struct wl_output *output, struct wl_buffer *buffer)
{
	wl_proxy_marshal((struct wl_proxy *) screenshooter,
			 SCREENSHOOTER_SHOOT, output, buffer);
}

#ifdef  __cplusplus
}
#endif

#endif

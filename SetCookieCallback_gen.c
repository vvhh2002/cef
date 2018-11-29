#include "SetCookieCallback_gen.h"
#include "_cgo_export.h"

void gocef_set_set_cookie_callback_proxy(cef_set_cookie_callback_t *self) {
	// Casts to (void *) added to avoid warnings since Go callbacks can't have
	// some modifiers, such as 'const' applied to their parameter signatures.
	self->on_complete = (void *)&gocef_set_cookie_callback_on_complete;
}

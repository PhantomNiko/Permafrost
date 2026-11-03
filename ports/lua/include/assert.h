/* Permafrost Lua host interface; Pooka's Free Software License. */
#pragma once
void abort(void) __attribute__((noreturn));
#ifdef NDEBUG
#define assert(expression) ((void)0)
#else
#define assert(expression) ((expression) ? (void)0 : abort())
#endif

#ifndef WINTER_HEADER_ASSERT_H
#define WINTER_HEADER_ASSERT_H

#ifdef assert
#undef assert
#endif

#ifdef NDEBUG
#define assert(expression) ((void)0)
#else
#define assert(expression) ((expression) ? (void)0 : __builtin_trap())
#endif

#endif

#ifndef WINTER_STDDEF_H
#define WINTER_STDDEF_H

#ifndef WINTER_SIZE_T_DEFINED
typedef __SIZE_TYPE__ size_t;
#define WINTER_SIZE_T_DEFINED
#endif

#ifndef WINTER_PTRDIFF_T_DEFINED
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#define WINTER_PTRDIFF_T_DEFINED
#endif

#ifndef __cplusplus
#ifndef WINTER_WCHAR_T_DEFINED
typedef __WCHAR_TYPE__ wchar_t;
#define WINTER_WCHAR_T_DEFINED
#endif
#endif

#ifndef WINTER_MAX_ALIGN_T_DEFINED
typedef struct {
	long long __winter_ll;
	long double __winter_ld;
} max_align_t;
#define WINTER_MAX_ALIGN_T_DEFINED
#endif

#ifndef NULL
#ifdef __cplusplus
#define NULL nullptr
#else
#define NULL ((void*)0)
#endif
#endif

#ifndef offsetof
#define offsetof(type, member) __builtin_offsetof(type, member)
#endif

#ifdef __cplusplus
namespace std {
using ::ptrdiff_t;
using ::size_t;
using ::max_align_t;
using nullptr_t = decltype(nullptr);
}
#endif

#endif

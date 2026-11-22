#ifndef WINTER_STDINT_H
#define WINTER_STDINT_H

typedef __INT8_TYPE__ int8_t;
typedef __UINT8_TYPE__ uint8_t;
typedef __INT16_TYPE__ int16_t;
typedef __UINT16_TYPE__ uint16_t;
typedef __INT32_TYPE__ int32_t;
typedef __UINT32_TYPE__ uint32_t;
typedef __INT64_TYPE__ int64_t;
typedef __UINT64_TYPE__ uint64_t;
typedef __INTPTR_TYPE__ intptr_t;
typedef __UINTPTR_TYPE__ uintptr_t;

#ifndef WINTER_PTRDIFF_T_DEFINED
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#define WINTER_PTRDIFF_T_DEFINED
#endif

#ifndef WINTER_SIZE_T_DEFINED
typedef __SIZE_TYPE__ size_t;
#define WINTER_SIZE_T_DEFINED
#endif

typedef __INT_LEAST8_TYPE__ int_least8_t;
typedef __UINT_LEAST8_TYPE__ uint_least8_t;
typedef __INT_LEAST16_TYPE__ int_least16_t;
typedef __UINT_LEAST16_TYPE__ uint_least16_t;
typedef __INT_LEAST32_TYPE__ int_least32_t;
typedef __UINT_LEAST32_TYPE__ uint_least32_t;
typedef __INT_LEAST64_TYPE__ int_least64_t;
typedef __UINT_LEAST64_TYPE__ uint_least64_t;

typedef __INT_FAST8_TYPE__ int_fast8_t;
typedef __UINT_FAST8_TYPE__ uint_fast8_t;
typedef __INT_FAST16_TYPE__ int_fast16_t;
typedef __UINT_FAST16_TYPE__ uint_fast16_t;
typedef __INT_FAST32_TYPE__ int_fast32_t;
typedef __UINT_FAST32_TYPE__ uint_fast32_t;
typedef __INT_FAST64_TYPE__ int_fast64_t;
typedef __UINT_FAST64_TYPE__ uint_fast64_t;

typedef __INTMAX_TYPE__ intmax_t;
typedef __UINTMAX_TYPE__ uintmax_t;

#define INT8_MIN (-128)
#define INT8_MAX 127
#define UINT8_MAX 255u
#define INT16_MIN (-32767 - 1)
#define INT16_MAX 32767
#define UINT16_MAX 65535u
#define INT32_MIN (-2147483647 - 1)
#define INT32_MAX 2147483647
#define UINT32_MAX 4294967295u
#define INT64_MIN (-__INT64_MAX__ - 1)
#define INT64_MAX __INT64_MAX__
#define UINT64_MAX __UINT64_MAX__

#define INT_LEAST8_MIN INT8_MIN
#define INT_LEAST8_MAX INT8_MAX
#define UINT_LEAST8_MAX UINT8_MAX
#define INT_LEAST16_MIN INT16_MIN
#define INT_LEAST16_MAX INT16_MAX
#define UINT_LEAST16_MAX UINT16_MAX
#define INT_LEAST32_MIN INT32_MIN
#define INT_LEAST32_MAX INT32_MAX
#define UINT_LEAST32_MAX UINT32_MAX
#define INT_LEAST64_MIN INT64_MIN
#define INT_LEAST64_MAX INT64_MAX
#define UINT_LEAST64_MAX UINT64_MAX

#define INT_FAST8_MIN (-__INT_FAST8_MAX__ - 1)
#define INT_FAST8_MAX __INT_FAST8_MAX__
#define UINT_FAST8_MAX __UINT_FAST8_MAX__
#define INT_FAST16_MIN (-__INT_FAST16_MAX__ - 1)
#define INT_FAST16_MAX __INT_FAST16_MAX__
#define UINT_FAST16_MAX __UINT_FAST16_MAX__
#define INT_FAST32_MIN (-__INT_FAST32_MAX__ - 1)
#define INT_FAST32_MAX __INT_FAST32_MAX__
#define UINT_FAST32_MAX __UINT_FAST32_MAX__
#define INT_FAST64_MIN (-__INT_FAST64_MAX__ - 1)
#define INT_FAST64_MAX __INT_FAST64_MAX__
#define UINT_FAST64_MAX __UINT_FAST64_MAX__

#define INTPTR_MIN (-__INTPTR_MAX__ - 1)
#define INTPTR_MAX __INTPTR_MAX__
#define UINTPTR_MAX __UINTPTR_MAX__
#define INTMAX_MIN (-__INTMAX_MAX__ - 1)
#define INTMAX_MAX __INTMAX_MAX__
#define UINTMAX_MAX __UINTMAX_MAX__
#define PTRDIFF_MIN (-__PTRDIFF_MAX__ - 1)
#define PTRDIFF_MAX __PTRDIFF_MAX__
#define SIZE_MAX __SIZE_MAX__

#ifndef WCHAR_MIN
#ifdef __WCHAR_UNSIGNED__
#define WCHAR_MIN 0
#else
#define WCHAR_MIN (-__WCHAR_MAX__ - 1)
#endif
#endif
#ifndef WCHAR_MAX
#define WCHAR_MAX __WCHAR_MAX__
#endif

#ifndef WINT_MIN
#define WINT_MIN (-__WINT_MAX__ - 1)
#endif
#ifndef WINT_MAX
#define WINT_MAX __WINT_MAX__
#endif

#define __WINTER_INT_C_JOIN(value, suffix) value ## suffix
#define __WINTER_INT_C(value, suffix) __WINTER_INT_C_JOIN(value, suffix)
#define INT8_C(value) __WINTER_INT_C(value, __INT8_C_SUFFIX__)
#define UINT8_C(value) __WINTER_INT_C(value, __UINT8_C_SUFFIX__)
#define INT16_C(value) __WINTER_INT_C(value, __INT16_C_SUFFIX__)
#define UINT16_C(value) __WINTER_INT_C(value, __UINT16_C_SUFFIX__)
#define INT32_C(value) __WINTER_INT_C(value, __INT32_C_SUFFIX__)
#define UINT32_C(value) __WINTER_INT_C(value, __UINT32_C_SUFFIX__)
#define INT64_C(value) __WINTER_INT_C(value, __INT64_C_SUFFIX__)
#define UINT64_C(value) __WINTER_INT_C(value, __UINT64_C_SUFFIX__)
#define INTMAX_C(value) __WINTER_INT_C(value, __INTMAX_C_SUFFIX__)
#define UINTMAX_C(value) __WINTER_INT_C(value, __UINTMAX_C_SUFFIX__)

#ifdef __cplusplus
namespace std {
using ::int8_t;
using ::uint8_t;
using ::int16_t;
using ::uint16_t;
using ::int32_t;
using ::uint32_t;
using ::int64_t;
using ::uint64_t;
using ::intptr_t;
using ::uintptr_t;
using ::ptrdiff_t;
using ::size_t;
using ::int_least8_t;
using ::uint_least8_t;
using ::int_least16_t;
using ::uint_least16_t;
using ::int_least32_t;
using ::uint_least32_t;
using ::int_least64_t;
using ::uint_least64_t;
using ::int_fast8_t;
using ::uint_fast8_t;
using ::int_fast16_t;
using ::uint_fast16_t;
using ::int_fast32_t;
using ::uint_fast32_t;
using ::int_fast64_t;
using ::uint_fast64_t;
using ::intmax_t;
using ::uintmax_t;
}
#endif

#endif

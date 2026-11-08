#ifndef WINTER_COMPILER_H
#define WINTER_COMPILER_H

#ifndef __CHAR_BIT__
#define __CHAR_BIT__ 8
#endif

#ifndef __SCHAR_MAX__
#define __SCHAR_MAX__ 127
#endif

#ifndef __SHRT_MAX__
#define __SHRT_MAX__ 32767
#endif

#ifndef __INT_MAX__
#define __INT_MAX__ 2147483647
#endif

#ifndef __LONG_LONG_MAX__
#define __LONG_LONG_MAX__ 9223372036854775807LL
#endif

#ifndef __INT8_TYPE__
#define __INT8_TYPE__ signed char
#endif

#ifndef __UINT8_TYPE__
#define __UINT8_TYPE__ unsigned char
#endif

#ifndef __INT16_TYPE__
#define __INT16_TYPE__ short
#endif

#ifndef __UINT16_TYPE__
#define __UINT16_TYPE__ unsigned short
#endif

#ifndef __INT32_TYPE__
#define __INT32_TYPE__ int
#endif

#ifndef __UINT32_TYPE__
#define __UINT32_TYPE__ unsigned int
#endif

#ifndef __INT64_TYPE__
#define __INT64_TYPE__ long long
#endif

#ifndef __UINT64_TYPE__
#define __UINT64_TYPE__ unsigned long long
#endif

#ifndef __SIZE_TYPE__
#define __SIZE_TYPE__ unsigned long
#endif

#ifndef __PTRDIFF_TYPE__
#define __PTRDIFF_TYPE__ long
#endif

#ifndef __WCHAR_TYPE__
#define __WCHAR_TYPE__ int
#endif

#ifndef __WINT_TYPE__
#define __WINT_TYPE__ int
#endif

#ifndef __LONG_MAX__
#if defined(__LP64__) || defined(_LP64)
#define __LONG_MAX__ 9223372036854775807L
#else
#define __LONG_MAX__ 2147483647L
#endif
#endif

#ifndef __INTPTR_TYPE__
#if defined(_WIN64)
#define __INTPTR_TYPE__ long long
#else
#define __INTPTR_TYPE__ long
#endif
#endif

#ifndef __UINTPTR_TYPE__
#if defined(_WIN64)
#define __UINTPTR_TYPE__ unsigned long long
#else
#define __UINTPTR_TYPE__ unsigned long
#endif
#endif

#ifndef __INTMAX_TYPE__
#if defined(__LP64__) || defined(_LP64)
#define __INTMAX_TYPE__ long
#else
#define __INTMAX_TYPE__ long long
#endif
#endif

#ifndef __UINTMAX_TYPE__
#if defined(__LP64__) || defined(_LP64)
#define __UINTMAX_TYPE__ unsigned long
#else
#define __UINTMAX_TYPE__ unsigned long long
#endif
#endif

#ifndef __INT_LEAST8_TYPE__
#define __INT_LEAST8_TYPE__ __INT8_TYPE__
#endif

#ifndef __UINT_LEAST8_TYPE__
#define __UINT_LEAST8_TYPE__ __UINT8_TYPE__
#endif

#ifndef __INT_LEAST16_TYPE__
#define __INT_LEAST16_TYPE__ __INT16_TYPE__
#endif

#ifndef __UINT_LEAST16_TYPE__
#define __UINT_LEAST16_TYPE__ __UINT16_TYPE__
#endif

#ifndef __INT_LEAST32_TYPE__
#define __INT_LEAST32_TYPE__ __INT32_TYPE__
#endif

#ifndef __UINT_LEAST32_TYPE__
#define __UINT_LEAST32_TYPE__ __UINT32_TYPE__
#endif

#ifndef __INT_LEAST64_TYPE__
#define __INT_LEAST64_TYPE__ __INT64_TYPE__
#endif

#ifndef __UINT_LEAST64_TYPE__
#define __UINT_LEAST64_TYPE__ __UINT64_TYPE__
#endif

#ifndef __INT_FAST8_TYPE__
#define __INT_FAST8_TYPE__ int
#endif

#ifndef __UINT_FAST8_TYPE__
#define __UINT_FAST8_TYPE__ unsigned int
#endif

#ifndef __INT_FAST16_TYPE__
#define __INT_FAST16_TYPE__ int
#endif

#ifndef __UINT_FAST16_TYPE__
#define __UINT_FAST16_TYPE__ unsigned int
#endif

#ifndef __INT_FAST32_TYPE__
#define __INT_FAST32_TYPE__ int
#endif

#ifndef __UINT_FAST32_TYPE__
#define __UINT_FAST32_TYPE__ unsigned int
#endif

#ifndef __INT_FAST64_TYPE__
#define __INT_FAST64_TYPE__ __INT64_TYPE__
#endif

#ifndef __UINT_FAST64_TYPE__
#define __UINT_FAST64_TYPE__ __UINT64_TYPE__
#endif

#ifndef __INT8_MAX__
#define __INT8_MAX__ 127
#endif

#ifndef __UINT8_MAX__
#define __UINT8_MAX__ 255U
#endif

#ifndef __INT16_MAX__
#define __INT16_MAX__ 32767
#endif

#ifndef __UINT16_MAX__
#define __UINT16_MAX__ 65535U
#endif

#ifndef __INT32_MAX__
#define __INT32_MAX__ 2147483647
#endif

#ifndef __UINT32_MAX__
#define __UINT32_MAX__ 4294967295U
#endif

#ifndef __INT64_MAX__
#define __INT64_MAX__ 9223372036854775807LL
#endif

#ifndef __UINT64_MAX__
#define __UINT64_MAX__ 18446744073709551615ULL
#endif

#ifndef __INT_FAST8_MAX__
#define __INT_FAST8_MAX__ __INT_MAX__
#endif

#ifndef __UINT_FAST8_MAX__
#define __UINT_FAST8_MAX__ (__INT_MAX__ * 2U + 1U)
#endif

#ifndef __INT_FAST16_MAX__
#define __INT_FAST16_MAX__ __INT_MAX__
#endif

#ifndef __UINT_FAST16_MAX__
#define __UINT_FAST16_MAX__ (__INT_MAX__ * 2U + 1U)
#endif

#ifndef __INT_FAST32_MAX__
#define __INT_FAST32_MAX__ __INT_MAX__
#endif

#ifndef __UINT_FAST32_MAX__
#define __UINT_FAST32_MAX__ (__INT_MAX__ * 2U + 1U)
#endif

#ifndef __INT_FAST64_MAX__
#define __INT_FAST64_MAX__ __INT64_MAX__
#endif

#ifndef __UINT_FAST64_MAX__
#define __UINT_FAST64_MAX__ __UINT64_MAX__
#endif

#ifndef __INTPTR_MAX__
#if defined(_WIN64)
#define __INTPTR_MAX__ __LONG_LONG_MAX__
#else
#define __INTPTR_MAX__ __LONG_MAX__
#endif
#endif

#ifndef __UINTPTR_MAX__
#if defined(_WIN64)
#define __UINTPTR_MAX__ (__LONG_LONG_MAX__ * 2ULL + 1ULL)
#else
#define __UINTPTR_MAX__ (__LONG_MAX__ * 2UL + 1UL)
#endif
#endif

#ifndef __INTMAX_MAX__
#if defined(__LP64__) || defined(_LP64)
#define __INTMAX_MAX__ __LONG_MAX__
#else
#define __INTMAX_MAX__ __LONG_LONG_MAX__
#endif
#endif

#ifndef __UINTMAX_MAX__
#if defined(__LP64__) || defined(_LP64)
#define __UINTMAX_MAX__ (__LONG_MAX__ * 2UL + 1UL)
#else
#define __UINTMAX_MAX__ (__LONG_LONG_MAX__ * 2ULL + 1ULL)
#endif
#endif

#ifndef __PTRDIFF_MAX__
#define __PTRDIFF_MAX__ __LONG_MAX__
#endif

#ifndef __SIZE_MAX__
#define __SIZE_MAX__ ((__SIZE_TYPE__)-1)
#endif

#ifndef __WCHAR_MAX__
#define __WCHAR_MAX__ __INT_MAX__
#endif

#ifndef __WINT_MAX__
#define __WINT_MAX__ __INT_MAX__
#endif

#ifndef __INT8_C_SUFFIX__
#define __INT8_C_SUFFIX__
#endif

#ifndef __UINT8_C_SUFFIX__
#define __UINT8_C_SUFFIX__
#endif

#ifndef __INT16_C_SUFFIX__
#define __INT16_C_SUFFIX__
#endif

#ifndef __UINT16_C_SUFFIX__
#define __UINT16_C_SUFFIX__
#endif

#ifndef __INT32_C_SUFFIX__
#define __INT32_C_SUFFIX__
#endif

#ifndef __UINT32_C_SUFFIX__
#define __UINT32_C_SUFFIX__ U
#endif

#ifndef __INT64_C_SUFFIX__
#define __INT64_C_SUFFIX__ LL
#endif

#ifndef __UINT64_C_SUFFIX__
#define __UINT64_C_SUFFIX__ ULL
#endif

#ifndef __INTMAX_C_SUFFIX__
#if defined(__LP64__) || defined(_LP64)
#define __INTMAX_C_SUFFIX__ L
#else
#define __INTMAX_C_SUFFIX__ LL
#endif
#endif

#ifndef __UINTMAX_C_SUFFIX__
#if defined(__LP64__) || defined(_LP64)
#define __UINTMAX_C_SUFFIX__ UL
#else
#define __UINTMAX_C_SUFFIX__ ULL
#endif
#endif

#ifndef __INT8_FMTd__
#define __INT8_FMTd__ "hhd"
#endif
#ifndef __INT8_FMTi__
#define __INT8_FMTi__ "hhi"
#endif
#ifndef __UINT8_FMTo__
#define __UINT8_FMTo__ "hho"
#endif
#ifndef __UINT8_FMTu__
#define __UINT8_FMTu__ "hhu"
#endif
#ifndef __UINT8_FMTx__
#define __UINT8_FMTx__ "hhx"
#endif
#ifndef __UINT8_FMTX__
#define __UINT8_FMTX__ "hhX"
#endif

#ifndef __INT16_FMTd__
#define __INT16_FMTd__ "hd"
#endif
#ifndef __INT16_FMTi__
#define __INT16_FMTi__ "hi"
#endif
#ifndef __UINT16_FMTo__
#define __UINT16_FMTo__ "ho"
#endif
#ifndef __UINT16_FMTu__
#define __UINT16_FMTu__ "hu"
#endif
#ifndef __UINT16_FMTx__
#define __UINT16_FMTx__ "hx"
#endif
#ifndef __UINT16_FMTX__
#define __UINT16_FMTX__ "hX"
#endif

#ifndef __INT32_FMTd__
#define __INT32_FMTd__ "d"
#endif
#ifndef __INT32_FMTi__
#define __INT32_FMTi__ "i"
#endif
#ifndef __UINT32_FMTo__
#define __UINT32_FMTo__ "o"
#endif
#ifndef __UINT32_FMTu__
#define __UINT32_FMTu__ "u"
#endif
#ifndef __UINT32_FMTx__
#define __UINT32_FMTx__ "x"
#endif
#ifndef __UINT32_FMTX__
#define __UINT32_FMTX__ "X"
#endif

#ifndef __INT64_FMTd__
#define __INT64_FMTd__ "lld"
#endif
#ifndef __INT64_FMTi__
#define __INT64_FMTi__ "lli"
#endif
#ifndef __UINT64_FMTo__
#define __UINT64_FMTo__ "llo"
#endif
#ifndef __UINT64_FMTu__
#define __UINT64_FMTu__ "llu"
#endif
#ifndef __UINT64_FMTx__
#define __UINT64_FMTx__ "llx"
#endif
#ifndef __UINT64_FMTX__
#define __UINT64_FMTX__ "llX"
#endif

#ifndef __INT_LEAST8_FMTd__
#define __INT_LEAST8_FMTd__ __INT8_FMTd__
#endif
#ifndef __INT_LEAST8_FMTi__
#define __INT_LEAST8_FMTi__ __INT8_FMTi__
#endif
#ifndef __UINT_LEAST8_FMTo__
#define __UINT_LEAST8_FMTo__ __UINT8_FMTo__
#endif
#ifndef __UINT_LEAST8_FMTu__
#define __UINT_LEAST8_FMTu__ __UINT8_FMTu__
#endif
#ifndef __UINT_LEAST8_FMTx__
#define __UINT_LEAST8_FMTx__ __UINT8_FMTx__
#endif
#ifndef __UINT_LEAST8_FMTX__
#define __UINT_LEAST8_FMTX__ __UINT8_FMTX__
#endif

#ifndef __INT_LEAST16_FMTd__
#define __INT_LEAST16_FMTd__ __INT16_FMTd__
#endif
#ifndef __INT_LEAST16_FMTi__
#define __INT_LEAST16_FMTi__ __INT16_FMTi__
#endif
#ifndef __UINT_LEAST16_FMTo__
#define __UINT_LEAST16_FMTo__ __UINT16_FMTo__
#endif
#ifndef __UINT_LEAST16_FMTu__
#define __UINT_LEAST16_FMTu__ __UINT16_FMTu__
#endif
#ifndef __UINT_LEAST16_FMTx__
#define __UINT_LEAST16_FMTx__ __UINT16_FMTx__
#endif
#ifndef __UINT_LEAST16_FMTX__
#define __UINT_LEAST16_FMTX__ __UINT16_FMTX__
#endif

#ifndef __INT_LEAST32_FMTd__
#define __INT_LEAST32_FMTd__ __INT32_FMTd__
#endif
#ifndef __INT_LEAST32_FMTi__
#define __INT_LEAST32_FMTi__ __INT32_FMTi__
#endif
#ifndef __UINT_LEAST32_FMTo__
#define __UINT_LEAST32_FMTo__ __UINT32_FMTo__
#endif
#ifndef __UINT_LEAST32_FMTu__
#define __UINT_LEAST32_FMTu__ __UINT32_FMTu__
#endif
#ifndef __UINT_LEAST32_FMTx__
#define __UINT_LEAST32_FMTx__ __UINT32_FMTx__
#endif
#ifndef __UINT_LEAST32_FMTX__
#define __UINT_LEAST32_FMTX__ __UINT32_FMTX__
#endif

#ifndef __INT_LEAST64_FMTd__
#define __INT_LEAST64_FMTd__ __INT64_FMTd__
#endif
#ifndef __INT_LEAST64_FMTi__
#define __INT_LEAST64_FMTi__ __INT64_FMTi__
#endif
#ifndef __UINT_LEAST64_FMTo__
#define __UINT_LEAST64_FMTo__ __UINT64_FMTo__
#endif
#ifndef __UINT_LEAST64_FMTu__
#define __UINT_LEAST64_FMTu__ __UINT64_FMTu__
#endif
#ifndef __UINT_LEAST64_FMTx__
#define __UINT_LEAST64_FMTx__ __UINT64_FMTx__
#endif
#ifndef __UINT_LEAST64_FMTX__
#define __UINT_LEAST64_FMTX__ __UINT64_FMTX__
#endif

#ifndef __INT_FAST8_FMTd__
#define __INT_FAST8_FMTd__ "d"
#endif
#ifndef __INT_FAST8_FMTi__
#define __INT_FAST8_FMTi__ "i"
#endif
#ifndef __UINT_FAST8_FMTo__
#define __UINT_FAST8_FMTo__ "o"
#endif
#ifndef __UINT_FAST8_FMTu__
#define __UINT_FAST8_FMTu__ "u"
#endif
#ifndef __UINT_FAST8_FMTx__
#define __UINT_FAST8_FMTx__ "x"
#endif
#ifndef __UINT_FAST8_FMTX__
#define __UINT_FAST8_FMTX__ "X"
#endif

#ifndef __INT_FAST16_FMTd__
#define __INT_FAST16_FMTd__ "d"
#endif
#ifndef __INT_FAST16_FMTi__
#define __INT_FAST16_FMTi__ "i"
#endif
#ifndef __UINT_FAST16_FMTo__
#define __UINT_FAST16_FMTo__ "o"
#endif
#ifndef __UINT_FAST16_FMTu__
#define __UINT_FAST16_FMTu__ "u"
#endif
#ifndef __UINT_FAST16_FMTx__
#define __UINT_FAST16_FMTx__ "x"
#endif
#ifndef __UINT_FAST16_FMTX__
#define __UINT_FAST16_FMTX__ "X"
#endif

#ifndef __INT_FAST32_FMTd__
#define __INT_FAST32_FMTd__ "d"
#endif
#ifndef __INT_FAST32_FMTi__
#define __INT_FAST32_FMTi__ "i"
#endif
#ifndef __UINT_FAST32_FMTo__
#define __UINT_FAST32_FMTo__ "o"
#endif
#ifndef __UINT_FAST32_FMTu__
#define __UINT_FAST32_FMTu__ "u"
#endif
#ifndef __UINT_FAST32_FMTx__
#define __UINT_FAST32_FMTx__ "x"
#endif
#ifndef __UINT_FAST32_FMTX__
#define __UINT_FAST32_FMTX__ "X"
#endif

#ifndef __INT_FAST64_FMTd__
#define __INT_FAST64_FMTd__ __INT64_FMTd__
#endif
#ifndef __INT_FAST64_FMTi__
#define __INT_FAST64_FMTi__ __INT64_FMTi__
#endif
#ifndef __UINT_FAST64_FMTo__
#define __UINT_FAST64_FMTo__ __UINT64_FMTo__
#endif
#ifndef __UINT_FAST64_FMTu__
#define __UINT_FAST64_FMTu__ __UINT64_FMTu__
#endif
#ifndef __UINT_FAST64_FMTx__
#define __UINT_FAST64_FMTx__ __UINT64_FMTx__
#endif
#ifndef __UINT_FAST64_FMTX__
#define __UINT_FAST64_FMTX__ __UINT64_FMTX__
#endif

#ifndef __INTMAX_FMTd__
#if defined(__LP64__) || defined(_LP64)
#define __INTMAX_FMTd__ "ld"
#else
#define __INTMAX_FMTd__ "lld"
#endif
#endif

#ifndef __INTMAX_FMTi__
#if defined(__LP64__) || defined(_LP64)
#define __INTMAX_FMTi__ "li"
#else
#define __INTMAX_FMTi__ "lli"
#endif
#endif

#ifndef __UINTMAX_FMTo__
#if defined(__LP64__) || defined(_LP64)
#define __UINTMAX_FMTo__ "lo"
#else
#define __UINTMAX_FMTo__ "llo"
#endif
#endif

#ifndef __UINTMAX_FMTu__
#if defined(__LP64__) || defined(_LP64)
#define __UINTMAX_FMTu__ "lu"
#else
#define __UINTMAX_FMTu__ "llu"
#endif
#endif

#ifndef __UINTMAX_FMTx__
#if defined(__LP64__) || defined(_LP64)
#define __UINTMAX_FMTx__ "lx"
#else
#define __UINTMAX_FMTx__ "llx"
#endif
#endif

#ifndef __UINTMAX_FMTX__
#if defined(__LP64__) || defined(_LP64)
#define __UINTMAX_FMTX__ "lX"
#else
#define __UINTMAX_FMTX__ "llX"
#endif
#endif

#ifndef __INTPTR_FMTd__
#if defined(_WIN64)
#define __INTPTR_FMTd__ "lld"
#else
#define __INTPTR_FMTd__ "ld"
#endif
#endif

#ifndef __INTPTR_FMTi__
#if defined(_WIN64)
#define __INTPTR_FMTi__ "lli"
#else
#define __INTPTR_FMTi__ "li"
#endif
#endif

#ifndef __UINTPTR_FMTo__
#if defined(_WIN64)
#define __UINTPTR_FMTo__ "llo"
#else
#define __UINTPTR_FMTo__ "lo"
#endif
#endif

#ifndef __UINTPTR_FMTu__
#if defined(_WIN64)
#define __UINTPTR_FMTu__ "llu"
#else
#define __UINTPTR_FMTu__ "lu"
#endif
#endif

#ifndef __UINTPTR_FMTx__
#if defined(_WIN64)
#define __UINTPTR_FMTx__ "llx"
#else
#define __UINTPTR_FMTx__ "lx"
#endif
#endif

#ifndef __UINTPTR_FMTX__
#if defined(_WIN64)
#define __UINTPTR_FMTX__ "llX"
#else
#define __UINTPTR_FMTX__ "lX"
#endif
#endif

#endif

#ifndef PERMAFROST_STDINT_H
#define PERMAFROST_STDINT_H
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned int uint32_t;
typedef long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef int intptr_t;
#define UINT64_MAX 0xffffffffffffffffULL
#define INT64_MAX 0x7fffffffffffffffLL
#define INT64_MIN (-INT64_MAX-1)
#define SIZE_MAX 0xffffffffU
#define UINT32_MAX 0xffffffffU
#define INT32_MAX 0x7fffffff
#define INT32_MIN (-INT32_MAX - 1)
#endif

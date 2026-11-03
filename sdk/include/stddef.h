#ifndef PERMAFROST_STDDEF_H
#define PERMAFROST_STDDEF_H
typedef unsigned int size_t;
typedef int ptrdiff_t;
#ifdef __cplusplus
#define NULL nullptr
#else
#define NULL ((void *)0)
#endif
#define offsetof(type, member) __builtin_offsetof(type, member)
#endif

#pragma once

#include <stddef.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

int strcasecmp(const char* lhs, const char* rhs);
int strncasecmp(const char* lhs, const char* rhs, size_t size);
void bzero(void* ptr, size_t size);
void bcopy(const void* src, void* dst, size_t size);
int bcmp(const void* lhs, const void* rhs, size_t size);

#ifdef __cplusplus
}
#endif

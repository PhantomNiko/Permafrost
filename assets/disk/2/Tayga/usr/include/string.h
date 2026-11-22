#pragma once

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

void* memcpy(void* dst, const void* src, size_t size);
void* memmove(void* dst, const void* src, size_t size);
void* memset(void* dst, int value, size_t size);
int memcmp(const void* lhs, const void* rhs, size_t size);
void* memchr(const void* ptr, int value, size_t size);
char* strchr(const char* text, int ch);
char* strrchr(const char* text, int ch);
int strcmp(const char* lhs, const char* rhs);
int strncmp(const char* lhs, const char* rhs, size_t size);
int strcoll(const char* lhs, const char* rhs);
size_t strxfrm(char* dst, const char* src, size_t size);
char* strcpy(char* dst, const char* src);
char* strncpy(char* dst, const char* src, size_t size);
char* strcat(char* dst, const char* src);
char* strncat(char* dst, const char* src, size_t size);
size_t strlen(const char* text);
size_t strnlen(const char* text, size_t maxLength);
char* strpbrk(const char* text, const char* accept);
size_t strspn(const char* text, const char* accept);
size_t strcspn(const char* text, const char* reject);
char* strerror(int errnum);
char* strsignal(int signalNumber);
char* strdup(const char* text);
char* strndup(const char* text, size_t maxLength);
char* strstr(const char* haystack, const char* needle);
char* strtok(char* text, const char* delimiters);
char* strtok_r(char* text, const char* delimiters, char** saveptr);

#ifdef __cplusplus
}
#endif

#pragma once

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef WINTER_STD_H
typedef struct {
	int quot;
	int rem;
} div_t;

typedef struct {
	long quot;
	long rem;
} ldiv_t;

typedef struct {
	long long quot;
	long long rem;
} lldiv_t;
#define TAYGA_STDLIB_DIV_TYPES 1
#endif

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#define RAND_MAX 32767

extern char** environ;

void abort(void);
void exit(int status);
void _Exit(int status);
void quick_exit(int status);
int atexit(void (*function)(void));
int at_quick_exit(void (*function)(void));
char* getenv(const char* name);
int setenv(const char* name, const char* value, int overwrite);
int unsetenv(const char* name);
int putenv(char* assignment);
int system(const char* command);
char* getprogpath(char* buffer, const char* argv0);
void* malloc(size_t size);
void free(void* ptr);
void* realloc(void* ptr, size_t size);
void* calloc(size_t count, size_t size);
int abs(int value);
long labs(long value);
long long llabs(long long value);
div_t div(int numerator, int denominator);
ldiv_t ldiv(long numerator, long denominator);
lldiv_t lldiv(long long numerator, long long denominator);
int atoi(const char* text);
long atol(const char* text);
long long atoll(const char* text);
long strtol(const char* text, char** endptr, int base);
unsigned long strtoul(const char* text, char** endptr, int base);
long long strtoll(const char* text, char** endptr, int base);
unsigned long long strtoull(const char* text, char** endptr, int base);
double strtod(const char* text, char** endptr);
float strtof(const char* text, char** endptr);
long double strtold(const char* text, char** endptr);
double atof(const char* text);
void qsort(void* base, size_t count, size_t size, int (*compare)(const void*, const void*));
void* bsearch(const void* key, const void* base, size_t count, size_t size, int (*compare)(const void*, const void*));
int rand(void);
void srand(unsigned int seed);
char* realpath(const char* path, char* resolvedPath);
int mkstemp(char* templatePath);
int mkstemps(char* templatePath, int suffixLength);

#ifdef __cplusplus
}
#endif

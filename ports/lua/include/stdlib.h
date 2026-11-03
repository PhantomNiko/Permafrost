/* Permafrost Lua host interface; Pooka's Free Software License. */
#pragma once
#include <stddef.h>
#include <stdint.h>
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#define RAND_MAX 2147483647
void *malloc(size_t); void *calloc(size_t,size_t); void *realloc(void *,size_t); void free(void *);
void abort(void) __attribute__((noreturn)); void exit(int) __attribute__((noreturn));
char *getenv(const char *); int system(const char *);
double strtod(const char *,char **); float strtof(const char *,char **);
long strtol(const char *,char **,int); unsigned long strtoul(const char *,char **,int);
long long strtoll(const char *,char **,int); unsigned long long strtoull(const char *,char **,int);
int abs(int); long labs(long); long long llabs(long long);
int rand(void); void srand(unsigned int);

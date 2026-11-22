#pragma once

#include <stddef.h>
#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WMProbeFile FILE;
typedef long fpos_t;

#ifndef EOF
#define EOF (-1)
#endif

#ifndef BUFSIZ
#define BUFSIZ 1024
#endif

#ifndef FILENAME_MAX
#define FILENAME_MAX 256
#endif

#ifndef SEEK_SET
#define SEEK_SET 0
#endif
#ifndef SEEK_CUR
#define SEEK_CUR 1
#endif
#ifndef SEEK_END
#define SEEK_END 2
#endif

#define _IOFBF 0
#define _IOLBF 1
#define _IONBF 2

extern FILE* stdin;
extern FILE* stdout;
extern FILE* stderr;

FILE* fopen(const char* path, const char* mode);
FILE* freopen(const char* path, const char* mode, FILE* stream);
FILE* fdopen(int fd, const char* mode);
FILE* popen(const char* command, const char* mode);
int pclose(FILE* stream);
int fclose(FILE* stream);
int fflush(FILE* stream);
size_t fread(void* ptr, size_t size, size_t count, FILE* stream);
size_t fwrite(const void* ptr, size_t size, size_t count, FILE* stream);
int fseek(FILE* stream, long offset, int origin);
long ftell(FILE* stream);
int fseeko(FILE* stream, long long offset, int origin);
long long ftello(FILE* stream);
int fgetpos(FILE* stream, fpos_t* pos);
int fsetpos(FILE* stream, const fpos_t* pos);
int feof(FILE* stream);
int ferror(FILE* stream);
void clearerr(FILE* stream);
int fileno(FILE* stream);
int fgetc(FILE* stream);
int getc(FILE* stream);
int getchar(void);
int ungetc(int ch, FILE* stream);
char* fgets(char* text, int count, FILE* stream);
int fputc(int ch, FILE* stream);
int putc(int ch, FILE* stream);
int putchar(int ch);
int fputs(const char* text, FILE* stream);
int puts(const char* text);
int printf(const char* format, ...);
int fprintf(FILE* stream, const char* format, ...);
int snprintf(char* buffer, size_t size, const char* format, ...);
int sprintf(char* buffer, const char* format, ...);
int vprintf(const char* format, va_list args);
int vfprintf(FILE* stream, const char* format, va_list args);
int vsnprintf(char* buffer, size_t size, const char* format, va_list args);
int vsprintf(char* buffer, const char* format, va_list args);
int sscanf(const char* buffer, const char* format, ...);
int vsscanf(const char* buffer, const char* format, va_list args);
int setvbuf(FILE* stream, char* buffer, int mode, size_t size);
void setbuf(FILE* stream, char* buffer);
void perror(const char* prefix);
int remove(const char* path);
int rename(const char* oldPath, const char* newPath);
char* tmpnam(char* buffer);

#ifdef __cplusplus
}
#endif

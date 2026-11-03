/* Permafrost Lua host interface; Pooka's Free Software License. */
#pragma once
#include <stddef.h>
#include <stdarg.h>
#define EOF (-1)
#define BUFSIZ 512
#define FILENAME_MAX 256
#define L_tmpnam 32
#define _IOFBF 0
#define _IOLBF 1
#define _IONBF 2
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
typedef struct pf_file FILE;
extern FILE *stdin, *stdout, *stderr;
FILE *fopen(const char *,const char *); FILE *freopen(const char *,const char *,FILE *);
int fclose(FILE *); int fflush(FILE *); size_t fread(void *,size_t,size_t,FILE *);
size_t fwrite(const void *,size_t,size_t,FILE *); int fgetc(FILE *); int getc(FILE *);
int getchar(void); int ungetc(int,FILE *); char *fgets(char *,int,FILE *);
int fputc(int,FILE *); int putc(int,FILE *); int putchar(int);
int fputs(const char *,FILE *); int puts(const char *);
int feof(FILE *); int ferror(FILE *); void clearerr(FILE *);
int fseek(FILE *,long,int); long ftell(FILE *); void rewind(FILE *);
int setvbuf(FILE *,char *,int,size_t); int remove(const char *); int rename(const char *,const char *);
FILE *tmpfile(void); char *tmpnam(char *);
int printf(const char *,...); int fprintf(FILE *,const char *,...);
int sprintf(char *,const char *,...); int snprintf(char *,size_t,const char *,...);
int vfprintf(FILE *,const char *,va_list); int vsprintf(char *,const char *,va_list);
int vsnprintf(char *,size_t,const char *,va_list); int fscanf(FILE *,const char *,...);

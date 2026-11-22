#ifndef WINTER_HEADER_FENV_H
#define WINTER_HEADER_FENV_H

typedef struct {
	unsigned int __exceptions;
	int __round;
} fenv_t;

typedef unsigned short fexcept_t;

#define FE_INVALID 0x0001
#define FE_DIVBYZERO 0x0002
#define FE_OVERFLOW 0x0004
#define FE_UNDERFLOW 0x0008
#define FE_INEXACT 0x0010
#define FE_FLUSHTOZERO 0x0080
#define FE_ALL_EXCEPT 0x009f

#define FE_TONEAREST 0x00000000
#define FE_UPWARD 0x00400000
#define FE_DOWNWARD 0x00800000
#define FE_TOWARDZERO 0x00c00000

#ifdef __cplusplus
extern "C" {
#endif

extern const fenv_t _FE_DFL_ENV;
extern const fenv_t _FE_DFL_DISABLE_DENORMS_ENV;

#define FE_DFL_ENV (&_FE_DFL_ENV)
#define FE_DFL_DISABLE_DENORMS_ENV (&_FE_DFL_DISABLE_DENORMS_ENV)

int feclearexcept(int excepts);
int fegetexceptflag(fexcept_t* flagp, int excepts);
int feraiseexcept(int excepts);
int fesetexceptflag(const fexcept_t* flagp, int excepts);
int fetestexcept(int excepts);
int fegetround(void);
int fesetround(int round);
int fegetenv(fenv_t* envp);
int feholdexcept(fenv_t* envp);
int fesetenv(const fenv_t* envp);
int feupdateenv(const fenv_t* envp);

#ifdef __cplusplus
}
#endif

#endif

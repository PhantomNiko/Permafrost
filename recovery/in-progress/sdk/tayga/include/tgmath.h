#ifndef WINTER_HEADER_TGMATH_H
#define WINTER_HEADER_TGMATH_H

#include "math.h"

#ifdef __cplusplus
#include "cmath"
#else
#include "complex.h"

#if defined(__clang__) || defined(__GNUC__)
#define WINTER_TG_ATTR static inline __attribute__((__overloadable__, __always_inline__))
#define WINTER_TG_PROMOTE_ATTR __attribute__((__overloadable__))

static inline double WINTER_TG_PROMOTE_ATTR wm_tg_promote(int value) { return (double)value; }
static inline double WINTER_TG_PROMOTE_ATTR wm_tg_promote(unsigned int value) { return (double)value; }
static inline double WINTER_TG_PROMOTE_ATTR wm_tg_promote(long value) { return (double)value; }
static inline double WINTER_TG_PROMOTE_ATTR wm_tg_promote(unsigned long value) { return (double)value; }
static inline double WINTER_TG_PROMOTE_ATTR wm_tg_promote(long long value) { return (double)value; }
static inline double WINTER_TG_PROMOTE_ATTR wm_tg_promote(unsigned long long value) { return (double)value; }
#if defined(__FLT16_MANT_DIG__)
static inline float WINTER_TG_PROMOTE_ATTR wm_tg_promote(_Float16 value) { return (float)value; }
#endif
static inline float WINTER_TG_PROMOTE_ATTR wm_tg_promote(float value) { return value; }
static inline double WINTER_TG_PROMOTE_ATTR wm_tg_promote(double value) { return value; }
static inline long double WINTER_TG_PROMOTE_ATTR wm_tg_promote(long double value) { return value; }
static inline float complex WINTER_TG_PROMOTE_ATTR wm_tg_promote(float complex value) { return value; }
static inline double complex WINTER_TG_PROMOTE_ATTR wm_tg_promote(double complex value) { return value; }
static inline long double complex WINTER_TG_PROMOTE_ATTR wm_tg_promote(long double complex value) { return value; }

#define WINTER_TG_PROMOTE1(value) __typeof__(wm_tg_promote(value))
#define WINTER_TG_PROMOTE2(left, right) __typeof__(wm_tg_promote(left) + wm_tg_promote(right))
#define WINTER_TG_PROMOTE3(x, y, z) __typeof__(wm_tg_promote(x) + wm_tg_promote(y) + wm_tg_promote(z))

#define WINTER_TG_REAL_UNARY(name) \
WINTER_TG_ATTR float wm_tg_##name(float value) { return name##f(value); } \
WINTER_TG_ATTR double wm_tg_##name(double value) { return name(value); } \
WINTER_TG_ATTR long double wm_tg_##name(long double value) { return name##l(value); }

#define WINTER_TG_COMPLEX_UNARY(name, complex_name) \
WINTER_TG_REAL_UNARY(name) \
WINTER_TG_ATTR float complex wm_tg_##name(float complex value) { return complex_name##f(value); } \
WINTER_TG_ATTR double complex wm_tg_##name(double complex value) { return complex_name(value); } \
WINTER_TG_ATTR long double complex wm_tg_##name(long double complex value) { return complex_name##l(value); }

#define WINTER_TG_REAL_BINARY(name) \
WINTER_TG_ATTR float wm_tg_##name(float left, float right) { return name##f(left, right); } \
WINTER_TG_ATTR double wm_tg_##name(double left, double right) { return name(left, right); } \
WINTER_TG_ATTR long double wm_tg_##name(long double left, long double right) { return name##l(left, right); }

#define WINTER_TG_REAL_TERNARY(name) \
WINTER_TG_ATTR float wm_tg_##name(float x, float y, float z) { return name##f(x, y, z); } \
WINTER_TG_ATTR double wm_tg_##name(double x, double y, double z) { return name(x, y, z); } \
WINTER_TG_ATTR long double wm_tg_##name(long double x, long double y, long double z) { return name##l(x, y, z); }

WINTER_TG_COMPLEX_UNARY(acos, cacos)
WINTER_TG_COMPLEX_UNARY(asin, casin)
WINTER_TG_COMPLEX_UNARY(atan, catan)
WINTER_TG_COMPLEX_UNARY(acosh, cacosh)
WINTER_TG_COMPLEX_UNARY(asinh, casinh)
WINTER_TG_COMPLEX_UNARY(atanh, catanh)
WINTER_TG_COMPLEX_UNARY(cos, ccos)
WINTER_TG_COMPLEX_UNARY(sin, csin)
WINTER_TG_COMPLEX_UNARY(tan, ctan)
WINTER_TG_COMPLEX_UNARY(cosh, ccosh)
WINTER_TG_COMPLEX_UNARY(sinh, csinh)
WINTER_TG_COMPLEX_UNARY(tanh, ctanh)
WINTER_TG_COMPLEX_UNARY(exp, cexp)
WINTER_TG_COMPLEX_UNARY(log, clog)
WINTER_TG_COMPLEX_UNARY(sqrt, csqrt)

WINTER_TG_REAL_UNARY(exp2)
WINTER_TG_REAL_UNARY(expm1)
WINTER_TG_REAL_UNARY(log10)
WINTER_TG_REAL_UNARY(log2)
WINTER_TG_REAL_UNARY(log1p)
WINTER_TG_REAL_UNARY(logb)
WINTER_TG_REAL_UNARY(cbrt)
WINTER_TG_REAL_UNARY(ceil)
WINTER_TG_REAL_UNARY(floor)
WINTER_TG_REAL_UNARY(nearbyint)
WINTER_TG_REAL_UNARY(rint)
WINTER_TG_REAL_UNARY(round)
WINTER_TG_REAL_UNARY(trunc)
WINTER_TG_REAL_UNARY(erf)
WINTER_TG_REAL_UNARY(erfc)
WINTER_TG_REAL_UNARY(lgamma)
WINTER_TG_REAL_UNARY(tgamma)

WINTER_TG_REAL_BINARY(atan2)
WINTER_TG_REAL_BINARY(hypot)
WINTER_TG_REAL_BINARY(copysign)
WINTER_TG_REAL_BINARY(fmod)
WINTER_TG_REAL_BINARY(remainder)
WINTER_TG_REAL_BINARY(nextafter)
WINTER_TG_REAL_BINARY(fdim)
WINTER_TG_REAL_BINARY(fmax)
WINTER_TG_REAL_BINARY(fmin)
WINTER_TG_REAL_TERNARY(fma)

WINTER_TG_ATTR float wm_tg_fabs(float value) { return fabsf(value); }
WINTER_TG_ATTR double wm_tg_fabs(double value) { return fabs(value); }
WINTER_TG_ATTR long double wm_tg_fabs(long double value) { return fabsl(value); }
WINTER_TG_ATTR float wm_tg_fabs(float complex value) { return cabsf(value); }
WINTER_TG_ATTR double wm_tg_fabs(double complex value) { return cabs(value); }
WINTER_TG_ATTR long double wm_tg_fabs(long double complex value) { return cabsl(value); }

WINTER_TG_ATTR float complex wm_tg_pow(float complex base, float complex exponent) { return cpowf(base, exponent); }
WINTER_TG_ATTR double complex wm_tg_pow(double complex base, double complex exponent) { return cpow(base, exponent); }
WINTER_TG_ATTR long double complex wm_tg_pow(long double complex base, long double complex exponent) { return cpowl(base, exponent); }
WINTER_TG_REAL_BINARY(pow)

WINTER_TG_ATTR int wm_tg_ilogb(float value) { return ilogbf(value); }
WINTER_TG_ATTR int wm_tg_ilogb(double value) { return ilogb(value); }
WINTER_TG_ATTR int wm_tg_ilogb(long double value) { return ilogbl(value); }
WINTER_TG_ATTR long wm_tg_lrint(float value) { return lrintf(value); }
WINTER_TG_ATTR long wm_tg_lrint(double value) { return lrint(value); }
WINTER_TG_ATTR long wm_tg_lrint(long double value) { return lrintl(value); }
WINTER_TG_ATTR long long wm_tg_llrint(float value) { return llrintf(value); }
WINTER_TG_ATTR long long wm_tg_llrint(double value) { return llrint(value); }
WINTER_TG_ATTR long long wm_tg_llrint(long double value) { return llrintl(value); }
WINTER_TG_ATTR long wm_tg_lround(float value) { return lroundf(value); }
WINTER_TG_ATTR long wm_tg_lround(double value) { return lround(value); }
WINTER_TG_ATTR long wm_tg_lround(long double value) { return lroundl(value); }
WINTER_TG_ATTR long long wm_tg_llround(float value) { return llroundf(value); }
WINTER_TG_ATTR long long wm_tg_llround(double value) { return llround(value); }
WINTER_TG_ATTR long long wm_tg_llround(long double value) { return llroundl(value); }

WINTER_TG_ATTR float wm_tg_frexp(float value, int* exponent) { return frexpf(value, exponent); }
WINTER_TG_ATTR double wm_tg_frexp(double value, int* exponent) { return frexp(value, exponent); }
WINTER_TG_ATTR long double wm_tg_frexp(long double value, int* exponent) { return frexpl(value, exponent); }
WINTER_TG_ATTR float wm_tg_ldexp(float value, int exponent) { return ldexpf(value, exponent); }
WINTER_TG_ATTR double wm_tg_ldexp(double value, int exponent) { return ldexp(value, exponent); }
WINTER_TG_ATTR long double wm_tg_ldexp(long double value, int exponent) { return ldexpl(value, exponent); }
WINTER_TG_ATTR float wm_tg_modf(float value, float* integer_part) { return modff(value, integer_part); }
WINTER_TG_ATTR double wm_tg_modf(double value, double* integer_part) { return modf(value, integer_part); }
WINTER_TG_ATTR long double wm_tg_modf(long double value, long double* integer_part) { return modfl(value, integer_part); }
WINTER_TG_ATTR float wm_tg_scalbn(float value, int exponent) { return scalbnf(value, exponent); }
WINTER_TG_ATTR double wm_tg_scalbn(double value, int exponent) { return scalbn(value, exponent); }
WINTER_TG_ATTR long double wm_tg_scalbn(long double value, int exponent) { return scalbnl(value, exponent); }
WINTER_TG_ATTR float wm_tg_scalbln(float value, long exponent) { return scalblnf(value, exponent); }
WINTER_TG_ATTR double wm_tg_scalbln(double value, long exponent) { return scalbln(value, exponent); }
WINTER_TG_ATTR long double wm_tg_scalbln(long double value, long exponent) { return scalblnl(value, exponent); }
WINTER_TG_ATTR float wm_tg_remquo(float x, float y, int* quotient) { return remquof(x, y, quotient); }
WINTER_TG_ATTR double wm_tg_remquo(double x, double y, int* quotient) { return remquo(x, y, quotient); }
WINTER_TG_ATTR long double wm_tg_remquo(long double x, long double y, int* quotient) { return remquol(x, y, quotient); }
WINTER_TG_ATTR float wm_tg_nexttoward(float from, long double to) { return nexttowardf(from, to); }
WINTER_TG_ATTR double wm_tg_nexttoward(double from, long double to) { return nexttoward(from, to); }
WINTER_TG_ATTR long double wm_tg_nexttoward(long double from, long double to) { return nexttowardl(from, to); }

WINTER_TG_ATTR float wm_tg_carg(float value) { (void)value; return 0.0f; }
WINTER_TG_ATTR double wm_tg_carg(double value) { (void)value; return 0.0; }
WINTER_TG_ATTR long double wm_tg_carg(long double value) { (void)value; return 0.0L; }
WINTER_TG_ATTR float wm_tg_carg(float complex value) { return cargf(value); }
WINTER_TG_ATTR double wm_tg_carg(double complex value) { return carg(value); }
WINTER_TG_ATTR long double wm_tg_carg(long double complex value) { return cargl(value); }
WINTER_TG_ATTR float wm_tg_cimag(float value) { (void)value; return 0.0f; }
WINTER_TG_ATTR double wm_tg_cimag(double value) { (void)value; return 0.0; }
WINTER_TG_ATTR long double wm_tg_cimag(long double value) { (void)value; return 0.0L; }
WINTER_TG_ATTR float wm_tg_cimag(float complex value) { return cimagf(value); }
WINTER_TG_ATTR double wm_tg_cimag(double complex value) { return cimag(value); }
WINTER_TG_ATTR long double wm_tg_cimag(long double complex value) { return cimagl(value); }
WINTER_TG_ATTR float wm_tg_creal(float value) { return value; }
WINTER_TG_ATTR double wm_tg_creal(double value) { return value; }
WINTER_TG_ATTR long double wm_tg_creal(long double value) { return value; }
WINTER_TG_ATTR float wm_tg_creal(float complex value) { return crealf(value); }
WINTER_TG_ATTR double wm_tg_creal(double complex value) { return creal(value); }
WINTER_TG_ATTR long double wm_tg_creal(long double complex value) { return creall(value); }
WINTER_TG_ATTR float wm_tg_conj(float value) { return value; }
WINTER_TG_ATTR double wm_tg_conj(double value) { return value; }
WINTER_TG_ATTR long double wm_tg_conj(long double value) { return value; }
WINTER_TG_ATTR float complex wm_tg_conj(float complex value) { return conjf(value); }
WINTER_TG_ATTR double complex wm_tg_conj(double complex value) { return conj(value); }
WINTER_TG_ATTR long double complex wm_tg_conj(long double complex value) { return conjl(value); }
WINTER_TG_ATTR float wm_tg_cproj(float value) { return value; }
WINTER_TG_ATTR double wm_tg_cproj(double value) { return value; }
WINTER_TG_ATTR long double wm_tg_cproj(long double value) { return value; }
WINTER_TG_ATTR float complex wm_tg_cproj(float complex value) { return cprojf(value); }
WINTER_TG_ATTR double complex wm_tg_cproj(double complex value) { return cproj(value); }
WINTER_TG_ATTR long double complex wm_tg_cproj(long double complex value) { return cprojl(value); }

#undef acos
#define acos(value) wm_tg_acos((WINTER_TG_PROMOTE1(value))(value))
#undef asin
#define asin(value) wm_tg_asin((WINTER_TG_PROMOTE1(value))(value))
#undef atan
#define atan(value) wm_tg_atan((WINTER_TG_PROMOTE1(value))(value))
#undef acosh
#define acosh(value) wm_tg_acosh((WINTER_TG_PROMOTE1(value))(value))
#undef asinh
#define asinh(value) wm_tg_asinh((WINTER_TG_PROMOTE1(value))(value))
#undef atanh
#define atanh(value) wm_tg_atanh((WINTER_TG_PROMOTE1(value))(value))
#undef cos
#define cos(value) wm_tg_cos((WINTER_TG_PROMOTE1(value))(value))
#undef sin
#define sin(value) wm_tg_sin((WINTER_TG_PROMOTE1(value))(value))
#undef tan
#define tan(value) wm_tg_tan((WINTER_TG_PROMOTE1(value))(value))
#undef cosh
#define cosh(value) wm_tg_cosh((WINTER_TG_PROMOTE1(value))(value))
#undef sinh
#define sinh(value) wm_tg_sinh((WINTER_TG_PROMOTE1(value))(value))
#undef tanh
#define tanh(value) wm_tg_tanh((WINTER_TG_PROMOTE1(value))(value))
#undef exp
#define exp(value) wm_tg_exp((WINTER_TG_PROMOTE1(value))(value))
#undef log
#define log(value) wm_tg_log((WINTER_TG_PROMOTE1(value))(value))
#undef sqrt
#define sqrt(value) wm_tg_sqrt((WINTER_TG_PROMOTE1(value))(value))
#undef fabs
#define fabs(value) wm_tg_fabs((WINTER_TG_PROMOTE1(value))(value))
#undef cabs
#define cabs(value) wm_tg_fabs((WINTER_TG_PROMOTE1(value))(value))

#undef exp2
#define exp2(value) wm_tg_exp2((WINTER_TG_PROMOTE1(value))(value))
#undef expm1
#define expm1(value) wm_tg_expm1((WINTER_TG_PROMOTE1(value))(value))
#undef log10
#define log10(value) wm_tg_log10((WINTER_TG_PROMOTE1(value))(value))
#undef log2
#define log2(value) wm_tg_log2((WINTER_TG_PROMOTE1(value))(value))
#undef log1p
#define log1p(value) wm_tg_log1p((WINTER_TG_PROMOTE1(value))(value))
#undef logb
#define logb(value) wm_tg_logb((WINTER_TG_PROMOTE1(value))(value))
#undef cbrt
#define cbrt(value) wm_tg_cbrt((WINTER_TG_PROMOTE1(value))(value))
#undef ceil
#define ceil(value) wm_tg_ceil((WINTER_TG_PROMOTE1(value))(value))
#undef floor
#define floor(value) wm_tg_floor((WINTER_TG_PROMOTE1(value))(value))
#undef nearbyint
#define nearbyint(value) wm_tg_nearbyint((WINTER_TG_PROMOTE1(value))(value))
#undef rint
#define rint(value) wm_tg_rint((WINTER_TG_PROMOTE1(value))(value))
#undef round
#define round(value) wm_tg_round((WINTER_TG_PROMOTE1(value))(value))
#undef trunc
#define trunc(value) wm_tg_trunc((WINTER_TG_PROMOTE1(value))(value))
#undef erf
#define erf(value) wm_tg_erf((WINTER_TG_PROMOTE1(value))(value))
#undef erfc
#define erfc(value) wm_tg_erfc((WINTER_TG_PROMOTE1(value))(value))
#undef lgamma
#define lgamma(value) wm_tg_lgamma((WINTER_TG_PROMOTE1(value))(value))
#undef tgamma
#define tgamma(value) wm_tg_tgamma((WINTER_TG_PROMOTE1(value))(value))

#undef atan2
#define atan2(left, right) wm_tg_atan2((WINTER_TG_PROMOTE2(left, right))(left), (WINTER_TG_PROMOTE2(left, right))(right))
#undef hypot
#define hypot(left, right) wm_tg_hypot((WINTER_TG_PROMOTE2(left, right))(left), (WINTER_TG_PROMOTE2(left, right))(right))
#undef copysign
#define copysign(left, right) wm_tg_copysign((WINTER_TG_PROMOTE2(left, right))(left), (WINTER_TG_PROMOTE2(left, right))(right))
#undef fmod
#define fmod(left, right) wm_tg_fmod((WINTER_TG_PROMOTE2(left, right))(left), (WINTER_TG_PROMOTE2(left, right))(right))
#undef remainder
#define remainder(left, right) wm_tg_remainder((WINTER_TG_PROMOTE2(left, right))(left), (WINTER_TG_PROMOTE2(left, right))(right))
#undef pow
#define pow(left, right) wm_tg_pow((WINTER_TG_PROMOTE2(left, right))(left), (WINTER_TG_PROMOTE2(left, right))(right))
#undef nextafter
#define nextafter(left, right) wm_tg_nextafter((WINTER_TG_PROMOTE2(left, right))(left), (WINTER_TG_PROMOTE2(left, right))(right))
#undef fdim
#define fdim(left, right) wm_tg_fdim((WINTER_TG_PROMOTE2(left, right))(left), (WINTER_TG_PROMOTE2(left, right))(right))
#undef fmax
#define fmax(left, right) wm_tg_fmax((WINTER_TG_PROMOTE2(left, right))(left), (WINTER_TG_PROMOTE2(left, right))(right))
#undef fmin
#define fmin(left, right) wm_tg_fmin((WINTER_TG_PROMOTE2(left, right))(left), (WINTER_TG_PROMOTE2(left, right))(right))
#undef fma
#define fma(x, y, z) wm_tg_fma((WINTER_TG_PROMOTE3(x, y, z))(x), (WINTER_TG_PROMOTE3(x, y, z))(y), (WINTER_TG_PROMOTE3(x, y, z))(z))

#undef ilogb
#define ilogb(value) wm_tg_ilogb((WINTER_TG_PROMOTE1(value))(value))
#undef lrint
#define lrint(value) wm_tg_lrint((WINTER_TG_PROMOTE1(value))(value))
#undef llrint
#define llrint(value) wm_tg_llrint((WINTER_TG_PROMOTE1(value))(value))
#undef lround
#define lround(value) wm_tg_lround((WINTER_TG_PROMOTE1(value))(value))
#undef llround
#define llround(value) wm_tg_llround((WINTER_TG_PROMOTE1(value))(value))
#undef frexp
#define frexp(value, exponent) wm_tg_frexp((WINTER_TG_PROMOTE1(value))(value), (exponent))
#undef ldexp
#define ldexp(value, exponent) wm_tg_ldexp((WINTER_TG_PROMOTE1(value))(value), (exponent))
#undef modf
#define modf(value, integer_part) wm_tg_modf((WINTER_TG_PROMOTE1(value))(value), (integer_part))
#undef scalbn
#define scalbn(value, exponent) wm_tg_scalbn((WINTER_TG_PROMOTE1(value))(value), (exponent))
#undef scalbln
#define scalbln(value, exponent) wm_tg_scalbln((WINTER_TG_PROMOTE1(value))(value), (exponent))
#undef remquo
#define remquo(x, y, quotient) wm_tg_remquo((WINTER_TG_PROMOTE2(x, y))(x), (WINTER_TG_PROMOTE2(x, y))(y), (quotient))
#undef nexttoward
#define nexttoward(from, to) wm_tg_nexttoward((WINTER_TG_PROMOTE1(from))(from), (to))

#undef carg
#define carg(value) wm_tg_carg((WINTER_TG_PROMOTE1(value))(value))
#undef cimag
#define cimag(value) wm_tg_cimag((WINTER_TG_PROMOTE1(value))(value))
#undef conj
#define conj(value) wm_tg_conj((WINTER_TG_PROMOTE1(value))(value))
#undef cproj
#define cproj(value) wm_tg_cproj((WINTER_TG_PROMOTE1(value))(value))
#undef creal
#define creal(value) wm_tg_creal((WINTER_TG_PROMOTE1(value))(value))

#undef WINTER_TG_REAL_UNARY
#undef WINTER_TG_COMPLEX_UNARY
#undef WINTER_TG_REAL_BINARY
#undef WINTER_TG_REAL_TERNARY
#undef WINTER_TG_ATTR
#undef WINTER_TG_PROMOTE_ATTR

#else
#error "Winter tgmath.h requires compiler overload support"
#endif

#endif

#endif

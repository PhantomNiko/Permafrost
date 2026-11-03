/* Permafrost Lua host interface; Pooka's Free Software License. */
#pragma once
#define HUGE_VAL (__builtin_huge_val())
#define HUGE_VALF (__builtin_huge_valf())
#define INFINITY (__builtin_inff())
#define NAN (__builtin_nanf(""))
#define isfinite(x) __builtin_isfinite(x)
#define isnan(x) __builtin_isnan(x)
#define isinf(x) __builtin_isinf(x)
#define signbit(x) __builtin_signbit(x)
double floor(double); double ceil(double); double trunc(double); double fabs(double);
double fmod(double,double); double pow(double,double); double sqrt(double);
double log(double); double log2(double); double log10(double); double exp(double);
double sin(double); double cos(double); double tan(double); double asin(double); double acos(double);
double atan(double); double atan2(double,double); double frexp(double,int *); double ldexp(double,int);

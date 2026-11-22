#ifndef WINTER_HEADER_MATH_H
#define WINTER_HEADER_MATH_H

#ifndef HUGE_VAL
#define HUGE_VAL (__builtin_huge_val())
#endif

#ifndef HUGE_VALF
#define HUGE_VALF (__builtin_huge_valf())
#endif

#ifndef HUGE_VALL
#define HUGE_VALL (__builtin_huge_vall())
#endif

#ifndef INFINITY
#define INFINITY (__builtin_inff())
#endif

#ifndef NAN
#define NAN (__builtin_nanf(""))
#endif

#ifndef WINTER_STD_ENABLE_CXX_C_DECLARATIONS
#define WINTER_STD_ENABLE_CXX_C_DECLARATIONS
#define WINTER_STD_UNDEFINE_CXX_C_DECLARATIONS
#endif

#include "winter_std.h"

#ifdef WINTER_STD_UNDEFINE_CXX_C_DECLARATIONS
#undef WINTER_STD_ENABLE_CXX_C_DECLARATIONS
#undef WINTER_STD_UNDEFINE_CXX_C_DECLARATIONS
#endif

#endif

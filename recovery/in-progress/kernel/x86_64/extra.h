#include "workspace.h"
#define ZEXT14(value) ((uint32_t)(uint8_t)(value))
/* Native instruction and packed register semantics. Pooka's Free Software License. */
#define ZEXT112(v) ((pf_u96)(uint8_t)(v))
#define SUB137(v,o) ((uint64_t)((pf_u104)(v)>>((o)*8))&0xffffffffffffffULL)
#define CONCAT32(a,b) ((((uint64_t)(a)&0xffffffULL)<<16)|(uint16_t)(b))
typedef pf_u72 unkbyte9;
static inline uint64_t rdtsc(void) { unsigned low,high; __asm__ volatile("rdtsc":"=a"(low),"=d"(high)); return ((uint64_t)high<<32)|low; }

#define _recovered_2000000 (*(uint64_t *)(uintptr_t)0x2000000)
#define recovered_2000014 (*(uint8_t *)(uintptr_t)0x2000014)
static inline uint64_t xinuse(unsigned selector) { unsigned low,high;__asm__ volatile("xgetbv":"=a"(low),"=d"(high):"c"(selector?1:0));return ((uint64_t)high<<32)|low; }

#define ZEXT716(v) ((uint128)((uint64_t)(v)&0xffffffffffffffULL))
#define CONCAT42(a,b) (((uint64_t)(uint32_t)(a)<<16)|(uint16_t)(b))
#define SUB148(v,o) ((uint64_t)((pf_u112)(v)>>((o)*8)))

#define pf_varargs_2005a30__4_ recovered_2005a30
#define pf_varargs_2005a30__4__4_ recovered_2005a30
#define pf_varargs_2005a30__4__4__4_ recovered_2005a30
#define pf_varargs_2005a30__4__4__4__4_ recovered_2005a30
#define pf_varargs_2005a30__4__4__4__4__4__4_ recovered_2005a30
#define pf_varargs_2005a30__4__4__4__4__4__4__4_ recovered_2005a30
#define pf_varargs_2005a30__4__4__4__4__8__4__4__4__8__4__4_ recovered_2005a30
#define pf_varargs_2005a30__4__4__4__4__8__8_ recovered_2005a30
#define pf_varargs_2005a30__4__4__4__8__8__4__4__8__8__8__8__8__8__8__8_ recovered_2005a30
#define pf_varargs_2005a30__4__4__4__8__8__4__8__8_ recovered_2005a30
#define pf_varargs_2005a30__4__4__8_ recovered_2005a30
#define pf_varargs_2005a30__4__8_ recovered_2005a30
#define pf_varargs_2005a30__4__8__8_ recovered_2005a30
#define pf_varargs_2005a30__4__8__8__8__8_ recovered_2005a30
#define pf_varargs_2005a30__4__8__8__8__8__8__4__4__4__4_ recovered_2005a30
#define pf_varargs_2005a30__8_ recovered_2005a30
#define pf_varargs_2005a30__8__4_ recovered_2005a30
#define pf_varargs_2005a30__8__4__4_ recovered_2005a30
#define pf_varargs_2005a30__8__4__4__4__4__4__4__4__4__8_ recovered_2005a30
#define pf_varargs_2005a30__8__4__4__4__8_ recovered_2005a30
#define pf_varargs_2005a30__8__4__4__8_ recovered_2005a30
#define pf_varargs_2005a30__8__4__8_ recovered_2005a30
#define pf_varargs_2005a30__8__4__8__4__4__4_ recovered_2005a30
#define pf_varargs_2005a30__8__8_ recovered_2005a30
#define pf_varargs_2005a30__8__8__4__4__4_ recovered_2005a30
#define pf_varargs_2005a30__8__8__4__4__4__8__8__8__8__8__8_ recovered_2005a30
#define pf_varargs_2005a30__8__8__4__8__8__4__8__8__4__8_ recovered_2005a30
#define pf_varargs_2005a30__8__8__8_ recovered_2005a30
#define pf_varargs_2005a30__8__8__8__4__4__4_ recovered_2005a30
#define pf_varargs_2005a30__8__8__8__8_ recovered_2005a30
#define pf_varargs_2005a30__8__8__8__8__4_ recovered_2005a30
#define pf_varargs_2005a30__8__8__8__8__4__8__8_ recovered_2005a30
#define pf_varargs_2005a30___ recovered_2005a30
#define pf_varargs_2005a30__d8_ recovered_2005a30
#define pf_varargs_2044530__4_ recovered_2044530
#define pf_varargs_2044530__4__4_ recovered_2044530
#define pf_varargs_2044530__4__4__4_ recovered_2044530
#define pf_varargs_2044530__4__4__4__4_ recovered_2044530
#define pf_varargs_2044530__4__4__4__4__4_ recovered_2044530
#define pf_varargs_2044530__4__4__4__4__4__4__4_ recovered_2044530
#define pf_varargs_2044530__4__4__4__4__4__4__8__8__8_ recovered_2044530
#define pf_varargs_2044530__4__4__4__8_ recovered_2044530
#define pf_varargs_2044530__4__4__8_ recovered_2044530
#define pf_varargs_2044530__4__4__8__4_ recovered_2044530
#define pf_varargs_2044530__4__4__8__8__8_ recovered_2044530
#define pf_varargs_2044530__4__8_ recovered_2044530
#define pf_varargs_2044530__4__8__4_ recovered_2044530
#define pf_varargs_2044530__4__8__8_ recovered_2044530
#define pf_varargs_2044530__4__8__8__8__8__8_ recovered_2044530
#define pf_varargs_2044530__8_ recovered_2044530
#define pf_varargs_2044530__8__4_ recovered_2044530
#define pf_varargs_2044530__8__4__4_ recovered_2044530
#define pf_varargs_2044530__8__4__4__4__4__4__4_ recovered_2044530
#define pf_varargs_2044530__8__4__4__4__4__4__8_ recovered_2044530
#define pf_varargs_2044530__8__4__4__8_ recovered_2044530
#define pf_varargs_2044530__8__8_ recovered_2044530
#define pf_varargs_2044530__8__8__4_ recovered_2044530
#define pf_varargs_2044530__8__8__4__4_ recovered_2044530
#define pf_varargs_2044530__8__8__4__4__4__4_ recovered_2044530
#define pf_varargs_2044530__8__8__8_ recovered_2044530
#define pf_varargs_2044530__8__8__8__8_ recovered_2044530
#define pf_varargs_2044530___ recovered_2044530
#define pf_varargs_209c3e0__4_ recovered_209c3e0
#define pf_varargs_209c3e0__8_ recovered_209c3e0
#define pf_varargs_209c3e0__8__4_ recovered_209c3e0
#define pf_varargs_209c3e0__8__4__8_ recovered_209c3e0
#define pf_varargs_209c3e0__8__8_ recovered_209c3e0
#define pf_varargs_209c3e0___ recovered_209c3e0
#define pf_varargs_20e8f50__4__4__4__4__4__4__4__4__4__4_ recovered_20e8f50
#define pf_varargs_20e8f50__4__8_ recovered_20e8f50
#define pf_varargs_20e8f50___ recovered_20e8f50


_Static_assert(sizeof(pf_kernel_value)==64,"kernel value layout");

typedef union pf_scalar32 { int integer; float number; unsigned int bits; } pf_scalar32;

typedef union pf_argument { char *text; int integer; float number; unsigned long long bits; } pf_argument;

#include "workspace.h"

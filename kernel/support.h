/* Permafrost 0.6; Pooka's Free Software License. */
#pragma once
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
typedef unsigned char byte;
typedef unsigned char uchar;
typedef signed char sbyte;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
#if defined(__x86_64__) && !defined(__ILP32__)
typedef long double longdouble;
typedef __uint128_t undefined16;
typedef __uint128_t uint128;
typedef __uint128_t uint16;
static inline uint128 divpd(uint128 a,uint128 b) {
    union { uint128 bits; double lane[2]; } x={.bits=a},y={.bits=b},z;
    z.lane[0]=x.lane[0]/y.lane[0];z.lane[1]=x.lane[1]/y.lane[1];return z.bits;
}
static inline uint128 divps(uint128 a,uint128 b) {
    union {uint128 bits;float lane[4];} x={.bits=a},y={.bits=b},z;
    for(unsigned i=0;i<4;++i) z.lane[i]=x.lane[i]/y.lane[i];return z.bits;
}
static inline uint128 maxpd(uint128 a,uint128 b) {
    union {uint128 bits;double lane[2];} x={.bits=a},y={.bits=b},z;
    for(unsigned i=0;i<2;++i) z.lane[i]=x.lane[i]>y.lane[i]?x.lane[i]:y.lane[i];return z.bits;
}
static inline unsigned movmskps(uintptr_t ignored,uint128 value) {
    union {uint128 bits;uint32_t lane[4];} x={.bits=value};unsigned result=0;
    for(unsigned i=0;i<4;++i) result|=(x.lane[i]>>31)<<i;return result;
}
struct pf_uint96 {uint128 pf_payload_bits:96;} __attribute__((packed));
#define PF_PART12(object,offset) (((struct pf_uint96 *)((uint8_t *)&(object)+(offset)))->pf_payload_bits)
#define SUB164(a,b) ((uint32_t)((uint128)(a)>>((b)*8)))
#define SEXT816(a) ((__uint128_t)(__int128)(int64_t)(a))
#define CONCAT88(a,b) (((__uint128_t)(uint64_t)(a)<<64)|(uint64_t)(b))
#define ZEXT816(a) ((__uint128_t)(uint64_t)(a))
#define PF_PART8(value, offset) (*(uint64_t *)((uint8_t *)&(value)+(offset)))
#else
typedef double longdouble;
#endif
typedef unsigned long long ulonglong;
typedef long long longlong;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined3;
typedef unsigned int undefined4;
typedef unsigned long long undefined6;
typedef unsigned long long undefined8;
typedef unsigned long long undefined7;
typedef long long int7;
typedef int int3;
typedef unsigned int uint3;
typedef long double float10;
#if defined(PF_MS_ABI) && defined(__x86_64__)
typedef uintptr_t __attribute__((ms_abi)) code();
#else
typedef uintptr_t code();
#endif
__attribute__((noreturn)) static inline uintptr_t halt_baddata(void) {__builtin_trap();}
#define CONCAT11(a,b) (((uint16_t)(a)<<8)|(uint8_t)(b))
#define CONCAT12(a,b) (((uint32_t)(a)<<16)|(uint16_t)(b))
#define CONCAT13(a,b) (((uint32_t)(a)<<24)|((uint32_t)(b)&0xffffffU))
#define CONCAT21(a,b) (((uint32_t)(a)<<8)|(uint8_t)(b))
#define CONCAT22(a,b) (((uint32_t)(a)<<16)|(uint16_t)(b))
#define CONCAT31(a,b) (((uint32_t)(a)<<8)|(uint8_t)(b))
#define CONCAT44(a,b) (((uint64_t)PF_RAW32(a)<<32)|PF_RAW32(b))
#define CONCAT14(a,b) (((uint64_t)(uint8_t)(a)<<32)|(uint32_t)(b))
#define CONCAT35(a,b) (((uint64_t)(a)<<40)|((uint64_t)(b)&0xffffffffffULL))
#define CONCAT34(a,b) (((uint64_t)(a)<<32)|(uint32_t)(b))
#define SUB42(a,b) ((uint16_t)((uint32_t)(a)>>((b)*8)))
#define CONCAT71(a,b) (((uint64_t)(a)<<8)|(uint8_t)(b))
#define SUB84(a,b) ((uint32_t)(PF_RAW64(a)>>((b)*8)))
static inline uint32_t (SUB84)(uint64_t value,unsigned offset) {return (uint32_t)(value>>(offset*8));}
#define ZEXT48(a) ((uint64_t)(uint32_t)(a))
#define CARRY4(a,b) ((uint32_t)(a) > UINT32_MAX-(uint32_t)(b))
#define SBORROW1(a,b) (((int8_t)(a)<0) != ((int8_t)(b)<0) && (((int8_t)((uint8_t)(a)-(uint8_t)(b))<0) != ((int8_t)(a)<0)))
#define SUB41(a,b) ((uint8_t)((uint32_t)(a)>>((b)*8)))
#define SUB81(a,b) ((uint8_t)((uint64_t)(a)>>((b)*8)))
#define PF_PART1(value, offset) (*(uint8_t *)((uint8_t *)&(value)+(offset)))
#define PF_PART2(value, offset) (*(uint16_t *)((uint8_t *)&(value)+(offset)))
#define PF_PART4(value, offset) (*(uint32_t *)((uint8_t *)&(value)+(offset)))
struct pf_uint24 { unsigned int pf_payload_bits:24; } __attribute__((packed));
#define PF_PART3(object, offset) (((struct pf_uint24 *)((uint8_t *)&(object)+(offset)))->pf_payload_bits)
struct pf_uint56 { unsigned long long pf_payload_bits:56; } __attribute__((packed));
#define PF_PART7(object, offset) (((struct pf_uint56 *)((uint8_t *)&(object)+(offset)))->pf_payload_bits)
static inline char *builtin_strncpy(char *out, const char *in, size_t count) {
    char *start = out;
    while (count && *in) { *out++ = *in++; --count; }
    while (count--) *out++ = 0;
    return start;
}

static inline byte in(ushort port) {
    byte value;
    __asm__ volatile ("inb %1, %0" : "=a"(value) : "Nd"(port));
    return value;
}
static inline void out(ushort port, uint value) {
    __asm__ volatile ("outb %0, %1" :: "a"((byte)value), "Nd"(port));
}
static inline void halt(void) { __asm__ volatile ("hlt"); }
static inline long double pf_round(long double value) {
    long double result;
    uint16_t previous;
    __asm__ volatile ("fnstcw %0" : "=m"(previous));
    uint16_t truncate = previous | 0x0c00;
    __asm__ volatile ("fldcw %2; frndint; fldcw %3" : "=t"(result)
                      : "0"(value), "m"(truncate), "m"(previous));
    return result;
}
#define ROUND(value) pf_round(value)
#define NAN(value) __builtin_isnan(value)
static inline uint16_t pf_fpu_control(void) { uint16_t value; __asm__ volatile ("fnstcw %0" : "=m"(value)); return value; }
static inline uint32_t pf_float_bits(float value) { union { float f; uint32_t u; } bits = { .f = value }; return bits.u; }
static inline uint32_t pf_word_bits(uintptr_t value) { return (uint32_t)value; }
#define PF_RAW32(value) _Generic((value), float: pf_float_bits, default: pf_word_bits)(value)
static inline float pf_bits_float(uint32_t value) { union { float f; uint32_t u; } bits = { .u = value }; return bits.f; }
static inline uint64_t pf_double_bits(double value) { union { double f; uint64_t u; } bits = { .f = value }; return bits.u; }
static inline double pf_bits_double(uint64_t value) { union { double f; uint64_t u; } bits = { .u = value }; return bits.f; }
static inline uint64_t pf_integer_bits(uint64_t value) { return value; }
#define PF_RAW64(value) _Generic((value), double: pf_double_bits, default: pf_integer_bits)(value)
#define FUN_00020023 ((uint (*)(void))0x20023)
#define FUN_0002010a ((uint (*)(void))0x2010a)
#define FUN_00020222 ((uint (*)(void))0x20222)
#define FUN_0002037d ((uint (*)(void))0x2037d)
#define FUN_000204b0 ((uint (*)(void))0x204b0)
#define FUN_0002079d ((uint (*)(void))0x2079d)
#define FUN_0002085e ((uint (*)(void))0x2085e)
#define FUN_0002069f ((uint (*)(uint))0x2069f)

/* Terminal UD2 emitted by the reference exception runtime. */
static inline uintptr_t invalidInstructionException(void) { __builtin_trap(); }

struct pf_uint40 { unsigned long long pf_payload_bits:40; } __attribute__((packed));
#define PF_PART5(object, offset) (((struct pf_uint40 *)((uint8_t *)&(object)+(offset)))->pf_payload_bits)
#define SUB85(value, offset) ((PF_RAW64(value) >> ((offset)*8)) & 0xffffffffffULL)

#define SBORROW4(a,b) (((((uint32_t)(a)^(uint32_t)(b)) & ((uint32_t)(a)^((uint32_t)(a)-(uint32_t)(b))))>>31)!=0)
#define SCARRY4(a,b) (((~((uint32_t)(a)^(uint32_t)(b)) & ((uint32_t)(a)^((uint32_t)(a)+(uint32_t)(b))))>>31)!=0)

#define CONCAT53(a,b) (((uint64_t)(a)<<24)|((uint64_t)(b)&0xffffffU))
#define CARRY8(a,b) ((uint64_t)(a)>UINT64_MAX-(uint64_t)(b))
static inline int SBORROW8(uint64_t a,uint64_t b) { int64_t r;return __builtin_sub_overflow((int64_t)a,(int64_t)b,&r); }
static inline int SCARRY8(uint64_t a,uint64_t b) { int64_t r;return __builtin_add_overflow((int64_t)a,(int64_t)b,&r); }

typedef uint64_t uint6;
typedef uint64_t uint7;
typedef uint64_t undefined5;
typedef int64_t int6;
typedef struct pf_point {double x,y;} pf_point;
typedef struct pf_affine {double a,b,c,d,e,f;} pf_affine;
#define CONCAT15(a,b) (((uint64_t)(uint8_t)(a)<<40)|((uint64_t)(b)&0xffffffffffULL))
#define CONCAT16(a,b) (((uint64_t)(uint8_t)(a)<<48)|((uint64_t)(b)&0xffffffffffffULL))
#define CONCAT26(a,b) (((uint64_t)(uint16_t)(a)<<48)|((uint64_t)(b)&0xffffffffffffULL))
#define CONCAT62(a,b) (((uint64_t)(a)<<16)|(uint16_t)(b))
struct pf_uint48 {uint64_t pf_payload_bits:48;} __attribute__((packed));
#define PF_PART6(object,offset) (((struct pf_uint48 *)((uint8_t *)&(object)+(offset)))->pf_payload_bits)
#define CONCAT17(a,b) (((uint64_t)(uint8_t)(a)<<56)|((uint64_t)(b)&0xffffffffffffffULL))
#define CONCAT43(a,b) (((uint64_t)(uint32_t)(a)<<24)|((uint64_t)(b)&0xffffffULL))

#if defined(__x86_64__) && defined(__ILP32__)
/* The shared runtimes retain their original packed printf argument stream.
 * x86-64 passes variadic arguments in registers, so marshal that stream using
 * the compiler's va_arg implementation instead of assuming an i386 stack. */
static inline unsigned pf_pack_i386_arguments(uint8_t *out,unsigned capacity,
                                             const char *format,__builtin_va_list args) {
    unsigned used=0;
    for (const char *p=format;*p;++p) {
        if (*p!='%') continue;
        if (*++p=='%') continue;
        while (*p=='-'||*p=='+'||*p==' '||*p=='#'||*p=='0') ++p;
        for (unsigned phase=0;phase<2;++phase) {
            if (*p=='*') {
                uint32_t width=(uint32_t)__builtin_va_arg(args,int);
                if (capacity-used<4) return 0;
                for (unsigned i=0;i<4;++i) out[used++]=(uint8_t)(width>>(i*8));
                ++p;
            } else while (*p>='0'&&*p<='9') ++p;
            if (phase==0&&*p=='.') ++p; else break;
        }
        unsigned wide=0,extended=0;
        if (*p=='l') {++p;if (*p=='l') {wide=1;++p;}}
        else if (*p=='j') {wide=1;++p;}
        else if (*p=='L') {extended=1;++p;}
        else if (*p=='h') {++p;if (*p=='h') ++p;}
        else if (*p=='z'||*p=='t') ++p;
        uint64_t value=0;unsigned bytes=4;
        if (*p=='f'||*p=='F'||*p=='e'||*p=='E'||*p=='g'||*p=='G'||*p=='a'||*p=='A') {
            union {double number;uint64_t bits;} number;
            number.number=extended?(double)__builtin_va_arg(args,long double):__builtin_va_arg(args,double);
            value=number.bits;bytes=8;
        } else if (*p=='s'||*p=='p'||*p=='n') value=(uintptr_t)__builtin_va_arg(args,void *);
        else if (*p=='d'||*p=='i'||*p=='u'||*p=='o'||*p=='x'||*p=='X'||*p=='c') {
            if (wide) {value=__builtin_va_arg(args,unsigned long long);bytes=8;}
            else value=__builtin_va_arg(args,unsigned int);
        } else {if (!*p) break;continue;}
        if (capacity-used<bytes) return 0;
        for (unsigned i=0;i<bytes;++i) out[used++]=(uint8_t)(value>>(i*8));
    }
    return 1;
}
#endif
#define CONCAT24(a,b) (((uint64_t)(uint16_t)(a)<<32)|(uint32_t)(b))
static inline uint32_t *pf_cpuid_words(uint32_t leaf) {
    static uint32_t words[4];
    __asm__ volatile("cpuid":"=a"(words[0]),"=b"(words[1]),"=c"(words[2]),"=d"(words[3]):"a"(leaf),"c"(0));
    return words;
}
#define cpuid_basic_info(leaf) pf_cpuid_words(leaf)
#define cpuid_serial_info(leaf) pf_cpuid_words(leaf)
#define cpuid_Version_info(leaf) pf_cpuid_words(leaf)

#define cpuid(leaf) pf_cpuid_words(leaf)
#define cpuid_Architectural_Performance_Monitoring_info(leaf) pf_cpuid_words(leaf)
#define cpuid_Deterministic_Cache_Parameters_info(leaf) pf_cpuid_words(leaf)
#define cpuid_Direct_Cache_Access_info(leaf) pf_cpuid_words(leaf)
#define cpuid_Extended_Feature_Enumeration_info(leaf) pf_cpuid_words(leaf)
#define cpuid_Extended_Topology_info(leaf) pf_cpuid_words(leaf)
#define cpuid_MONITOR_MWAIT_Features_info(leaf) pf_cpuid_words(leaf)
#define cpuid_Processor_Extended_States_info(leaf) pf_cpuid_words(leaf)
#define cpuid_Quality_of_Service_info(leaf) pf_cpuid_words(leaf)
#define cpuid_Thermal_Power_Management_info(leaf) pf_cpuid_words(leaf)
#define cpuid_brand_part1_info(leaf) pf_cpuid_words(leaf)
#define cpuid_brand_part2_info(leaf) pf_cpuid_words(leaf)
#define cpuid_brand_part3_info(leaf) pf_cpuid_words(leaf)
#define cpuid_cache_tlb_info(leaf) pf_cpuid_words(leaf)

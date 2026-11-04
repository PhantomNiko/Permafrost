/* Permafrost 0.6; Pooka's Free Software License. */
#pragma once
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
typedef unsigned char byte;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef double longdouble;
typedef unsigned long long ulonglong;
typedef long long longlong;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined3;
typedef unsigned int undefined4;
typedef unsigned long long undefined6;
typedef unsigned long long undefined8;
typedef int int3;
typedef unsigned int uint3;
typedef long double float10;
typedef unsigned int code();
#define CONCAT11(a,b) (((uint16_t)(a)<<8)|(uint8_t)(b))
#define CONCAT12(a,b) (((uint32_t)(a)<<16)|(uint16_t)(b))
#define CONCAT13(a,b) (((uint32_t)(a)<<24)|((uint32_t)(b)&0xffffffU))
#define CONCAT21(a,b) (((uint32_t)(a)<<8)|(uint8_t)(b))
#define CONCAT22(a,b) (((uint32_t)(a)<<16)|(uint16_t)(b))
#define CONCAT31(a,b) (((uint32_t)(a)<<8)|(uint8_t)(b))
#define CONCAT44(a,b) (((uint64_t)(a)<<32)|(uint32_t)(b))
#define CONCAT14(a,b) (((uint64_t)(uint8_t)(a)<<32)|(uint32_t)(b))
#define CONCAT35(a,b) (((uint64_t)(a)<<40)|((uint64_t)(b)&0xffffffffffULL))
#define SUB42(a,b) ((uint16_t)((uint32_t)(a)>>((b)*8)))
#define CONCAT71(a,b) (((uint64_t)(a)<<8)|(uint8_t)(b))
#define SUB84(a,b) ((uint32_t)(PF_RAW64(a)>>((b)*8)))
#define ZEXT48(a) ((uint64_t)(uint32_t)(a))
#define CARRY4(a,b) ((uint32_t)(a) > UINT32_MAX-(uint32_t)(b))
#define SBORROW1(a,b) (((int8_t)(a)<0) != ((int8_t)(b)<0) && (((int8_t)((uint8_t)(a)-(uint8_t)(b))<0) != ((int8_t)(a)<0)))
#define SUB41(a,b) ((uint8_t)((uint32_t)(a)>>((b)*8)))
#define SUB81(a,b) ((uint8_t)((uint64_t)(a)>>((b)*8)))
#define PF_PART1(value, offset) (*(uint8_t *)((uint8_t *)&(value)+(offset)))
#define PF_PART2(value, offset) (*(uint16_t *)((uint8_t *)&(value)+(offset)))
#define PF_PART4(value, offset) (*(uint32_t *)((uint8_t *)&(value)+(offset)))
struct pf_uint24 { unsigned int value:24; } __attribute__((packed));
#define PF_PART3(object, offset) (((struct pf_uint24 *)((uint8_t *)&(object)+(offset)))->value)
struct pf_uint56 { unsigned long long value:56; } __attribute__((packed));
#define PF_PART7(object, offset) (((struct pf_uint56 *)((uint8_t *)&(object)+(offset)))->value)
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

struct pf_uint40 { unsigned long long value:40; } __attribute__((packed));
#define PF_PART5(object, offset) (((struct pf_uint40 *)((uint8_t *)&(object)+(offset)))->value)
#define SUB85(value, offset) ((pf_double_bits(value) >> ((offset)*8)) & 0xffffffffffULL)

#define SBORROW4(a,b) (((((uint32_t)(a)^(uint32_t)(b)) & ((uint32_t)(a)^((uint32_t)(a)-(uint32_t)(b))))>>31)!=0)
#define SCARRY4(a,b) (((~((uint32_t)(a)^(uint32_t)(b)) & ((uint32_t)(a)^((uint32_t)(a)+(uint32_t)(b))))>>31)!=0)

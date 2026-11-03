/* Permafrost 0.1; Pooka's Free Software License. */
#pragma once
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
typedef unsigned char byte;
typedef unsigned short ushort;
typedef unsigned int uint;
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
#define SUB41(a,b) ((uint8_t)((uint32_t)(a)>>((b)*8)))
#define SUB81(a,b) ((uint8_t)((uint64_t)(a)>>((b)*8)))
#define PF_PART2(value, offset) (*(uint16_t *)((uint8_t *)&(value)+(offset)))
#define PF_PART4(value, offset) (*(uint32_t *)((uint8_t *)&(value)+(offset)))
struct pf_uint24 { unsigned int value:24; } __attribute__((packed));
#define PF_PART3(object, offset) (((struct pf_uint24 *)((uint8_t *)&(object)+(offset)))->value)

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
#define FUN_00020023 ((uint (*)(void))0x20023)
#define FUN_000200ce ((uint (*)(void))0x200ce)
#define FUN_000201aa ((uint (*)(void))0x201aa)
#define FUN_000202c9 ((uint (*)(void))0x202c9)
#define FUN_000203bb ((uint (*)(void))0x203bb)
#define FUN_00020440 ((uint (*)(void))0x20440)

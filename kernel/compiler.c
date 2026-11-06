/* Permafrost freestanding compiler support; Pooka's Free Software License.
 * Freestanding compiler support, using the recovered long-division algorithm.
 */
#include <stdint.h>
#if defined(__SIZEOF_INT128__)
typedef union { __uint128_t all; struct { uint64_t low,high; } word; } Wide128;
__uint128_t __ashlti3(__uint128_t value,int shift) {
    Wide128 in={.all=value},out={.all=0};
    if(shift<=0)return value;
    if(shift>=128)return 0;
    if(shift>=64)out.word.high=in.word.low<<(shift-64);
    else {out.word.high=(in.word.high<<shift)|(in.word.low>>(64-shift));out.word.low=in.word.low<<shift;}
    return out.all;
}
__uint128_t __lshrti3(__uint128_t value,int shift) {
    Wide128 in={.all=value},out={.all=0};
    if(shift<=0)return value;
    if(shift>=128)return 0;
    if(shift>=64)out.word.low=in.word.high>>(shift-64);
    else {out.word.low=(in.word.low>>shift)|(in.word.high<<(64-shift));out.word.high=in.word.high>>shift;}
    return out.all;
}
__int128 __ashrti3(__int128 value,int shift) {
    Wide128 in={.all=(__uint128_t)value},out;
    if(shift<=0)return value;
    if(shift>=128)return value<0?-1:0;
    out.word.high=(uint64_t)((int64_t)in.word.high>>(shift>=64?63:shift));
    if(shift>=64)out.word.low=(uint64_t)((int64_t)in.word.high>>(shift-64));
    else out.word.low=(in.word.low>>shift)|(in.word.high<<(64-shift));
    return (__int128)out.all;
}
#endif
#ifndef PF_COMPILER_WIDE_ONLY
#include <stddef.h>
extern void *pf_memcpy(void *, const void *, size_t);
extern void *pf_memset(void *, int, size_t);
extern void *pf_memmove(void *, const void *, size_t);
void *memcpy(void *out, const void *in, size_t count) { return pf_memcpy(out, in, count); }
void *memset(void *out, int value, size_t count) { return pf_memset(out, value, count); }
void *memmove(void *out, const void *in, size_t count) { return pf_memmove(out, in, count); }
void bzero(void *out, size_t count) { pf_memset(out, 0, count); }

static uint64_t divide(uint64_t numerator, uint64_t denominator, uint64_t *remainder) {
    uint64_t quotient = 0, rest = 0;
    if (denominator) {
        for (int bit = 63; bit >= 0; --bit) {
            rest = (rest << 1) | ((numerator >> bit) & 1);
            if (rest >= denominator) { rest -= denominator; quotient |= (uint64_t)1 << bit; }
        }
    }
    if (remainder) *remainder = rest;
    return quotient;
}
uint64_t __udivdi3(uint64_t a, uint64_t b) { return divide(a, b, 0); }
uint64_t __umoddi3(uint64_t a, uint64_t b) { uint64_t rest; divide(a, b, &rest); return rest; }
int64_t __divdi3(int64_t a, int64_t b) {
    uint64_t x = a < 0 ? -(uint64_t)a : (uint64_t)a;
    uint64_t y = b < 0 ? -(uint64_t)b : (uint64_t)b;
    uint64_t q = divide(x, y, 0);
    return (int64_t)((a < 0) != (b < 0) ? -q : q);
}
int64_t __moddi3(int64_t a, int64_t b) {
    uint64_t x = a < 0 ? -(uint64_t)a : (uint64_t)a;
    uint64_t y = b < 0 ? -(uint64_t)b : (uint64_t)b;
    uint64_t rest; divide(x, y, &rest);
    return (int64_t)(a < 0 ? -rest : rest);
}

typedef union { uint64_t all; struct { uint32_t low, high; } word; uint16_t half[4]; } Wide;

uint64_t __ashldi3(uint64_t value, int shift) {
    Wide in = { .all = value }, out = { .all = 0 };
    if (shift <= 0) return value;
    if (shift >= 64) return 0;
    if (shift >= 32) out.word.high = in.word.low << (shift - 32);
    else {
        out.word.high = (in.word.high << shift) | (in.word.low >> (32 - shift));
        out.word.low = in.word.low << shift;
    }
    return out.all;
}
uint64_t __lshrdi3(uint64_t value, int shift) {
    Wide in = { .all = value }, out = { .all = 0 };
    if (shift <= 0) return value;
    if (shift >= 64) return 0;
    if (shift >= 32) out.word.low = in.word.high >> (shift - 32);
    else {
        out.word.low = (in.word.low >> shift) | (in.word.high << (32 - shift));
        out.word.high = in.word.high >> shift;
    }
    return out.all;
}
int64_t __ashrdi3(int64_t value, int shift) {
    Wide in = { .all = (uint64_t)value }, out;
    if (shift <= 0) return value;
    if (shift >= 64) shift = 63;
    if (shift >= 32) {
        out.word.low = (uint32_t)((int32_t)in.word.high >> (shift - 32));
        out.word.high = (uint32_t)((int32_t)in.word.high >> 31);
    } else {
        out.word.low = (in.word.low >> shift) | (in.word.high << (32 - shift));
        out.word.high = (uint32_t)((int32_t)in.word.high >> shift);
    }
    return (int64_t)out.all;
}
uint64_t __muldi3(uint64_t a, uint64_t b) {
    Wide x = { .all = a }, y = { .all = b }, out = { .all = 0 };
    for (unsigned i = 0; i < 4; ++i) {
        uint32_t carry = 0;
        for (unsigned j = 0; j + i < 4; ++j) {
            uint32_t sum = out.half[i+j] + (uint32_t)x.half[i] * y.half[j] + carry;
            out.half[i+j] = (uint16_t)sum;
            carry = sum >> 16;
        }
    }
    return out.all;
}

/* ARM32 freestanding objects can request these compiler-runtime entry points.
 * Operate on words directly so implementing division cannot recurse through it. */
static uint32_t divide_word(uint32_t numerator, uint32_t denominator, uint32_t *remainder) {
    uint32_t quotient = 0, rest = 0;
    if (denominator) {
        for (int bit = 31; bit >= 0; --bit) {
            rest = (rest << 1) | ((numerator >> bit) & 1u);
            if (rest >= denominator) { rest -= denominator; quotient |= (uint32_t)1 << bit; }
        }
    }
    if (remainder) *remainder = rest;
    return quotient;
}
uint32_t __udivsi3(uint32_t a, uint32_t b) { return divide_word(a, b, 0); }
uint32_t __umodsi3(uint32_t a, uint32_t b) { uint32_t rest; divide_word(a, b, &rest); return rest; }
int32_t __divsi3(int32_t a, int32_t b) {
    uint32_t x = a < 0 ? -(uint32_t)a : (uint32_t)a;
    uint32_t y = b < 0 ? -(uint32_t)b : (uint32_t)b;
    uint32_t result = divide_word(x, y, 0);
    return (int32_t)((a < 0) != (b < 0) ? -result : result);
}
int32_t __modsi3(int32_t a, int32_t b) {
    uint32_t x = a < 0 ? -(uint32_t)a : (uint32_t)a;
    uint32_t y = b < 0 ? -(uint32_t)b : (uint32_t)b;
    uint32_t rest; divide_word(x, y, &rest);
    return (int32_t)(a < 0 ? -rest : rest);
}

/* Convert IEEE values without asking the compiler for the same u64 helper. */
uint64_t __fixunsdfdi(double value) {
    union {double number;uint64_t bits;} source={.number=value};
    int exponent=(int)((source.bits>>52)&2047)-1023;
    if((source.bits>>63) || exponent<0)return 0;
    if(exponent>=64)return UINT64_MAX;
    uint64_t significand=(source.bits&0xfffffffffffffULL)|0x10000000000000ULL;
    return exponent>=52?significand<<(exponent-52):significand>>(52-exponent);
}
uint64_t __fixunssfdi(float value) {
    union {float number;uint32_t bits;} source={.number=value};
    int exponent=(int)((source.bits>>23)&255)-127;
    if((source.bits>>31) || exponent<0)return 0;
    if(exponent>=64)return UINT64_MAX;
    uint64_t significand=(source.bits&0x7fffffU)|0x800000U;
    return exponent>=23?significand<<(exponent-23):significand>>(23-exponent);
}
double __floatundidf(uint64_t value) {
    return (double)(uint32_t)(value>>32)*4294967296.0+(double)(uint32_t)value;
}

#endif /* PF_COMPILER_WIDE_ONLY */

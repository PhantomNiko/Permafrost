/* Permafrost 0.3; Pooka's Free Software License.
 * Freestanding compiler support, using the recovered long-division algorithm.
 */
#include <stdint.h>
#include <stddef.h>
extern void *pf_memcpy(void *, const void *, size_t);
extern void *pf_memset(void *, int, size_t);
extern void *pf_memmove(void *, const void *, size_t);
void *memcpy(void *out, const void *in, size_t count) { return pf_memcpy(out, in, count); }
void *memset(void *out, int value, size_t count) { return pf_memset(out, value, count); }
void *memmove(void *out, const void *in, size_t count) { return pf_memmove(out, in, count); }

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

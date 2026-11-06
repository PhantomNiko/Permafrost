/* Scalar C equivalents of the recovered ARM NEON permutation effects.
 * Pooka's Free Software License. */
#pragma once
#include "support.h"

static inline uint64_t pf_neon_lane_mask(unsigned bits) {
    return bits==64?UINT64_MAX:((uint64_t)1<<bits)-1;
}
static inline int64_t pf_neon_signed_lane(uint64_t value,unsigned bits) {
    uint64_t mask=pf_neon_lane_mask(bits);
    if(value&((uint64_t)1<<(bits-1)))value|=~mask;
    return (int64_t)value;
}
static inline uint128 pf_neon_binary(uint128 left,uint128 right,unsigned element,
        unsigned operation,unsigned is_unsigned) {
    uint128 result=0;
    unsigned bits=element*8;
    uint64_t mask=pf_neon_lane_mask(bits);
    for(unsigned offset=0;offset<128;offset+=bits) {
        uint64_t a=(uint64_t)(left>>offset)&mask,b=(uint64_t)(right>>offset)&mask,value;
        if(operation==0)value=a+b;
        else if(operation==1)value=a-b;
        else if(operation==2)value=a*b;
        else if(operation==3)value=a==b?mask:0;
        else {
            int greater=is_unsigned?a>b:pf_neon_signed_lane(a,bits)>pf_neon_signed_lane(b,bits);
            value=(greater || (operation==5 && a==b))?mask:0;
        }
        result|=(uint128)(value&mask)<<offset;
    }
    return result;
}
#define VectorAdd(a,b,e) pf_neon_binary(a,b,e,0,1)
#define VectorSub(a,b,e) pf_neon_binary(a,b,e,1,1)
#define VectorMultiply(a,b,e) pf_neon_binary(a,b,e,2,1)
#define VectorCompareEqual(a,b,e) pf_neon_binary(a,b,e,3,1)
#define VectorCompareGreaterThan(a,b,e,u) pf_neon_binary(a,b,e,4,u)
#define VectorCompareGreaterThanOrEqual(a,b,e,u) pf_neon_binary(a,b,e,5,u)
#define VectorBitwiseInsertIfTrue(d,n,m) (((d)&~(m))|((n)&(m)))
#define VectorBitwiseInsertIfFalse(d,n,m) (((d)&(m))|((n)&~(m)))
#define VectorBitwiseSelect(d,n,m) (((d)&(n))|(~(d)&(m)))

static inline uint128 pf_neon_shift(uint128 value,unsigned shift,unsigned bits,
        unsigned is_unsigned,unsigned right) {
    uint128 result=0;
    uint64_t mask=pf_neon_lane_mask(bits);
    for(unsigned offset=0;offset<128;offset+=bits) {
        uint64_t lane=(uint64_t)(value>>offset)&mask,out;
        if(!right)out=shift>=bits?0:lane<<shift;
        else if(is_unsigned)out=shift>=bits?0:lane>>shift;
        else {
            int64_t signed_value=pf_neon_signed_lane(lane,bits);
            out=shift>=bits?(signed_value<0?UINT64_MAX:0):(uint64_t)(signed_value>>shift);
        }
        result|=(uint128)(out&mask)<<offset;
    }
    return result;
}
#define VectorShiftLeft(v,s,b,u) pf_neon_shift(v,s,b,u,0)
#define VectorShiftRight(v,s,b,u) pf_neon_shift(v,s,b,u,1)

static inline uint128 VectorCopyLong(uint64_t value,unsigned element,unsigned is_unsigned) {
    uint128 result=0;
    unsigned bits=element*8;
    uint64_t mask=pf_neon_lane_mask(bits),wide_mask=pf_neon_lane_mask(bits*2);
    for(unsigned i=0;i<8/element;i++) {
        uint64_t lane=(value>>(i*bits))&mask;
        if(!is_unsigned)lane=(uint64_t)pf_neon_signed_lane(lane,bits);
        result|=(uint128)(lane&wide_mask)<<(i*bits*2);
    }
    return result;
}
static inline uint64_t VectorCopyNarrow(uint128 value,unsigned element) {
    uint64_t result=0;
    unsigned bits=element*8,narrow=bits/2;
    uint64_t mask=pf_neon_lane_mask(narrow);
    for(unsigned i=0;i<16/element;i++)
        result|=((uint64_t)(value>>(i*bits))&mask)<<(i*narrow);
    return result;
}

static inline uint128 pf_neon_permute(uint128 left,uint128 right,
        unsigned element,unsigned width,unsigned operation,unsigned high) {
    uint128 result=0;
    unsigned lanes=width/element,bits=element*8;
    uint64_t mask=element==8?UINT64_MAX:((uint64_t)1<<bits)-1;
    for(unsigned i=0;i<lanes;i++) {
        unsigned index,second;
        if(operation==0) {
            index=i*2+high;second=index>=lanes;
            if(second)index-=lanes;
        } else if(operation==1) {
            index=i/2+high*(lanes/2);second=i&1;
        } else {
            index=(i/2)*2+high;second=i&1;
        }
        uint128 source=second?right:left;
        uint64_t lane=(uint64_t)(source>>(index*bits))&mask;
        result|=(uint128)lane<<(i*bits);
    }
    return result;
}

static inline uint128 pf_neon_test(uint128 left,uint128 right,unsigned element,unsigned width) {
    uint128 result=0;
    unsigned bits=element*8;
    uint128 mask=((uint128)1<<bits)-1;
    for(unsigned offset=0;offset<width*8;offset+=bits)
        if(((left&right)>>offset)&mask)result|=mask<<offset;
    return result;
}

#define PFVectorUnzipLow(a,b,e,w) pf_neon_permute(a,b,e,w,0,0)
#define PFVectorUnzipHigh(a,b,e,w) pf_neon_permute(a,b,e,w,0,1)
#define PFVectorZipLow(a,b,e,w) pf_neon_permute(a,b,e,w,1,0)
#define PFVectorZipHigh(a,b,e,w) pf_neon_permute(a,b,e,w,1,1)
#define PFVectorTransposeLow(a,b,e,w) pf_neon_permute(a,b,e,w,2,0)
#define PFVectorTransposeHigh(a,b,e,w) pf_neon_permute(a,b,e,w,2,1)
#define PFVectorTest(a,b,e,w) pf_neon_test(a,b,e,w)

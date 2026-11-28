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

static inline void pf_neon_saturated(void) {
#if defined(__arm__)
    unsigned status;
    __asm__ volatile("vmrs %0,fpscr":"=r"(status));
    status|=1u<<27;
    __asm__ volatile("vmsr fpscr,%0"::"r"(status):"memory");
#endif
}
static inline uint128 pf_neon_shift_counts(uint128 value,uint128 counts,
        unsigned element,unsigned input_unsigned,unsigned output_unsigned,
        unsigned saturating) {
    unsigned bits=element*8,saturated=0;
    uint64_t mask=pf_neon_lane_mask(bits);
    uint128 result=0;
    for(unsigned offset=0;offset<128;offset+=bits) {
        uint64_t lane=(uint64_t)(value>>offset)&mask,out;
        int shift=(int8_t)(counts>>offset);
        if(shift<0) {
            unsigned amount=(unsigned)-shift;
            if(input_unsigned)out=amount>=bits?0:lane>>amount;
            else {
                int64_t signed_value=pf_neon_signed_lane(lane,bits);
                out=amount>=bits?(signed_value<0?mask:0):(uint64_t)(signed_value>>amount);
            }
        } else if(!saturating)out=(unsigned)shift>=bits?0:lane<<shift;
        else {
            pf_int128 number=input_unsigned?(pf_int128)lane:
                (pf_int128)pf_neon_signed_lane(lane,bits);
            pf_int128 maximum=output_unsigned?(pf_int128)mask:(pf_int128)(mask>>1);
            pf_int128 minimum=output_unsigned?0:-maximum-1;
            if((unsigned)shift>=bits) {
                if(number) {saturated=1;number=number<0?minimum:maximum;}
            } else {
                number*=((pf_int128)1<<shift);
                if(number>maximum){number=maximum;saturated=1;}
                if(number<minimum){number=minimum;saturated=1;}
            }
            out=(uint64_t)number;
        }
        result|=(uint128)(out&mask)<<offset;
    }
    if(saturated)pf_neon_saturated();
    return result;
}
#define PFVectorShiftByLane(v,s,e,u) pf_neon_shift_counts(v,s,e,u,u,0)
#define PFVectorSaturatingShiftByLane(v,s,e,u) pf_neon_shift_counts(v,s,e,u,u,1)
static inline uint128 pf_neon_shift_immediate_saturated(uint128 value,unsigned shift,
        unsigned bits,unsigned input_unsigned,unsigned output_unsigned) {
    uint128 counts=0;
    for(unsigned offset=0;offset<128;offset+=bits)counts|=(uint128)shift<<offset;
    return pf_neon_shift_counts(value,counts,bits/8,input_unsigned,output_unsigned,1);
}
#define PFVectorSaturatingShiftLeft(v,s,b,u) pf_neon_shift_immediate_saturated(v,s,b,u,u)
#define PFVectorSaturatingUnsignedShiftLeft(v,s,b,u) pf_neon_shift_immediate_saturated(v,s,b,0,1)
static inline uint128 VectorShiftRightAccumulate(uint128 left,uint128 right,
        unsigned shift,unsigned bits,unsigned is_unsigned) {
    return pf_neon_binary(left,pf_neon_shift(right,shift,bits,is_unsigned,1),bits/8,0,1);
}

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
static inline uint128 PFVectorAddLong(uint64_t left,uint64_t right,
        unsigned element,unsigned is_unsigned) {
    return pf_neon_binary(VectorCopyLong(left,element,is_unsigned),
                          VectorCopyLong(right,element,is_unsigned),element*2,0,1);
}
static inline uint128 PFVectorAddWide(uint128 left,uint64_t right,
        unsigned element,unsigned is_unsigned) {
    return pf_neon_binary(left,VectorCopyLong(right,element,is_unsigned),element*2,0,1);
}
static inline uint128 VectorShiftLongLeft(uint64_t value,unsigned shift,
        unsigned bits,unsigned is_unsigned) {
    return pf_neon_shift(VectorCopyLong(value,bits/8,is_unsigned),shift,bits*2,1,0);
}
static inline uint128 FloatVectorNeg(uint128 value,unsigned kind,unsigned element) {
    if(kind==1)return pf_neon_binary(0,value,element,1,1);
    uint128 result=value;
    for(unsigned bit=element*8-1;bit<128;bit+=element*8)result^=(uint128)1<<bit;
    return result;
}
static inline uint64_t PFVectorTableLookup(uint64_t indices,uint64_t first,
        uint64_t second,uint64_t third,uint64_t fourth,unsigned count,uint64_t fallback) {
    uint64_t words[4]={first,second,third,fourth},result=0;
    for(unsigned i=0;i<8;i++) {
        unsigned index=(unsigned char)(indices>>(i*8));
        unsigned char value=index<count*8?
            (unsigned char)(words[index/8]>>((index%8)*8)):
            (unsigned char)(fallback>>(i*8));
        result|=(uint64_t)value<<(i*8);
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

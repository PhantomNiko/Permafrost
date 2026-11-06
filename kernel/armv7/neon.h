/* Scalar C equivalents of the recovered ARM NEON permutation effects.
 * Pooka's Free Software License. */
#pragma once
#include "../support.h"

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

/* Word division without a hosted compiler runtime. Pooka's Free Software License. */
#ifndef PF_WORD_DIVIDE_H
#define PF_WORD_DIVIDE_H
#include <stdint.h>
static uint32_t pf_word_divide(uint32_t value,uint32_t divisor,uint32_t *remainder){
    uint32_t quotient=0,rest=0;
    if(divisor)for(int bit=31;bit>=0;--bit){
        unsigned carry=rest>>31;rest=(rest<<1)|((value>>bit)&1u);
        if(carry||rest>=divisor){rest-=divisor;quotient|=1u<<bit;}
    }
    if(remainder)*remainder=rest;
    return quotient;
}
static uint32_t pf_word_signed_divide(uint32_t a,uint32_t b,int remainder){
    uint32_t rest,q=pf_word_divide((int32_t)a<0?0u-a:a,(int32_t)b<0?0u-b:b,&rest);
    if(remainder)return (int32_t)a<0?0u-rest:rest;
    return (int32_t)(a^b)<0?0u-q:q;
}
#endif

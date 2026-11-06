/* Native integer-exponent power semantics. Pooka's Free Software License. */
#ifndef PF_NUMBERS_H
#define PF_NUMBERS_H
#include <stdint.h>
static inline double pf_native_power(double base,double exponent) {
    if(!(exponent>=-2147483648.0 && exponent<=2147483647.0))return 0.0;
    int32_t signed_power=(int32_t)exponent;
    if((double)signed_power!=exponent)return 0.0;
    uint32_t power=signed_power<0?0u-(uint32_t)signed_power:(uint32_t)signed_power;
    double result=1.0;
    while(power){if(power&1)result*=base;base*=base;power>>=1;}
    return signed_power<0?1.0/result:result;
}
#endif

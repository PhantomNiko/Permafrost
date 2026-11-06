/* Native integer-exponent power semantics. Pooka's Free Software License. */
#ifndef PF_NUMBERS_H
#define PF_NUMBERS_H
static inline double pf_cosine_polynomial(double value) {
    const double pi=3.141592653589793,tau=6.283185307179586;
    while(value>pi)value-=tau;
    while(value< -pi)value+=tau;
    double square=value*value,fourth=square*square,sixth=square*fourth;
    return ((-0.5*square+1.0)+fourth/24.0)-sixth/720.0;
}
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

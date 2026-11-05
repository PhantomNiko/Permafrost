/* Recovered r147 compiler-helper semantics. Pooka's Free Software License.
 * Accumulate in the reference order, including its out-of-range behavior. */
#include <stdint.h>

static uint64_t magnitude(double value) {
    uint64_t result=0;
    double place=9223372036854775808.0;
    for(int bit=63;bit>=0;--bit) {
        if(value>=place){value-=place;result|=1ULL<<bit;}
        place*=0.5;
    }
    return result;
}
uint64_t __fixunsdfdi(double value) {
    return value<=0.0?0:magnitude(value);
}
int64_t __fixdfdi(double value) {
    if(value==0.0)return 0;
    uint64_t result=magnitude(value<0.0?-value:value);
    return (int64_t)(value>=0.0?result:0ULL-result);
}
double __floatundidf(uint64_t value) {
    double result=0.0,place=1.0;
    while(value) {
        if(value&1)result+=place;
        place+=place;value>>=1;
    }
    return result;
}
double __floatdidf(int64_t value) {
    uint64_t bits=(uint64_t)value;
    double result=__floatundidf(value<0?0ULL-bits:bits);
    return value<0?-result:result;
}

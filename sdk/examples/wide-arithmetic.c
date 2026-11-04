/* Permafrost 0.6; compile with --runtime. Pooka's Free Software License. */
#include <permafrost.h>
extern void *memcpy(void *,const void *,size_t);
static volatile uint64_t denominator=1000003;
static volatile unsigned shift=37;
int main(void) {
    uint64_t value=0xfedcba9876543210ULL;
    uint64_t quotient=value/denominator,remainder=value%denominator;
    if(quotient*denominator+remainder!=value || remainder>=denominator)return 0;
    if((value>>shift)!=0x7f6e5d4ULL)return 0;
    unsigned char source[512],copy[512];
    for(unsigned i=0;i<sizeof(source);++i)source[i]=(unsigned char)(i*7);
    memcpy(copy,source,sizeof(source));
    for(unsigned i=0;i<sizeof(source);++i)if(copy[i]!=source[i])return 0;
    pf_log("PF-RUNTIME-PASS");
    return 1;
}

/* Cross-architecture compiler-runtime execution probe.
 * Pooka's Free Software License. */
#include <stdint.h>
#include <stddef.h>
extern int pf_native_vsnprintf(char *,size_t,const char *,void *);
static int format(char *out,size_t size,const char *pattern,...) {
 __builtin_va_list args;__builtin_va_start(args,pattern);
 int result=pf_native_vsnprintf(out,size,pattern,(void *)args);
 __builtin_va_end(args);return result;
}
static int same(const char *left,const char *right) {while(*left && *left==*right){left++;right++;}return *left==*right;}
volatile uint32_t small_a=4000000000u,small_b=37;
volatile int32_t signed_a=-2147483647,signed_b=31;
volatile uint64_t big_a=0xfedcba9876543210ull,big_b=0x1234567ull;
volatile double fraction64=4294967295.75,large64=18446744073709549568.0;
volatile float large32=4294967296.0f,fraction32=1.5f;
volatile uint64_t maximum=0xffffffffffffffffULL;
volatile uint32_t high_a=0xffffffffU,high_b=0x80000000U;
#if defined(__SIZEOF_INT128__)
extern __uint128_t __ashlti3(__uint128_t,int);
extern __uint128_t __lshrti3(__uint128_t,int);
extern __int128 __ashrti3(__int128,int);
#endif
int main(void) {
#if defined(__SIZEOF_INT128__)
 __uint128_t wide=((__uint128_t)0xfedcba9876543210ULL<<64)|0x0123456789abcdefULL;
 if(__ashlti3(wide,64)!=((__uint128_t)0x0123456789abcdefULL<<64))return 12;
 if(__lshrti3(wide,64)!=0xfedcba9876543210ULL)return 13;
 if(__lshrti3(wide,127)!=1 || __ashlti3(wide,128)!=0)return 14;
 if(__ashrti3((__int128)wide,127)!=-1)return 15;
 if(__ashlti3(wide,0)!=wide || __lshrti3(wide,0)!=wide)return 16;
#endif
 if(small_a/small_b!=108108108u || small_a%small_b!=4u)return 1;
 if(signed_a/signed_b!=-69273666 || signed_a%signed_b!=-1)return 2;
 if(big_a/big_b!=0xe0000069e0ull || big_a%big_b!=0x38f0ull)return 3;
 if((uint64_t)fraction64!=0xffffffffULL || (uint64_t)large64!=0xfffffffffffff800ULL)return 4;
 if((uint64_t)large32!=0x100000000ULL || (uint64_t)fraction32!=1)return 5;
 if((double)maximum!=18446744073709551616.0)return 6;
 if(high_a/high_b!=1 || high_a%high_b!=0x7fffffffU)return 7;
 char out[96];
 if(format(out,sizeof(out),"%s %d %X %u","ice",-42,0xabcdU,999U)!=16 || !same(out,"ice -42 ABCD 999"))return 8;
 if(format(out,sizeof(out),"%.2f %f",1.5,-2.25)!=18 || !same(out,"1.500000 -2.250000"))return 9;
 if(format(out,5,"%s","snowfall")!=8 || !same(out,"snow"))return 10;
 if(format(out,sizeof(out),"%08X %q %p",0xaU,(void *)0x1234)!=10 || !same(out,"A ? 0x1234"))return 11;
 return 42;
}

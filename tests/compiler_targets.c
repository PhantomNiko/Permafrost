/* Cross-architecture compiler-runtime execution probe.
 * Pooka's Free Software License. */
#include <stdint.h>
#include <permafrost.h>
#include "../kernel/support.h"
#include "../kernel/value.h"
#include "../kernel/workspace.h"
#include <stddef.h>
_Static_assert(sizeof(pf_kernel_value)==(sizeof(void *)==8?64:36),"native interpreter value size");
_Static_assert(offsetof(pf_kernel_value,text)==(sizeof(void *)==8?16:12),"native interpreter text slot");
_Static_assert(offsetof(pf_kernel_value,array)==(sizeof(void *)==8?48:28),"native interpreter array slot");
_Static_assert(sizeof(pf_workspace)==sizeof(pf_kernel_value),"native reused value storage");
_Static_assert(offsetof(pf_string_builder,data)==2*sizeof(void *),"native builder data slot");
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
volatile double negative_fraction64=-4294967295.75;
volatile float negative_large32=-4294967296.0f;
#if defined(__SIZEOF_INT128__)
extern __uint128_t __ashlti3(__uint128_t,int);
extern __uint128_t __lshrti3(__uint128_t,int);
extern __int128 __ashrti3(__int128,int);
extern __uint128_t __udivmodti4(__uint128_t,__uint128_t,__uint128_t *);
extern __uint128_t __udivti3(__uint128_t,__uint128_t);
extern __uint128_t __umodti3(__uint128_t,__uint128_t);
extern __int128 __divti3(__int128,__int128);
extern __int128 __modti3(__int128,__int128);
#endif
_Static_assert(sizeof(struct pf_native_api)==252,"WMAP v13 size");
_Static_assert(sizeof(struct pf_window_info)==604,"window record stride");
_Static_assert(offsetof(struct pf_window_info,title)==60,"window title offset");
_Static_assert(sizeof(struct pf_device_info)==504,"device record stride");
_Static_assert(sizeof(struct pf_hardware_info)==160,"hardware record size");

static volatile unsigned vector_shift;
static int vector_register_bits(void) {
 const unsigned shifts[]={0,1,31,32,63,64,65,95,127};
 const uint64_t expected[][2]={
  {0x123456789abcdefULL,0xfedcba9876533210ULL},
  {0x91a2b3c4d5e6f7ULL,0x7f6e5d4c3b2d1908ULL},
  {0xeca8642002468acfULL,0x1fdbe7530ULL},
  {0x7654321001234567ULL,0xfedbba98ULL},
  {0xfdb97530eca86420ULL,0x70001ULL},
  {0xfedcba9876543210ULL,0x70000ULL},
  {0x7f6e5d4c3b2a1908ULL,0x70000ULL},
  {0x1fdb97530ULL,0x70000ULL},
  {0x1ULL,0x70000ULL},
 };
 uint128 original=((uint128)0xfedcba9876543210ULL<<64)|0x0123456789abcdefULL;
 for(unsigned i=0;i<sizeof(shifts)/sizeof(shifts[0]);i++) {
  vector_shift=shifts[i];
  uint128 result=(original>>vector_shift)^((uint128)7<<80);
  if((uint64_t)result!=expected[i][0] || (uint64_t)(result>>64)!=expected[i][1])return 0;
 }
 return 1;
}

int main(void) {
 if((int64_t)negative_fraction64!=-4294967295LL || (int64_t)negative_large32!=-4294967296LL)return 72;
 if(!vector_register_bits())return 71;
#if defined(__SIZEOF_INT128__)
 __uint128_t wide=((__uint128_t)0xfedcba9876543210ULL<<64)|0x0123456789abcdefULL;
 if(__ashlti3(wide,64)!=((__uint128_t)0x0123456789abcdefULL<<64))return 12;
 if(__lshrti3(wide,64)!=0xfedcba9876543210ULL)return 13;
 if(__lshrti3(wide,127)!=1 || __ashlti3(wide,128)!=0)return 14;
 if(__ashrti3((__int128)wide,127)!=-1)return 15;
 if(__ashlti3(wide,0)!=wide || __lshrti3(wide,0)!=wide)return 16;
 __uint128_t joined=CONCAT88(1.0,-2.0);
 if((uint64_t)(joined>>64)!=0x3ff0000000000000ULL || (uint64_t)joined!=0xc000000000000000ULL)return 17;
 __uint128_t ascending=CONCAT88(0x0f0e0d0c0b0a0908ULL,0x0706050403020100ULL);
 __uint128_t sums=psadbw(ascending,0);
 if((uint64_t)sums!=28 || (uint64_t)(sums>>64)!=92)return 18;
 __uint128_t shuffled=pshuflw(0,wide,0x1b);
 if((uint64_t)shuffled!=0xcdef89ab45670123ULL || (uint64_t)(shuffled>>64)!=0xfedcba9876543210ULL)return 19;
 __uint128_t high_shuffled=pshufhw(0,wide,0x1b);
 if((uint64_t)high_shuffled!=0x0123456789abcdefULL || (uint64_t)(high_shuffled>>64)!=0x32107654ba98fedcULL)return 73;
 __uint128_t reversed=vrev(ascending,1);
 if((uint64_t)reversed!=0x0001020304050607ULL || (uint64_t)(reversed>>64)!=0x08090a0b0c0d0e0fULL)return 74;
 if(ZEXT716(UINT64_MAX)!=0xffffffffffffffULL)return 75;
 __uint128_t integers=CONCAT88(0x00009c4000007fffULL,0xffffffffffff63c0ULL);
 if((uint64_t)packssdw(integers,0)!=0x7fff7fffffff8000ULL)return 20;
 __uint128_t shorts=CONCAT88(0x00c80080007f0001ULL,0x0000ffffff80ff38ULL);
 if((uint64_t)packsswb(shorts,0)!=0x7f7f7f0100ff8080ULL)return 21;
 __uint128_t packed=~(__uint128_t)0;
 PF_PART9(packed,0)=0;
 if(packed!=~(((__uint128_t)1<<72)-1))return 22;
 __uint128_t top=~(__uint128_t)0,half=(__uint128_t)1<<127,remainder;
 if(__udivti3(top,1)!=top || __udivti3(top,top)!=1)return 23;
 if(__udivti3(top,half+1)!=1 || __umodti3(top,half+1)!=half-2)return 24;
 if(__udivmodti4(top,(__uint128_t)1<<64,&remainder)!=UINT64_MAX || remainder!=UINT64_MAX)return 25;
 if(__udivti3(7,top)!=0 || __umodti3(7,top)!=7)return 26;
 if(__divti3(-(__int128)(half-1),3)!=-(__int128)((half-1)/3))return 27;
 if(__modti3(-(__int128)(half-1),3)!=-1 || __divti3(13,-3)!=-4 || __modti3(13,-3)!=1)return 28;
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

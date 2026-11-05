/* Cross-architecture compiler-runtime execution probe.
 * Pooka's Free Software License. */
#include <stdint.h>
volatile uint32_t small_a=4000000000u,small_b=37;
volatile int32_t signed_a=-2147483647,signed_b=31;
volatile uint64_t big_a=0xfedcba9876543210ull,big_b=0x1234567ull;
volatile double fraction64=4294967295.75,large64=18446744073709549568.0;
volatile float large32=4294967296.0f,fraction32=1.5f;
volatile uint64_t maximum=0xffffffffffffffffULL;
volatile uint32_t high_a=0xffffffffU,high_b=0x80000000U;
int main(void) {
 if(small_a/small_b!=108108108u || small_a%small_b!=4u)return 1;
 if(signed_a/signed_b!=-69273666 || signed_a%signed_b!=-1)return 2;
 if(big_a/big_b!=0xe0000069e0ull || big_a%big_b!=0x38f0ull)return 3;
 if((uint64_t)fraction64!=0xffffffffULL || (uint64_t)large64!=0xfffffffffffff800ULL)return 4;
 if((uint64_t)large32!=0x100000000ULL || (uint64_t)fraction32!=1)return 5;
 if((double)maximum!=18446744073709551616.0)return 6;
 if(high_a/high_b!=1 || high_a%high_b!=0x7fffffffU)return 7;
 return 42;
}

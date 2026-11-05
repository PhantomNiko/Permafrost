/* Cross-architecture compiler-runtime execution probe.
 * Pooka's Free Software License. */
#include <stdint.h>
volatile uint32_t small_a=4000000000u,small_b=37;
volatile int32_t signed_a=-2147483647,signed_b=31;
volatile uint64_t big_a=0xfedcba9876543210ull,big_b=0x1234567ull;
int main(void) {
 if(small_a/small_b!=108108108u || small_a%small_b!=4u)return 1;
 if(signed_a/signed_b!=-69273666 || signed_a%signed_b!=-1)return 2;
 if(big_a/big_b!=0xe0000069e0ull || big_a%big_b!=0x38f0ull)return 3;
 return 42;
}

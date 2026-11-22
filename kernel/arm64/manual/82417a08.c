/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_82417a08(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (long *)0x0) {
    recovered_824185c0(param_1 + 8);
    recovered_824185c0(param_1 + 5);
    recovered_8241c308(param_1 + 2);
    recovered_8240facc((void *)param_1[2]);
    if ((long *)*param_1 != (long *)0x0) {
      (**(code **)(*(long *)*param_1 + 8))();
    }
  }
  recovered_8240facc(param_1);
  return;
}

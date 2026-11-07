/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8240f09c(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_8240f4c0(param_1);
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      recovered_82400748(*(void **)(param_1 + 0x40));
    }
    recovered_82400748(param_1);
  }
  return uVar1;
}

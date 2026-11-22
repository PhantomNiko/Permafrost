/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

long * recovered_824179b8(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar2 = param_1[1];
  lVar1 = lVar2 * 0x20;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = lVar1 + -0x20;
    recovered_82417994(*param_1 + lVar1);
  }
  param_1[1] = 0;
  recovered_8240facc((void *)*param_1);
  return param_1;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_82436964(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 8) {
    return (((param_1 << (ulong)(param_2 & 0x1f)) - param_1) + 0x7fU) / 0xff;
  }
  return param_1 << (ulong)(param_2 - 8 & 0x1f);
}

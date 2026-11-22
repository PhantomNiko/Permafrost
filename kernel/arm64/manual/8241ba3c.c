/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_8241ba3c(long param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_8241ba6c(param_1 + 0x48,param_2);
  return *(long *)(param_1 + 0x20) - 1U & uVar1;
}

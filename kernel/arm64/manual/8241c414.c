/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_8241c414(long param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_8241883c(param_2,4);
  return *(long *)(param_1 + 0x20) - 1U & uVar1;
}

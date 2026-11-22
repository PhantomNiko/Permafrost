/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8241b984(long *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  uVar1 = recovered_8241ba3c((long)param_1,(undefined8 *)(*param_1 + param_2 * 0x30));
  lVar2 = param_1[3];
  *(undefined8 *)(param_1[6] + param_2 * 8) = *(undefined8 *)(lVar2 + uVar1 * 8);
  *(long *)(lVar2 + uVar1 * 8) = param_2;
  return;
}

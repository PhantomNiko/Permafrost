/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8241973c(long *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  uVar1 = recovered_8241965c((long)param_1,(byte *)(*param_1 + param_2 * 8));
  lVar2 = param_1[3];
  *(undefined8 *)(param_1[6] + param_2 * 8) = *(undefined8 *)(lVar2 + uVar1 * 8);
  *(long *)(lVar2 + uVar1 * 8) = param_2;
  return;
}

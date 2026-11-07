/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_20be4f0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  ulong uVar3;
  double in_XMM0_Qa;

  if (*(long *)(param_1 + 8) != 0) {
    lVar2 = 8;
    uVar3 = 0;
    do {
      recovered_2000bb0(*(void **)(*(long *)(param_1 + 0x18) + -8 + lVar2));
      lVar1 = *(long *)(param_1 + 0x18);
      *(undefined8 *)(lVar1 + -8 + lVar2) = 0;
      in_XMM0_Qa = recovered_205ec00((undefined8 *)(lVar1 + lVar2));
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x48;
    } while (uVar3 < *(ulong *)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return in_XMM0_Qa;
}

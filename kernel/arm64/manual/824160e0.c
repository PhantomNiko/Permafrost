/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_824160e0(long *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;

  uVar3 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  lVar5 = *param_2;
  lVar4 = param_2[1] << 4;
  while( true ) {
    if (lVar4 == 0) {
      recovered_8241443c(param_1,uVar3);
      puVar1 = (undefined8 *)*param_2;
      for (lVar5 = param_2[1] << 4; lVar5 != 0; lVar5 = lVar5 + -0x10) {
        recovered_82414a9c(param_1,*param_1 + param_1[1],(undefined1 *)*puVar1,
                           (undefined1 *)*puVar1 + puVar1[1]);
        puVar1 = puVar1 + 2;
      }
      bVar2 = recovered_82414b94(param_1,param_1 + 3);
      return (ulong)bVar2;
    }
    if (CARRY8(*(ulong *)(lVar5 + 8),uVar3)) break;
    uVar3 = *(ulong *)(lVar5 + 8) + uVar3;
    lVar5 = lVar5 + 0x10;
    lVar4 = lVar4 + -0x10;
  }
  return 0;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_82438f68(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  void *buffer;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;

  uVar7 = 0x10;
  if (8 < param_2) {
    uVar7 = param_2 << 1;
  }
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = 0x10;
  do {
    uVar6 = uVar1;
    uVar5 = (uint)uVar6;
    uVar1 = (ulong)(uVar5 << 1);
  } while ((0x80000000 >= uVar5 && uVar6 <= uVar7) && (0x80000000 < uVar5 || uVar7 != uVar6));
  if ((param_1[4] == 0) || (*(uint *)(param_1 + 5) < uVar5)) {
    buffer = recovered_82400744(uVar6 << 2);
    uVar3 = 0;
    if (buffer != (void *)0x0) {
      for (lVar4 = 0; uVar6 * 4 != lVar4; lVar4 = lVar4 + 4) {
        *(undefined4 *)((long)buffer + lVar4) = 0xffffffff;
      }
      uVar7 = 0;
      do {
        if ((ulong)param_1[1] <= uVar7) {
          recovered_82400748((void *)param_1[4]);
          param_1[4] = (long)buffer;
          *(uint *)(param_1 + 5) = uVar5;
          goto LAB_404253f8;
        }
        uVar2 = recovered_82439048(param_1,(long)buffer,uVar5,uVar7);
        uVar7 = uVar7 + 1;
      } while ((uVar2 & 1) != 0);
      recovered_82400748(buffer);
      uVar3 = 0;
    }
  }
  else {
LAB_404253f8:
    uVar3 = 1;
  }
  return uVar3;
}

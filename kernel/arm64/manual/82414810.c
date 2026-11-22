/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_82414810(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  long lVar6;

  bVar2 = *(byte *)(param_2 + 3);
  if (bVar2 != 0xff) {
    if (bVar2 == 0) {
      if (*(char *)(param_1 + 3) != '\0') {
        return;
      }
    }
    else if (*(byte *)(param_1 + 3) != 0) {
      uVar5 = (uint)bVar2;
      iVar3 = (uVar5 ^ 0xff) * (uint)*(byte *)(param_1 + 3);
      uVar1 = (iVar3 + 0x7fU & 0xffff) / 0xff + uVar5;
      for (lVar6 = 0; lVar6 != 3; lVar6 = lVar6 + 1) {
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = (undefined1)
                  (((uVar1 >> 1) + *(byte *)(param_2 + lVar6) * uVar5 +
                   (iVar3 * (uint)*(byte *)(param_1 + lVar6) + 0x7f) / 0xff) / uVar1);
        }
        *(undefined1 *)(param_1 + lVar6) = uVar4;
      }
      *(char *)(param_1 + 3) = (char)uVar1;
      return;
    }
  }
  recovered_82400928((void *)param_1,(void *)param_2,4);
  return;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_00006230 (*(int *)(0x6230U))
#define _DAT_00006234 (*(uint *)(0x6234U))
undefined8 recovered_2007120(uint param_1,long param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  int in_CR0;
  undefined8 in_CR3;
  uint in_CR4;

  if ((param_3 != (uint *)0x0) && ((ulong)_DAT_00006234 != 0)) {
    lVar4 = param_2 + (ulong)(param_2 == 0);
    if (((ulong)(param_1 & 0x1fffff) + lVar4 + 0x1fffff & 0xffffffffffe00000) - 1 <
        (ulong)_DAT_00006234) {
      uVar2 = 0;
      if ((in_CR0 < 0) && ((in_CR4 & 0x20) != 0)) {
        uVar3 = (param_1 & 0x1fffff) + _DAT_00006230;
        uVar2 = 0;
        uVar5 = lVar4 + (ulong)(uVar3 & 0x1fffff) + 0x1fffff & 0xffffffffffe00000;
        if ((uVar5 != 0) &&
           (((uVar3 & 0xffe00000) + uVar5 < 0x100000001 &&
            ((param_1 & 0xffe00000) + uVar5 < 0x100000001)))) {
          uVar5 = uVar5 - 1;
          iVar1 = 0;
          if (uVar5 != 0x1fffff) {
            uVar6 = (uVar5 >> 0x15) + 1;
            uVar7 = uVar6 & 0xfffffffffffffffe;
            iVar1 = ((uint)uVar6 & 0xfffffffe) << 0x15;
            uVar8 = param_1;
            uVar9 = uVar3;
            do {
              *(uint *)((ulong)(uVar9 >> 0x15) * 8 + 0x2f9000) = uVar8 & 0xffe00000 | 0x9b;
              *(undefined4 *)((ulong)(uVar9 >> 0x15) * 8 + 0x2f9004) = 0;
              uVar6 = (ulong)(uVar9 + 0x200000 >> 0x15);
              *(uint *)(uVar6 * 8 + 0x2f9000) = uVar8 + 0x200000 & 0xffe00000 | 0x9b;
              *(undefined4 *)(uVar6 * 8 + 0x2f9004) = 0;
              uVar9 = uVar9 + 0x400000;
              uVar8 = uVar8 + 0x400000;
              uVar7 = uVar7 - 2;
            } while (uVar7 != 0);
          }
          if ((uVar5 & 0x200000) == 0) {
            uVar5 = (ulong)(uVar3 + iVar1 >> 0x15);
            *(uint *)(uVar5 * 8 + 0x2f9000) = param_1 + iVar1 & 0xffe00000 | 0x9b;
            *(undefined4 *)(uVar5 * 8 + 0x2f9004) = 0;
          }
          *param_3 = uVar3;
          uVar2 = CONCAT71((int7)((ulong)in_CR3 >> 8),1);
        }
      }
      return uVar2;
    }
  }
  return 0;
}

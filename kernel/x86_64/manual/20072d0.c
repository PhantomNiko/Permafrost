/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_00006230 (*(int *)(0x6230U))
#define _DAT_00006234 (*(uint *)(0x6234U))
uchar recovered_20072d0(uint param_1,int param_2,int param_3,ulong *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  int in_CR0;
  uint in_CR4;

  if ((param_2 == 0 && param_4 != (ulong *)0x0) && ((ulong)_DAT_00006234 != 0)) {
    uVar3 = (ulong)(param_3 + (uint)(param_3 == 0));
    if (((param_1 & 0x1fffff) + uVar3 + 0x1fffff & 0x1ffe00000) - 1 < (ulong)_DAT_00006234) {
      uVar1 = '\0';
      if ((in_CR0 < 0) && ((in_CR4 & 0x20) != 0)) {
        uVar4 = (param_1 & 0x1fffff) + _DAT_00006230;
        uVar1 = '\0';
        uVar3 = uVar3 + (uVar4 & 0x1fffff) + 0x1fffff & 0x1ffe00000;
        if ((uVar3 != 0) &&
           (((uVar4 & 0xffe00000) + uVar3 < 0x100000001 &&
            ((param_1 & 0xffe00000) + uVar3 < 0x100000001)))) {
          uVar3 = uVar3 - 1;
          iVar2 = 0;
          if (uVar3 != 0x1fffff) {
            uVar5 = (uVar3 >> 0x15) + 1;
            uVar6 = uVar5 & 0xfffffffffffffffe;
            iVar2 = ((uint)uVar5 & 0xfffffffe) << 0x15;
            uVar7 = param_1;
            uVar8 = uVar4;
            do {
              *(uint *)((ulong)(uVar8 >> 0x15) * 8 + 0x2f9000) = uVar7 & 0xffe00000 | 0x9b;
              *(undefined4 *)((ulong)(uVar8 >> 0x15) * 8 + 0x2f9004) = 0;
              uVar5 = (ulong)(uVar8 + 0x200000 >> 0x15);
              *(uint *)(uVar5 * 8 + 0x2f9000) = uVar7 + 0x200000 & 0xffe00000 | 0x9b;
              *(undefined4 *)(uVar5 * 8 + 0x2f9004) = 0;
              uVar8 = uVar8 + 0x400000;
              uVar7 = uVar7 + 0x400000;
              uVar6 = uVar6 - 2;
            } while (uVar6 != 0);
          }
          if ((uVar3 & 0x200000) == 0) {
            uVar3 = (ulong)(uVar4 + iVar2 >> 0x15);
            *(uint *)(uVar3 * 8 + 0x2f9000) = param_1 + iVar2 & 0xffe00000 | 0x9b;
            *(undefined4 *)(uVar3 * 8 + 0x2f9004) = 0;
          }
          *param_4 = (ulong)uVar4;
          uVar1 = '\x01';
        }
      }
      return uVar1;
    }
  }
  return '\0';
}

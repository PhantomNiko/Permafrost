/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_209a220(int incoming_ecx,char *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *left;
  int iVar1;
  uint uVar3;
  int iVar2;
  uint incoming_edx_00;
  int iVar4;
  uint uVar5;
  bool bVar6;

  if (incoming_edx != (char *)0x0 && incoming_ecx != 0) {
    uVar3 = *(uint *)(incoming_ecx + 4);
    iVar4 = 0;
    if (uVar3 == 0) {
      return 0;
    }
    uVar5 = 1;
    do {
      left = *(char **)(*(int *)(incoming_ecx + 0xc) + iVar4);
      if (left != (char *)0x0) {
        iVar1 = recovered_20022a0(left,incoming_edx);
        if (iVar1 == 0) {
          if ((int)(uVar5 - 1) < 0) {
            return 0;
          }
          recovered_2001710(*(void **)(*(int *)(incoming_ecx + 0xc) + iVar4));
          recovered_2043a90((undefined4 *)(*(int *)(incoming_ecx + 0xc) + 4 + iVar4),incoming_edx_00
                           );
          uVar3 = *(uint *)(incoming_ecx + 4);
          if (uVar5 <= uVar3 && uVar3 - uVar5 != 0) {
            recovered_2001c30((void *)(*(int *)(incoming_ecx + 0xc) + iVar4),
                              (void *)(*(int *)(incoming_ecx + 0xc) + 0x28 + iVar4),
                              (uVar3 - uVar5) * 0x28);
            uVar3 = *(uint *)(incoming_ecx + 4);
          }
          iVar2 = uVar3 - 1;
          *(int *)(incoming_ecx + 4) = iVar2;
          iVar1 = *(int *)(incoming_ecx + 0xc);
          *(undefined4 *)(iVar1 + iVar2 * 0x28) = 0;
          *(undefined4 *)(iVar1 + 4 + iVar2 * 0x28) = 0;
          *(undefined4 *)(iVar1 + 8 + iVar2 * 0x28) = 0;
          *(undefined4 *)(iVar1 + 0xc + iVar2 * 0x28) = 0;
          *(undefined4 *)(iVar1 + 0x10 + iVar2 * 0x28) = 0;
          *(undefined4 *)(iVar1 + 0x14 + iVar2 * 0x28) = 0;
          *(undefined4 *)(iVar1 + 0x18 + iVar2 * 0x28) = 0;
          *(undefined4 *)(iVar1 + 0x1c + iVar2 * 0x28) = 0;
          *(undefined4 *)(iVar1 + 0x20 + iVar2 * 0x28) = 0;
          *(undefined4 *)(iVar1 + 0x24 + iVar2 * 0x28) = 0;
          return CONCAT31((int3)((uint)iVar4 >> 8),1);
        }
        uVar3 = *(uint *)(incoming_ecx + 4);
      }
      iVar4 = iVar4 + 0x28;
      bVar6 = uVar5 < uVar3;
      uVar5 = uVar5 + 1;
    } while (bVar6);
  }
  return 0;
}

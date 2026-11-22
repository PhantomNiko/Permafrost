/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

int recovered_209b1b0(int incoming_ecx,char *incoming_edx,char param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *left;
  uint uVar1;
  int iVar2;
  void *pvVar3;
  ulong size;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;

  if (incoming_edx == (char *)0x0 || incoming_ecx == 0) {
    return 0;
  }
  uVar1 = *(uint *)(incoming_ecx + 4);
  if (uVar1 != 0) {
    uVar5 = 0;
    iVar6 = 4;
    do {
      left = *(char **)(*(int *)(incoming_ecx + 0xc) + -4 + iVar6);
      if (left != (char *)0x0) {
        iVar2 = recovered_20022a0(left,incoming_edx);
        if (iVar2 == 0) {
          if (-1 < (int)uVar5) {
            return iVar6 + *(int *)(incoming_ecx + 0xc);
          }
          break;
        }
        uVar1 = *(uint *)(incoming_ecx + 4);
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x28;
    } while (uVar5 < uVar1);
  }
  if (param_3 != '\0') {
    uVar1 = *(uint *)(incoming_ecx + 8);
    uVar5 = *(int *)(incoming_ecx + 4) + 1;
    if (uVar1 < uVar5) {
      uVar7 = 4;
      if (uVar1 != 0) {
        uVar7 = uVar1;
      }
      for (; uVar7 < uVar5; uVar7 = uVar7 * 2) {
        if ((int)uVar7 < 0) {
          uVar7 = uVar5;
          break;
        }
      }
      pvVar3 = recovered_2001860(*(void **)(incoming_ecx + 0xc),uVar7 * 0x28);
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
      uVar1 = *(uint *)(incoming_ecx + 8);
      iVar6 = uVar7 - uVar1;
      if (uVar1 <= uVar7 && iVar6 != 0) {
        puVar4 = (undefined4 *)((int)pvVar3 + uVar1 * 0x28 + 0x24);
        do {
          puVar4[-9] = 0;
          puVar4[-8] = 0;
          puVar4[-7] = 0;
          puVar4[-6] = 0;
          puVar4[-5] = 0;
          puVar4[-4] = 0;
          puVar4[-3] = 0;
          puVar4[-2] = 0;
          puVar4[-1] = 0;
          *puVar4 = 0;
          puVar4 = puVar4 + 10;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *(void **)(incoming_ecx + 0xc) = pvVar3;
      *(uint *)(incoming_ecx + 8) = uVar7;
    }
    size = recovered_2002270(incoming_edx);
    pvVar3 = recovered_2001650(size + 1);
    if (pvVar3 != (void *)0x0) {
      if (size != 0) {
        recovered_2001b70(pvVar3,incoming_edx,size);
      }
      *(undefined1 *)((int)pvVar3 + size) = 0;
      iVar6 = *(int *)(incoming_ecx + 4);
      iVar2 = *(int *)(incoming_ecx + 0xc);
      *(void **)(iVar2 + iVar6 * 0x28) = pvVar3;
      *(undefined4 *)(iVar2 + 4 + iVar6 * 0x28) = 0;
      *(undefined4 *)(iVar2 + 8 + iVar6 * 0x28) = 0;
      *(undefined4 *)(iVar2 + 0xc + iVar6 * 0x28) = 0;
      *(undefined4 *)(iVar2 + 0x10 + iVar6 * 0x28) = 0;
      *(undefined4 *)(iVar2 + 0x14 + iVar6 * 0x28) = 0;
      *(undefined4 *)(iVar2 + 0x18 + iVar6 * 0x28) = 0;
      *(undefined4 *)(iVar2 + 0x1c + iVar6 * 0x28) = 0;
      *(undefined4 *)(iVar2 + 0x20 + iVar6 * 0x28) = 0;
      *(undefined4 *)(iVar2 + 0x24 + iVar6 * 0x28) = 0;
      iVar6 = *(int *)(incoming_ecx + 4);
      *(int *)(incoming_ecx + 4) = iVar6 + 1;
      return *(int *)(incoming_ecx + 0xc) + 4 + iVar6 * 0x28;
    }
    *(undefined4 *)(*(int *)(incoming_ecx + 0xc) + *(int *)(incoming_ecx + 4) * 0x28) = 0;
  }
  return 0;
}

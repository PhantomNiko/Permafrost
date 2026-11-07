/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_20b6ea0(int *incoming_ecx,char *incoming_edx,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *left;
  int iVar1;
  uint uVar2;
  void *pvVar3;
  ulong size;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;

  if (param_3 != 0 && (incoming_edx != (char *)0x0 && incoming_ecx != (int *)0x0)) {
    uVar2 = incoming_ecx[1];
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      iVar6 = 0;
      uVar7 = 0;
      do {
        if ((*(char *)(*incoming_ecx + 0x28 + iVar6) == '\x01') &&
           (left = *(char **)(*incoming_ecx + iVar6), left != (char *)0x0)) {
          iVar1 = recovered_20022a0(left,incoming_edx);
          if (iVar1 == 0) {
            if (-1 < (int)uVar7) {
              iVar6 = *incoming_ecx;
              goto LAB_02084921;
            }
            uVar2 = incoming_ecx[1];
            break;
          }
          uVar2 = incoming_ecx[1];
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (uVar7 < uVar2);
    }
    uVar2 = uVar2 + 1;
    uVar7 = incoming_ecx[2];
    if (uVar7 < uVar2) {
      uVar8 = 8;
      if (uVar7 != 0) {
        uVar8 = uVar7;
      }
      for (; uVar8 < uVar2; uVar8 = uVar8 * 2) {
        if ((int)uVar8 < 0) {
          uVar8 = uVar2;
          break;
        }
      }
      pvVar3 = recovered_2001860((void *)*incoming_ecx,uVar8 * 0x2c);
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
      uVar2 = incoming_ecx[2];
      iVar6 = uVar8 - uVar2;
      if (uVar2 <= uVar8 && iVar6 != 0) {
        puVar5 = (undefined1 *)(uVar2 * 0x2c + 0x28 + (int)pvVar3);
        do {
          *(undefined4 *)(puVar5 + -0x28) = 0;
          *(undefined4 *)(puVar5 + -0x24) = 0;
          *(undefined4 *)(puVar5 + -0x20) = 0;
          *(undefined4 *)(puVar5 + -0x1c) = 0;
          *(undefined4 *)(puVar5 + -0x18) = 0;
          *(undefined4 *)(puVar5 + -0x14) = 0;
          *(undefined4 *)(puVar5 + -0x10) = 0;
          *(undefined4 *)(puVar5 + -0xc) = 0;
          *(undefined4 *)(puVar5 + -8) = 0;
          *(undefined4 *)(puVar5 + -4) = 0;
          *puVar5 = 0;
          puVar5 = puVar5 + 0x2c;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *incoming_ecx = (int)pvVar3;
      incoming_ecx[2] = uVar8;
    }
    size = recovered_2002270(incoming_edx);
    pvVar3 = recovered_2001650(size + 1);
    if (pvVar3 != (void *)0x0) {
      if (size != 0) {
        recovered_2001b70(pvVar3,incoming_edx,size);
      }
      *(undefined1 *)((int)pvVar3 + size) = 0;
      iVar6 = *incoming_ecx;
      uVar7 = incoming_ecx[1];
      incoming_ecx[1] = uVar7 + 1;
      *(void **)(iVar6 + uVar7 * 0x2c) = pvVar3;
      *(undefined1 *)(iVar6 + 0x28 + uVar7 * 0x2c) = 1;
LAB_02084921:
      uVar4 = recovered_207e1d0((undefined4 *)(iVar6 + 4 + uVar7 * 0x2c),(undefined4 *)param_3);
      return uVar4;
    }
  }
  return 0;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_20b7ec0(int *incoming_ecx,int *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  uint incoming_edx_00;
  undefined1 *puVar5;
  uint incoming_edx_01;
  int unaff_EBX = 0;
  undefined3 uVar6;
  uint uVar7;
  uint uVar8;

  if (incoming_edx != (int *)0x0 && incoming_ecx != (int *)0x0) {
    if (incoming_ecx[1] != 0) {
      uVar7 = 0;
      unaff_EBX = 4;
      do {
        recovered_2001710(*(void **)(*incoming_ecx + -4 + unaff_EBX));
        recovered_2043a90((undefined4 *)(*incoming_ecx + unaff_EBX),incoming_edx_00);
        uVar7 = uVar7 + 1;
        unaff_EBX = unaff_EBX + 0x2c;
      } while (uVar7 < (uint)incoming_ecx[1]);
    }
    recovered_2001710((void *)*incoming_ecx);
    *incoming_ecx = 0;
    incoming_ecx[1] = 0;
    incoming_ecx[2] = 0;
    uVar7 = incoming_edx[1];
    uVar6 = (undefined3)((uint)unaff_EBX >> 8);
    if (uVar7 == 0) {
      return CONCAT31(uVar6,1);
    }
    uVar8 = 8;
    if ((((((((((8 < uVar7) && (uVar8 = 0x10, 0x10 < uVar7)) && (uVar8 = 0x20, 0x20 < uVar7)) &&
             ((uVar8 = 0x40, 0x40 < uVar7 && (uVar8 = 0x80, 0x80 < uVar7)))) &&
            (uVar8 = 0x100, 0x100 < uVar7)) &&
           (((uVar8 = 0x200, 0x200 < uVar7 && (uVar8 = 0x400, 0x400 < uVar7)) &&
            ((uVar8 = 0x800, 0x800 < uVar7 &&
             (((uVar8 = 0x1000, 0x1000 < uVar7 && (uVar8 = 0x2000, 0x2000 < uVar7)) &&
              (uVar8 = 0x4000, 0x4000 < uVar7)))))))) &&
          ((uVar8 = 0x8000, 0x8000 < uVar7 && (uVar8 = 0x10000, 0x10000 < uVar7)))) &&
         ((uVar8 = 0x20000, 0x20000 < uVar7 &&
          (((uVar8 = 0x40000, 0x40000 < uVar7 && (uVar8 = 0x80000, 0x80000 < uVar7)) &&
           ((uVar8 = 0x100000, 0x100000 < uVar7 &&
            (((uVar8 = 0x200000, 0x200000 < uVar7 && (uVar8 = 0x400000, 0x400000 < uVar7)) &&
             (uVar8 = 0x800000, 0x800000 < uVar7)))))))))) &&
        (((uVar8 = 0x1000000, 0x1000000 < uVar7 && (uVar8 = (uintptr_t)((uint8_t *)(uintptr_t)0x2000000U), (uintptr_t)((uint8_t *)(uintptr_t)0x2000000U) < uVar7)) &&
         (uVar8 = 0x4000000, 0x4000000 < uVar7)))) &&
       (((uVar8 = 0x8000000, 0x8000000 < uVar7 && (uVar8 = 0x10000000, 0x10000000 < uVar7)) &&
        ((uVar8 = 0x20000000, 0x20000000 < uVar7 && (uVar8 = 0x40000000, 0x40000000 < uVar7)))))) {
      if (uVar7 < 0x80000001) {
        uVar7 = 0x80000000;
      }
      uVar8 = uVar7;
    }
    pvVar2 = recovered_2001860((void *)0x0,uVar8 * 0x2c);
    if (pvVar2 != (void *)0x0) {
      uVar7 = incoming_ecx[2];
      iVar4 = uVar8 - uVar7;
      if (uVar7 <= uVar8 && iVar4 != 0) {
        puVar5 = (undefined1 *)(uVar7 * 0x2c + 0x28 + (int)pvVar2);
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
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      *incoming_ecx = (int)pvVar2;
      incoming_ecx[2] = uVar8;
      uVar7 = incoming_edx[1];
      if (uVar7 == 0) {
        return CONCAT31(uVar6,1);
      }
      iVar4 = 0;
      uVar8 = 0;
      do {
        iVar1 = *incoming_edx;
        if ((*(char *)(iVar1 + 0x28 + iVar4) == '\x01') &&
           (*(char **)(iVar1 + iVar4) != (char *)0x0)) {
          uVar3 = recovered_20b6ea0(incoming_ecx,*(char **)(iVar1 + iVar4),iVar1 + 4 + iVar4);
          if ((char)uVar3 == '\0') {
            if (incoming_ecx[1] != 0) {
              uVar7 = 0;
              iVar4 = 4;
              do {
                recovered_2001710(*(void **)(*incoming_ecx + -4 + iVar4));
                recovered_2043a90((undefined4 *)(*incoming_ecx + iVar4),incoming_edx_01);
                uVar7 = uVar7 + 1;
                iVar4 = iVar4 + 0x2c;
              } while (uVar7 < (uint)incoming_ecx[1]);
            }
            recovered_2001710((void *)*incoming_ecx);
            *incoming_ecx = 0;
            incoming_ecx[1] = 0;
            incoming_ecx[2] = 0;
            return 0;
          }
          uVar7 = incoming_edx[1];
        }
        uVar8 = uVar8 + 1;
        iVar4 = iVar4 + 0x2c;
      } while (uVar8 < uVar7);
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
  }
  return 0;
}

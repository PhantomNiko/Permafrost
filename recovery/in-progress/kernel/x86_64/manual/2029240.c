/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_2029240(long param_1,ulong param_2,ulong *param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  undefined8 *puVar2;
  void *data;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  bool bVar14;

  uVar8 = *param_3;
  if (param_2 - uVar8 < 4 || param_2 < uVar8) {
LAB_0201db4c:
    bVar14 = false;
  }
  else {
    while( true ) {
      uVar6 = *(uint *)(param_1 + uVar8);
      uVar12 = uVar8 + 4;
      *param_3 = uVar12;
      if (param_2 < uVar12) {
        return '\0';
      }
      if (param_2 - uVar12 < 4) {
        return '\0';
      }
      uVar10 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      uVar6 = *(uint *)(param_1 + 4 + uVar8);
      uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      uVar8 = uVar8 + 8;
      *param_3 = uVar8;
      if (uVar10 == 0) break;
      if ((param_2 < uVar8) || (param_2 - uVar8 < (ulong)uVar6)) goto LAB_0201db4c;
      puVar1 = (uint *)(param_1 + uVar8);
      if ((uVar10 == 1) && (3 < uVar6)) {
        uVar10 = *puVar1;
        uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18
        ;
        if ((uVar10 < 0x101) && (uVar10 * 3 + 4 <= uVar6)) {
          uVar8 = (ulong)(uVar10 * 3);
          *(undefined8 *)(param_4 + 0x20) = 0;
          if (*(ulong *)(param_4 + 0x28) < uVar8) {
            pvVar7 = recovered_201cb00(uVar8);
            data = *(void **)(param_4 + 0x18);
            uVar12 = *(ulong *)(param_4 + 0x20);
            if (uVar12 != 0) {
              if (uVar12 < 4) {
                uVar9 = 0;
              }
              else {
                uVar9 = 0;
                if (0x1f < (ulong)((long)pvVar7 - (long)data)) {
                  if (uVar12 < 0x20) {
                    uVar11 = 0;
                  }
                  else {
                    uVar9 = uVar12 & 0xffffffffffffffe0;
                    uVar11 = 0;
                    do {
                      uVar3 = ((undefined8 *)((long)data + uVar11))[1];
                      puVar2 = (undefined8 *)((long)data + uVar11 + 0x10);
                      uVar4 = *puVar2;
                      uVar5 = puVar2[1];
                      *(undefined8 *)((long)pvVar7 + uVar11) = *(undefined8 *)((long)data + uVar11);
                      ((undefined8 *)((long)pvVar7 + uVar11))[1] = uVar3;
                      puVar2 = (undefined8 *)((long)pvVar7 + uVar11 + 0x10);
                      *puVar2 = uVar4;
                      puVar2[1] = uVar5;
                      uVar11 = uVar11 + 0x20;
                    } while (uVar9 != uVar11);
                    if (uVar12 == uVar9) goto LAB_0201dadf;
                    uVar11 = uVar9;
                    if ((uVar12 & 0x1c) == 0) goto LAB_0201da75;
                  }
                  uVar9 = uVar12 & 0xfffffffffffffffc;
                  do {
                    *(undefined4 *)((long)pvVar7 + uVar11) = *(undefined4 *)((long)data + uVar11);
                    uVar11 = uVar11 + 4;
                  } while (uVar9 != uVar11);
                  if (uVar12 == uVar9) goto LAB_0201dadf;
                }
              }
LAB_0201da75:
              uVar13 = uVar12 & 3;
              uVar11 = uVar9;
              if (uVar13 != 0) {
                do {
                  *(undefined1 *)((long)pvVar7 + uVar11) = *(undefined1 *)((long)data + uVar11);
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              if (uVar9 - uVar12 < 0xfffffffffffffffd) {
                do {
                  *(undefined1 *)((long)pvVar7 + uVar11) = *(undefined1 *)((long)data + uVar11);
                  *(undefined1 *)((long)pvVar7 + uVar11 + 1) =
                       *(undefined1 *)((long)data + uVar11 + 1);
                  *(undefined1 *)((long)pvVar7 + uVar11 + 2) =
                       *(undefined1 *)((long)data + uVar11 + 2);
                  *(undefined1 *)((long)pvVar7 + uVar11 + 3) =
                       *(undefined1 *)((long)data + uVar11 + 3);
                  uVar11 = uVar11 + 4;
                } while (uVar12 != uVar11);
              }
            }
LAB_0201dadf:
            recovered_201cb60(data);
            *(void **)(param_4 + 0x18) = pvVar7;
            *(ulong *)(param_4 + 0x28) = uVar8;
            uVar12 = *(ulong *)(param_4 + 0x20);
          }
          else {
            uVar12 = 0;
          }
          while (uVar12 < uVar8) {
            *(undefined1 *)(*(long *)(param_4 + 0x18) + uVar12) = 0;
            uVar12 = *(long *)(param_4 + 0x20) + 1;
            *(ulong *)(param_4 + 0x20) = uVar12;
          }
          recovered_2001410(*(void **)(param_4 + 0x18),puVar1 + 1,uVar12);
          uVar8 = *param_3;
        }
      }
      else if ((uVar10 == 0x11) && (uVar6 != 0)) {
        *(uint *)(param_4 + 0x14) = (uint)(byte)*puVar1;
      }
      uVar8 = uVar8 + uVar6;
      *param_3 = uVar8;
      if (param_2 < uVar8) {
        return '\0';
      }
      if (param_2 - uVar8 < 4) {
        return '\0';
      }
    }
    bVar14 = uVar6 == 0;
  }
  return bVar14;
}

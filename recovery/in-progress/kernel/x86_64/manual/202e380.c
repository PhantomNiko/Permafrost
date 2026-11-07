/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_202e380(long *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  void *data;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong size;
  long lVar13;
  undefined8 *puVar14;
  bool bVar15;

  param_1[1] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  lVar13 = param_2[1];
  if (lVar13 == 0) goto LAB_02022ca4;
  puVar12 = (undefined8 *)*param_2;
  lVar8 = 0;
  size = 0;
  do {
    puVar1 = (ulong *)((long)puVar12 + lVar8 + 8);
    bVar15 = CARRY8(size,*puVar1);
    size = size + *puVar1;
    if (bVar15) {
      return '\0';
    }
    lVar8 = lVar8 + 0x10;
  } while (lVar13 * 0x10 != lVar8);
  if ((ulong)param_1[2] < size) {
    pvVar7 = recovered_201cb00(size);
    data = (void *)*param_1;
    uVar2 = param_1[1];
    if (uVar2 != 0) {
      uVar9 = 0;
      if ((3 < uVar2) && (0x1f < (ulong)((long)pvVar7 - (long)data))) {
        if (uVar2 < 0x20) {
          uVar10 = 0;
        }
        else {
          uVar9 = uVar2 & 0xffffffffffffffe0;
          uVar10 = 0;
          do {
            uVar3 = ((undefined8 *)((long)data + uVar10))[1];
            puVar12 = (undefined8 *)((long)data + uVar10 + 0x10);
            uVar4 = *puVar12;
            uVar5 = puVar12[1];
            *(undefined8 *)((long)pvVar7 + uVar10) = *(undefined8 *)((long)data + uVar10);
            ((undefined8 *)((long)pvVar7 + uVar10))[1] = uVar3;
            puVar12 = (undefined8 *)((long)pvVar7 + uVar10 + 0x10);
            *puVar12 = uVar4;
            puVar12[1] = uVar5;
            uVar10 = uVar10 + 0x20;
          } while (uVar9 != uVar10);
          if (uVar2 == uVar9) goto LAB_02022c4f;
          uVar10 = uVar9;
          if ((uVar2 & 0x1c) == 0) goto LAB_02022be5;
        }
        uVar9 = uVar2 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)((long)pvVar7 + uVar10) = *(undefined4 *)((long)data + uVar10);
          uVar10 = uVar10 + 4;
        } while (uVar9 != uVar10);
        if (uVar2 == uVar9) goto LAB_02022c4f;
      }
LAB_02022be5:
      uVar11 = uVar2 & 3;
      uVar10 = uVar9;
      if (uVar11 != 0) {
        do {
          *(undefined1 *)((long)pvVar7 + uVar10) = *(undefined1 *)((long)data + uVar10);
          uVar10 = uVar10 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar9 - uVar2 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)((long)pvVar7 + uVar10) = *(undefined1 *)((long)data + uVar10);
          *(undefined1 *)((long)pvVar7 + uVar10 + 1) = *(undefined1 *)((long)data + uVar10 + 1);
          *(undefined1 *)((long)pvVar7 + uVar10 + 2) = *(undefined1 *)((long)data + uVar10 + 2);
          *(undefined1 *)((long)pvVar7 + uVar10 + 3) = *(undefined1 *)((long)data + uVar10 + 3);
          uVar10 = uVar10 + 4;
        } while (uVar2 != uVar10);
      }
    }
LAB_02022c4f:
    recovered_201cb60(data);
    *param_1 = (long)pvVar7;
    param_1[2] = size;
    puVar12 = (undefined8 *)*param_2;
    lVar13 = param_2[1];
  }
  if (lVar13 != 0) {
    puVar14 = puVar12 + lVar13 * 2;
    do {
      recovered_202add0(param_1,*param_1 + param_1[1],(undefined1 *)*puVar12,
                        (undefined1 *)*puVar12 + puVar12[1]);
      puVar12 = puVar12 + 2;
    } while (puVar12 != puVar14);
  }
LAB_02022ca4:
  uVar6 = recovered_202b0b0(param_1,param_1 + 3);
  return (uchar)uVar6;
}

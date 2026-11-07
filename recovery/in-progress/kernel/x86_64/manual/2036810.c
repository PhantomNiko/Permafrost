/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

long recovered_2036810(long *param_1,long param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  void *data;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;

  pvVar6 = (void *)*param_1;
  if (pvVar6 == (void *)0x0) {
    uVar8 = param_1[1];
    uVar9 = uVar8;
    if (uVar8 == param_1[2]) goto LAB_0202c18c;
  }
  else {
    uVar9 = param_2 - (long)pvVar6;
    uVar8 = param_1[1];
    if (uVar8 == param_1[2]) {
LAB_0202c18c:
      uVar7 = 4;
      if (uVar8 != 0) {
        uVar7 = uVar8 * 2;
      }
      if (uVar8 < uVar7) {
        pvVar6 = recovered_201cb00(uVar7);
        data = (void *)*param_1;
        uVar8 = param_1[1];
        if (uVar8 != 0) {
          uVar12 = 0;
          if ((3 < uVar8) && (0x1f < (ulong)((long)pvVar6 - (long)data))) {
            if (uVar8 < 0x20) {
              uVar10 = 0;
            }
            else {
              uVar12 = uVar8 & 0xffffffffffffffe0;
              uVar10 = 0;
              do {
                uVar3 = ((undefined8 *)((long)data + uVar10))[1];
                puVar1 = (undefined8 *)((long)data + uVar10 + 0x10);
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                *(undefined8 *)((long)pvVar6 + uVar10) = *(undefined8 *)((long)data + uVar10);
                ((undefined8 *)((long)pvVar6 + uVar10))[1] = uVar3;
                puVar1 = (undefined8 *)((long)pvVar6 + uVar10 + 0x10);
                *puVar1 = uVar4;
                puVar1[1] = uVar5;
                uVar10 = uVar10 + 0x20;
              } while (uVar12 != uVar10);
              if (uVar8 == uVar12) goto LAB_0202c2af;
              uVar10 = uVar12;
              if ((uVar8 & 0x1c) == 0) goto LAB_0202c245;
            }
            uVar12 = uVar8 & 0xfffffffffffffffc;
            do {
              *(undefined4 *)((long)pvVar6 + uVar10) = *(undefined4 *)((long)data + uVar10);
              uVar10 = uVar10 + 4;
            } while (uVar12 != uVar10);
            if (uVar8 == uVar12) goto LAB_0202c2af;
          }
LAB_0202c245:
          uVar13 = uVar8 & 3;
          uVar10 = uVar12;
          if (uVar13 != 0) {
            do {
              *(undefined1 *)((long)pvVar6 + uVar10) = *(undefined1 *)((long)data + uVar10);
              uVar10 = uVar10 + 1;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          if (uVar12 - uVar8 < 0xfffffffffffffffd) {
            do {
              *(undefined1 *)((long)pvVar6 + uVar10) = *(undefined1 *)((long)data + uVar10);
              *(undefined1 *)((long)pvVar6 + uVar10 + 1) = *(undefined1 *)((long)data + uVar10 + 1);
              *(undefined1 *)((long)pvVar6 + uVar10 + 2) = *(undefined1 *)((long)data + uVar10 + 2);
              *(undefined1 *)((long)pvVar6 + uVar10 + 3) = *(undefined1 *)((long)data + uVar10 + 3);
              uVar10 = uVar10 + 4;
            } while (uVar8 != uVar10);
          }
        }
LAB_0202c2af:
        recovered_201cb60(data);
        *param_1 = (long)pvVar6;
        param_1[2] = uVar7;
        uVar8 = param_1[1];
      }
    }
  }
  uVar7 = uVar8 - uVar9;
  if (uVar8 < uVar9 || uVar7 == 0) goto LAB_0202c372;
  uVar12 = uVar8;
  if (3 < uVar7) {
    if (uVar7 < 0x10) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar7 & 0xfffffffffffffff0;
      lVar11 = 0;
      do {
        puVar2 = (undefined8 *)((long)pvVar6 + lVar11 + (uVar8 - 0x10));
        uVar3 = puVar2[1];
        puVar1 = (undefined8 *)((long)pvVar6 + lVar11 + (uVar8 - 0xf));
        *puVar1 = *puVar2;
        puVar1[1] = uVar3;
        lVar11 = lVar11 + -0x10;
      } while (-lVar11 != uVar10);
      if (uVar7 == uVar10) goto LAB_0202c372;
      if ((uVar7 & 0xc) == 0) {
        uVar12 = uVar8 - uVar10;
        goto LAB_0202c360;
      }
    }
    uVar13 = uVar7 & 0xfffffffffffffffc;
    uVar12 = uVar8 - uVar13;
    lVar11 = -uVar10;
    do {
      *(undefined4 *)((long)pvVar6 + lVar11 + (uVar8 - 3)) =
           *(undefined4 *)((long)pvVar6 + lVar11 + (uVar8 - 4));
      lVar11 = lVar11 + -4;
    } while (-lVar11 != uVar13);
    if (uVar7 == uVar13) goto LAB_0202c372;
  }
LAB_0202c360:
  do {
    *(undefined1 *)((long)pvVar6 + uVar12) = *(undefined1 *)((long)pvVar6 + (uVar12 - 1));
    uVar12 = uVar12 - 1;
  } while (uVar9 < uVar12);
LAB_0202c372:
  *(undefined1 *)((long)pvVar6 + uVar9) = *param_3;
  param_1[1] = uVar8 + 1;
  return (long)pvVar6 + uVar9;
}

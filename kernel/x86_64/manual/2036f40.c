/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2036f40(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *data;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;

  if ((char)param_1[3] == '\x01') {
    if (((double)param_1[6] == (double)param_1[4]) &&
       (!NAN((double)param_1[6]) && !NAN((double)param_1[4]))) {
      if (((double)param_1[7] == (double)param_1[5]) &&
         (!NAN((double)param_1[7]) && !NAN((double)param_1[5]))) goto LAB_0202c9ca;
    }
    lVar4 = param_1[6];
    lVar5 = param_1[7];
    lVar6 = param_1[4];
    lVar7 = param_1[5];
    uVar12 = param_1[1];
    if (uVar12 == param_1[2]) {
      uVar15 = 4;
      if (uVar12 != 0) {
        uVar15 = uVar12 * 2;
      }
      if (uVar12 < uVar15) {
        pvVar11 = recovered_201cb00(uVar15 << 5);
        data = (void *)*param_1;
        uVar12 = param_1[1];
        if (uVar12 != 0) {
          if (uVar12 == 1) {
            uVar13 = 0;
          }
          else {
            lVar14 = 0x20;
            uVar13 = 0;
            do {
              puVar1 = (undefined8 *)((long)data + lVar14 + -0x20);
              uVar8 = *puVar1;
              uVar9 = puVar1[1];
              puVar1 = (undefined8 *)((long)data + lVar14 + -0x10);
              uVar10 = puVar1[1];
              puVar2 = (undefined8 *)((long)pvVar11 + lVar14 + -0x10);
              *puVar2 = *puVar1;
              puVar2[1] = uVar10;
              puVar1 = (undefined8 *)((long)pvVar11 + lVar14 + -0x20);
              *puVar1 = uVar8;
              puVar1[1] = uVar9;
              uVar8 = ((undefined8 *)((long)data + lVar14))[1];
              puVar1 = (undefined8 *)((long)data + lVar14 + 0x10);
              uVar9 = *puVar1;
              uVar10 = puVar1[1];
              *(undefined8 *)((long)pvVar11 + lVar14) = *(undefined8 *)((long)data + lVar14);
              ((undefined8 *)((long)pvVar11 + lVar14))[1] = uVar8;
              puVar1 = (undefined8 *)((long)pvVar11 + lVar14 + 0x10);
              *puVar1 = uVar9;
              puVar1[1] = uVar10;
              uVar13 = uVar13 + 2;
              lVar14 = lVar14 + 0x40;
            } while ((uVar12 & 0xfffffffffffffffe) != uVar13);
          }
          if ((uVar12 & 1) != 0) {
            lVar14 = uVar13 * 0x20;
            uVar8 = *(undefined8 *)((long)data + lVar14);
            uVar9 = ((undefined8 *)((long)data + lVar14))[1];
            puVar1 = (undefined8 *)((long)data + lVar14 + 0x10);
            uVar10 = puVar1[1];
            puVar2 = (undefined8 *)((long)pvVar11 + lVar14 + 0x10);
            *puVar2 = *puVar1;
            puVar2[1] = uVar10;
            *(undefined8 *)((long)pvVar11 + lVar14) = uVar8;
            ((undefined8 *)((long)pvVar11 + lVar14))[1] = uVar9;
          }
        }
        recovered_201cb60(data);
        *param_1 = (long)pvVar11;
        param_1[2] = uVar15;
        uVar12 = param_1[1];
      }
    }
    lVar14 = *param_1;
    plVar3 = (long *)(lVar14 + 0x10 + uVar12 * 0x20);
    *plVar3 = lVar6;
    plVar3[1] = lVar7;
    plVar3 = (long *)(lVar14 + uVar12 * 0x20);
    *plVar3 = lVar4;
    plVar3[1] = lVar5;
    param_1[1] = param_1[1] + 1;
  }
LAB_0202c9ca:
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[6] = param_1[4];
  param_1[7] = param_1[5];
  return;
}

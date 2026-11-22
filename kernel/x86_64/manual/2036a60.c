/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_2036a60(long *param_1,double *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  double dVar4;
  void *data;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long in_RAX;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;

  if ((char)param_1[3] != '\x01') goto LAB_0202c636;
  dVar17 = (double)param_1[4];
  dVar4 = (double)param_1[6];
  if ((dVar4 == dVar17) && (!NAN(dVar4) && !NAN(dVar17))) {
    if (((double)param_1[7] == (double)param_1[5]) &&
       (!NAN((double)param_1[7]) && !NAN((double)param_1[5]))) goto LAB_0202c636;
  }
  if ((dVar4 != dVar17) || (NAN(dVar4) || NAN(dVar17))) {
LAB_0202c459:
    lVar5 = param_1[6];
    lVar6 = param_1[7];
    lVar7 = param_1[4];
    lVar8 = param_1[5];
    uVar15 = param_1[1];
    if (uVar15 == param_1[2]) {
      uVar16 = 4;
      if (uVar15 != 0) {
        uVar16 = uVar15 * 2;
      }
      if (uVar15 < uVar16) {
        pvVar12 = recovered_201cb00(uVar16 << 5);
        data = (void *)*param_1;
        uVar15 = param_1[1];
        if (uVar15 != 0) {
          if (uVar15 == 1) {
            uVar13 = 0;
          }
          else {
            lVar14 = 0x20;
            uVar13 = 0;
            do {
              puVar1 = (undefined8 *)((long)data + lVar14 + -0x20);
              uVar9 = *puVar1;
              uVar10 = puVar1[1];
              puVar1 = (undefined8 *)((long)data + lVar14 + -0x10);
              uVar11 = puVar1[1];
              puVar2 = (undefined8 *)((long)pvVar12 + lVar14 + -0x10);
              *puVar2 = *puVar1;
              puVar2[1] = uVar11;
              puVar1 = (undefined8 *)((long)pvVar12 + lVar14 + -0x20);
              *puVar1 = uVar9;
              puVar1[1] = uVar10;
              uVar9 = ((undefined8 *)((long)data + lVar14))[1];
              puVar1 = (undefined8 *)((long)data + lVar14 + 0x10);
              uVar10 = *puVar1;
              uVar11 = puVar1[1];
              *(undefined8 *)((long)pvVar12 + lVar14) = *(undefined8 *)((long)data + lVar14);
              ((undefined8 *)((long)pvVar12 + lVar14))[1] = uVar9;
              puVar1 = (undefined8 *)((long)pvVar12 + lVar14 + 0x10);
              *puVar1 = uVar10;
              puVar1[1] = uVar11;
              uVar13 = uVar13 + 2;
              lVar14 = lVar14 + 0x40;
            } while ((uVar15 & 0xfffffffffffffffe) != uVar13);
          }
          if ((uVar15 & 1) != 0) {
            lVar14 = uVar13 * 0x20;
            uVar9 = *(undefined8 *)((long)data + lVar14);
            uVar10 = ((undefined8 *)((long)data + lVar14))[1];
            puVar1 = (undefined8 *)((long)data + lVar14 + 0x10);
            uVar11 = puVar1[1];
            puVar2 = (undefined8 *)((long)pvVar12 + lVar14 + 0x10);
            *puVar2 = *puVar1;
            puVar2[1] = uVar11;
            *(undefined8 *)((long)pvVar12 + lVar14) = uVar9;
            ((undefined8 *)((long)pvVar12 + lVar14))[1] = uVar10;
          }
        }
        recovered_201cb60(data);
        *param_1 = (long)pvVar12;
        param_1[2] = uVar16;
        uVar15 = param_1[1];
      }
    }
    lVar14 = *param_1;
    in_RAX = uVar15 * 0x20;
    plVar3 = (long *)(lVar14 + 0x10 + in_RAX);
    *plVar3 = lVar7;
    plVar3[1] = lVar8;
    plVar3 = (long *)(lVar14 + in_RAX);
    *plVar3 = lVar5;
    plVar3[1] = lVar6;
    param_1[1] = param_1[1] + 1;
    param_1[6] = param_1[4];
    param_1[7] = param_1[5];
    if (*(char *)((long)param_1 + 0x19) != '\0') {
      dVar17 = (double)param_1[4];
      dVar4 = (double)param_1[5];
      uVar15 = -(ulong)(dVar17 < (double)param_1[8]);
      uVar16 = -(ulong)((double)param_1[9] < dVar17);
      param_1[8] = ~uVar15 & param_1[8] | (ulong)dVar17 & uVar15;
      param_1[9] = ~uVar16 & param_1[9] | (ulong)dVar17 & uVar16;
      uVar15 = -(ulong)(dVar4 < (double)param_1[10]);
      uVar16 = -(ulong)((double)param_1[0xb] < dVar4);
      param_1[10] = ~uVar15 & param_1[10] | (ulong)dVar4 & uVar15;
      param_1[0xb] = ~uVar16 & param_1[0xb] | (ulong)dVar4 & uVar16;
      goto LAB_0202c636;
    }
    param_1[8] = param_1[4];
    param_1[0xb] = param_1[5];
    param_1[9] = param_1[4];
    param_1[10] = param_1[5];
  }
  else {
    dVar4 = (double)param_1[5];
    if (((double)param_1[7] != dVar4) || (NAN((double)param_1[7]) || NAN(dVar4))) goto LAB_0202c459;
    if (*(char *)((long)param_1 + 0x19) != '\0') {
      uVar15 = -(ulong)(dVar17 < (double)param_1[8]);
      uVar16 = -(ulong)((double)param_1[9] < dVar17);
      param_1[8] = ~uVar15 & param_1[8] | (ulong)dVar17 & uVar15;
      param_1[9] = ~uVar16 & param_1[9] | (ulong)dVar17 & uVar16;
      uVar15 = -(ulong)(dVar4 < (double)param_1[10]);
      uVar16 = -(ulong)((double)param_1[0xb] < dVar4);
      param_1[10] = ~uVar15 & param_1[10] | (ulong)dVar4 & uVar15;
      param_1[0xb] = ~uVar16 & param_1[0xb] | (ulong)dVar4 & uVar16;
      goto LAB_0202c636;
    }
    param_1[9] = (long)dVar17;
    param_1[8] = (long)dVar17;
    param_1[0xb] = (long)dVar4;
    param_1[10] = (long)dVar4;
  }
  *(undefined1 *)((long)param_1 + 0x19) = 1;
LAB_0202c636:
  dVar17 = param_2[1];
  param_1[4] = (long)*param_2;
  param_1[5] = (long)dVar17;
  dVar17 = param_2[1];
  param_1[6] = (long)*param_2;
  param_1[7] = (long)dVar17;
  *(undefined1 *)(param_1 + 3) = 1;
  if (*(char *)((long)param_1 + 0x19) == '\0') {
    dVar17 = *param_2;
    dVar4 = param_2[1];
    param_1[8] = (long)dVar17;
    param_1[0xb] = (long)dVar4;
    param_1[9] = (long)dVar17;
    param_1[10] = (long)dVar4;
    *(undefined1 *)((long)param_1 + 0x19) = 1;
    return (uint)in_RAX;
  }
  dVar17 = *param_2;
  if ((double)param_1[8] <= *param_2) {
    dVar17 = (double)param_1[8];
  }
  param_1[8] = (long)dVar17;
  dVar17 = *param_2;
  if (*param_2 <= (double)param_1[9]) {
    dVar17 = (double)param_1[9];
  }
  param_1[9] = (long)dVar17;
  dVar17 = param_2[1];
  if ((double)param_1[10] <= param_2[1]) {
    dVar17 = (double)param_1[10];
  }
  param_1[10] = (long)dVar17;
  dVar17 = param_2[1];
  if (param_2[1] <= (double)param_1[0xb]) {
    dVar17 = (double)param_1[0xb];
  }
  param_1[0xb] = (long)dVar17;
  return (uint)in_RAX;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2036d60(long *param_1,double *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double dVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  void *pvVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  double dVar21;

  if ((char)param_1[3] != '\0') {
    dVar21 = *param_2;
    if (((double)param_1[6] == dVar21) && (!NAN((double)param_1[6]) && !NAN(dVar21))) {
      dVar5 = param_2[1];
      if (((double)param_1[7] == dVar5) && (!NAN((double)param_1[7]) && !NAN(dVar5))) {
        if (*(char *)((long)param_1 + 0x19) == '\0') {
          param_1[9] = (long)dVar21;
          param_1[8] = (long)dVar21;
          param_1[0xb] = (long)dVar5;
          param_1[10] = (long)dVar5;
          *(undefined1 *)((long)param_1 + 0x19) = 1;
          return;
        }
        goto LAB_0202c829;
      }
    }
    dVar21 = (double)param_1[6];
    dVar5 = (double)param_1[7];
    dVar13 = *param_2;
    dVar14 = param_2[1];
    uVar19 = param_1[1];
    if (uVar19 == param_1[2]) {
      uVar20 = 4;
      if (uVar19 != 0) {
        uVar20 = uVar19 * 2;
      }
      if (uVar19 < uVar20) {
        pvVar15 = recovered_201cb00(uVar20 << 5);
        pvVar6 = (void *)*param_1;
        uVar19 = param_1[1];
        if (uVar19 != 0) {
          if (uVar19 == 1) {
            uVar17 = 0;
          }
          else {
            lVar18 = 0x20;
            uVar17 = 0;
            do {
              puVar2 = (undefined8 *)((long)pvVar6 + lVar18 + -0x20);
              uVar10 = *puVar2;
              uVar11 = puVar2[1];
              puVar2 = (undefined8 *)((long)pvVar6 + lVar18 + -0x10);
              uVar12 = puVar2[1];
              puVar3 = (undefined8 *)((long)pvVar15 + lVar18 + -0x10);
              *puVar3 = *puVar2;
              puVar3[1] = uVar12;
              puVar2 = (undefined8 *)((long)pvVar15 + lVar18 + -0x20);
              *puVar2 = uVar10;
              puVar2[1] = uVar11;
              uVar10 = ((undefined8 *)((long)pvVar6 + lVar18))[1];
              puVar2 = (undefined8 *)((long)pvVar6 + lVar18 + 0x10);
              uVar11 = *puVar2;
              uVar12 = puVar2[1];
              *(undefined8 *)((long)pvVar15 + lVar18) = *(undefined8 *)((long)pvVar6 + lVar18);
              ((undefined8 *)((long)pvVar15 + lVar18))[1] = uVar10;
              puVar2 = (undefined8 *)((long)pvVar15 + lVar18 + 0x10);
              *puVar2 = uVar11;
              puVar2[1] = uVar12;
              uVar17 = uVar17 + 2;
              lVar18 = lVar18 + 0x40;
            } while ((uVar19 & 0xfffffffffffffffe) != uVar17);
          }
          if ((uVar19 & 1) != 0) {
            lVar18 = uVar17 * 0x20;
            uVar10 = *(undefined8 *)((long)pvVar6 + lVar18);
            uVar11 = ((undefined8 *)((long)pvVar6 + lVar18))[1];
            puVar2 = (undefined8 *)((long)pvVar6 + lVar18 + 0x10);
            uVar12 = puVar2[1];
            puVar3 = (undefined8 *)((long)pvVar15 + lVar18 + 0x10);
            *puVar3 = *puVar2;
            puVar3[1] = uVar12;
            *(undefined8 *)((long)pvVar15 + lVar18) = uVar10;
            ((undefined8 *)((long)pvVar15 + lVar18))[1] = uVar11;
          }
        }
        recovered_201cb60(pvVar6);
        *param_1 = (long)pvVar15;
        param_1[2] = uVar20;
        uVar19 = param_1[1];
      }
    }
    lVar18 = *param_1;
    pdVar4 = (double *)(lVar18 + 0x10 + uVar19 * 0x20);
    *pdVar4 = dVar13;
    pdVar4[1] = dVar14;
    pdVar4 = (double *)(lVar18 + uVar19 * 0x20);
    *pdVar4 = dVar21;
    pdVar4[1] = dVar5;
    param_1[1] = param_1[1] + 1;
    dVar21 = param_2[1];
    param_1[6] = (long)*param_2;
    param_1[7] = (long)dVar21;
    if (*(char *)((long)param_1 + 0x19) == '\0') {
      dVar21 = *param_2;
      dVar5 = param_2[1];
      param_1[8] = (long)dVar21;
      param_1[0xb] = (long)dVar5;
      param_1[9] = (long)dVar21;
      param_1[10] = (long)dVar5;
      *(undefined1 *)((long)param_1 + 0x19) = 1;
      return;
    }
    dVar21 = *param_2;
LAB_0202c829:
    if ((double)param_1[8] <= dVar21) {
      dVar21 = (double)param_1[8];
    }
    param_1[8] = (long)dVar21;
    dVar21 = *param_2;
    if (*param_2 <= (double)param_1[9]) {
      dVar21 = (double)param_1[9];
    }
    param_1[9] = (long)dVar21;
    dVar21 = param_2[1];
    if ((double)param_1[10] <= param_2[1]) {
      dVar21 = (double)param_1[10];
    }
    param_1[10] = (long)dVar21;
    dVar21 = param_2[1];
    if (param_2[1] <= (double)param_1[0xb]) {
      dVar21 = (double)param_1[0xb];
    }
    param_1[0xb] = (long)dVar21;
    return;
  }
  if ((char)param_1[3] != '\x01') goto LAB_0202c636;
  dVar21 = (double)param_1[4];
  dVar5 = (double)param_1[6];
  if ((dVar5 == dVar21) && (!NAN(dVar5) && !NAN(dVar21))) {
    if (((double)param_1[7] == (double)param_1[5]) &&
       (!NAN((double)param_1[7]) && !NAN((double)param_1[5]))) goto LAB_0202c636;
  }
  if ((dVar5 != dVar21) || (NAN(dVar5) || NAN(dVar21))) {
LAB_0202c459:
    lVar18 = param_1[6];
    lVar7 = param_1[7];
    lVar8 = param_1[4];
    lVar9 = param_1[5];
    uVar19 = param_1[1];
    if (uVar19 == param_1[2]) {
      uVar20 = 4;
      if (uVar19 != 0) {
        uVar20 = uVar19 * 2;
      }
      if (uVar19 < uVar20) {
        pvVar15 = recovered_201cb00(uVar20 << 5);
        pvVar6 = (void *)*param_1;
        uVar19 = param_1[1];
        if (uVar19 != 0) {
          if (uVar19 == 1) {
            uVar17 = 0;
          }
          else {
            lVar16 = 0x20;
            uVar17 = 0;
            do {
              puVar2 = (undefined8 *)((long)pvVar6 + lVar16 + -0x20);
              uVar10 = *puVar2;
              uVar11 = puVar2[1];
              puVar2 = (undefined8 *)((long)pvVar6 + lVar16 + -0x10);
              uVar12 = puVar2[1];
              puVar3 = (undefined8 *)((long)pvVar15 + lVar16 + -0x10);
              *puVar3 = *puVar2;
              puVar3[1] = uVar12;
              puVar2 = (undefined8 *)((long)pvVar15 + lVar16 + -0x20);
              *puVar2 = uVar10;
              puVar2[1] = uVar11;
              uVar10 = ((undefined8 *)((long)pvVar6 + lVar16))[1];
              puVar2 = (undefined8 *)((long)pvVar6 + lVar16 + 0x10);
              uVar11 = *puVar2;
              uVar12 = puVar2[1];
              *(undefined8 *)((long)pvVar15 + lVar16) = *(undefined8 *)((long)pvVar6 + lVar16);
              ((undefined8 *)((long)pvVar15 + lVar16))[1] = uVar10;
              puVar2 = (undefined8 *)((long)pvVar15 + lVar16 + 0x10);
              *puVar2 = uVar11;
              puVar2[1] = uVar12;
              uVar17 = uVar17 + 2;
              lVar16 = lVar16 + 0x40;
            } while ((uVar19 & 0xfffffffffffffffe) != uVar17);
          }
          if ((uVar19 & 1) != 0) {
            lVar16 = uVar17 * 0x20;
            uVar10 = *(undefined8 *)((long)pvVar6 + lVar16);
            uVar11 = ((undefined8 *)((long)pvVar6 + lVar16))[1];
            puVar2 = (undefined8 *)((long)pvVar6 + lVar16 + 0x10);
            uVar12 = puVar2[1];
            puVar3 = (undefined8 *)((long)pvVar15 + lVar16 + 0x10);
            *puVar3 = *puVar2;
            puVar3[1] = uVar12;
            *(undefined8 *)((long)pvVar15 + lVar16) = uVar10;
            ((undefined8 *)((long)pvVar15 + lVar16))[1] = uVar11;
          }
        }
        recovered_201cb60(pvVar6);
        *param_1 = (long)pvVar15;
        param_1[2] = uVar20;
        uVar19 = param_1[1];
      }
    }
    lVar16 = *param_1;
    plVar1 = (long *)(lVar16 + 0x10 + uVar19 * 0x20);
    *plVar1 = lVar8;
    plVar1[1] = lVar9;
    plVar1 = (long *)(lVar16 + uVar19 * 0x20);
    *plVar1 = lVar18;
    plVar1[1] = lVar7;
    param_1[1] = param_1[1] + 1;
    param_1[6] = param_1[4];
    param_1[7] = param_1[5];
    if (*(char *)((long)param_1 + 0x19) != '\0') {
      dVar21 = (double)param_1[4];
      dVar5 = (double)param_1[5];
      uVar19 = -(ulong)(dVar21 < (double)param_1[8]);
      uVar20 = -(ulong)((double)param_1[9] < dVar21);
      param_1[8] = ~uVar19 & param_1[8] | (ulong)dVar21 & uVar19;
      param_1[9] = ~uVar20 & param_1[9] | (ulong)dVar21 & uVar20;
      uVar19 = -(ulong)(dVar5 < (double)param_1[10]);
      uVar20 = -(ulong)((double)param_1[0xb] < dVar5);
      param_1[10] = ~uVar19 & param_1[10] | (ulong)dVar5 & uVar19;
      param_1[0xb] = ~uVar20 & param_1[0xb] | (ulong)dVar5 & uVar20;
      goto LAB_0202c636;
    }
    param_1[8] = param_1[4];
    param_1[0xb] = param_1[5];
    param_1[9] = param_1[4];
    param_1[10] = param_1[5];
  }
  else {
    dVar5 = (double)param_1[5];
    if (((double)param_1[7] != dVar5) || (NAN((double)param_1[7]) || NAN(dVar5))) goto LAB_0202c459;
    if (*(char *)((long)param_1 + 0x19) != '\0') {
      uVar19 = -(ulong)(dVar21 < (double)param_1[8]);
      uVar20 = -(ulong)((double)param_1[9] < dVar21);
      param_1[8] = ~uVar19 & param_1[8] | (ulong)dVar21 & uVar19;
      param_1[9] = ~uVar20 & param_1[9] | (ulong)dVar21 & uVar20;
      uVar19 = -(ulong)(dVar5 < (double)param_1[10]);
      uVar20 = -(ulong)((double)param_1[0xb] < dVar5);
      param_1[10] = ~uVar19 & param_1[10] | (ulong)dVar5 & uVar19;
      param_1[0xb] = ~uVar20 & param_1[0xb] | (ulong)dVar5 & uVar20;
      goto LAB_0202c636;
    }
    param_1[9] = (long)dVar21;
    param_1[8] = (long)dVar21;
    param_1[0xb] = (long)dVar5;
    param_1[10] = (long)dVar5;
  }
  *(undefined1 *)((long)param_1 + 0x19) = 1;
LAB_0202c636:
  dVar21 = param_2[1];
  param_1[4] = (long)*param_2;
  param_1[5] = (long)dVar21;
  dVar21 = param_2[1];
  param_1[6] = (long)*param_2;
  param_1[7] = (long)dVar21;
  *(undefined1 *)(param_1 + 3) = 1;
  if (*(char *)((long)param_1 + 0x19) == '\0') {
    dVar21 = *param_2;
    dVar5 = param_2[1];
    param_1[8] = (long)dVar21;
    param_1[0xb] = (long)dVar5;
    param_1[9] = (long)dVar21;
    param_1[10] = (long)dVar5;
    *(undefined1 *)((long)param_1 + 0x19) = 1;
    return;
  }
  dVar21 = *param_2;
  if ((double)param_1[8] <= *param_2) {
    dVar21 = (double)param_1[8];
  }
  param_1[8] = (long)dVar21;
  dVar21 = *param_2;
  if (*param_2 <= (double)param_1[9]) {
    dVar21 = (double)param_1[9];
  }
  param_1[9] = (long)dVar21;
  dVar21 = param_2[1];
  if ((double)param_1[10] <= param_2[1]) {
    dVar21 = (double)param_1[10];
  }
  param_1[10] = (long)dVar21;
  dVar21 = param_2[1];
  if (param_2[1] <= (double)param_1[0xb]) {
    dVar21 = (double)param_1[0xb];
  }
  param_1[0xb] = (long)dVar21;
  return;
}

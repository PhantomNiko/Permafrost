/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define lStack_40 (*(long *)(frame + 32))
#define local_38 (*(long *)(frame + 40))
#define local_48 (*(void * *)(frame + 24))
double recovered_203a090(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 in_XMM0_Da;
  undefined4 extraout_XMM0_Da = 0;
  undefined4 extraout_XMM0_Da_00 = 0;
  undefined4 extraout_XMM0_Da_01 = 0;
  undefined4 in_XMM0_Db;
  undefined4 extraout_XMM0_Db = 0;
  undefined4 extraout_XMM0_Db_00 = 0;
  undefined4 extraout_XMM0_Db_01 = 0;

  uVar13 = param_3;
  if (param_2 == 0) {
    uVar13 = 0;
  }
  puVar8 = (undefined1 *)*param_1;
  if (puVar8 != (undefined1 *)0x0 && param_2 != 0) {
    uVar11 = param_2 - (long)puVar8;
    uVar12 = 0;
    do {
      if (uVar11 == uVar12) {
        uVar12 = param_1[1] - uVar11;
        if (uVar13 < uVar12) {
          uVar12 = uVar13;
        }
        local_48 = (void *)0x0;
        lStack_40 = 0;
        local_38 = 0;
        recovered_203a090((long *)&local_48,(long)(puVar8 + uVar11),uVar12);
        pvVar2 = (void *)*param_1;
        *param_1 = (long)local_48;
        lVar3 = param_1[1];
        lVar4 = param_1[2];
        param_1[1] = lStack_40;
        param_1[2] = local_38;
        local_48 = pvVar2;
        lStack_40 = lVar3;
        local_38 = lVar4;
        recovered_201cb60(pvVar2);
        in_XMM0_Da = extraout_XMM0_Da_00;
        in_XMM0_Db = extraout_XMM0_Db_00;
        goto LAB_0202fd1e;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 <= (ulong)param_1[1]);
  }
  param_1[1] = 0;
  if (puVar8 != (undefined1 *)0x0) {
    *puVar8 = 0;
  }
  if (uVar13 == 0) {
    if (*param_1 == 0) {
      puVar8 = recovered_201cb00(1);
      *puVar8 = 0;
      *param_1 = (long)puVar8;
      param_1[2] = 0;
      in_XMM0_Da = extraout_XMM0_Da;
      in_XMM0_Db = extraout_XMM0_Db;
    }
    goto LAB_0202fd1e;
  }
  if ((ulong)param_1[2] < uVar13) {
    puVar8 = recovered_201cb00(uVar13 + 1);
    *puVar8 = 0;
    pvVar2 = (void *)*param_1;
    uVar11 = param_1[1];
    if (uVar11 != 0) {
      uVar12 = 0;
      if ((3 < uVar11) && (0x1f < (ulong)((long)puVar8 - (long)pvVar2))) {
        if (uVar11 < 0x20) {
          uVar9 = 0;
        }
        else {
          uVar12 = uVar11 & 0xffffffffffffffe0;
          uVar9 = 0;
          do {
            uVar5 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
            puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            *(undefined8 *)(puVar8 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
            *(undefined8 *)((long)(puVar8 + uVar9) + 8) = uVar5;
            *(undefined8 *)(puVar8 + uVar9 + 0x10) = uVar6;
            *(undefined8 *)((long)(puVar8 + uVar9 + 0x10) + 8) = uVar7;
            uVar9 = uVar9 + 0x20;
          } while (uVar12 != uVar9);
          if (uVar11 == uVar12) goto LAB_0202fc8f;
          uVar9 = uVar12;
          if ((uVar11 & 0x1c) == 0) goto LAB_0202fc25;
        }
        uVar12 = uVar11 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(puVar8 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
          uVar9 = uVar9 + 4;
        } while (uVar12 != uVar9);
        if (uVar11 == uVar12) goto LAB_0202fc8f;
      }
LAB_0202fc25:
      uVar10 = uVar11 & 3;
      uVar9 = uVar12;
      if (uVar10 != 0) {
        do {
          puVar8[uVar9] = *(undefined1 *)((long)pvVar2 + uVar9);
          uVar9 = uVar9 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (uVar12 - uVar11 < 0xfffffffffffffffd) {
        do {
          puVar8[uVar9] = *(undefined1 *)((long)pvVar2 + uVar9);
          puVar8[uVar9 + 1] = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
          puVar8[uVar9 + 2] = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
          puVar8[uVar9 + 3] = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
          uVar9 = uVar9 + 4;
        } while (uVar11 != uVar9);
      }
    }
LAB_0202fc8f:
    puVar8[uVar11] = 0;
    recovered_201cb60(pvVar2);
    *param_1 = (long)puVar8;
    param_1[2] = uVar13;
    in_XMM0_Da = extraout_XMM0_Da_01;
    in_XMM0_Db = extraout_XMM0_Db_01;
  }
  uVar11 = (ulong)((uint)uVar13 & 3);
  if (uVar13 < 4) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      *(undefined1 *)(*param_1 + uVar12) = *(undefined1 *)(param_2 + uVar12);
      *(undefined1 *)(*param_1 + 1 + uVar12) = *(undefined1 *)(param_2 + 1 + uVar12);
      *(undefined1 *)(*param_1 + 2 + uVar12) = *(undefined1 *)(param_2 + 2 + uVar12);
      *(undefined1 *)(*param_1 + 3 + uVar12) = *(undefined1 *)(param_2 + 3 + uVar12);
      uVar12 = uVar12 + 4;
    } while ((uVar13 & 0xfffffffffffffffc) != uVar12);
  }
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined1 *)(*param_1 + uVar12) = *(undefined1 *)(param_2 + uVar12);
    uVar12 = uVar12 + 1;
  }
  param_1[1] = param_3;
  *(undefined1 *)(*param_1 + param_3) = 0;
LAB_0202fd1e:
  return pf_bits_double(CONCAT44(in_XMM0_Db,in_XMM0_Da));
}

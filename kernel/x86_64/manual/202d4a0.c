/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define auStack_a8 (*(uint (*)[4])(frame + 24))
#define local_34 (*(int *)(frame + 140))
#define local_40 (*(ulong *)(frame + 128))
#define local_44 (*(int *)(frame + 124))
#define local_48 (*(int *)(frame + 120))
#define local_4c (*(int *)(frame + 116))
#define local_50 (*(int *)(frame + 112))
#define local_54 (*(int *)(frame + 108))
#define local_58 (*(int *)(frame + 104))
#define local_5c (*(int *)(frame + 100))
#define local_60 (*(int *)(frame + 96))
#define local_64 (*(int *)(frame + 92))
#define local_68 (*(int *)(frame + 88))
#define local_6c (*(int *)(frame + 84))
#define local_70 (*(int *)(frame + 80))
#define local_74 (*(int *)(frame + 76))
#define local_78 (*(int *)(frame + 72))
#define local_7c (*(int *)(frame + 68))
#define local_80 (*(int *)(frame + 64))
#define local_84 (*(int *)(frame + 60))
#define local_88 (*(int *)(frame + 56))
#define local_8c (*(int *)(frame + 52))
#define local_90 (*(int *)(frame + 48))
#define local_94 (*(int *)(frame + 44))
#define local_98 (*(int *)(frame + 40))
uint recovered_202d4a0(long *param_1,uint *param_2,ulong param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  void *data;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;

  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  recovered_201cb60(*(void **)(param_2 + 0x10));
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  recovered_201cb60((void *)0x0);
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    lVar4 = *param_1;
    lVar13 = 0;
    do {
      uVar3 = *(uint *)(lVar4 + lVar13);
      if (0xf < (ulong)uVar3) {
        return 0;
      }
      param_2[uVar3] = param_2[uVar3] + 1;
      uVar15 = param_2[0x16];
      if (param_2[0x16] <= uVar3) {
        uVar15 = uVar3;
      }
      param_2[0x16] = uVar15;
      lVar13 = lVar13 + 4;
    } while (uVar10 * 4 != lVar13);
  }
  if (uVar10 == *param_2) {
    *(char *)(param_2 + 0x17) = (char)param_3;
    return (uint)param_3;
  }
  uVar3 = param_2[1];
  if (2 < (int)uVar3) {
    return 0;
  }
  iVar8 = 4 - (param_2[2] + uVar3 * 2);
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[3];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[4];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[5];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[6];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[7];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[8];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[9];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[10];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[0xb];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[0xc];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[0xd];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[0xe];
  if (iVar8 < 0) {
    return 0;
  }
  if (iVar8 * 2 < (int)param_2[0xf]) {
    return 0;
  }
  iVar8 = param_2[2] + uVar3;
  iVar16 = param_2[3] + iVar8;
  local_64 = param_2[4] + iVar16;
  local_68 = param_2[5] + local_64;
  local_60 = param_2[6] + local_68;
  local_5c = param_2[7] + local_60;
  local_58 = param_2[8] + local_5c;
  local_54 = param_2[9] + local_58;
  local_50 = param_2[10] + local_54;
  local_34 = param_2[0xb] + local_50;
  local_4c = param_2[0xc] + local_34;
  local_48 = param_2[0xd] + local_4c;
  local_44 = param_2[0xe] + local_48;
  local_40 = (ulong)(param_2[0xf] + local_44);
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  if (*(ulong *)(param_2 + 0x14) < local_40) {
    pvVar9 = recovered_201cb00(local_40 * 2);
    data = *(void **)(param_2 + 0x10);
    uVar10 = *(ulong *)(param_2 + 0x12);
    if (uVar10 != 0) {
      uVar11 = 0;
      if ((3 < uVar10) && (0x1f < (ulong)((long)pvVar9 - (long)data))) {
        if (uVar10 < 0x10) {
          uVar12 = 0;
        }
        else {
          uVar11 = uVar10 & 0xfffffffffffffff0;
          uVar12 = 0;
          do {
            puVar2 = (undefined8 *)((long)data + uVar12 * 2);
            uVar5 = puVar2[1];
            puVar1 = (undefined8 *)((long)data + uVar12 * 2 + 0x10);
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            puVar1 = (undefined8 *)((long)pvVar9 + uVar12 * 2);
            *puVar1 = *puVar2;
            puVar1[1] = uVar5;
            puVar2 = (undefined8 *)((long)pvVar9 + uVar12 * 2 + 0x10);
            *puVar2 = uVar6;
            puVar2[1] = uVar7;
            uVar12 = uVar12 + 0x10;
          } while (uVar11 != uVar12);
          if (uVar10 == uVar11) goto LAB_02021ee5;
          uVar12 = uVar11;
          if ((uVar10 & 0xc) == 0) goto LAB_02021e8c;
        }
        uVar11 = uVar10 & 0xfffffffffffffffc;
        do {
          *(undefined8 *)((long)pvVar9 + uVar12 * 2) = *(undefined8 *)((long)data + uVar12 * 2);
          uVar12 = uVar12 + 4;
        } while (uVar11 != uVar12);
        if (uVar10 == uVar11) goto LAB_02021ee5;
      }
LAB_02021e8c:
      uVar14 = uVar10 & 3;
      uVar12 = uVar11;
      if (uVar14 != 0) {
        do {
          *(undefined2 *)((long)pvVar9 + uVar12 * 2) = *(undefined2 *)((long)data + uVar12 * 2);
          uVar12 = uVar12 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (uVar11 - uVar10 < 0xfffffffffffffffd) {
        do {
          *(undefined2 *)((long)pvVar9 + uVar12 * 2) = *(undefined2 *)((long)data + uVar12 * 2);
          *(undefined2 *)((long)pvVar9 + uVar12 * 2 + 2) =
               *(undefined2 *)((long)data + uVar12 * 2 + 2);
          *(undefined2 *)((long)pvVar9 + uVar12 * 2 + 4) =
               *(undefined2 *)((long)data + uVar12 * 2 + 4);
          *(undefined2 *)((long)pvVar9 + uVar12 * 2 + 6) =
               *(undefined2 *)((long)data + uVar12 * 2 + 6);
          uVar12 = uVar12 + 4;
        } while (uVar10 != uVar12);
      }
    }
LAB_02021ee5:
    recovered_201cb60(data);
    *(void **)(param_2 + 0x10) = pvVar9;
    *(ulong *)(param_2 + 0x14) = local_40;
    uVar10 = *(ulong *)(param_2 + 0x12);
  }
  else {
    uVar10 = 0;
  }
  uVar11 = local_40 - uVar10;
  if (local_40 < uVar10 || uVar11 == 0) goto LAB_02021fdf;
  lVar4 = *(long *)(param_2 + 0x10);
  if (uVar11 < 4) {
LAB_02021fb4:
    do {
      *(undefined2 *)(lVar4 + uVar10 * 2) = 0;
      uVar10 = uVar10 + 1;
    } while (local_40 != uVar10);
  }
  else if (uVar11 < 0x10) {
    uVar12 = 0;
LAB_02021f8c:
    uVar14 = uVar11 & 0xfffffffffffffffc;
    lVar13 = uVar10 * 2;
    uVar10 = uVar10 + uVar14;
    do {
      *(undefined8 *)(lVar4 + lVar13 + uVar12 * 2) = 0;
      uVar12 = uVar12 + 4;
    } while (uVar14 != uVar12);
    if (uVar11 != uVar14) goto LAB_02021fb4;
  }
  else {
    uVar12 = uVar11 & 0xfffffffffffffff0;
    lVar13 = lVar4 + uVar10 * 2;
    uVar14 = 0;
    do {
      puVar2 = (undefined8 *)(lVar13 + uVar14 * 2);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar13 + 0x10 + uVar14 * 2);
      *puVar2 = 0;
      puVar2[1] = 0;
      uVar14 = uVar14 + 0x10;
    } while (uVar12 != uVar14);
    if (uVar11 != uVar12) {
      if ((uVar11 & 0xc) == 0) {
        uVar10 = uVar10 + uVar12;
        goto LAB_02021fb4;
      }
      goto LAB_02021f8c;
    }
  }
  *(ulong *)(param_2 + 0x12) = local_40;
LAB_02021fdf:
  auStack_a8[1] = 0;
  auStack_a8[2] = uVar3;
  auStack_a8[3] = iVar8;
  local_98 = iVar16;
  local_94 = local_64;
  local_90 = local_68;
  local_8c = local_60;
  local_88 = local_5c;
  local_84 = local_58;
  local_80 = local_54;
  local_7c = local_50;
  local_78 = local_34;
  local_74 = local_4c;
  local_70 = local_48;
  local_6c = local_44;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    lVar4 = *param_1;
    lVar13 = *(long *)(param_2 + 0x10);
    uVar11 = 0;
    do {
      uVar12 = (ulong)*(uint *)(lVar4 + uVar11 * 4);
      if (uVar12 != 0) {
        uVar3 = auStack_a8[uVar12];
        auStack_a8[uVar12] = uVar3 + 1;
        *(short *)(lVar13 + (ulong)uVar3 * 2) = (short)uVar11;
      }
      uVar11 = uVar11 + 1;
    } while ((uVar11 & 0xffffffff) < uVar10);
  }
  *(undefined1 *)(param_2 + 0x17) = 1;
  return (uint)CONCAT71((uint7)(uint3)((uint)iVar16 >> 8),1);
}

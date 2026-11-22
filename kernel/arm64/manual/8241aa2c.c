/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047c308 (*(uint8_t volatile *)(0x82547fe8U))
#define DAT_4047c310 (*(uint8_t volatile *)(0x82547ff0U))
#define apiStack_148 (*(int * (*)[2])(frame + 24))
#define pvStack_88 (*(void * *)(frame + 216))
#define uStack_100 (*(undefined8 *)(frame + 96))
#define uStack_108 (*(undefined2 *)(frame + 88))
#define uStack_110 (*(undefined8 *)(frame + 80))
#define uStack_118 (*(undefined8 *)(frame + 72))
#define uStack_120 (*(undefined8 *)(frame + 64))
#define uStack_128 (*(undefined8 *)(frame + 56))
#define uStack_130 (*(undefined8 *)(frame + 48))
#define uStack_138 (*(undefined8 *)(frame + 40))
#define uStack_80 (*(undefined8 *)(frame + 224))
#define uStack_89 (*(undefined1 *)(frame + 215))
#define uStack_96 (*(undefined1 *)(frame + 202))
#define uStack_98 (*(undefined2 *)(frame + 200))
#define uStack_a0 (*(undefined8 *)(frame + 192))
#define uStack_a8 (*(undefined8 *)(frame + 184))
#define uStack_b0 (*(undefined8 *)(frame + 176))
#define uStack_b8 (*(undefined8 *)(frame + 168))
#define uStack_c0 (*(undefined8 *)(frame + 160))
#define uStack_c8 (*(undefined8 *)(frame + 152))
#define uStack_d0 (*(undefined8 *)(frame + 144))
#define uStack_d8 (*(undefined8 *)(frame + 136))
#define uStack_e0 (*(undefined8 *)(frame + 128))
#define uStack_e8 (*(undefined8 *)(frame + 120))
#define uStack_f0 (*(undefined8 *)(frame + 112))
#define uStack_f8 (*(undefined8 *)(frame + 104))
int * recovered_8241aa2c(int *param_1,undefined8 param_2,long param_3,uint param_4)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *extraout_x0 = 0;
  int *piVar10;
  undefined8 extraout_x1 = 0;
  long *plVar11;
  int *in_x8;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  ulong uVar17;
  char *pcVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  int iVar24;

  if (((uint)param_2 < 0x100) && (*(long *)(param_1 + (ulong)(uint)param_2 * 6 + 0xc) != 0)) {
    piVar10 = param_1 + (ulong)(uint)param_2 * 6 + 10;
  }
  else {
    piVar10 = (int *)&DAT_4047c310;
    bVar6 = DAT_4047c308;
    if ((bVar6 & 1) == 0) {
      recovered_8241c0dc((undefined8 *)&DAT_4047c310,0x82473badU);
      recovered_8240fb2c();
      DAT_4047c308 = 1;
    }
  }
  lVar7 = recovered_8241b8a0((long *)(param_1 + 0x610),(undefined8 *)piVar10);
  recovered_8241c0dc(apiStack_148,0x82473badU);
  lVar8 = recovered_8241b8a0((long *)(param_1 + 0x610),apiStack_148);
  recovered_8240facc(apiStack_148[0]);
  lVar12 = *(long *)(param_1 + 0x610) + *(long *)(param_1 + 0x612) * 0x30;
  if (lVar7 == lVar12 && lVar8 == lVar12) {
    in_x8[6] = 0;
    in_x8[7] = 0;
    in_x8[4] = 0;
    in_x8[5] = 0;
    in_x8[10] = 0;
    in_x8[0xb] = 0;
    in_x8[8] = 0;
    in_x8[9] = 0;
    in_x8[2] = 0;
    in_x8[3] = 0;
    in_x8[0] = 0;
    in_x8[1] = 0;
    recovered_824189e8((undefined8 *)in_x8);
    return extraout_x0;
  }
  if (lVar7 != lVar12) {
    lVar8 = lVar7;
  }
  uStack_138 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_120 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_108 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_96 = 0;
  plVar11 = (long *)0x0;
  apiStack_148[0] = param_1;
  uVar9 = recovered_8241bd38((long *)apiStack_148,(long *)(lVar8 + 0x18),0);
  if ((uVar9 & 1) == 0) {
    recovered_824189e8((undefined8 *)in_x8);
    goto LAB_40414e70;
  }
  recovered_824192e4((int *)&uStack_120,extraout_x1,plVar11);
  uVar1 = in_x8[2];
  uVar9 = (ulong)uVar1;
  if ((int)uVar1 < 1) goto LAB_40414e70;
  uVar2 = in_x8[3];
  uVar13 = (ulong)uVar2;
  if (((int)uVar2 < 1) || (*(long *)(in_x8 + 8) == 0)) goto LAB_40414e70;
  pcVar16 = *(char **)(in_x8 + 6);
  pcVar14 = pcVar16 + (uVar9 - 1);
  lVar8 = -1;
  pcVar15 = pcVar16;
  uVar21 = uVar13;
  for (uVar20 = 0; uVar20 != uVar13; uVar20 = uVar20 + 1) {
    uVar17 = 0;
    while (uVar9 != uVar17) {
      pcVar18 = pcVar15 + uVar17;
      uVar17 = uVar17 + 1;
      if (*pcVar18 != '\0') {
        iVar19 = (int)uVar20;
        uVar5 = uVar2 - iVar19;
        if (uVar5 == 0) goto LAB_40414fa0;
        uVar17 = 0;
        uVar23 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
        pcVar16 = pcVar16 + (uVar13 - 1) * uVar9;
        goto LAB_40414ec0;
      }
    }
    uVar21 = (ulong)((int)uVar21 - 1);
    lVar8 = lVar8 + 1;
    pcVar14 = pcVar14 + uVar9;
    pcVar15 = pcVar15 + uVar9;
  }
  goto LAB_40414fa0;
LAB_40414ec0:
  if (uVar17 == uVar23) goto LAB_40414ef4;
  uVar13 = uVar9;
  pcVar18 = pcVar16;
  while (uVar13 != 0) {
    cVar3 = *pcVar18;
    uVar13 = uVar13 - 1;
    pcVar18 = pcVar18 + 1;
    if (cVar3 != '\0') {
      uVar23 = uVar17;
      goto LAB_40414ef4;
    }
  }
  uVar17 = uVar17 + 1;
  pcVar16 = pcVar16 + -uVar9;
  goto LAB_40414ec0;
LAB_40414ef4:
  iVar22 = (int)uVar23;
  for (uVar13 = 0; uVar13 != uVar9; uVar13 = uVar13 + 1) {
    pcVar16 = pcVar15;
    lVar7 = lVar8;
    while (lVar7 = lVar7 + 1, lVar7 < (int)(uVar2 - iVar22)) {
      cVar3 = *pcVar16;
      pcVar16 = pcVar16 + uVar9;
      if (cVar3 != '\0') goto LAB_40414f3c;
    }
    pcVar15 = pcVar15 + 1;
  }
  uVar13 = uVar9;
LAB_40414f3c:
  iVar24 = (int)uVar13;
  uVar23 = (ulong)(uVar1 - iVar24 & ((int)(uVar1 - iVar24) >> 0x1f ^ 0xffffffffU));
  for (uVar17 = 0; uVar17 != uVar23; uVar17 = uVar17 + 1) {
    pcVar15 = pcVar14;
    lVar7 = lVar8;
    while (lVar7 = lVar7 + 1, lVar7 < (int)(uVar2 - iVar22)) {
      cVar3 = *pcVar15;
      pcVar15 = pcVar15 + uVar9;
      if (cVar3 != '\0') {
        uVar23 = uVar17;
        goto LAB_40414f84;
      }
    }
    pcVar14 = pcVar14 + -1;
  }
LAB_40414f84:
  uVar1 = uVar1 - (iVar24 + (int)uVar23);
  iVar4 = uVar2 - (iVar22 + iVar19);
  if (((int)uVar1 >= 1 && iVar4 != 0) && ((int)uVar1 < 1 || -1 < iVar4)) {
    uStack_89 = 0;
    recovered_824149cc(&pvStack_88);
    lVar8 = 0;
    for (uVar9 = (ulong)(uint)((int)uVar21 - iVar22); uVar9 != 0; uVar9 = uVar9 - 1) {
      recovered_82400928((void *)((long)pvStack_88 + lVar8),
                         (void *)(*(long *)(in_x8 + 6) + uVar20 * (long)in_x8[2] +
                                 (uVar13 & 0xffffffff)),(ulong)uVar1);
      lVar8 = lVar8 + (ulong)uVar1;
      uVar20 = uVar20 + 1;
    }
    *in_x8 = *in_x8 + iVar24;
    in_x8[1] = in_x8[1] - iVar19;
    in_x8[2] = uVar1;
    in_x8[3] = iVar4;
    recovered_82413488((undefined8 *)(in_x8 + 6),&pvStack_88);
    uStack_80 = 0;
    recovered_8240facc(pvStack_88);
    goto LAB_40414e70;
  }
LAB_40414fa0:
  in_x8[0] = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  in_x8[3] = 0;
  in_x8[8] = 0;
  in_x8[9] = 0;
LAB_40414e70:
  *(undefined8 *)(in_x8 + 4) = uStack_a0;
  piVar10 = (int *)recovered_8241c0b0((long)apiStack_148);
  return piVar10;
}

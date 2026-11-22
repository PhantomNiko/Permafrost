/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf3cc (*(uint8_t volatile *)(0x215a7dcU))
#define DAT_020cf3d0 (*(uint32_t volatile *)(0x215a7e0U))
#define DAT_020cf3d8 (*(uint32_t volatile *)(0x215a7e8U))
#define DAT_020cf3dc (*(uint32_t volatile *)(0x215a7ecU))
#define DAT_020cf3ec (*(uint32_t volatile *)(0x215a7fcU))
#define DAT_020cf428 (*(uint32_t volatile *)(0x215a838U))
#define DAT_020cf430 (*(uint32_t volatile *)(0x215a840U))
#define DAT_020cf434 (*(uint32_t volatile *)(0x215a844U))
uint recovered_20c6ef0(long *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  void *buffer;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;

  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (param_2 == (long *)0x0) {
    return 0;
  }
  iVar11 = DAT_020cf3ec;
  if (iVar11 != 7) {
    return 0;
  }
  iVar11 = DAT_020cf434;
  if (iVar11 == 0) {
    return 0;
  }
  uVar6 = DAT_020cf430;
  if (uVar6 == 0) {
    return 0;
  }
  iVar11 = DAT_020cf3d8;
  if (iVar11 == 0) {
    return 0;
  }
  uVar12 = DAT_020cf3d0;
  buffer = recovered_2000ad0((ulong)uVar12 * (ulong)uVar6);
  if (buffer == (void *)0x0) {
    return 0;
  }
  bVar4 = DAT_020cf3cc;
  iVar13 = DAT_020cf428;
  uVar5 = DAT_020cf3dc;
  uVar5 = DAT_020cf3dc;
  iVar11 = DAT_020cf3dc;
  uVar6 = recovered_206b1b0(bVar4,(ulong)(uint)(iVar13 + iVar11),(long)buffer,
                            (ulong)uVar12 * (ulong)uVar6);
  if ((char)uVar6 == '\0') {
    recovered_2000bb0(buffer);
    return 0;
  }
  iVar11 = DAT_020cf434;
  uVar6 = iVar11 + 2;
  uVar10 = 0;
  if (uVar6 < 3) goto LAB_0204a903;
  uVar1 = (ulong)uVar6 - 2;
  uVar8 = 2;
  if (uVar1 < 8) {
LAB_0204a8f0:
    do {
      uVar12 = (int)uVar10 + (uint)(*(int *)((long)buffer + uVar8 * 4) == 0);
      uVar10 = (ulong)uVar12;
      uVar8 = uVar8 + 1;
    } while (uVar6 != uVar8);
  }
  else {
    uVar9 = uVar1 & 0xfffffffffffffff8;
    uVar8 = uVar9 + 2;
    uVar10 = 0;
    iVar16 = 0;
    iVar17 = 0;
    iVar18 = 0;
    iVar19 = 0;
    iVar11 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    do {
      piVar2 = (int *)((long)buffer + uVar10 * 4 + 8);
      piVar3 = (int *)((long)buffer + uVar10 * 4 + 0x18);
      iVar16 = iVar16 + (uint)(*piVar2 == 0);
      iVar17 = iVar17 + (uint)(piVar2[1] == 0);
      iVar18 = iVar18 + (uint)(piVar2[2] == 0);
      iVar19 = iVar19 + (uint)(piVar2[3] == 0);
      iVar11 = iVar11 + (uint)(*piVar3 == 0);
      iVar13 = iVar13 + (uint)(piVar3[1] == 0);
      iVar14 = iVar14 + (uint)(piVar3[2] == 0);
      iVar15 = iVar15 + (uint)(piVar3[3] == 0);
      uVar10 = uVar10 + 8;
    } while (uVar9 != uVar10);
    uVar12 = iVar15 + iVar19 + iVar13 + iVar17 + iVar14 + iVar18 + iVar11 + iVar16;
    uVar10 = (ulong)uVar12;
    if (uVar1 != uVar9) goto LAB_0204a8f0;
  }
  uVar10 = (ulong)uVar12;
LAB_0204a903:
  recovered_2000bb0(buffer);
  uVar12 = DAT_020cf434;
  uVar6 = DAT_020cf3d8;
  lVar7 = (ulong)uVar12 * (ulong)uVar6;
  *param_2 = lVar7;
  *param_1 = uVar10 * uVar6;
  return (uint)CONCAT71((int7)((ulong)lVar7 >> 8),1);
}

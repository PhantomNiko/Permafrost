/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"



undefined4 recovered_2063490(int *in_ECX,int in_EDX,int param_3,uint param_4,uint *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;

  if (param_5 == (uint *)0x0 || (param_3 == 0 || (in_EDX == 0 || in_ECX == (int *)0x0))) {
    return 0;
  }
  puVar2 = *(uint **)(in_EDX + 0x38);
  uVar6 = *(uint *)(in_EDX + 0x3c);
  if (uVar6 < (puVar2 < (uint *)((uint)((char)in_ECX[2] != '\0') * 8 + 0x10))) {
    return 0;
  }
  uVar12 = recovered_20012c0(*(uint *)(in_EDX + 0x28),*(uint *)(in_EDX + 0x2c),(uint)puVar2,uVar6);
  iVar10 = (int)(uVar12 >> 0x20);
  if (iVar10 == 0 && (uint)(param_4 < (uint)uVar12) <= (uint)-iVar10) {
    return 0;
  }
  uVar5 = (uint)(ZEXT48(puVar2) * (ulonglong)param_4);
  puVar8 = (uint *)(uVar5 + *(uint *)(in_EDX + 0x18));
  iVar10 = param_4 * uVar6 + (int)(ZEXT48(puVar2) * (ulonglong)param_4 >> 0x20) +
           *(int *)(in_EDX + 0x1c) + (uint)CARRY4(uVar5,*(uint *)(in_EDX + 0x18));
  puVar3 = (uint *)in_ECX[1];
  iVar11 = iVar10 + uVar6 + (uint)CARRY4((uint)puVar2,(uint)puVar8);
  if ((iVar11 != 0 || (uint)-iVar11 < (uint)(puVar3 < (uint *)((int)puVar2 + (int)puVar8))) ||
      ((uVar6 != 0 || -uVar6 < (uint)(puVar3 < puVar2)) ||
      (iVar10 != 0 || (uint)-iVar10 < (uint)(puVar3 < puVar8)))) {
    return 0;
  }
  iVar10 = *in_ECX;
  recovered_2001e00(param_5,0,0x1c);
  if (*(char *)((int)in_ECX + 9) == '\x01') {
    uVar6 = *(uint *)(iVar10 + (int)puVar8);
    *param_5 = uVar6;
    if ((char)in_ECX[2] != '\0') {
      *(undefined1 *)(param_5 + 1) = *(undefined1 *)(iVar10 + 4 + (int)puVar8);
      *(undefined2 *)((int)param_5 + 6) = *(undefined2 *)(iVar10 + 6 + (int)puVar8);
      uVar5 = *(uint *)(iVar10 + 8 + (int)puVar8);
      param_5[3] = *(uint *)(iVar10 + 0xc + (int)puVar8);
      param_5[2] = uVar5;
      uVar5 = *(uint *)(iVar10 + 0x10 + (int)puVar8);
      uVar7 = *(uint *)(iVar10 + 0x14 + (int)puVar8);
LAB_0206361c:
      param_5[4] = uVar5;
      param_5[5] = uVar7;
      puVar8 = param_5;
      goto LAB_020636ab;
    }
    param_5[2] = *(uint *)(iVar10 + 4 + (int)puVar8);
    param_5[3] = 0;
    param_5[4] = *(uint *)(iVar10 + 8 + (int)puVar8);
    param_5[5] = 0;
    *(undefined1 *)(param_5 + 1) = *(undefined1 *)(iVar10 + 0xc + (int)puVar8);
    uVar9 = *(ushort *)(iVar10 + 0xe + (int)puVar8);
  }
  else {
    uVar6 = *(uint *)(iVar10 + (int)puVar8);
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    *param_5 = uVar6;
    bVar1 = *(byte *)(iVar10 + 4 + (int)puVar8);
    if ((char)in_ECX[2] != '\0') {
      *(byte *)(param_5 + 1) = bVar1;
      uVar9 = *(ushort *)(iVar10 + 6 + (int)puVar8);
      *(ushort *)((int)param_5 + 6) = uVar9 << 8 | uVar9 >> 8;
      uVar5 = *(uint *)(iVar10 + 8 + (int)puVar8);
      uVar7 = *(uint *)(iVar10 + 0xc + (int)puVar8);
      param_5[3] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      param_5[2] = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar5 = *(uint *)(iVar10 + 0x10 + (int)puVar8);
      uVar4 = *(uint *)(iVar10 + 0x14 + (int)puVar8);
      uVar7 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      uVar5 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      goto LAB_0206361c;
    }
    param_5[2] = (uint)*(byte *)(iVar10 + 7 + (int)puVar8) |
                 (uint)*(byte *)(iVar10 + 6 + (int)puVar8) << 8 |
                 (uint)*(byte *)(iVar10 + 5 + (int)puVar8) << 0x10 | (uint)bVar1 << 0x18;
    param_5[3] = 0;
    uVar5 = *(uint *)(iVar10 + 8 + (int)puVar8);
    param_5[4] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    param_5[5] = 0;
    *(undefined1 *)(param_5 + 1) = *(undefined1 *)(iVar10 + 0xc + (int)puVar8);
    uVar9 = *(ushort *)(iVar10 + 0xe + (int)puVar8);
    uVar9 = uVar9 << 8 | uVar9 >> 8;
  }
  *(ushort *)((int)param_5 + 6) = uVar9;
LAB_020636ab:
  uVar5 = 0;
  if (((*in_ECX != 0) &&
      (puVar8 = (uint *)param_3,
      *(int *)(param_3 + 0x2c) != 0 ||
      (uint)-*(int *)(param_3 + 0x2c) < (uint)(uVar6 < *(uint *)(param_3 + 0x28)))) &&
     (uVar7 = uVar6 + *(uint *)(param_3 + 0x18),
     *(int *)(param_3 + 0x1c) + (uint)CARRY4(uVar6,*(uint *)(param_3 + 0x18)) <
     (uint)(uVar7 < (uint)in_ECX[1]))) {
    uVar5 = *in_ECX + uVar7;
  }
  param_5[6] = uVar5;
  return CONCAT31((int3)((uint)puVar8 >> 8),1);
}

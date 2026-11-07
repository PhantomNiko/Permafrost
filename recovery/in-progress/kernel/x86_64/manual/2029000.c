/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define uStack_18 (*(undefined8 *)(frame + 24))
uchar recovered_2029000(undefined8 *param_1,ushort *param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 uVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;

  uVar5 = *(ulong *)*param_1;
  if (*(ulong *)param_1[1] <= uVar5) {
    return '\0';
  }
  PF_PART4(uStack_18, 0) = (undefined4)uVar5;
  uStack_18 = CONCAT44(0xff000000,(undefined4)uStack_18);
  iVar2 = *(int *)param_1[2];
  if (iVar2 == 3) {
    uVar6 = (undefined1)*param_2;
    PF_PART5(uStack_18, 0) = CONCAT14(uVar6,(undefined4)uStack_18);
    PF_PART6(uStack_18, 0) = CONCAT15(uVar6,(undefined5)uStack_18);
    PF_PART7(uStack_18, 0) = CONCAT16(uVar6,(undefined6)uStack_18);
    uStack_18 = (ulong)(uint7)uStack_18;
    uVar6 = 0xff;
    if (*(int *)param_1[3] == 0x10) {
      uVar6 = *(undefined1 *)((long)param_2 + 1);
    }
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 1) {
        return '\0';
      }
      if (*(int *)param_1[3] == 8) {
        uVar3 = (uint)(byte)*param_2;
      }
      else {
        uVar3 = (uint)*param_2;
      }
      uVar4 = uVar3 - *(uint *)param_1[4];
      if (uVar3 < *(uint *)param_1[4]) {
        return '\0';
      }
      if (*(uint *)param_1[5] <= uVar4) {
        return '\0';
      }
      recovered_2001410((void *)((long)&uStack_18 + 4),
                        (void *)((ulong)uVar4 * 4 + *(long *)param_1[6]),4);
      uVar5 = *(ulong *)*param_1;
      goto LAB_0201d00a;
    }
    iVar2 = *(int *)param_1[3];
    if (iVar2 == 8) {
      uVar6 = (undefined1)*param_2;
      PF_PART5(uStack_18, 0) = CONCAT14(uVar6,(undefined4)uStack_18);
      PF_PART6(uStack_18, 0) = CONCAT15(uVar6,(undefined5)uStack_18);
    }
    else {
      if (iVar2 - 0xfU < 2) {
        uVar1 = *param_2;
        PF_PART5(uStack_18, 0) =
             CONCAT14((char)((uVar1 >> 10 & 0x1f) * 0x20e7f7 >> 0x12),(undefined4)uStack_18);
        PF_PART6(uStack_18, 0) =
             CONCAT15((char)((uVar1 >> 5 & 0x1f) * 0x20e7f7 >> 0x12),(undefined5)uStack_18);
        PF_PART7(uStack_18, 0) = CONCAT16((char)((uVar1 & 0x1f) * 0x20e7f7 >> 0x12),(undefined6)uStack_18);
        bVar8 = 0xff;
        if (iVar2 == 0x10) {
          bVar8 = -((*(uint *)param_1[7] & 0xf) == 0) | (byte)((uint)(int)(short)uVar1 >> 0xf);
        }
        uStack_18 = CONCAT17(bVar8,(uint7)uStack_18);
        goto LAB_0201d00a;
      }
      if (iVar2 == 0x20) {
        PF_PART5(uStack_18, 0) = CONCAT14((char)param_2[1],(undefined4)uStack_18);
        PF_PART6(uStack_18, 0) = CONCAT15(*(undefined1 *)((long)param_2 + 1),(undefined5)uStack_18);
        PF_PART7(uStack_18, 0) = CONCAT16((char)*param_2,(undefined6)uStack_18);
        uStack_18 = (ulong)(uint7)uStack_18;
        uVar6 = *(undefined1 *)((long)param_2 + 3);
        goto LAB_0201d007;
      }
      if (iVar2 != 0x18) {
        return '\0';
      }
      PF_PART5(uStack_18, 0) = CONCAT14((char)param_2[1],(undefined4)uStack_18);
      PF_PART6(uStack_18, 0) = CONCAT15(*(undefined1 *)((long)param_2 + 1),(undefined5)uStack_18);
      uVar6 = (undefined1)*param_2;
    }
    PF_PART7(uStack_18, 0) = CONCAT16(uVar6,(undefined6)uStack_18);
    uStack_18 = (ulong)(uint7)uStack_18;
    uVar6 = 0xff;
  }
LAB_0201d007:
  uStack_18 = CONCAT17(uVar6,(uint7)uStack_18);
LAB_0201d00a:
  uVar7 = (ulong)*(uint *)param_1[8];
  if (uVar5 >> 0x20 == 0) {
    uVar3 = (uint)((uVar5 & 0xffffffff) / uVar7);
    uVar4 = (uint)((uVar5 & 0xffffffff) % uVar7);
  }
  else {
    uVar3 = (uint)(uVar5 / uVar7);
    uVar4 = (uint)(uVar5 % uVar7);
  }
  uVar9 = ~uVar4 + *(uint *)param_1[8];
  if ((*(uint *)param_1[7] & 0x10) == 0) {
    uVar9 = uVar4;
  }
  if ((*(uint *)param_1[7] & 0x20) == 0) {
    uVar3 = ~uVar3 + *(int *)param_1[9];
  }
  recovered_2001410((void *)(((ulong)uVar9 + uVar3 * uVar7) * 4 + *(long *)param_1[10]),
                    (void *)((long)&uStack_18 + 4),4);
  *(long *)*param_1 = *(long *)*param_1 + 1;
  return '\x01';
}

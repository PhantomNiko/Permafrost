/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(undefined4 *)(frame + 28))
undefined4 recovered_2021300(undefined4 *incoming_ecx,ushort *incoming_edx)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  int *piVar3;
  undefined3 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;

  uVar5 = *(uint *)*incoming_ecx;
  if (*(uint *)incoming_ecx[1] <= uVar5) {
    return 0;
  }
  local_14 = 0xff000000;
  iVar2 = *(int *)incoming_ecx[2];
  if (iVar2 == 3) {
    uVar8 = (undefined1)*incoming_edx;
    PF_PART2(local_14, 0) = CONCAT11(uVar8,uVar8);
    PF_PART3(local_14, 0) = CONCAT12(uVar8,(undefined2)local_14);
    uVar8 = 0xff;
    if (*(int *)incoming_ecx[3] == 0x10) {
      uVar8 = *(undefined1 *)((int)incoming_edx + 1);
    }
    local_14 = CONCAT13(uVar8,(undefined3)local_14);
  }
  else if (iVar2 == 2) {
    iVar2 = *(int *)incoming_ecx[3];
    if (iVar2 == 8) {
      uVar8 = (undefined1)*incoming_edx;
      PF_PART2(local_14, 0) = CONCAT11(uVar8,uVar8);
    }
    else {
      if (iVar2 - 0xfU < 2) {
        uVar1 = *incoming_edx;
        uVar4 = CONCAT12((char)((uVar1 & 0x1f) * 0x20e7f7 >> 0x12),
                         CONCAT11((char)((uVar1 >> 5 & 0x1f) * 0x20e7f7 >> 0x12),
                                  (char)((uVar1 >> 10 & 0x1f) * 0x20e7f7 >> 0x12)));
        if (iVar2 == 0x10) {
          local_14 = CONCAT13(-((*(uint *)incoming_ecx[7] & 0xf) == 0) |
                              (byte)((uint)(int)(short)uVar1 >> 0xf),uVar4);
        }
        else {
          local_14 = CONCAT13(0xff,uVar4);
        }
        goto LAB_02018a45;
      }
      if (iVar2 == 0x20) {
        PF_PART2(local_14, 0) = CONCAT11(*(undefined1 *)((int)incoming_edx + 1),(char)incoming_edx[1]);
        PF_PART3(local_14, 0) = CONCAT12((char)*incoming_edx,(undefined2)local_14);
        local_14 = CONCAT13(*(undefined1 *)((int)incoming_edx + 3),(undefined3)local_14);
        goto LAB_02018a45;
      }
      if (iVar2 != 0x18) {
        return 0;
      }
      PF_PART2(local_14, 0) = CONCAT11(*(undefined1 *)((int)incoming_edx + 1),(char)incoming_edx[1]);
      uVar8 = (undefined1)*incoming_edx;
    }
    PF_PART3(local_14, 0) = CONCAT12(uVar8,(undefined2)local_14);
    local_14 = CONCAT13(0xff,(undefined3)local_14);
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    if (*(int *)incoming_ecx[3] == 8) {
      uVar5 = (uint)(byte)*incoming_edx;
    }
    else {
      uVar5 = (uint)*incoming_edx;
    }
    uVar7 = uVar5 - *(uint *)incoming_ecx[4];
    if (uVar5 < *(uint *)incoming_ecx[4]) {
      return 0;
    }
    if (*(uint *)incoming_ecx[5] <= uVar7) {
      return 0;
    }
    recovered_2001b70(&local_14,(void *)(uVar7 * 4 + *(int *)incoming_ecx[6]),4);
    uVar5 = *(uint *)*incoming_ecx;
  }
LAB_02018a45:
  uVar7 = *(uint *)incoming_ecx[8];
  uVar6 = uVar5 / uVar7;
  uVar5 = uVar5 % uVar7;
  if ((*(uint *)incoming_ecx[7] & 0x10) != 0) {
    uVar5 = ~uVar5 + uVar7;
  }
  if ((*(uint *)incoming_ecx[7] & 0x20) == 0) {
    uVar6 = ~uVar6 + *(int *)incoming_ecx[9];
  }
  recovered_2001b70((void *)((uVar6 * uVar7 + uVar5) * 4 + *(int *)incoming_ecx[10]),&local_14,4);
  piVar3 = (int *)*incoming_ecx;
  *piVar3 = *piVar3 + 1;
  return CONCAT31((int3)((uint)piVar3 >> 8),1);
}

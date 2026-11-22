/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define bStack_2a3 (*(byte *)(frame + 29))
#define local_1c (*(uint *)(frame + 676))
#define local_20 (*(uint *)(frame + 672))
#define local_270 (*(undefined4 *)(frame + 80))
#define local_274 (*(undefined4 *)(frame + 76))
#define local_278 (*(undefined4 *)(frame + 72))
#define local_27c (*(undefined4 *)(frame + 68))
#define local_280 (*(uint *)(frame + 64))
#define local_284 (*(uint *)(frame + 60))
#define local_288 (*(undefined4 *)(frame + 56))
#define local_28c (*(uint *)(frame + 52))
#define local_290 (*(uint *)(frame + 48))
#define local_294 (*(undefined4 *)(frame + 44))
#define local_298 (*(undefined4 *)(frame + 40))
#define local_2a0 (*(byte *)(frame + 32))
#define local_2a8 (*(undefined4 *)(frame + 24))
#define local_2b0 (*(undefined1 (*)[8])(frame + 16))
#define local_2c (*(undefined4 *)(frame + 660))
#define local_30 (*(undefined4 *)(frame + 656))
#define local_34 (*(undefined4 *)(frame + 652))
#define local_38 (*(undefined4 *)(frame + 648))
#define local_3c (*(uint *)(frame + 644))
#define local_40 (*(uint *)(frame + 640))
#define local_44 (*(undefined4 *)(frame + 636))
#define local_48 (*(uint *)(frame + 632))
#define local_4c (*(uint *)(frame + 628))
#define local_50 (*(undefined4 *)(frame + 624))
#define local_54 (*(undefined4 *)(frame + 620))
#define local_5c (*(int *)(frame + 612))
#define local_60 (*(int *)(frame + 608))
#define local_64 (*(int *)(frame + 604))
#define local_6c (*(undefined1 (*)[8])(frame + 596))
#define local_70 (*(undefined4 *)(frame + 592))
#define local_74 (*(undefined4 *)(frame + 588))
#define local_78 (*(undefined4 *)(frame + 584))
#define local_7c (*(undefined4 *)(frame + 580))
#define local_80 (*(uint *)(frame + 576))
#define local_84 (*(uint *)(frame + 572))
#define local_88 (*(undefined4 *)(frame + 568))
#define local_8c (*(uint *)(frame + 564))
#define local_90 (*(uint *)(frame + 560))
#define local_94 (*(undefined4 *)(frame + 556))
#define local_98 (*(undefined4 *)(frame + 552))
#define local_a8 (*(int *)(frame + 536))
#define local_b0 (*(undefined1 (*)[8])(frame + 528))
#define local_b2 (*(short *)(frame + 526))
#define str_0208e2c8 (*(char (*)[1])(0x20c5070U))
#define uStack_29a (*(ushort *)(frame + 38))
#define uStack_29c (*(undefined1 *)(frame + 36))
#define uStack_29d (*(undefined1 *)(frame + 35))
#define uStack_29f (*(ushort *)(frame + 33))
#define uStack_2a2 (*(ushort *)(frame + 30))
#define uStack_2a4 (*(undefined1 *)(frame + 28))
void recovered_20a6af0(int incoming_ecx,uint *incoming_edx)

{
  unsigned char frame[736] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  local_20 = 0;
  if (incoming_edx == (uint *)0x0) {
    return;
  }
  if (*(int *)(incoming_ecx + 0xc) == 0) {
    return;
  }
  *incoming_edx = 1;
  uVar2 = recovered_204ed30((uint)*(byte *)(incoming_ecx + 4),*(uint *)(incoming_ecx + 8),
                            (int)local_2b0,0x200);
  if ((char)uVar2 == '\0') {
    return;
  }
  recovered_2001e00(local_b0,0,0x44);
  recovered_2001b70(local_b0,local_2b0,8);
  local_a8 = local_2a8;
  local_98 = local_298;
  local_94 = local_294;
  local_90 = local_290;
  local_8c = local_28c;
  local_88 = local_288;
  local_84 = local_284;
  local_80 = local_280;
  local_7c = local_27c;
  local_78 = local_278;
  local_74 = local_274;
  local_70 = local_270;
  uVar2 = recovered_20a8160(local_b0,*(uint *)(incoming_ecx + 0xc),&local_20,(uint *)0x0);
  local_3c = local_20;
  if ((char)uVar2 == '\0') {
    recovered_2001e00(local_6c,0,0x44);
    recovered_2001b70(local_6c,local_2b0,8);
    local_60 = CONCAT22(uStack_2a2,CONCAT11(bStack_2a3,uStack_2a4));
    local_64 = local_2a8;
    local_5c = CONCAT13(uStack_29d,CONCAT21(uStack_29f,local_2a0));
    local_54 = local_298;
    local_50 = local_294;
    local_4c = local_290;
    local_48 = local_28c;
    local_44 = local_288;
    local_40 = local_284;
    local_3c = local_280;
    local_38 = local_27c;
    local_34 = local_278;
    local_30 = local_274;
    local_2c = local_270;
    iVar3 = recovered_2001ff0(local_6c,str_0208e2c8,8);
    if ((((iVar3 != 0) || (local_64 != 1)) || (local_60 != 0x200)) ||
       (local_20 = local_3c, local_5c == 0)) {
      if (local_b2 != -0x55ab) {
        return;
      }
      local_3c = (uint)CONCAT11(uStack_29c,uStack_29d);
      if (CONCAT11(uStack_29c,uStack_29d) == 0) {
        local_3c = local_290;
      }
      local_1c = local_28c;
      if (uStack_29a != 0) {
        local_1c = (uint)uStack_29a;
      }
      if (bStack_2a3 == 0 || CONCAT11(uStack_2a4,PF_PART1(local_2a8, 3)) != 0x200) {
        return;
      }
      uVar1 = (uint)bStack_2a3;
      if ((uVar1 - 1 & uVar1) != 0) {
        return;
      }
      if (uStack_2a2 == 0) {
        return;
      }
      if (local_2a0 == 0) {
        return;
      }
      if (local_1c == 0) {
        return;
      }
      if (local_3c == 0) {
        return;
      }
      if ((*(uint *)(incoming_ecx + 0xc) != 0) && (*(uint *)(incoming_ecx + 0xc) < local_3c)) {
        return;
      }
      local_20 = (uint)uStack_29f;
      uVar4 = 0;
      if (local_20 != 0) {
        uVar4 = local_20 * 0x20 + 0x1ff >> 9;
      }
      uVar5 = uVar4 + uStack_2a2 + local_1c * local_2a0;
      uVar4 = local_3c - uVar5;
      if (local_3c < uVar5 || uVar4 == 0) {
        return;
      }
      if (((uStack_29a == 0 && uStack_29f == 0) && local_28c != 0) || (0xfff4 < uVar4 / uVar1)) {
        if (local_20 != 0) {
          return;
        }
        if (local_284 < 2) {
          return;
        }
        goto LAB_02079360;
      }
    }
  }
  if (local_20 == 0) {
    return;
  }
LAB_02079360:
  *incoming_edx = local_3c;
  return;
}

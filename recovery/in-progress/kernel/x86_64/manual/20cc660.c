/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define bStack_2a8 (*(byte *)(frame + 40))
#define bStack_2ab (*(byte *)(frame + 37))
#define iStack_58 (*(int *)(frame + 632))
#define local_24 (*(uint *)(frame + 684))
#define local_278 (*(undefined4 *)(frame + 88))
#define local_28 (*(undefined4 *)(frame + 680))
#define local_280 (*(undefined8 *)(frame + 80))
#define local_2a0 (*(undefined8 *)(frame + 48))
#define local_2b0 (*(undefined3 *)(frame + 32))
#define local_2b8 (*(undefined1 (*)[8])(frame + 24))
#define local_30 (*(undefined8 *)(frame + 672))
#define local_50 (*(undefined8 *)(frame + 640))
#define local_60 (*(undefined8 *)(frame + 624))
#define local_68 (*(undefined1 (*)[8])(frame + 616))
#define local_6c (*(undefined4 *)(frame + 612))
#define local_74 (*(undefined8 *)(frame + 604))
#define local_94 (*(undefined8 *)(frame + 572))
#define local_ac (*(undefined1 (*)[24])(frame + 548))
#define local_ba (*(short *)(frame + 534))
#define sStack_2ad (*(short *)(frame + 35))
#define str_020a2588 (*(char (*)[1])(0x20ec428U))
#define uStack_288 (*(undefined8 *)(frame + 72))
#define uStack_28c (*(uint *)(frame + 68))
#define uStack_294 (*(uint *)(frame + 60))
#define uStack_298 (*(uint *)(frame + 56))
#define uStack_2a2 (*(ushort *)(frame + 46))
#define uStack_2a5 (*(ushort *)(frame + 43))
#define uStack_2a7 (*(ushort *)(frame + 41))
#define uStack_2aa (*(ushort *)(frame + 38))
#define uStack_38 (*(undefined8 *)(frame + 664))
#define uStack_7c (*(undefined8 *)(frame + 596))
void recovered_20cc660(long param_1,uint *param_2)

{
  unsigned char frame[752] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  local_24 = 0;
  if (param_2 == (uint *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  *param_2 = 1;
  uVar1 = recovered_206b1b0(*(byte *)(param_1 + 4),(ulong)*(uint *)(param_1 + 8),(long)local_2b8,
                            0x200);
  if ((char)uVar1 == '\0') {
    return;
  }
  recovered_2002110(local_ac,0,0x44);
  recovered_2001410(local_ac,local_2b8,8);
  local_94 = local_2a0;
  uStack_7c = uStack_288;
  local_74 = local_280;
  local_6c = local_278;
  uVar1 = recovered_20cda70((long)local_ac,*(uint *)(param_1 + 0xc),&local_24,(uint *)0x0);
  if ((char)uVar1 == '\0') {
    recovered_2002110(local_68,0,0x44);
    recovered_2001410(local_68,local_2b8,8);
    local_60 = CONCAT26(uStack_2aa,CONCAT15(bStack_2ab,CONCAT23(sStack_2ad,local_2b0)));
    iStack_58 = (int)CONCAT23(uStack_2a5,CONCAT21(uStack_2a7,bStack_2a8));
    local_50 = local_2a0;
    uStack_38 = uStack_288;
    local_30 = local_280;
    local_28 = local_278;
    iVar2 = recovered_2002a00(local_68,str_020a2588,8);
    if ((((iVar2 != 0) || ((int)local_60 != 1)) || (PF_PART4(local_60, 4) != 0x200)) || (iStack_58 == 0)) {
      if (local_ba != -0x55ab) {
        return;
      }
      local_24 = (uint)uStack_2a5;
      if (local_24 == 0) {
        local_24 = uStack_298;
      }
      uVar1 = (uint)uStack_2a2;
      if (uStack_2a2 == 0) {
        uVar1 = uStack_294;
      }
      if (bStack_2ab == 0 || sStack_2ad != 0x200) {
        return;
      }
      if ((bStack_2ab - 1 & (uint)bStack_2ab) != 0) {
        return;
      }
      if (uStack_2aa == 0) {
        return;
      }
      if (bStack_2a8 == 0) {
        return;
      }
      if (uVar1 == 0) {
        return;
      }
      if (local_24 == 0) {
        return;
      }
      if ((*(uint *)(param_1 + 0xc) != 0) && (*(uint *)(param_1 + 0xc) < local_24)) {
        return;
      }
      uVar3 = (uint)uStack_2a7 * 0x20 + 0x1ff >> 9;
      if (uStack_2a7 == 0) {
        uVar3 = 0;
      }
      uVar3 = uVar3 + uStack_2aa + uVar1 * bStack_2a8;
      uVar1 = local_24 - uVar3;
      if (local_24 < uVar3 || uVar1 == 0) {
        return;
      }
      if (((uStack_2a2 == 0 && uStack_2a7 == 0) && uStack_294 != 0) || (0xfff4 < uVar1 / bStack_2ab)
         ) {
        if (uStack_2a7 != 0) {
          return;
        }
        if (uStack_28c < 2) {
          return;
        }
      }
      else if (uStack_2a7 == 0) {
        return;
      }
      goto LAB_0208b73b;
    }
    local_24 = (uint)uStack_38;
  }
  if (local_24 == 0) {
    return;
  }
LAB_0208b73b:
  *param_2 = local_24;
  return;
}

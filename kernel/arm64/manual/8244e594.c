/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40450398 (*(uint8_t *)(0x8247a258U))
#define acStack_a8 (*(char (*)[32])(frame + 24))
#define lStack_58 (*(long *)(frame + 104))
#define local_48 (*(void * *)(frame + 120))
#define uStack_50 (*(undefined8 *)(frame + 112))
#define uStack_60 (*(undefined8 *)(frame + 96))
#define uStack_68 (*(undefined8 *)(frame + 88))
#define uStack_70 (*(undefined8 *)(frame + 80))
#define uStack_78 (*(undefined8 *)(frame + 72))
#define uStack_7c (*(undefined4 *)(frame + 68))
#define uStack_80 (*(undefined4 *)(frame + 64))
#define uStack_88 (*(undefined8 *)(frame + 56))
long recovered_8244e594(int *param_1,int *param_2,uint param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;

  local_48 = (void *)0x0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 8) {
    if ((*(long *)(param_1 + 0xc) != 0) &&
       (bVar1 = recovered_82452cb4(param_2,(long *)&local_48), bVar1)) {
      lVar2 = recovered_824617b4(*(long *)(param_1 + 0xc),(long)local_48,param_3);
      recovered_82400748(local_48);
      return lVar2;
    }
    recovered_82400748(local_48);
  }
  else if (*param_1 == 7) {
    if (*param_2 == 1) {
      uVar6 = param_2[1];
      if ((0 < (int)uVar6) || ((param_3 & 1) == 0)) {
        if ((int)uVar6 < 1) {
          return 0;
        }
        lVar2 = *(long *)(param_1 + 10);
        if (lVar2 == 0) {
          return 0;
        }
        if (*(ulong *)(lVar2 + 8) < (ulong)uVar6) {
          if (param_3 == 0) {
            return 0;
          }
          uVar3 = recovered_8244f978(lVar2,(ulong)uVar6);
          if ((int)uVar3 == 0) {
            return 0;
          }
          lVar2 = *(long *)(param_1 + 10);
          uVar6 = param_2[1];
        }
        return *(long *)(lVar2 + 0x18) + (long)(int)uVar6 * 0x40 + -0x40;
      }
    }
    else if ((param_3 & 1) == 0) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 10);
    if (lVar2 != 0) {
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_68 = 0;
      lStack_58 = 0;
      uStack_60 = 0;
      uStack_50 = 0;
      uVar3 = recovered_8244e540((undefined4 *)&uStack_88);
      if ((int)uVar3 == 0) {
        return 0;
      }
      lVar7 = 0;
      uVar8 = 0;
      while( true ) {
        if (*(ulong *)(lVar2 + 8) <= uVar8) {
          recovered_8243166c((undefined8 *)param_1);
          recovered_8243166c((undefined8 *)param_1);
          *(ulong *)(param_1 + 2) = CONCAT44(uStack_7c,uStack_80);
          *(undefined8 *)param_1 = uStack_88;
          *(undefined8 *)(param_1 + 6) = uStack_70;
          *(undefined8 *)(param_1 + 4) = uStack_78;
          *(undefined8 *)(param_1 + 10) = uStack_60;
          *(undefined8 *)(param_1 + 8) = uStack_68;
          *(undefined8 *)(param_1 + 0xe) = uStack_50;
          *(long *)(param_1 + 0xc) = lStack_58;
          uStack_88 = 0;
          uStack_80 = 0;
          uStack_70 = 0;
          uStack_78 = 0;
          uStack_68 = 0;
          lStack_58 = 0;
          uStack_60 = 0;
          uStack_50 = 0;
          lVar2 = recovered_8244e594(param_1,param_2,1);
          return lVar2;
        }
        pf_varargs_404019bc_1(acStack_a8,0x20,&DAT_40450398,uVar8 + 1);
        puVar5 = (undefined8 *)recovered_824617b4(lStack_58,(long)acStack_a8,1);
        if ((puVar5 == (undefined8 *)0x0) ||
           (uVar4 = recovered_8244ed8c(puVar5,(undefined8 *)(*(long *)(lVar2 + 0x18) + lVar7)),
           (uVar4 & 1) == 0)) break;
        lVar7 = lVar7 + 0x40;
        uVar8 = uVar8 + 1;
      }
      recovered_8243166c(&uStack_88);
    }
  }
  return 0;
}

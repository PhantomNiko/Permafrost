/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define uStack_38 (*(undefined8 *)(frame + 72))
#define uStack_40 (*(undefined8 *)(frame + 64))
#define uStack_48 (*(undefined8 *)(frame + 56))
#define uStack_50 (*(undefined8 *)(frame + 48))
#define uStack_58 (*(undefined8 *)(frame + 40))
#define uStack_60 (*(undefined8 *)(frame + 32))
#define uStack_68 (*(undefined4 *)(frame + 24))
#define uStack_70 (*(undefined8 *)(frame + 16))
undefined8 recovered_8246ead0(int *param_1,long param_2,long param_3)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  uStack_70 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uVar1 = recovered_82452034((long)&uStack_70,param_3);
  uVar2 = 0;
  if ((int)uVar1 != 0) {
    uVar2 = recovered_824627d4(param_1,param_2,(long)&uStack_70);
  }
  recovered_8243166c(&uStack_70);
  return uVar2;
}

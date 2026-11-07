/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define lStack_28 (*(long *)(frame + 72))
#define uStack_30 (*(undefined8 *)(frame + 64))
#define uStack_38 (*(undefined8 *)(frame + 56))
#define uStack_40 (*(undefined8 *)(frame + 48))
#define uStack_48 (*(undefined8 *)(frame + 40))
#define uStack_50 (*(undefined8 *)(frame + 32))
#define uStack_58 (*(undefined4 *)(frame + 24))
#define uStack_60 (*(undefined8 *)(frame + 16))
undefined8 recovered_824534b4(undefined8 *param_1,long param_2,long param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uStack_60 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  lStack_28 = 0;
  if (((param_3 != 0) && (uVar1 = recovered_82452034((long)&uStack_60,param_2), (int)uVar1 != 0)) &&
     ((int)uStack_60 == 9 && lStack_28 != 0)) {
    *(undefined1 *)(lStack_28 + 0xb) = 1;
    uVar1 = recovered_8244ed8c((undefined8 *)(lStack_28 + 0x20),(undefined8 *)param_3);
    if ((uVar1 & 1) != 0) {
      recovered_8244c9bc(param_1,&uStack_60);
      return 1;
    }
  }
  recovered_8243166c(&uStack_60);
  return 0;
}

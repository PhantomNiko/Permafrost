/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_28 (*(undefined4 *)(frame + 72))
#define local_38 (*(undefined8 *)(frame + 56))
#define local_48 (*(undefined8 *)(frame + 40))
#define local_58 (*(undefined8 *)(frame + 24))
#define uStack_30 (*(undefined8 *)(frame + 64))
#define uStack_40 (*(undefined8 *)(frame + 48))
#define uStack_50 (*(undefined8 *)(frame + 32))
undefined8 recovered_20922a0(undefined8 *param_1)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined7 extraout_var = 0;
  undefined8 uVar2;

  if (param_1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    recovered_2002110(&local_58,0,0x34);
    uVar1 = recovered_205db40(&local_58);
    if ((int)CONCAT71(extraout_var,uVar1) != 0) {
      recovered_2002110(param_1,0,0x34);
      *param_1 = local_58;
      param_1[1] = uStack_50;
      param_1[2] = local_48;
      param_1[3] = uStack_40;
      param_1[4] = local_38;
      param_1[5] = uStack_30;
      *(undefined4 *)(param_1 + 6) = local_28;
      uVar2 = 1;
    }
  }
  return uVar2;
}

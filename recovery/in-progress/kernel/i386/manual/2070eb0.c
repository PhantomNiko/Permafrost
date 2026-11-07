/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(undefined4 *)(frame + 76))
#define local_18 (*(undefined4 *)(frame + 72))
#define local_1c (*(undefined4 *)(frame + 68))
#define local_20 (*(undefined4 *)(frame + 64))
#define local_24 (*(undefined4 *)(frame + 60))
#define local_28 (*(undefined4 *)(frame + 56))
#define local_2c (*(undefined4 *)(frame + 52))
#define local_30 (*(undefined4 *)(frame + 48))
#define local_34 (*(undefined4 *)(frame + 44))
#define local_38 (*(undefined4 *)(frame + 40))
#define local_3c (*(undefined4 *)(frame + 36))
#define local_40 (*(undefined4 *)(frame + 32))
#define local_44 (*(undefined4 *)(frame + 28))
undefined4 recovered_2070eb0(undefined4 *param_1)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined3 extraout_var = 0;
  undefined4 uVar2;

  uVar2 = 0;
  if (param_1 != (undefined4 *)0x0) {
    recovered_2001e00(&local_44,0,0x34);
    uVar1 = recovered_2042dc0(&local_44);
    if (CONCAT31(extraout_var,uVar1) != 0) {
      recovered_2001e00(param_1,0,0x34);
      *param_1 = local_44;
      param_1[1] = local_40;
      param_1[2] = local_3c;
      param_1[3] = local_38;
      param_1[4] = local_34;
      param_1[5] = local_30;
      param_1[6] = local_2c;
      param_1[7] = local_28;
      param_1[8] = local_24;
      param_1[9] = local_20;
      param_1[10] = local_1c;
      param_1[0xb] = local_18;
      param_1[0xc] = local_14;
      uVar2 = 1;
    }
  }
  return uVar2;
}

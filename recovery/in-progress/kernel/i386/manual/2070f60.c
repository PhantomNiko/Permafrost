/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(undefined4 *)(frame + 44))
#define local_18 (*(undefined4 *)(frame + 40))
#define local_1c (*(undefined4 *)(frame + 36))
#define local_20 (*(undefined4 *)(frame + 32))
#define local_24 (*(undefined4 *)(frame + 28))
#define local_28 (*(undefined4 *)(frame + 24))
#define local_2c (*(undefined4 *)(frame + 20))
#define local_30 (*(undefined4 *)(frame + 16))
undefined4 recovered_2070f60(undefined4 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (param_1 != (undefined4 *)0x0) {
    recovered_2001e00(&local_30,0,0x20);
    uVar1 = recovered_200bf60((int)&local_30);
    if ((char)uVar1 != '\0') {
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = local_28;
      param_1[3] = local_24;
      param_1[4] = local_20;
      param_1[5] = local_1c;
      param_1[6] = local_18;
      param_1[7] = local_14;
      uVar2 = 1;
    }
  }
  return uVar2;
}

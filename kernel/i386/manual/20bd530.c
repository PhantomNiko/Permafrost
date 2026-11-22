/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_10 (*(undefined4 *)(frame + 32))
#define local_14 (*(undefined4 *)(frame + 28))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_1c (*(undefined4 *)(frame + 20))
undefined4 recovered_20bd530(int param_1,undefined4 param_2,undefined4 *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (param_3 != (undefined4 *)0x0) {
    uVar1 = recovered_2012480(param_1,param_2,&local_1c);
    if ((char)uVar1 != '\0') {
      *param_3 = local_1c;
      param_3[1] = local_18;
      param_3[2] = local_14;
      param_3[3] = local_10;
      uVar2 = 1;
    }
  }
  return uVar2;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_38 (*(undefined8 *)(frame + 40))
#define local_48 (*(undefined8 *)(frame + 24))
#define uStack_30 (*(undefined8 *)(frame + 48))
#define uStack_40 (*(undefined8 *)(frame + 32))
undefined8 recovered_2092320(undefined8 *param_1)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined8 uVar2;

  if (param_1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    recovered_2002110(&local_48,0,0x20);
    uVar1 = recovered_200c620((long)&local_48);
    if (uVar1 != '\0') {
      *param_1 = local_48;
      param_1[1] = uStack_40;
      param_1[2] = local_38;
      param_1[3] = uStack_30;
      uVar2 = 1;
    }
  }
  return uVar2;
}

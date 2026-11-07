/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_824535bc(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((param_1 == (int *)0x0) || (*param_1 != 6)) || (param_1[1] == 0)) {
    return 0;
  }
  uVar1 = recovered_824535dc(param_1[1]);
  return uVar1;
}

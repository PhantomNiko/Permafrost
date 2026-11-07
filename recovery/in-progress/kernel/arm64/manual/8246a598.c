/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8246a598(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_3 == (undefined4 *)0x0) || (uVar1 = recovered_8240221c(), (int)uVar1 != 4)) {
    uVar1 = 0;
  }
  else {
    *param_3 = 0;
    uVar1 = 1;
  }
  return uVar1;
}

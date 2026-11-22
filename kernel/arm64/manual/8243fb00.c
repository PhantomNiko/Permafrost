/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_8243fb00(undefined8 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 == 0) {
    return *param_1;
  }
  uVar1 = recovered_8243e3e8(param_1);
  return uVar1;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 * recovered_8241c0dc(undefined8 *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = recovered_8241c120(param_2);
  recovered_8241b3fc(param_1,param_2,uVar1);
  return param_1;
}

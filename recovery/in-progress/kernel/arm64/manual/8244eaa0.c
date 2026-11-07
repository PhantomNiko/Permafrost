/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8244eaa0(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_8243165c((undefined8 *)param_1);
  *param_1 = 1;
  param_1[1] = param_2;
  param_1[2] = PF_RAW32((float)param_2);
  return;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8244a8c0(long *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;

  plVar1 = param_1;
  if (param_1 == (long *)0x0) {
    return;
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    recovered_8244a948(plVar1);
    plVar1 = plVar1 + 1;
  }
  recovered_82400748(param_1);
  return;
}

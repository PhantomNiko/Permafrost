/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_82453758(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      recovered_8243166c((undefined8 *)param_1);
      param_1 = param_1 + 0x40;
    }
  }
  return;
}

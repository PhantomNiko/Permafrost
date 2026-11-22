/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8246c7c8(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_82400b14(param_1,0,0x1c);
  *param_1 = 0x800000008000;
  *(undefined4 *)((long)param_1 + 0xc) = 0x200000;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}

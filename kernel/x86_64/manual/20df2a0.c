/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20df2a0(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *out;

  recovered_2000bb0(*(void **)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  out = recovered_2000ad0(param_3 + 1);
  if (out != (void *)0x0) {
    if (param_2 != 0 && param_3 != 0) {
      recovered_2001410(out,(void *)param_2,param_3);
    }
    *(undefined1 *)((long)out + param_3) = 0;
    *(void **)(param_1 + 0x10) = out;
    *(long *)(param_1 + 0x18) = param_3;
  }
  return out != (void *)0x0;
}

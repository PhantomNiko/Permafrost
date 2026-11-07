/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_a8 (*(char (*)[136])(frame + 24))
#define str_020a9e5d (*(char (*)[1])(0x20eccf3U))
ulong recovered_20c0fd0(undefined4 *param_1)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  ulong size;
  void *out;
  ulong uVar1;

  uVar1 = 0;
  pf_varargs_20039e0__8__8__8_(local_a8,0x80,str_020a9e5d,0x20eccffU,0x20ecd0bU,0x20ecceeU);
  size = recovered_2002e80(local_a8);
  if (param_1 != (undefined4 *)0x0) {
    out = recovered_2000ad0(size + 1);
    if (out == (void *)0x0) {
      uVar1 = 0;
    }
    else {
      if (size != 0) {
        recovered_2001410(out,local_a8,size);
      }
      *(undefined1 *)((long)out + size) = 0;
      recovered_205ec00((undefined8 *)param_1);
      *param_1 = 3;
      *(void **)(param_1 + 4) = out;
      uVar1 = CONCAT71((int7)((ulong)out >> 8),1);
    }
  }
  return uVar1 & 0xffffffff;
}

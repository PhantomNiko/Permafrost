/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define local_20 (*(undefined1 * *)(frame + 32))
#define local_30 (*(long (*)[2])(frame + 16))
uchar recovered_20eaca0(long param_1,long param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined1 *buffer;

  if (param_2 != 0 && param_1 != 0) {
    local_30[0] = 0;
    local_30[1] = 0;
    local_20 = (undefined1 *)0x0;
    uVar1 = recovered_20a8f50((int *)param_1,local_30,0);
    if (uVar1 != '\0') {
      buffer = local_20;
      if (local_20 == (undefined1 *)0x0) {
        buffer = recovered_2000ad0(1);
        if (buffer == (undefined1 *)0x0) goto LAB_020a04c7;
        *buffer = 0;
      }
      pf_varargs_20039e0__8_((char *)param_2,0xf1,&DAT_020a25e3,(ulonglong)buffer);
      recovered_2000bb0(buffer);
      return '\x01';
    }
    recovered_2000bb0(local_20);
  }
LAB_020a04c7:
  recovered_2000bb0((void *)0x0);
  return '\0';
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
uint recovered_20a9af0(undefined4 *param_1,undefined1 *param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *out;
  undefined8 extraout_RAX = 0;
  undefined1 *data;

  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  data = &DAT_020a259c;
  if (param_2 != (undefined1 *)0x0) {
    data = param_2;
  }
  out = recovered_2000ad0(param_3 + 1);
  if (out == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    if (param_3 != 0) {
      recovered_2001410(out,data,param_3);
    }
    *(undefined1 *)((long)out + param_3) = 0;
    recovered_205ec00((undefined8 *)param_1);
    *param_1 = 3;
    *(void **)(param_1 + 4) = out;
    uVar1 = (uint)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
  }
  return uVar1;
}

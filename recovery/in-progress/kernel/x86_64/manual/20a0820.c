/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
uint recovered_20a0820(undefined4 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong size;
  void *out;
  undefined8 extraout_RAX = 0;
  char *text;

  text = &DAT_020a259c;
  if (param_2 != (undefined1 *)0x0) {
    text = param_2;
  }
  size = recovered_2002e80(text);
  if ((param_1 == (undefined4 *)0x0) || (out = recovered_2000ad0(size + 1), out == (void *)0x0)) {
    return 0;
  }
  if (size != 0) {
    recovered_2001410(out,text,size);
  }
  *(undefined1 *)((long)out + size) = 0;
  recovered_205ec00((undefined8 *)param_1);
  *param_1 = 3;
  *(void **)(param_1 + 4) = out;
  return (uint)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
}

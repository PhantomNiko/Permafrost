/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e204 (*(uint8_t *)(0x82473985U))
void recovered_82437130(long *param_1,undefined1 *param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  ulong uVar1;

  text = &DAT_4044e204;
  if (param_2 != (undefined1 *)0x0) {
    text = param_2;
  }
  uVar1 = recovered_82400de8(text);
  recovered_82437178(param_1,(long)text,uVar1,param_3);
  return;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e204 (*(uint8_t *)(0x82473985U))
ulong recovered_8244f8f0(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  ulong uVar1;

  text = &DAT_4044e204;
  if (param_2 != (undefined1 *)0x0) {
    text = param_2;
  }
  uVar1 = recovered_82400de8(text);
  uVar1 = recovered_8244f838(param_1,text,uVar1);
  return uVar1;
}

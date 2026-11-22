/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e204 (*(uint8_t *)(0x82473985U))
bool recovered_8244ee88(undefined4 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  bool bVar1;
  ulong uVar2;

  text = &DAT_4044e204;
  if (param_2 != (undefined1 *)0x0) {
    text = param_2;
  }
  uVar2 = recovered_82400de8(text);
  bVar1 = recovered_82453570(param_1,text,uVar2);
  return bVar1;
}

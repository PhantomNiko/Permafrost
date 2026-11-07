/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020de620 (*(uint64_t volatile *)(0x226c270U))
#define DAT_020de628 (*(uint64_t volatile *)(0x226c278U))
uchar recovered_20e7440(ulong param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uchar uVar2;
  ulong uVar3;
  void *out;
  char *text;

  uVar3 = DAT_020de628;
  if (uVar3 <= param_1) {
    return '\0';
  }
  text = &DAT_020a259c;
  if (param_2 != (undefined1 *)0x0) {
    text = param_2;
  }
  uVar3 = recovered_2002e80(text);
  out = recovered_2000ad0(uVar3 + 1);
  if (out == (void *)0x0) {
    uVar2 = '\0';
  }
  else {
    if (uVar3 != 0) {
      recovered_2001410(out,text,uVar3);
    }
    *(undefined1 *)((long)out + uVar3) = 0;
    lVar1 = DAT_020de620;
    recovered_2000bb0(*(void **)(lVar1 + param_1 * 8));
    lVar1 = DAT_020de620;
    *(void **)(lVar1 + param_1 * 8) = out;
    uVar2 = '\x01';
  }
  return uVar2;
}

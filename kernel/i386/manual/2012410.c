/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9179 (*(uint8_t volatile *)(0x2104ae0U))
undefined4 recovered_2012410(undefined1 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined1 uVar2;

  if (((param_1 == (undefined1 *)0x0) || (bVar1 = DAT_020b9179, (bVar1 & 1) == 0)) ||
     (bVar1 = in(0x3fd), (bVar1 & 1) == 0)) {
    return 0;
  }
  uVar2 = in(0x3f8);
  *param_1 = uVar2;
  return 1;
}

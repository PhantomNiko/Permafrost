/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020addc8 (*(uint32_t volatile *)(0x21027e8U))
#define Ram00000000020addb8 (*(uint128 volatile *)(0x21027d8U))
void recovered_2005dc0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  undefined4 uVar2;

  if (param_1 != (undefined8 *)0x0) {
    uVar2 = DAT_020addc8;
    *(undefined4 *)(param_1 + 2) = uVar2;
    auVar1 = Ram00000000020addb8;
    *(uint128 *)param_1 = auVar1;
  }
  return;
}

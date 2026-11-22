/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020987d0 (*(uint32_t volatile *)(0x20d9d1cU))
#define DAT_020987d4 (*(uint32_t volatile *)(0x20d9d20U))
#define DAT_020987d8 (*(uint32_t volatile *)(0x20d9d24U))
#define DAT_020987dc (*(uint32_t volatile *)(0x20d9d28U))
#define DAT_020987e0 (*(uint32_t volatile *)(0x20d9d2cU))
void recovered_2004820(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 != (undefined4 *)0x0) {
    uVar1 = DAT_020987e0;
    param_1[4] = uVar1;
    uVar1 = DAT_020987dc;
    param_1[3] = uVar1;
    uVar1 = DAT_020987d8;
    param_1[2] = uVar1;
    uVar1 = DAT_020987d4;
    param_1[1] = uVar1;
    uVar1 = DAT_020987d0;
    *param_1 = uVar1;
  }
  return;
}

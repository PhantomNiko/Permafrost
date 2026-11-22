/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044df00 (*(uint8_t *)(0x82473090U))
void recovered_8241bae4(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 8;
  if (3 < *(ulong *)(param_1 + 8)) {
    uVar1 = *(ulong *)(param_1 + 8) << 1;
  }
  if (uVar1 <= param_2) {
    uVar1 = param_2;
  }
  uVar1 = recovered_8241bb4c(uVar1);
  recovered_82418874((long *)(param_1 + 0x18),uVar1,(undefined8 *)&DAT_4044df00);
  recovered_82418874((long *)(param_1 + 0x30),*(ulong *)(param_1 + 8),(undefined8 *)&DAT_4044df00);
  recovered_8241bb68(param_1);
  return;
}

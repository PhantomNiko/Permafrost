/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044df08 (*(uint8_t *)(0x82473098U))
double recovered_8241c458(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;
  double extraout_d0 = 0;
  double extraout_d0_00 = 0;

  uVar1 = 8;
  if (3 < *(ulong *)(param_1 + 8)) {
    uVar1 = *(ulong *)(param_1 + 8) << 1;
  }
  if (uVar1 <= param_2) {
    uVar1 = param_2;
  }
  uVar1 = recovered_8241c4f8(uVar1);
  recovered_82418874((long *)(param_1 + 0x18),uVar1,(undefined8 *)&DAT_4044df08);
  recovered_82418874((long *)(param_1 + 0x30),*(ulong *)(param_1 + 8),(undefined8 *)&DAT_4044df08);
  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 0x20); uVar1 = uVar1 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar1 * 8) = 0xffffffffffffffff;
  }
  dVar2 = extraout_d0_00;
  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 8); uVar1 = uVar1 + 1) {
    recovered_8241c42c((long *)param_1,uVar1);
    dVar2 = extraout_d0;
  }
  return dVar2;
}

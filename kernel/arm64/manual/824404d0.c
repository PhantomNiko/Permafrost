/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_824404d0(ulong param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  ulong uVar3;

  if ((param_1 == 0) || (param_2 == 0)) {
    return;
  }
  uVar1 = pf_read_ctr_el0();
  lVar2 = 4L << (uVar1 >> 0x10 & 0xf);
  for (uVar3 = -lVar2 & param_1; uVar3 < param_1 + param_2; uVar3 = uVar3 + lVar2) {
    DC_CVAU(uVar3);
  }
  lVar2 = 4L << (uVar1 & 0xf);
  DataSynchronizationBarrier(2,3,0);
  for (uVar3 = -lVar2 & param_1; uVar3 < param_1 + param_2; uVar3 = uVar3 + lVar2) {
    IC_IVAU(uVar3);
  }
  DataSynchronizationBarrier(2,3,0);
  InstructionSynchronizationBarrier();
  return;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047af70 (*(uint64_t volatile *)(0x825420b8U))
void recovered_824022d0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (param_1 != 0) {
    uVar2 = (ulong)param_1;
    DAT_4047af70 = uVar2;
    bVar1 = recovered_82402308();
    if (!bVar1) {
      uVar2 = 0;
    }
    DAT_4047af70 = uVar2;
  }
  return;
}

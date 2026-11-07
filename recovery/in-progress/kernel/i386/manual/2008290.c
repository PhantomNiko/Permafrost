/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_02098a54 (*(uint32_t volatile *)(0x20e0004U))
uint recovered_2008290(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  uint uVar3;

  uVar3 = 0x19;
  bVar2 = recovered_20079a0();
  if (bVar2) {
    iVar1 = DAT_02098a54;
    uVar3 = 1;
    if (0xf < *(uint *)(iVar1 + 0x5c)) {
      uVar3 = *(uint *)(iVar1 + 0x5c) >> 4;
    }
  }
  return uVar3;
}

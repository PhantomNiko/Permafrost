/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047afe2 (*(uint8_t volatile *)(0x82544502U))
uint recovered_82403914(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;

  uVar2 = recovered_82403978();
  uVar1 = pf_read_mpidr_el1();
  if (uVar2 == 0) {
    pbVar3 = &DAT_4047afe2;
    lVar4 = 0x20;
    while ((pbVar3[-2] == 0 || (*(ulong *)(pbVar3 + -10) != (uVar1 & 0xff00ffffff)))) {
      lVar4 = lVar4 + -1;
      pbVar3 = pbVar3 + 0x10;
      if (lVar4 == 0) {
        uVar2 = recovered_82403978();
        return uVar2;
      }
    }
    uVar2 = (uint)*pbVar3;
  }
  return uVar2;
}

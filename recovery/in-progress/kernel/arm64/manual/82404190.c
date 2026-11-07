/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047af70 (*(uint64_t volatile *)(0x825420b8U))
uint recovered_82404190(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  ulong uVar3;

  uVar3 = recovered_82403e90();
  if ((int)uVar3 == 0) {
    uVar2 = 0x50;
  }
  else {
    lVar1 = DAT_4047af70;
    uVar2 = *(uint *)(lVar1 + 0x58) >> 3;
    if (*(uint *)(lVar1 + 0x58) < 8) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

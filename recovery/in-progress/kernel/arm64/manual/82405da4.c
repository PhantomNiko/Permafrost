/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047af70 (*(uint64_t volatile *)(0x825420b8U))
ulong recovered_82405da4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  bool bVar2;
  ulong uVar3;

  bVar2 = recovered_82402308();
  uVar3 = (ulong)bVar2;
  if (bVar2) {
    lVar1 = DAT_4047af70;
    uVar3 = (ulong)(*(byte *)(lVar1 + 0x230) >> 1 & 1);
  }
  return uVar3;
}

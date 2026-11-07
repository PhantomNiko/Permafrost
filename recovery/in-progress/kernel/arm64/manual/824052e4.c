/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047af70 (*(uint64_t volatile *)(0x825420b8U))
uint recovered_824052e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  bool bVar2;
  uint uVar3;

  bVar2 = recovered_82402308();
  if (((!bVar2) || (lVar1 = DAT_4047af70, *(int *)(lVar1 + 0x234) == 0)) ||
     (uVar3 = *(uint *)(lVar1 + 0x238), uVar3 < 0x200)) {
    uVar3 = 0x7000;
  }
  return uVar3;
}

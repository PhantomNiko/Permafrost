/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047af70 (*(uint64_t volatile *)(0x825420b8U))
int recovered_82405d14(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  bool bVar2;
  int iVar3;

  bVar2 = recovered_82402308();
  if (((!bVar2) || (lVar1 = DAT_4047af70, *(int *)(lVar1 + 0x114) == 0)) ||
     (iVar3 = *(int *)(lVar1 + 0x118), iVar3 == 0)) {
    iVar3 = 0;
  }
  return iVar3;
}

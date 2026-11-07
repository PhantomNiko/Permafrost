/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047af70 (*(uint64_t volatile *)(0x825420b8U))
int recovered_824052b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  bool bVar2;

  bVar2 = recovered_82402308();
  if (bVar2) {
    lVar1 = DAT_4047af70;
    if ((*(int *)(lVar1 + 0x234) != 0) && (0x1ff < *(uint *)(lVar1 + 0x238))) {
      return *(int *)(lVar1 + 0x234);
    }
  }
  return 0x10000;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_02098a44 (*(uint32_t volatile *)(0x20df004U))
long recovered_20010a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  recovered_2000cd0();
  piVar1 = (int *)DAT_02098a44;
  iVar2 = 0;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  return iVar2;
}

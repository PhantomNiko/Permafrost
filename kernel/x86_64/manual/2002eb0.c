/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

int recovered_2002eb0(char *left,char *right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  bVar1 = *left;
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      left = left + 1;
      if (bVar1 != *right) goto LAB_020015f3;
      right = right + 1;
      bVar1 = *left;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_020015f3:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - (byte)*right;
}

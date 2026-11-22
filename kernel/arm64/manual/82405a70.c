/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_82405a70(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  long lVar3;

  bVar1 = recovered_82402308();
  if (bVar1) {
    uVar2 = recovered_82405ad0(param_1);
    bVar1 = false;
    if (uVar2 != 0) {
      lVar3 = *(long *)(uVar2 + 8);
      if ((((lVar3 == 0) || (*(long *)(uVar2 + 0x20) == 0)) || (*(char *)(lVar3 + 5) == '\0')) ||
         (*(char *)(lVar3 + 7) != '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(lVar3 + 0xc) == 0x200;
      }
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

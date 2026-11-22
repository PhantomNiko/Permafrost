/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_8245151c(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  ulong uVar3;

  bVar2 = false;
  if (param_1 != (char *)0x0) {
    uVar3 = recovered_82400de8(param_1);
    if ((uVar3 < 2) || ((cVar1 = *param_1, cVar1 != '\'' && (cVar1 != '\"')))) {
      bVar2 = false;
    }
    else {
      bVar2 = param_1[uVar3 - 1] == cVar1;
    }
  }
  return bVar2;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_8240a104(char *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char cVar2;
  ulong uVar3;

  bVar1 = false;
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    cVar2 = '\0';
    for (uVar3 = (ulong)param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
      cVar2 = *param_1 + cVar2;
      param_1 = param_1 + 1;
    }
    bVar1 = cVar2 == '\0';
  }
  return bVar1;
}

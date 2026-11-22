/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_82452034(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;

  if ((((param_1 != 0) && (param_2 != 0)) && (uVar2 = recovered_8245188c(param_2), (int)uVar2 != 0))
     && (piVar3 = recovered_8245343c(1,0), piVar3 != (int *)0x0)) {
    uVar4 = recovered_82400de8((char *)param_2);
    lVar5 = recovered_8244a904(param_2,uVar4);
    *(long *)(piVar3 + 6) = lVar5;
    if (lVar5 != 0) {
      bVar1 = recovered_8244d1a4((undefined4 *)param_1,piVar3);
      return (ulong)bVar1;
    }
    recovered_8244d1d8(piVar3);
  }
  return 0;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494938 (*(uint64_t volatile *)(0x8266eea8U))
#define DAT_40494948 (*(uint64_t volatile *)(0x8266eeb8U))
undefined8 recovered_82459bac(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;

  lVar1 = DAT_40494938;
  if ((lVar1 == 0) ||
     (lVar2 = DAT_40494948, plVar3 = (long *)(lVar2 + lVar1 * 0x18 + -0x18), plVar3 == (long *)0x0))
  {
    return 0;
  }
  uVar4 = recovered_8246b000(plVar3,param_1,param_2);
  return uVar4;
}

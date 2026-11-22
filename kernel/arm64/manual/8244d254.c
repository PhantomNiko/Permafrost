/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494938 (*(uint64_t volatile *)(0x8266eea8U))
#define DAT_40494948 (*(uint64_t volatile *)(0x8266eeb8U))
ulong recovered_8244d254(int param_1,long param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  ulong uVar3;

  if (((param_1 - 1U < 2) && (lVar1 = DAT_40494938, lVar1 != 0)) &&
     (lVar2 = DAT_40494948, lVar2 + lVar1 * 0x18 != 0x18)) {
    uVar3 = recovered_82459bac(param_2,(long)param_3);
    return uVar3;
  }
  uVar3 = recovered_8244ed04(param_2,param_3);
  return uVar3;
}

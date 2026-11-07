/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494958 (*(uint64_t volatile *)(0x8266eec8U))
undefined8 recovered_8246b5d4(byte *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  undefined8 uVar3;

  uVar2 = recovered_8246b60c(param_1);
  if ((int)uVar2 < 0) {
    return 0;
  }
  lVar1 = DAT_40494958;
  uVar3 = recovered_8244ed8c(param_2,(undefined8 *)(lVar1 + (uVar2 & 0xffffffff) * 0x50 + 8));
  return uVar3;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e204 (*(uint8_t *)(0x82473985U))
ulong recovered_8241ba6c(undefined8 param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  ulong uVar2;

  pbVar1 = &DAT_4044e204;
  if ((byte *)*param_2 != (byte *)0x0) {
    pbVar1 = (byte *)*param_2;
  }
  uVar2 = recovered_8241883c(pbVar1,param_2[1]);
  return uVar2;
}

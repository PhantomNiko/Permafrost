/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_82469330(uint param_1,byte *param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined4 *puVar2;

  puVar2 = recovered_82469354(param_1,param_2,0);
  uVar1 = recovered_82469448((long)puVar2,param_3);
  return uVar1;
}

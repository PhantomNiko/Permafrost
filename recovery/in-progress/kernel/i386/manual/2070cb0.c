/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9f55 (*(uint8_t volatile *)(0x21408eaU))
#define DAT_020b9f58 (*(uint32_t volatile *)(0x21408ecU))
undefined4 recovered_2070cb0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 uVar2;
  bool bVar3;

  cVar1 = DAT_020b9f55;
  if ((cVar1 == '\0') && (bVar3 = recovered_202a5c0(), !bVar3)) {
    return 0;
  }
  uVar2 = DAT_020b9f58;
  return uVar2;
}

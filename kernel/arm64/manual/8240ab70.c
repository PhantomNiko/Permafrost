/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047afe0 (*(uint16_t volatile *)(0x82544500U))
bool recovered_8240ab70(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = 0;
  for (pcVar2 = (char *)&DAT_4047afe0;
      (uVar1 != 0x20 && ((*pcVar2 == '\0' || (*(long *)(pcVar2 + -8) != param_1))));
      pcVar2 = pcVar2 + 0x10) {
    uVar1 = uVar1 + 1;
  }
  return uVar1 < 0x20;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047afe0 (*(uint16_t volatile *)(0x82544500U))
void recovered_82403864(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;

  bVar2 = recovered_8240ab70(param_1);
  if (!bVar2) {
    lVar4 = 0x21;
    pcVar1 = (char *)&DAT_4047afe0;
    do {
      pcVar3 = pcVar1;
      lVar4 = lVar4 + -1;
      if (lVar4 == 0) {
        return;
      }
      pcVar1 = pcVar3 + 0x10;
    } while (*pcVar3 != '\0');
    *(long *)(pcVar3 + -8) = param_1;
    pcVar3[0] = '\x01';
    pcVar3[1] = '\0';
  }
  return;
}

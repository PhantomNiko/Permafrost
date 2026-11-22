/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494938 (*(uint64_t volatile *)(0x8266eea8U))
#define DAT_40494948 (*(uint64_t volatile *)(0x8266eeb8U))
void recovered_82459be0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = DAT_40494938;
  if (lVar1 == 0) {
    return;
  }
  DAT_40494938 = lVar1 + -1;
  lVar2 = DAT_40494948;
  recovered_8246aa08((long *)(lVar2 + (lVar1 + -1) * 0x18));
  return;
}

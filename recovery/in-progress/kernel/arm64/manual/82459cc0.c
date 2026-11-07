/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_404948a8 (*(uint64_t volatile *)(0x8266ee48U))
#define DAT_404948b0 (*(uint64_t volatile *)(0x8266ee50U))
void recovered_82459cc0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = DAT_404948a8;
  if (lVar1 == 0) {
    return;
  }
  DAT_404948a8 = lVar1 + -1;
  lVar2 = DAT_404948b0;
  recovered_8246aa64((long *)(lVar2 + (lVar1 + -1) * 0x10));
  return;
}

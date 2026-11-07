/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494776 (*(uint8_t volatile *)(0x8266ec48U))
void recovered_82464420(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  bVar1 = DAT_40494776;
  if ((bVar1 & 1) == 0) {
    recovered_8241dfec();
    return;
  }
  return;
}

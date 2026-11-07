/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047af3c (*(uint32_t volatile *)(0x82542054U))
undefined8 recovered_82405b64(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_82402308();
  if (bVar1) {
    uVar2 = recovered_824059dc(0x80);
    if (uVar2 == 0) {
      return 0;
    }
  }
  DAT_4047af3c = 0;
  return 1;
}

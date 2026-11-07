/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047afa8 (*(uint64_t volatile *)(0x825421d8U))
undefined8 recovered_82404818(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  recovered_82400b14(&DAT_4047afa8,0,0x30);
  bVar1 = recovered_82402308();
  if (bVar1) {
    recovered_82404200(7);
    return 1;
  }
  uVar2 = recovered_8240004c();
  return uVar2;
}

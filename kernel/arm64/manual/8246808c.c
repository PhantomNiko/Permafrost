/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044eb1e (*(uint8_t *)(0x824744efU))
#define DAT_4045373d (*(uint8_t *)(0x8247e4cfU))
#define str_40453999 (*(char (*)[1])(0x8247e75fU))
#define str_404539a3 (*(char (*)[1])(0x8247e769U))
#define str_404539b0 (*(char (*)[1])(0x8247e776U))
#define str_404539bd (*(char (*)[1])(0x8247e783U))
undefined8 recovered_8246808c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  uVar2 = 0;
  if (param_1 != 0) {
    bVar1 = recovered_8243a1f0((byte *)param_1,&DAT_4044eb1e);
    if ((((!bVar1) && (bVar1 = recovered_8243a1f0((byte *)param_1,&DAT_4045373d), !bVar1)) &&
        (bVar1 = recovered_8243a1f0((byte *)param_1,(byte *)str_40453999), !bVar1)) &&
       ((bVar1 = recovered_8243a1f0((byte *)param_1,(byte *)str_404539a3), !bVar1 &&
        (bVar1 = recovered_8243a1f0((byte *)param_1,(byte *)str_404539b0), !bVar1)))) {
      bVar1 = recovered_8243a1f0((byte *)param_1,(byte *)str_404539bd);
      return (ulong)bVar1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

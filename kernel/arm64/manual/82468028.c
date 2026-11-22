/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4045396f (*(uint8_t *)(0x8247e735U))
#define str_40453974 (*(char (*)[1])(0x8247e73aU))
#define str_40453981 (*(char (*)[1])(0x8247e747U))
#define str_4045398e (*(char (*)[1])(0x8247e754U))
undefined8 recovered_82468028(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  uVar2 = 0;
  if (param_1 != 0) {
    bVar1 = recovered_8243a1f0((byte *)param_1,&DAT_4045396f);
    if (((!bVar1) && (bVar1 = recovered_8243a1f0((byte *)param_1,(byte *)str_40453974), !bVar1)) &&
       (bVar1 = recovered_8243a1f0((byte *)param_1,(byte *)str_40453981), !bVar1)) {
      bVar1 = recovered_8243a1f0((byte *)param_1,(byte *)str_4045398e);
      return (ulong)bVar1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

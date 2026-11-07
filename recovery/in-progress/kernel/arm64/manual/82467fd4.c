/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4045395c (*(uint8_t *)(0x8247e722U))
#define DAT_40453960 (*(uint8_t *)(0x8247e726U))
#define str_40453964 (*(char (*)[1])(0x8247e72aU))
undefined8 recovered_82467fd4(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  uVar2 = 0;
  if (param_1 != 0) {
    bVar1 = recovered_8243a1f0((byte *)param_1,&DAT_4045395c);
    if ((!bVar1) && (bVar1 = recovered_8243a1f0((byte *)param_1,&DAT_40453960), !bVar1)) {
      bVar1 = recovered_8243a1f0((byte *)param_1,(byte *)str_40453964);
      return (ulong)bVar1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

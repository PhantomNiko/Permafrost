/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_4044fdc3 (*(char (*)[1])(0x82479c89U))
#define str_4044fdcc (*(char (*)[1])(0x82479c92U))
#define str_4044fdd2 (*(char (*)[1])(0x82479c98U))
#define str_4044fdd8 (*(char (*)[1])(0x82479c9eU))
undefined8 recovered_8246b374(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  long lVar5;

  if (param_1 == (long *)0x0) {
    return 0;
  }
  lVar5 = *param_1;
  if (lVar5 == 0) {
LAB_40449324:
    uVar2 = 0;
  }
  else {
    puVar4 = (undefined8 *)param_1[2];
    pbVar3 = (byte *)*puVar4;
    bVar1 = recovered_8244ccd4(pbVar3,(byte *)str_4044fdc3);
    if (!bVar1) {
      if (lVar5 == 1) goto LAB_40449324;
      bVar1 = recovered_8244ccd4(pbVar3,(byte *)str_4044fdcc);
      if (((!bVar1) || (bVar1 = recovered_8244ccd4((byte *)puVar4[1],(byte *)str_4044fdc3), !bVar1))
         && ((bVar1 = recovered_8244ccd4(pbVar3,(byte *)str_4044fdd2), !bVar1 ||
             (bVar1 = recovered_8244ccd4((byte *)puVar4[1],(byte *)str_4044fdc3), !bVar1)))) {
        bVar1 = recovered_8244ccd4(pbVar3,(byte *)str_4044fdd8);
        if (bVar1) {
          bVar1 = recovered_8244ccd4((byte *)puVar4[1],(byte *)str_4044fdc3);
          return (ulong)bVar1;
        }
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

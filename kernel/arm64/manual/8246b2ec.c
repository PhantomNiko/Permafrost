/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044ffd5 (*(uint8_t *)(0x82479e9bU))
#define DAT_4045016a (*(uint8_t *)(0x8247a030U))
#define str_40450094 (*(char (*)[1])(0x82479f5aU))
#define str_404500e8 (*(char (*)[1])(0x82479faeU))
undefined8 recovered_8246b2ec(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;
  byte *pbVar3;

  uVar2 = 0;
  if (param_1 != (long *)0x0) {
    if (*param_1 == 0) {
      uVar2 = 0;
    }
    else {
      pbVar3 = *(byte **)param_1[2];
      bVar1 = recovered_8244ccd4(pbVar3,&DAT_4044ffd5);
      if ((((!bVar1) && (bVar1 = recovered_8244ccd4(pbVar3,(byte *)str_40450094), !bVar1)) &&
          (bVar1 = recovered_8244ccd4(pbVar3,(byte *)str_404500e8), !bVar1)) &&
         (bVar1 = recovered_8244ccd4(pbVar3,&DAT_4045016a), !bVar1)) {
        uVar2 = recovered_8246b374(param_1);
        return uVar2;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}

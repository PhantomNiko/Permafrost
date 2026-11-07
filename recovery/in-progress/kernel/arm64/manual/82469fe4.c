/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40454f74 (*(uint8_t *)(0x8247ffdaU))
#define acStack_90 (*(char (*)[96])(frame + 16))
undefined8 recovered_82469fe4(long param_1,char *param_2,long param_3)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined8 uVar3;

  uVar3 = 0;
  if ((param_2 != (char *)0x0) && (param_3 != 0)) {
    uVar1 = recovered_82441418(param_1,(long)param_2,(undefined4 *)param_3);
    if ((uVar1 & 1) == 0) {
      if ((*param_2 != '_') &&
         (iVar2 = pf_varargs_404019bc_1(acStack_90,0x60,&DAT_40454f74,(ulonglong)param_2), 0 < iVar2
         )) {
        uVar1 = recovered_82441418(param_1,(long)acStack_90,(undefined4 *)param_3);
        return (ulong)uVar1;
      }
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

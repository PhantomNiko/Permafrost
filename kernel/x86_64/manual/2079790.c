/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_020a3566 (*(char (*)[1])(0x20ed9eaU))
#define str_020a3578 (*(char (*)[1])(0x20ed9fcU))
#define str_020a3588 (*(char (*)[1])(0x20eda0cU))
uchar recovered_2079790(long param_1,int param_2,byte param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uchar uVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  char *left;
  char *left_00;

  if (param_1 == 0) {
LAB_02051c7e:
    uVar2 = '\0';
  }
  else {
    uVar2 = '\x01';
    if (*(long *)(param_1 + 0x4368) != 0) {
      pcVar6 = (char *)(param_1 + 0x6e3);
      uVar5 = 0;
LAB_02051be8:
      left_00 = (char *)(uVar5 * 0xf1 + param_1 + 0x6e2);
      pcVar4 = pcVar6;
      left = left_00;
      do {
        cVar1 = pcVar4[-1];
        if ((cVar1 == '/') || (cVar1 == '\\')) {
          left = pcVar4;
        }
        else if (cVar1 == '\0') goto code_r0x02051c18;
        pcVar4 = pcVar4 + 1;
      } while( true );
    }
  }
  return uVar2;
code_r0x02051c18:
  iVar3 = recovered_2002eb0(left,str_020a3566);
  if ((((iVar3 != 0) && (iVar3 = recovered_2002eb0(left,str_020a3578), iVar3 != 0)) &&
      (iVar3 = recovered_2002eb0(left_00,str_020a3588), iVar3 != 0)) &&
     ((uVar2 = recovered_207a120(left_00,param_2,param_3,param_4), uVar2 == '\0' &&
      (*(char *)(param_1 + 0x4322 + uVar5) != '\x01')))) goto LAB_02051c7e;
  uVar5 = uVar5 + 1;
  pcVar6 = pcVar6 + 0xf1;
  if (*(ulong *)(param_1 + 0x4368) <= uVar5) {
    return '\x01';
  }
  goto LAB_02051be8;
}

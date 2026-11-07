/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a2e68 (*(uint8_t *)(0x20ec75dU))
uchar recovered_20db3e0(char *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  ulonglong uVar3;

  if (param_2 == 0) {
    return '\0';
  }
  uVar2 = recovered_2002e80((char *)param_2);
  if ((param_1 != (char *)0x0) && (iVar1 = recovered_2002eb0(param_1,(char *)param_2), iVar1 != 0))
  {
    iVar1 = recovered_2002eb0((char *)param_2,&DAT_020a2e68);
    if (iVar1 == 0) {
      uVar2 = (ulong)(*param_1 == '/');
      if (param_1[uVar2] != '\0') goto LAB_02095eb2;
    }
    else {
      iVar1 = recovered_201c870(param_1,(char *)param_2,uVar2);
      if (((iVar1 == 0) && (param_1[uVar2] == '/')) && (param_1[uVar2 + 1] != '\0')) {
        uVar2 = uVar2 + 1;
LAB_02095eb2:
        uVar3 = recovered_2003450(param_1 + uVar2,'/');
        return uVar3 == 0;
      }
    }
  }
  return '\0';
}

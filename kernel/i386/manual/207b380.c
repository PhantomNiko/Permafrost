/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf1fc (*(uint32_t volatile *)(0x2245284U))
#define DAT_020cf204 (*(uint32_t volatile *)(0x224528cU))
uint recovered_207b380(int incoming_ecx,uint incoming_edx,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *incoming_ecx_00;

  if (incoming_ecx - 1U < 2) {
    iVar1 = DAT_020cf1fc;
    uVar2 = DAT_020cf204;
    uVar2 = DAT_020cf204;
    iVar3 = DAT_020cf204;
    incoming_ecx_00 = (int *)(iVar1 * 0xc + iVar3 + -0xc);
    if (incoming_ecx_00 != (int *)0x0 && iVar1 != 0) {
      uVar4 = recovered_20b6ea0(incoming_ecx_00,(char *)incoming_edx,param_3);
      return uVar4;
    }
  }
  uVar4 = recovered_207e100((char *)incoming_edx,param_3);
  return uVar4;
}

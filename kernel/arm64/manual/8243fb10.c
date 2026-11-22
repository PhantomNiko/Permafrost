/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e262 (*(uint8_t *)(0x82473a33U))
undefined8 recovered_8243fb10(long param_1,uint param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  uVar2 = 0;
  if (((0x17 < param_2) && (param_1 != 0)) && (param_4 != 0)) {
    uVar1 = recovered_8243faf0((uint *)(param_1 + 8),(int)param_3);
    if ((uint)uVar1 < param_2) {
      pf_varargs_404019bc_1((char *)param_4,0xf1,&DAT_4044e262,param_1 + (uVar1 & 0xffffffff));
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

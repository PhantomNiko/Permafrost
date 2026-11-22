/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20070f0(uint param_1,int param_2,uint param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0 && param_4 != (uint *)0x0) {
    uVar1 = recovered_2007120(param_1,(ulong)param_3,param_4);
    return (uchar)uVar1;
  }
  return '\0';
}

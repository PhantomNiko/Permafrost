/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020addd4 (*(uint32_t volatile *)(0x21027f4U))
#define local_30 (*(undefined1 (*)[16])(frame + 16))
uchar recovered_20138b0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 uVar2;
  uint uVar3;

  if (param_3 == (undefined4 *)0x0 || param_2 == (undefined4 *)0x0) {
    return '\0';
  }
  *param_2 = 0;
  *param_3 = 0;
  uVar3 = DAT_020addd4;
  if ((int)uVar3 < 0) {
    recovered_2002110(local_30,0,0x10);
    lVar1 = cpuid_Version_info(1);
    uVar3 = *(uint *)(lVar1 + 8) & 0x20;
    DAT_020addd4 = uVar3 >> 5;
  }
  if (uVar3 != 0) {
    uVar2 = rdmsr(param_1);
    *param_2 = (int)uVar2;
    *param_3 = (int)((ulong)uVar2 >> 0x20);
  }
  return uVar3 != 0;
}

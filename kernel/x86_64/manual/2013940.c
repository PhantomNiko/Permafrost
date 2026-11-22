/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020addd4 (*(uint32_t volatile *)(0x21027f4U))
#define local_38 (*(undefined1 (*)[16])(frame + 24))
uint recovered_2013940(undefined4 param_1,uint param_2,ulong param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong in_RAX;
  uint uVar2;

  uVar2 = DAT_020addd4;
  if ((int)uVar2 < 0) {
    param_3 = param_3 & 0xffffffff;
    recovered_2002110(local_38,0,0x10);
    lVar1 = cpuid_Version_info(1);
    uVar2 = *(uint *)(lVar1 + 8) & 0x20;
    in_RAX = 0;
    DAT_020addd4 = uVar2 >> 5;
  }
  if (uVar2 != 0) {
    in_RAX = (ulong)param_2;
    wrmsr(param_1,param_3 << 0x20 | in_RAX);
  }
  return (uint)CONCAT71((int7)(in_RAX >> 8),uVar2 != 0);
}

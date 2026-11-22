/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020987ec (*(uint32_t volatile *)(0x20d9d38U))
#define DAT_020987f0 (*(uint32_t volatile *)(0x20d9d3cU))
#define local_18 (*(undefined1 (*)[16])(frame + 24))
undefined4 recovered_20125f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  byte in_ID;

  iVar1 = DAT_020987f0;
  if (iVar1 < 0) {
    recovered_2001e00(local_18,0,0x10);
    uVar2 = DAT_020987ec;
    if ((int)uVar2 < 0) {
      uVar2 = (uint)(in_ID & 1) * 0x200000 ^ (uint)((in_ID & 1) != 1) * 0x200000;
      DAT_020987ec = uVar2 >> 0x15;
    }
    if (uVar2 == 0) {
      DAT_020987f0 = 0;
      return 0;
    }
    iVar1 = cpuid_Version_info(1);
    uVar2 = *(uint *)(iVar1 + 8) & 0x20;
    DAT_020987f0 = uVar2 >> 5;
    if (uVar2 == 0) {
      return 0;
    }
  }
  else if (iVar1 == 0) {
    return 0;
  }
  wrmsr(param_1,CONCAT44(param_3,param_2));
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}

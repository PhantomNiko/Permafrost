/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020987ec (*(uint32_t volatile *)(0x20d9d38U))
#define DAT_020987f0 (*(uint32_t volatile *)(0x20d9d3cU))
#define local_20 (*(undefined1 (*)[16])(frame + 16))
undefined4 recovered_2012530(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte in_ID;

  if (param_3 == (undefined4 *)0x0 || param_2 == (undefined4 *)0x0) {
LAB_0200ab54:
    uVar3 = 0;
  }
  else {
    *param_2 = 0;
    *param_3 = 0;
    iVar1 = DAT_020987f0;
    if (iVar1 < 0) {
      recovered_2001e00(local_20,0,0x10);
      uVar4 = DAT_020987ec;
      if ((int)uVar4 < 0) {
        uVar4 = (uint)(in_ID & 1) * 0x200000 ^ (uint)((in_ID & 1) != 1) * 0x200000;
        DAT_020987ec = uVar4 >> 0x15;
      }
      if (uVar4 == 0) {
        DAT_020987f0 = 0;
        goto LAB_0200ab54;
      }
      iVar1 = cpuid_Version_info(1);
      uVar4 = *(uint *)(iVar1 + 8) & 0x20;
      DAT_020987f0 = uVar4 >> 5;
      if (uVar4 == 0) {
        return 0;
      }
    }
    else if (iVar1 == 0) goto LAB_0200ab54;
    uVar2 = rdmsr(param_1);
    *param_2 = (int)uVar2;
    *param_3 = (int)((ulonglong)uVar2 >> 0x20);
    uVar3 = CONCAT31((int3)((ulonglong)uVar2 >> 8),1);
  }
  return uVar3;
}

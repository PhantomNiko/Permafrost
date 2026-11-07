/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong * recovered_824103f0(uint param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;

  if (param_1 == 0xff) {
    return (ulong *)0x0;
  }
  puVar1 = (ulong *)0x0;
  if (0xc < (param_1 & 0xf)) {
    return (ulong *)0x0;
  }
  pbVar5 = (byte *)*param_2;
  switch((uintptr_t)(param_1 & 0xf)) {
  case 0:
  case 4:
  case 0xc:
    puVar1 = (ulong *)recovered_8241051c(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_40407fd4;
  case 1:
    puVar1 = (ulong *)recovered_824104e4(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_8241051c(pbVar5,2);
    goto LAB_40407fd0;
  case 3:
    puVar1 = (ulong *)recovered_8241051c(pbVar5,4);
    goto LAB_40407f98;
  default:
    goto switchD_40407f64_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_82410548(param_2);
    break;
  case 10:
    uVar3 = recovered_8241051c(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_40407fd0:
    pbVar4 = pbVar5 + 2;
LAB_40407fd4:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_8241051c(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_40407f98:
    pbVar4 = pbVar5 + 4;
    goto LAB_40407fd4;
  }
  if ((param_1 & 0x70) != 0) {
    if ((param_1 & 0x70) != 0x10) {
      return (ulong *)0x0;
    }
    puVar1 = (ulong *)((long)puVar1 + (long)pbVar5);
  }
  if (((param_1 >> 7 & 1) != 0) && (puVar1 != (ulong *)0x0)) {
    puVar1 = (ulong *)*puVar1;
  }
switchD_40407f64_caseD_5:
  return puVar1;
}

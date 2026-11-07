/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_202a3c0(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  bVar1 = param_2[3];
  if (bVar1 != 0xff) {
    uVar3 = (uint)bVar1;
    if (bVar1 == 0) {
      if (param_1[3] != 0) {
        return;
      }
    }
    else if (param_1[3] != 0) {
      iVar4 = (uVar3 ^ 0xff) * (uint)param_1[3];
      uVar2 = (iVar4 + 0x7fU & 0xffff) / 0xff + uVar3;
      uVar5 = uVar2 >> 1;
      *param_1 = (byte)((*param_2 * uVar3 + uVar5 + ((uint)*param_1 * iVar4 + 0x7f) / 0xff) / uVar2)
      ;
      param_1[1] = (byte)(((uint)param_2[1] * (uint)bVar1 + uVar5 +
                          ((uint)param_1[1] * iVar4 + 0x7f) / 0xff) / uVar2);
      param_1[2] = (byte)(((uint)param_2[2] * (uint)bVar1 + uVar5 +
                          ((uint)param_1[2] * iVar4 + 0x7f) / 0xff) / uVar2);
      param_1[3] = (byte)uVar2;
      return;
    }
  }
  recovered_2001410(param_1,param_2,4);
  return;
}

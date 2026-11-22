/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20224d0(byte *incoming_ecx,byte *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  uVar4 = (uint)incoming_edx[3];
  if (uVar4 != 0xff) {
    if (uVar4 == 0) {
      if (incoming_ecx[3] != 0) {
        return;
      }
    }
    else if (incoming_ecx[3] != 0) {
      iVar3 = (uVar4 ^ 0xff) * (uint)incoming_ecx[3];
      uVar2 = (iVar3 + 0x7fU & 0xffff) / 0xff + uVar4;
      uVar1 = uVar2 >> 1;
      *incoming_ecx =
           (byte)((*incoming_edx * uVar4 + ((uint)*incoming_ecx * iVar3 + 0x7f) / 0xff + uVar1) /
                 uVar2);
      incoming_ecx[1] =
           (byte)((incoming_edx[1] * uVar4 + ((uint)incoming_ecx[1] * iVar3 + 0x7f) / 0xff + uVar1)
                 / uVar2);
      incoming_ecx[2] =
           (byte)((incoming_edx[2] * uVar4 + ((uint)incoming_ecx[2] * iVar3 + 0x7f) / 0xff + uVar1)
                 / uVar2);
      incoming_ecx[3] = (byte)uVar2;
      return;
    }
  }
  recovered_2001b70(incoming_ecx,incoming_edx,4);
  return;
}

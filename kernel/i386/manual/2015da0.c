#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2015da0
 */

uint recovered_2015da0(char *data,uint size,uint *out)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined3 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;

  uVar5 = 0;
  if (data == (char *)0x0) {
    return 0;
  }
  iVar11 = 1;
  if ((4 < size) && (*data != '\0')) {
    uVar5 = (uint)((byte)data[1] < 8);
    iVar11 = uVar5 + 1;
  }
  bVar1 = data[uVar5];
  if ((bVar1 & 1) != 0) {
    *(byte *)(out + 1) = (byte)out[1] | 1;
    bVar1 = data[uVar5];
  }
  if ((bVar1 & 2) != 0) {
    *(byte *)(out + 1) = (byte)out[1] | 2;
    bVar1 = data[uVar5];
  }
  if ((bVar1 & 4) != 0) {
    *(byte *)(out + 1) = (byte)out[1] | 4;
  }
  uVar5 = iVar11 + 4;
  if ((size < 5) || (size < uVar5)) {
    if (size < iVar11 + 2U) {
      uVar9 = *out;
      uVar7 = uVar5;
    }
    else {
      cVar2 = data[iVar11];
      uVar7 = (uint)data[iVar11 + 1];
      uVar10 = (int)cVar2;
      if ((uVar5 <= size) && (data[iVar11 + 1] == '\0' && cVar2 == '\0')) {
        uVar5 = (uint)*(short *)(data + iVar11);
        uVar7 = 0;
        uVar10 = 0;
        if (((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f) < 0x801) &&
           (uVar7 = (uint)*(short *)(data + iVar11 + 2), uVar10 = uVar5,
           0x800 < (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f))) {
          uVar10 = 0;
          uVar7 = 0;
        }
      }
      uVar9 = *out;
      if (uVar10 != 0 || uVar7 != 0) {
        if ((int)uVar7 < -0x1f) {
          uVar7 = 0xffffffe0;
        }
        if (0x1f < (int)uVar7) {
          uVar7 = 0x20;
        }
        uVar5 = out[5];
        uVar6 = uVar7 + uVar5;
        if (SCARRY4(uVar7,uVar5)) {
          uVar6 = ((int)(uVar7 + uVar5) >> 0x1f) + 0x80000000;
        }
        if ((int)uVar10 < -0x1f) {
          uVar10 = 0xffffffe0;
        }
        uVar5 = out[4];
        if (0x1f < (int)uVar10) {
          uVar10 = 0x20;
        }
        uVar7 = uVar10 + uVar5;
        if (SCARRY4(uVar10,uVar5)) {
          uVar7 = ((int)(uVar10 + uVar5) >> 0x1f) + 0x80000000;
        }
        *out = uVar9 | 2;
        out[4] = uVar7;
        out[5] = uVar6;
        goto LAB_02015e15;
      }
    }
    uVar8 = (undefined3)(uVar7 >> 8);
    uVar5 = CONCAT31(uVar8,1);
    if (uVar9 == 0) {
      uVar5 = CONCAT31(uVar8,out[1] != 0);
    }
  }
  else {
    uVar3 = *(ushort *)(data + iVar11);
    uVar4 = *(ushort *)(data + iVar11 + 2);
    *out = *out | 1;
    out[2] = (uint)uVar3;
    out[3] = (uint)uVar4;
    uVar6 = uVar3 | 0x7fff;
    out[6] = uVar6;
    out[7] = uVar4 | 0x7fff;
LAB_02015e15:
    uVar5 = CONCAT31((int3)(uVar6 >> 8),1);
  }
  return uVar5;
}

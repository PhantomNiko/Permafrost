/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c4fd4 (*(uint8_t *)(0x20c4fd4U))
#define local_28 (*(ushort *)(frame + 24))
#define local_26 (*(byte *)(frame + 26))
#define local_25 (*(byte *)(frame + 27))
#define local_24 (*(byte *)(frame + 28))
#define local_23 (*(byte *)(frame + 29))
#define local_22 (*(byte *)(frame + 30))


undefined4 recovered_20b64c0(longlong *in_ECX)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;

  if (in_ECX == (longlong *)0x0) {
    return 0;
  }
  recovered_2001e00(&local_28,0,8);
  uVar2 = recovered_2004910(&local_28);
  if ((char)uVar2 == '\0') {
    return 0;
  }
  uVar6 = (uint)local_25;
  if (uVar6 == 0) {
    return 0;
  }
  uVar4 = (uint)local_28;
  if (uVar4 < 0x7b2) {
    return 0;
  }
  uVar8 = (uint)local_26;
  if (uVar8 - 0xd < 0xfffffff4) {
    return 0;
  }
  if ((local_28 & 3) == 0 && uVar8 == 2) {
    if (0x28f < (ushort)((ushort)(local_28 * 0x5c29) >> 2 | local_28 * 0x4000)) {
      uVar9 = 0x1d;
      goto LAB_020b6583;
    }
    uVar9 = 0x1d;
    if (local_28 % 400 == 0) goto LAB_020b6583;
  }
  uVar9 = (uint)(byte)(&DAT_020c4fd4)[uVar8];
LAB_020b6583:
  uVar2 = 0;
  if ((((local_22 < 0x3d) && (local_23 < 0x3c)) && (local_24 < 0x18)) && (uVar6 <= uVar9)) {
    bVar1 = 0x3b;
    if (local_22 != 0x3c) {
      bVar1 = local_22;
    }
    uVar9 = 0;
    iVar10 = 0;
    if (0x7b2 < uVar4) {
      uVar7 = 0x7b2;
      iVar5 = -0x7b2;
      uVar9 = 0;
      iVar10 = 0;
      do {
        uVar3 = 0x16d;
        if ((uVar7 & 3) == 0) {
          uVar3 = ((uVar7 / 400) * 400 + iVar5 == 0 || (uVar7 / 100) * 100 + iVar5 != 0) + 0x16d;
        }
        bVar11 = CARRY4(uVar9,uVar3);
        uVar9 = uVar9 + uVar3;
        iVar10 = iVar10 + (uint)bVar11;
        uVar7 = uVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (uVar4 != uVar7);
    }
    if (1 < local_26) {
      bVar11 = 0xffffffe0 < uVar9;
      uVar9 = uVar9 + 0x1f;
      iVar10 = iVar10 + (uint)bVar11;
      if (uVar8 != 2) {
        uVar4 = ((local_28 & 3) != 0 ||
                0xa3d70a < (uVar4 * -0x3d70a3d7 >> 4 | uVar4 * -0x70000000) &&
                (uVar4 * -0x3d70a3d7 >> 2 | uVar4 * 0x40000000) < 0x28f5c29) ^ 0x1d;
        bVar11 = CARRY4(uVar9,uVar4);
        uVar9 = uVar9 + uVar4;
        iVar10 = iVar10 + (uint)bVar11;
        if (uVar8 != 3) {
          uVar4 = 3;
          do {
            bVar11 = CARRY4(uVar9,(uint)(byte)(&DAT_020c4fd4)[uVar4]);
            uVar9 = uVar9 + (byte)(&DAT_020c4fd4)[uVar4];
            iVar10 = iVar10 + (uint)bVar11;
            uVar4 = uVar4 + 1;
          } while (uVar8 != uVar4);
        }
      }
    }
    *in_ECX = (ulonglong)((uVar6 - 1) + uVar9) * 0x15180 +
              CONCAT44((iVar10 + (uint)CARRY4(uVar6 - 1,uVar9)) * 0x15180,
                       (uint)local_23 * 0x3c + (uint)local_24 * 0xe10 + (uint)bVar1);
    uVar2 = CONCAT31((int3)((uint)in_ECX >> 8),1);
  }
  return uVar2;
}
#undef DAT_020c4fd4
#undef local_28
#undef local_26
#undef local_25
#undef local_24
#undef local_23
#undef local_22

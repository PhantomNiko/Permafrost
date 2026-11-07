/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf3a0 (*(uint64_t volatile *)(0x215a7b0U))
#define DAT_020cf3a8 (*(uint64_t volatile *)(0x215a7b8U))
#define DAT_020cf3c0 (*(uint64_t volatile *)(0x215a7d0U))
#define DAT_020cf3c8 (*(uint32_t volatile *)(0x215a7d8U))
uchar recovered_20697a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  uint uVar3;
  uchar uVar4;
  int iVar5;
  byte *pbVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;

  uVar7 = DAT_020cf3a8;
  if (uVar7 == 0) {
    lVar11 = DAT_020cf3c0;
    uVar4 = '\x01';
    if ((lVar11 != 0) && (iVar5 = DAT_020cf3c8, iVar5 != 0)) {
      uVar7 = 0;
      do {
        *(undefined4 *)(lVar11 + uVar7 * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
        uVar3 = DAT_020cf3c8;
      } while (uVar7 < uVar3);
    }
  }
  else {
    uVar4 = recovered_206cab0(&DAT_020cf3a0,uVar7);
    if (uVar4 == '\0') {
LAB_0204c080:
      uVar4 = '\0';
    }
    else {
      iVar5 = DAT_020cf3c8;
      if (iVar5 != 0) {
        lVar11 = DAT_020cf3c0;
        uVar7 = 0;
        do {
          *(undefined4 *)(lVar11 + uVar7 * 4) = 0xffffffff;
          uVar7 = uVar7 + 1;
          uVar3 = DAT_020cf3c8;
        } while (uVar7 < uVar3);
      }
      uVar7 = DAT_020cf3a8;
      if (uVar7 != 0) {
        lVar11 = 1;
        uVar12 = 0;
        do {
          lVar2 = DAT_020cf3c0;
          if (lVar2 == 0) {
            return '\0';
          }
          uVar3 = DAT_020cf3c8;
          if (uVar3 == 0) {
            return '\0';
          }
          uVar13 = uVar3 - 1;
          if ((uVar3 & uVar13) != 0) goto LAB_0204c080;
          lVar1 = DAT_020cf3a0;
          uVar9 = 0x811c9dc5;
          if ((lVar1 != 0) && (bVar8 = *(byte *)(lVar1 + uVar12 * 0x118), bVar8 != 0)) {
            pbVar6 = (byte *)(lVar1 + lVar11);
            uVar9 = 0x811c9dc5;
            do {
              uVar9 = (bVar8 ^ uVar9) * 0x1000193;
              bVar8 = *pbVar6;
              pbVar6 = pbVar6 + 1;
            } while (bVar8 != 0);
          }
          uVar10 = (ulong)(uVar9 & uVar13);
          uVar9 = *(uint *)(lVar2 + uVar10 * 4);
          if (uVar9 == 0xffffffff) {
            *(int *)(lVar2 + uVar10 * 4) = (int)uVar12;
          }
          else {
            uVar14 = 0;
            do {
              if (uVar9 < uVar7) {
                lVar1 = DAT_020cf3a0;
                iVar5 = recovered_2002eb0((char *)((ulong)uVar9 * 0x118 + lVar1),
                                          (char *)(lVar1 + uVar12 * 0x118));
                if (iVar5 == 0) goto LAB_0204c080;
                uVar7 = DAT_020cf3a8;
              }
              if (uVar13 == uVar14) goto LAB_0204c080;
              uVar10 = (ulong)((int)uVar10 + 1U & uVar13);
              uVar9 = *(uint *)(lVar2 + uVar10 * 4);
              uVar14 = uVar14 + 1;
            } while (uVar9 != 0xffffffff);
            *(int *)(lVar2 + uVar10 * 4) = (int)uVar12;
            if (uVar3 <= uVar14) goto LAB_0204c080;
          }
          uVar12 = uVar12 + 1;
          lVar11 = lVar11 + 0x118;
        } while (uVar12 < uVar7);
      }
      uVar4 = '\x01';
    }
  }
  return uVar4;
}

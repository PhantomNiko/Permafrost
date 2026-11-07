/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf3a0 (*(uint64_t volatile *)(0x215a7b0U))
#define DAT_020cf3a8 (*(uint64_t volatile *)(0x215a7b8U))
#define DAT_020cf3c0 (*(uint64_t volatile *)(0x215a7d0U))
#define DAT_020cf3c8 (*(uint32_t volatile *)(0x215a7d8U))
uchar recovered_2069480(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uchar uVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;

  uVar11 = DAT_020cf3a8;
  if (uVar11 <= param_1) {
    return '\0';
  }
  lVar2 = DAT_020cf3c0;
  uVar5 = DAT_020cf3c8;
  uVar6 = recovered_206cab0(&DAT_020cf3a0,uVar11);
  if (uVar6 != '\0') {
    lVar4 = DAT_020cf3c0;
    if (lVar4 != lVar2) {
      return '\x01';
    }
    uVar10 = DAT_020cf3c8;
    if (uVar10 != uVar5) {
      return '\x01';
    }
    if (uVar5 != 0 && lVar2 != 0) {
      if ((uVar5 & uVar5 - 1) != 0) {
        return '\0';
      }
      uVar11 = DAT_020cf3a8;
      if (uVar11 <= param_1) {
        return '\0';
      }
      lVar2 = DAT_020cf3a0;
      uVar10 = 0x811c9dc5;
      if (lVar2 != 0) {
        bVar7 = *(byte *)(lVar2 + param_1 * 0x118);
        if (bVar7 != 0) {
          pbVar9 = (byte *)(lVar2 + param_1 * 0x118);
          uVar10 = 0x811c9dc5;
          do {
            pbVar9 = pbVar9 + 1;
            uVar10 = (bVar7 ^ uVar10) * 0x1000193;
            bVar7 = *pbVar9;
          } while (bVar7 != 0);
        }
      }
      bVar13 = true;
      uVar12 = 1;
      do {
        uVar10 = uVar10 & uVar5 - 1;
        uVar1 = *(uint *)(lVar4 + (ulong)uVar10 * 4);
        uVar11 = (ulong)uVar1;
        if (uVar11 == 0xffffffff) {
          *(int *)(lVar4 + (ulong)uVar10 * 4) = (int)param_1;
          break;
        }
        uVar3 = DAT_020cf3a8;
        if (uVar11 < uVar3) {
          lVar2 = DAT_020cf3a0;
          iVar8 = recovered_2002eb0((char *)(uVar11 * 0x118 + lVar2),
                                    (char *)(lVar2 + param_1 * 0x118));
          if (iVar8 == 0) break;
        }
        uVar10 = uVar10 + 1;
        bVar13 = uVar12 < uVar5;
        bVar14 = uVar12 != uVar5;
        uVar12 = uVar12 + 1;
      } while (bVar14);
      return uVar1 == 0xffffffff & bVar13;
    }
  }
  return '\0';
}

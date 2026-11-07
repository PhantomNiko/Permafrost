/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf3a0 (*(uint64_t volatile *)(0x215a7b0U))
#define DAT_020cf3a8 (*(uint64_t volatile *)(0x215a7b8U))
#define DAT_020cf3c0 (*(uint64_t volatile *)(0x215a7d0U))
#define DAT_020cf3c8 (*(uint32_t volatile *)(0x215a7d8U))
ulonglong recovered_2042180(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulonglong uVar11;
  uint uVar12;
  long lVar13;

  if ((param_1 != (byte *)0x0) && (bVar6 = *param_1, bVar6 != 0)) {
    lVar13 = DAT_020cf3c0;
    uVar5 = DAT_020cf3c8;
    if (uVar5 == 0 || lVar13 == 0) {
      lVar13 = DAT_020cf3a8;
      if (lVar13 != 0) {
        lVar13 = 0;
        uVar11 = 0;
        do {
          lVar2 = DAT_020cf3a0;
          iVar4 = recovered_2002eb0((char *)(lVar2 + lVar13),(char *)param_1);
          if (iVar4 == 0) {
            return uVar11;
          }
          uVar11 = uVar11 + 1;
          lVar13 = lVar13 + 0x118;
          uVar10 = DAT_020cf3a8;
        } while (uVar11 < uVar10);
      }
    }
    else {
      uVar12 = 0x811c9dc5;
      pbVar7 = param_1;
      do {
        pbVar7 = pbVar7 + 1;
        uVar12 = (bVar6 ^ uVar12) * 0x1000193;
        bVar6 = *pbVar7;
      } while (bVar6 != 0);
      uVar8 = uVar5 - 1;
      uVar9 = 0;
      do {
        uVar12 = uVar12 & uVar8;
        uVar10 = (ulong)*(uint *)(lVar13 + (ulong)uVar12 * 4);
        if (uVar10 == 0xffffffff) {
          return 0xffffffffffffffff;
        }
        uVar3 = DAT_020cf3a8;
        if (uVar10 < uVar3) {
          uVar1 = DAT_020cf3a0;
          uVar1 = DAT_020cf3a0;
          lVar13 = DAT_020cf3a0;
          iVar4 = recovered_2002eb0((char *)(uVar10 * 0x118 + lVar13),(char *)param_1);
          if (iVar4 == 0) {
            return uVar10;
          }
          lVar13 = DAT_020cf3c0;
          uVar5 = DAT_020cf3c8;
        }
        uVar12 = uVar12 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar5);
    }
  }
  return 0xffffffffffffffff;
}

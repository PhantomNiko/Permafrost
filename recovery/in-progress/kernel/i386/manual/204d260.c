/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9cb8 (*(uint32_t volatile *)(0x2130724U))
#define DAT_020b9cbc (*(uint32_t volatile *)(0x2130728U))
#define DAT_020b9cc8 (*(uint32_t volatile *)(0x2130734U))
#define DAT_020b9ccc (*(uint32_t volatile *)(0x2130738U))
byte recovered_204d260(uint incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  uVar9 = DAT_020b9cbc;
  if (uVar9 <= incoming_ecx) {
    return 0;
  }
  iVar7 = DAT_020b9cc8;
  uVar4 = DAT_020b9ccc;
  uVar6 = recovered_2050650(&DAT_020b9cb8,uVar9);
  if ((char)uVar6 != '\0') {
    iVar3 = DAT_020b9cc8;
    if (iVar3 != iVar7) {
      return 1;
    }
    uVar9 = DAT_020b9ccc;
    if (uVar9 != uVar4) {
      return 1;
    }
    if (uVar4 != 0 && iVar7 != 0) {
      if ((uVar4 & uVar4 - 1) != 0) {
        return 0;
      }
      uVar9 = DAT_020b9cbc;
      if (uVar9 <= incoming_ecx) {
        return 0;
      }
      iVar7 = DAT_020b9cb8;
      uVar9 = 0x811c9dc5;
      if (iVar7 != 0) {
        bVar5 = *(byte *)(iVar7 + incoming_ecx * 0x110);
        if (bVar5 != 0) {
          pbVar8 = (byte *)(incoming_ecx * 0x110 + 1 + iVar7);
          do {
            uVar9 = (bVar5 ^ uVar9) * 0x1000193;
            bVar5 = *pbVar8;
            pbVar8 = pbVar8 + 1;
          } while (bVar5 != 0);
        }
      }
      bVar11 = true;
      uVar10 = 1;
      do {
        uVar9 = uVar9 & uVar4 - 1;
        uVar1 = *(uint *)(iVar3 + uVar9 * 4);
        if (uVar1 == 0xffffffff) {
          *(uint *)(iVar3 + uVar9 * 4) = incoming_ecx;
          break;
        }
        uVar2 = DAT_020b9cbc;
        if (uVar1 < uVar2) {
          iVar7 = DAT_020b9cb8;
          iVar7 = recovered_20022a0((char *)(uVar1 * 0x110 + iVar7),
                                    (char *)(iVar7 + incoming_ecx * 0x110));
          if (iVar7 == 0) break;
        }
        uVar9 = uVar9 + 1;
        bVar11 = uVar10 < uVar4;
        iVar7 = (1 - uVar4) + uVar10;
        uVar10 = uVar10 + 1;
      } while (iVar7 != 1);
      return uVar1 == 0xffffffff & bVar11;
    }
  }
  return 0;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9cb8 (*(uint32_t volatile *)(0x2130724U))
#define DAT_020b9cbc (*(uint32_t volatile *)(0x2130728U))
#define DAT_020b9cc8 (*(uint32_t volatile *)(0x2130734U))
#define DAT_020b9ccc (*(uint32_t volatile *)(0x2130738U))
#define local_18 (*(int *)(frame + 24))
undefined4 recovered_204d520(void)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;

  uVar3 = DAT_020b9cbc;
  if (uVar3 == 0) {
    iVar2 = DAT_020b9cc8;
    uVar7 = CONCAT31((int3)((uint)in_EAX >> 8),1);
    if ((iVar2 != 0) && (iVar6 = DAT_020b9ccc, iVar6 != 0)) {
      uVar3 = 0;
      do {
        *(undefined4 *)(iVar2 + uVar3 * 4) = 0xffffffff;
        uVar3 = uVar3 + 1;
        uVar8 = DAT_020b9ccc;
      } while (uVar3 < uVar8);
    }
  }
  else {
    uVar3 = recovered_2050650(&DAT_020b9cb8,uVar3);
    if ((char)uVar3 == '\0') {
LAB_0203ed53:
      uVar7 = 0;
    }
    else {
      iVar2 = DAT_020b9ccc;
      if (iVar2 != 0) {
        uVar3 = 0;
        iVar2 = DAT_020b9cc8;
        do {
          *(undefined4 *)(iVar2 + uVar3 * 4) = 0xffffffff;
          uVar3 = uVar3 + 1;
          uVar8 = DAT_020b9ccc;
        } while (uVar3 < uVar8);
      }
      uVar8 = DAT_020b9cbc;
      if (uVar8 != 0) {
        uVar10 = 0;
        local_18 = 1;
        do {
          iVar2 = DAT_020b9cc8;
          if (iVar2 == 0) {
            return 0;
          }
          uVar3 = DAT_020b9ccc;
          if (uVar3 == 0) {
            return 0;
          }
          uVar1 = uVar3 - 1;
          if ((uVar3 & uVar1) != 0) goto LAB_0203ed53;
          iVar6 = DAT_020b9cb8;
          uVar12 = 0x811c9dc5;
          if ((iVar6 != 0) && (bVar9 = *(byte *)(iVar6 + uVar10 * 0x110), bVar9 != 0)) {
            pbVar4 = (byte *)(iVar6 + local_18);
            do {
              uVar12 = (bVar9 ^ uVar12) * 0x1000193;
              bVar9 = *pbVar4;
              pbVar4 = pbVar4 + 1;
            } while (bVar9 != 0);
          }
          uVar12 = uVar12 & uVar1;
          uVar5 = *(uint *)(iVar2 + uVar12 * 4);
          if (uVar5 == 0xffffffff) {
            *(uint *)(iVar2 + uVar12 * 4) = uVar10;
          }
          else {
            uVar11 = 0;
            do {
              if (uVar5 < uVar8) {
                iVar6 = DAT_020b9cb8;
                iVar6 = recovered_20022a0((char *)(uVar5 * 0x110 + iVar6),
                                          (char *)(iVar6 + uVar10 * 0x110));
                if (iVar6 == 0) goto LAB_0203ed53;
                uVar8 = DAT_020b9cbc;
              }
              if (uVar1 == uVar11) goto LAB_0203ed53;
              uVar12 = uVar12 + 1 & uVar1;
              uVar5 = *(uint *)(iVar2 + uVar12 * 4);
              uVar11 = uVar11 + 1;
            } while (uVar5 != 0xffffffff);
            *(uint *)(iVar2 + uVar12 * 4) = uVar10;
            if (uVar3 <= uVar11) goto LAB_0203ed53;
          }
          uVar3 = 0xffffffff;
          uVar10 = uVar10 + 1;
          local_18 = local_18 + 0x110;
        } while (uVar10 < uVar8);
      }
      uVar7 = CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return uVar7;
}

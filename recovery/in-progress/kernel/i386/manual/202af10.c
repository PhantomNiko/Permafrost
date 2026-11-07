/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9cb8 (*(uint32_t volatile *)(0x2130724U))
#define DAT_020b9cbc (*(uint32_t volatile *)(0x2130728U))
#define DAT_020b9cc8 (*(uint32_t volatile *)(0x2130734U))
#define DAT_020b9ccc (*(uint32_t volatile *)(0x2130738U))
uint recovered_202af10(byte *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;

  if ((incoming_ecx != (byte *)0x0) && (*incoming_ecx != 0)) {
    iVar4 = DAT_020b9cc8;
    uVar6 = (uint)CONCAT11(iVar4 != 0,*incoming_ecx);
    uVar10 = DAT_020b9ccc;
    if (uVar10 == 0 || iVar4 == 0) {
      iVar4 = DAT_020b9cbc;
      if (iVar4 != 0) {
        iVar4 = 0;
        uVar10 = 0;
        do {
          iVar5 = DAT_020b9cb8;
          iVar5 = recovered_20022a0((char *)(iVar5 + iVar4),(char *)incoming_ecx);
          if (iVar5 == 0) {
            return uVar10;
          }
          uVar10 = uVar10 + 1;
          iVar4 = iVar4 + 0x110;
          uVar6 = DAT_020b9cbc;
        } while (uVar10 < uVar6);
      }
    }
    else {
      uVar7 = 0x811c9dc5;
      pbVar8 = incoming_ecx;
      do {
        pbVar8 = pbVar8 + 1;
        uVar7 = (uVar6 & 0xff ^ uVar7) * 0x1000193;
        uVar6 = (uint)*pbVar8;
      } while (*pbVar8 != 0);
      uVar6 = uVar10 - 1;
      uVar9 = 0;
      do {
        uVar7 = uVar7 & uVar6;
        uVar1 = *(uint *)(iVar4 + uVar7 * 4);
        if (uVar1 == 0xffffffff) {
          return 0xffffffff;
        }
        uVar3 = DAT_020b9cbc;
        if (uVar1 < uVar3) {
          uVar2 = DAT_020b9cb8;
          uVar2 = DAT_020b9cb8;
          iVar4 = DAT_020b9cb8;
          iVar4 = recovered_20022a0((char *)(uVar1 * 0x110 + iVar4),(char *)incoming_ecx);
          if (iVar4 == 0) {
            return uVar1;
          }
          iVar4 = DAT_020b9cc8;
          uVar10 = DAT_020b9ccc;
        }
        uVar7 = uVar7 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar10);
    }
  }
  return 0xffffffff;
}

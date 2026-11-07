/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c015c (*(uint32_t volatile *)(0x214bc20U))
#define DAT_020c0160 (*(uint32_t volatile *)(0x214bc24U))
#define DAT_020c0164 (*(uint32_t volatile *)(0x214bc28U))
#define DAT_020c127c (*(uint8_t volatile *)(0x2153c40U))
#define DAT_020c1280 (*(uint8_t volatile *)(0x2153c44U))
#define DAT_020c1284 (*(uint32_t volatile *)(0x2153c48U))
#define DAT_020c1288 (*(uint32_t volatile *)(0x2153c4cU))
#define DAT_020c128c (*(uint32_t volatile *)(0x2153c50U))
void recovered_204b330(uchar in_CL)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uchar uVar5;
  int iVar6;
  void *pf_output_slot;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint size;
  int iVar12;

  iVar2 = DAT_020c0164;
  if (iVar2 != 0) {
    uVar9 = DAT_020c015c;
    uVar8 = DAT_020c0160;
    uVar7 = recovered_204bf20(uVar9,uVar8);
    if ((char)uVar7 != '\0') {
      cVar4 = DAT_020c127c;
      if ((cVar4 != '\x01') || (uVar5 = DAT_020c1280, uVar5 != in_CL)) {
        recovered_20082d0(in_CL);
        pf_output_slot = (void *)DAT_020c128c;
        if (pf_output_slot != (void *)0x0) {
          iVar2 = DAT_020c1284;
          iVar6 = DAT_020c1288;
          recovered_2001e00(pf_output_slot,0x20,iVar2 * iVar6);
        }
        DAT_020c1280 = in_CL;
        DAT_020c127c = 1;
      }
      iVar2 = DAT_020c0160;
      if (iVar2 != 0) {
        uVar8 = 0;
        uVar9 = DAT_020c015c;
        do {
          uVar3 = 0;
          if (uVar9 != 0) {
            uVar10 = 0;
            do {
              iVar12 = uVar9 * uVar8;
              iVar6 = DAT_020c128c;
              iVar2 = DAT_020c0164;
              uVar11 = uVar10;
              while (iVar1 = uVar11 + iVar12, *(char *)(iVar6 + iVar1) == *(char *)(iVar2 + iVar1))
              {
                uVar11 = uVar11 + 1;
                uVar3 = uVar9;
                if (uVar9 <= uVar11) goto LAB_0203b8c3;
              }
              uVar3 = 1;
              do {
                size = uVar3;
                uVar10 = uVar11 + size;
                if (uVar9 <= uVar10) break;
                uVar3 = size + 1;
              } while (*(char *)(iVar6 + iVar12 + uVar11 + size) !=
                       *(char *)(iVar2 + iVar12 + uVar11 + size));
              uVar9 = recovered_2008290();
              if ((uVar8 < uVar9 + (uVar9 == 0)) &&
                 (uVar9 = recovered_2008250(), uVar11 < uVar9 + (uVar9 == 0))) {
                recovered_2008800(uVar8,uVar11,iVar2 + iVar1,size,in_CL);
              }
              iVar6 = DAT_020c128c;
              uVar7 = DAT_020c0164;
              uVar7 = DAT_020c0164;
              iVar2 = DAT_020c0164;
              recovered_2001b70((void *)(iVar6 + iVar1),(void *)(iVar1 + iVar2),size);
              uVar9 = DAT_020c015c;
              uVar3 = uVar9;
            } while (uVar10 < uVar9);
          }
LAB_0203b8c3:
          uVar9 = uVar3;
          uVar8 = uVar8 + 1;
          uVar3 = DAT_020c0160;
        } while (uVar8 < uVar3);
      }
    }
  }
  return;
}

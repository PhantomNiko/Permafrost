/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494760 (*(uint8_t volatile *)(0x8266ec38U))
#define DAT_40494768 (*(uint8_t volatile *)(0x8266ec40U))
#define DAT_404947b0 (*(uint32_t volatile *)(0x8266eca0U))
#define DAT_404947b8 (*(uint32_t volatile *)(0x8266eca8U))
#define DAT_40494850 (*(uint64_t volatile *)(0x8266eda0U))
#define DAT_40494970 (*(uint32_t volatile *)(0x8266eef8U))
#define DAT_40494974 (*(uint32_t volatile *)(0x8266eefcU))
#define DAT_40494978 (*(uint64_t volatile *)(0x8266ef00U))
#define uStack_68 (*(undefined8 *)(frame + 24))
#define uStack_6c (*(undefined4 *)(frame + 20))
#define uStack_70 (*(uint *)(frame + 16))
ulong recovered_8243615c(ulong param_1)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  uchar uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x30;

  lVar10 = DAT_40494978;
  if (lVar10 != 0) {
    uVar8 = DAT_40494970;
    uVar14 = DAT_40494974;
    uVar7 = recovered_824369cc((ulong)uVar8,(ulong)uVar14);
    if (uVar7 != '\0') {
      cVar3 = DAT_40494760;
      bVar4 = DAT_40494768;
      if (cVar3 != '\x01' || (uint)bVar4 != (uint)param_1) {
        recovered_82404200(param_1);
        uStack_70 = DAT_404947b0;
        uStack_6c = DAT_404947b8;
        uStack_68 = DAT_40494850;
        recovered_824360dc(&uStack_70);
        DAT_40494768 = (char)param_1;
        DAT_40494760 = 1;
      }
      for (uVar12 = 0; uVar8 = DAT_40494974, uVar12 < uVar8; uVar12 = uVar12 + 1) {
        uVar15 = 0;
        while( true ) {
          uVar8 = DAT_40494970;
          uVar9 = (ulong)uVar8;
          if (uVar8 <= (uint)uVar15) break;
          lVar10 = uVar12 * uVar9;
          lVar5 = DAT_40494850;
          lVar6 = DAT_40494978;
          uVar16 = uVar15;
          uVar11 = uVar15;
          while( true ) {
            uVar11 = uVar11 + 1;
            if (uVar9 == uVar15) goto LAB_40422e08;
            if (*(char *)(lVar5 + lVar10 + uVar15) != *(char *)(lVar6 + lVar10 + uVar15)) break;
            uVar15 = uVar15 + 1;
            uVar16 = (ulong)((int)uVar16 + 1);
          }
          do {
            uVar14 = uVar8;
            if (uVar9 <= uVar11) break;
            pcVar1 = (char *)(lVar5 + lVar10 + uVar11);
            pcVar2 = (char *)(lVar6 + lVar10 + uVar11);
            uVar14 = (int)uVar16 + 1;
            uVar16 = (ulong)uVar14;
            uVar11 = uVar11 + 1;
          } while (*pcVar1 != *pcVar2);
          lVar10 = lVar10 + (uVar15 & 0xffffffff);
          uVar13 = (uint)uVar15;
          uVar8 = recovered_824358bc();
          if ((uVar12 < uVar8) && (uVar8 = recovered_824358a0(), uVar13 < uVar8)) {
            recovered_8240449c((uint)uVar12,uVar13,lVar6 + lVar10,(ulong)(uVar14 - uVar13),
                               (uint)param_1);
          }
          uVar15 = (ulong)uVar14;
          lVar5 = DAT_40494850;
          lVar6 = DAT_40494978;
          recovered_82400928((void *)(lVar5 + lVar10),(void *)(lVar6 + lVar10),
                             (ulong)(uVar14 - uVar13));
        }
LAB_40422e08:
      }
    }
    param_1 = unaff_x30;
  }
  return param_1;
}

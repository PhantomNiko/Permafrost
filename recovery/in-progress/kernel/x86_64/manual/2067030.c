/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020d5960 (*(uint32_t volatile *)(0x2177a00U))
#define DAT_020d5968 (*(uint32_t volatile *)(0x2177a08U))
#define DAT_020d5970 (*(uint64_t volatile *)(0x2177a10U))
#define DAT_020d6ab0 (*(uint8_t volatile *)(0x217fa40U))
#define DAT_020d6ab8 (*(uint8_t volatile *)(0x217fa48U))
#define DAT_020d6ac0 (*(uint32_t volatile *)(0x217fa50U))
#define DAT_020d6ac8 (*(uint32_t volatile *)(0x217fa58U))
#define DAT_020d6ad0 (*(uint64_t volatile *)(0x217fa60U))
void recovered_2067030(char param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  void *out;
  long lVar6;
  ulong uVar7;
  uchar uVar8;
  uint uVar9;
  ulong uVar10;
  ulong size;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;

  lVar3 = DAT_020d5970;
  if (lVar3 != 0) {
    uVar9 = DAT_020d5960;
    uVar1 = DAT_020d5968;
    uVar8 = recovered_2067fc0(uVar9,(ulong)uVar1);
    if (uVar8 != '\0') {
      cVar5 = DAT_020d6ab0;
      if ((cVar5 != '\x01') || (cVar5 = DAT_020d6ab8, cVar5 != param_1)) {
        recovered_20095e0(param_1);
        out = (void *)DAT_020d6ad0;
        if (out != (void *)0x0) {
          uVar1 = DAT_020d6ac8;
          uVar9 = DAT_020d6ac0;
          recovered_2002110(out,0x20,(ulong)uVar9 * (ulong)uVar1);
        }
        DAT_020d6ab8 = param_1;
        DAT_020d6ab0 = 1;
      }
      iVar2 = DAT_020d5968;
      if (iVar2 != 0) {
        uVar9 = DAT_020d5960;
        uVar13 = 0;
        do {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar14 = 0;
            do {
              uVar10 = (ulong)uVar9;
              lVar16 = uVar13 * uVar10;
              lVar3 = DAT_020d5970;
              uVar11 = (uint)uVar14;
              uVar15 = uVar14 & 0xffffffff;
              lVar6 = DAT_020d6ad0;
              while (uVar11 = uVar11 + 1,
                    *(char *)(lVar6 + lVar16 + uVar15) == *(char *)(lVar3 + lVar16 + uVar15)) {
                uVar15 = uVar15 + 1;
                uVar1 = uVar9;
                if (uVar10 <= uVar15) goto LAB_02048580;
              }
              uVar7 = 1;
              do {
                uVar12 = uVar11;
                size = uVar7;
                uVar14 = size + uVar15;
                if (uVar10 <= uVar14) break;
                uVar7 = size + 1;
                uVar11 = uVar12 + 1;
              } while (*(char *)(lVar6 + lVar16 + uVar15 + size) !=
                       *(char *)(lVar3 + lVar16 + uVar15 + size));
              lVar16 = lVar16 + (uVar15 & 0xffffffff);
              uVar9 = recovered_20095a0();
              if ((uVar13 < uVar9 + (uVar9 == 0)) &&
                 (uVar9 = recovered_2009560(), (uint)uVar15 < uVar9 + (uVar9 == 0))) {
                recovered_2009a80((uint)uVar13,(uint)uVar15,(ulong *)(lVar3 + lVar16),size,
                                  (uint)(byte)param_1);
              }
              lVar6 = DAT_020d6ad0;
              uVar4 = DAT_020d5970;
              uVar4 = DAT_020d5970;
              lVar3 = DAT_020d5970;
              recovered_2001410((void *)(lVar6 + lVar16),(void *)(lVar16 + lVar3),size);
              uVar9 = DAT_020d5960;
              uVar1 = uVar9;
            } while (uVar12 < uVar9);
          }
LAB_02048580:
          uVar9 = uVar1;
          uVar13 = uVar13 + 1;
          uVar1 = DAT_020d5968;
        } while (uVar13 < uVar1);
      }
    }
  }
  return;
}

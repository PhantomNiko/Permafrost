#include "functions.h"
#undef DAT_0210e9a0
#define DAT_0210e9a0 (*(uint8_t volatile *)(0x210e9a0U))
#undef DAT_0210e9f0
#define DAT_0210e9f0 (*(uint8_t volatile *)(0x210e9f0U))
#undef Ram0210e9a0
#define Ram0210e9a0 (*(uint32_t volatile *)(0x210e9a0U))
#undef Ram0210e9f0
#define Ram0210e9f0 (*(uint32_t volatile *)(0x210e9f0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2003280
 */

longdouble recovered_2003280(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  float fVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longdouble lVar10;
  longdouble lVar11;
  longdouble lVar12;

  pbVar4 = param_1;
  while( true ) {
    bVar5 = *pbVar4;
    if ((4 < (uint)(bVar5 - 9U)) && (bVar5 != 0x20)) break;
    pbVar4 = pbVar4 + 1;
  }
  pbVar4 = pbVar4 + ((bVar5 - 0x2b & 0xfd) == 0);
  uVar3 = (uint)CONCAT11(*pbVar4,bVar5);
  bVar5 = *pbVar4 - 0x30U;
  lVar10 = (longdouble)0;
  if (bVar5 < 10) {
    lVar10 = (longdouble)0;
    do {
      fVar2 = pf_bits_float(Ram0210e9f0);
      lVar10 = lVar10 * (longdouble)fVar2 + (longdouble)(int)((uVar3 >> 8) - 0x30);
      pbVar6 = pbVar4 + 1;
      uVar3 = (uint)CONCAT11(*pbVar6,(char)uVar3);
      pbVar4 = pbVar4 + 1;
    } while ((byte)(*pbVar6 - 0x30U) < 10);
  }
  if ((char)(uVar3 >> 8) == '.') {
    pbVar6 = pbVar4 + 1;
    uVar3 = (uint)CONCAT11(*pbVar6,(char)uVar3);
    pbVar4 = pbVar4 + 1;
    if ((byte)(*pbVar6 - 0x30U) < 10) {
      lVar11 = (longdouble)0;
      lVar12 = (longdouble)1;
      fVar2 = pf_bits_float(Ram0210e9f0);
      do {
        lVar11 = lVar11 * (longdouble)fVar2 + (longdouble)(int)((uVar3 >> 8) - 0x30);
        lVar12 = lVar12 * (longdouble)fVar2;
        pbVar6 = pbVar4 + 1;
        uVar3 = (uint)CONCAT11(*pbVar6,(char)uVar3);
        pbVar4 = pbVar4 + 1;
      } while ((byte)(*pbVar6 - 0x30U) < 10);
      lVar11 = lVar11 / lVar12;
      goto LAB_02003353;
    }
  }
  lVar11 = (longdouble)0;
  if (9 < bVar5) {
    if (param_2 == (undefined4 *)0x0) {
      return (longdouble)0;
    }
    *param_2 = param_1;
    return (longdouble)0;
  }
LAB_02003353:
  lVar11 = lVar11 + lVar10;
  if ((uVar3 >> 8 | 0x20) == 0x65) {
    iVar7 = 1;
    if (pbVar4[1] == 0x2b) {
      pbVar6 = pbVar4 + 2;
    }
    else if (pbVar4[1] == 0x2d) {
      pbVar6 = pbVar4 + 2;
      iVar7 = -1;
    }
    else {
      pbVar6 = pbVar4 + 1;
    }
    uVar3 = (uint)CONCAT11(*pbVar6,(char)uVar3);
    bVar5 = *pbVar6 - 0x30U;
    if (bVar5 < 10) {
      iVar8 = 0;
      do {
        iVar8 = ((uVar3 >> 8) - 0x30) + iVar8 * 10;
        pbVar1 = pbVar6 + 1;
        uVar3 = (uint)CONCAT11(*pbVar1,(char)uVar3);
        pbVar6 = pbVar6 + 1;
      } while ((byte)(*pbVar1 - 0x30U) < 10);
      if (bVar5 < 10) {
        iVar8 = iVar8 * iVar7;
        pbVar4 = pbVar6;
        if (iVar8 < 1) {
          if (iVar8 < 0) {
            do {
              fVar2 = pf_bits_float(Ram0210e9a0);
              lVar11 = lVar11 * (longdouble)fVar2;
              iVar8 = iVar8 + 1;
            } while (iVar8 != 0);
          }
        }
        else {
          uVar9 = iVar8 + 1;
          do {
            lVar11 = lVar11 + lVar11;
            uVar9 = uVar9 - 1;
          } while (1 < uVar9);
        }
      }
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar4;
  }
  if ((char)uVar3 == '-') {
    lVar11 = -lVar11;
  }
  return lVar11;
}

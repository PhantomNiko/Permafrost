/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_0208bbb0 (*(float *)(0x20c1620U))
#define _DAT_0208bc00 (*(float *)(0x20c1670U))
double recovered_2003920(char *text,char **end)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  byte *pbVar6;
  byte bVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  uint uVar11;

  pbVar6 = (byte *)text;
  while( true ) {
    bVar7 = *pbVar6;
    if ((4 < bVar7 - 9) && (bVar7 != 0x20)) break;
    pbVar6 = pbVar6 + 1;
  }
  pbVar6 = pbVar6 + ((bVar7 - 0x2b & 0xfd) == 0);
  uVar5 = (uint)CONCAT11(*pbVar6,bVar7);
  bVar7 = *pbVar6 - 0x30U;
  fVar2 = 0.0;
  if (bVar7 < 10) {
    fVar2 = 0.0;
    do {
      fVar2 = fVar2 * _DAT_0208bc00 + (float)(int)((uVar5 >> 8) - 0x30);
      pbVar8 = pbVar6 + 1;
      uVar5 = (uint)CONCAT11(*pbVar8,(char)uVar5);
      pbVar6 = pbVar6 + 1;
    } while ((byte)(*pbVar8 - 0x30U) < 10);
  }
  if ((char)(uVar5 >> 8) == '.') {
    pbVar8 = pbVar6 + 1;
    uVar5 = (uint)CONCAT11(*pbVar8,(char)uVar5);
    pbVar6 = pbVar6 + 1;
    if (9 < (byte)(*pbVar8 - 0x30U)) goto LAB_0200329a;
    fVar3 = 0.0;
    fVar4 = 1.0;
    do {
      fVar3 = fVar3 * _DAT_0208bc00 + (float)(int)((uVar5 >> 8) - 0x30);
      fVar4 = fVar4 * _DAT_0208bc00;
      pbVar8 = pbVar6 + 1;
      uVar5 = (uint)CONCAT11(*pbVar8,(char)uVar5);
      pbVar6 = pbVar6 + 1;
    } while ((byte)(*pbVar8 - 0x30U) < 10);
    fVar3 = fVar3 / fVar4;
  }
  else {
LAB_0200329a:
    fVar3 = 0.0;
    if (9 < bVar7) {
      fVar2 = 0.0;
      if (end != (char **)0x0) {
        *end = text;
      }
      goto LAB_02003354;
    }
  }
  fVar3 = fVar3 + fVar2;
  if ((uVar5 >> 8 | 0x20) == 0x65) {
    iVar9 = 1;
    if (pbVar6[1] == 0x2b) {
      pbVar8 = pbVar6 + 2;
    }
    else if (pbVar6[1] == 0x2d) {
      pbVar8 = pbVar6 + 2;
      iVar9 = -1;
    }
    else {
      pbVar8 = pbVar6 + 1;
    }
    uVar5 = (uint)CONCAT11(*pbVar8,(char)uVar5);
    bVar7 = *pbVar8 - 0x30U;
    if (bVar7 < 10) {
      iVar10 = 0;
      do {
        iVar10 = ((uVar5 >> 8) - 0x30) + iVar10 * 10;
        pbVar1 = pbVar8 + 1;
        uVar5 = (uint)CONCAT11(*pbVar1,(char)uVar5);
        pbVar8 = pbVar8 + 1;
      } while ((byte)(*pbVar1 - 0x30U) < 10);
      if (bVar7 < 10) {
        iVar10 = iVar10 * iVar9;
        pbVar6 = pbVar8;
        if (iVar10 < 1) {
          if (iVar10 < 0) {
            do {
              fVar3 = fVar3 * _DAT_0208bbb0;
              iVar10 = iVar10 + 1;
            } while (iVar10 != 0);
          }
        }
        else {
          uVar11 = iVar10 + 1;
          do {
            fVar3 = fVar3 + fVar3;
            uVar11 = uVar11 - 1;
          } while (1 < uVar11);
        }
      }
    }
  }
  if (end != (char **)0x0) {
    *end = (char *)pbVar6;
  }
  fVar2 = -fVar3;
  if ((char)uVar5 != '-') {
    fVar2 = fVar3;
  }
LAB_02003354:
  return (double)fVar2;
}

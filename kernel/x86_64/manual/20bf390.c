/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20bf390(long param_1,long param_2,long *param_3,long *param_4,long *param_5,
                       long *param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  long lVar3;
  byte bVar4;
  undefined4 in_R10D;
  int iVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  uint128 auVar10;

  PF_PART4(auVar10, 0) = -(uint)(param_1 == 0);
  PF_PART4(auVar10, 4) = -(uint)(param_3 == (long *)0x0);
  PF_PART4(auVar10, 8) = -(uint)(param_4 == (long *)0x0);
  PF_PART4(auVar10, 12) = -(uint)(param_5 == (long *)0x0);
  iVar5 = movmskps(in_R10D,auVar10);
  if ((iVar5 != 0 || param_6 == (long *)0x0) || (bVar4 = *(byte *)(param_1 + param_2), bVar4 == 0))
  {
    return '\0';
  }
  pcVar2 = (char *)(param_2 + param_1 + 2);
  do {
    if ((byte)((bVar4 & 0xdf) + 0xbf) < 0x1a) {
      lVar7 = param_2;
      pcVar9 = pcVar2;
      do {
        pcVar8 = pcVar9;
        lVar6 = lVar7;
        bVar4 = pcVar8[-1];
        if (bVar4 == 0) goto LAB_020810d0;
        pcVar9 = pcVar8 + 1;
        lVar7 = lVar6 + 1;
      } while ((byte)((bVar4 & 0xdf) + 0xbf) < 0x1a);
      if ((bVar4 == 0x2d) && ((byte)(*pcVar8 - 0x30U) < 10)) {
        lVar6 = lVar6 + 2;
        lVar3 = lVar6;
        do {
          cVar1 = *pcVar9;
          lVar3 = lVar3 + 1;
          pcVar9 = pcVar9 + 1;
        } while ((byte)(cVar1 - 0x30U) < 10);
        *param_3 = param_2;
        *param_4 = lVar7;
        *param_5 = lVar6;
        *param_6 = lVar3;
        return '\x01';
      }
    }
LAB_020810d0:
    bVar4 = *(byte *)(param_1 + 1 + param_2);
    param_2 = param_2 + 1;
    pcVar2 = pcVar2 + 1;
    if (bVar4 == 0) {
      return '\0';
    }
  } while( true );
}

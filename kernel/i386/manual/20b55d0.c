/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_20b55d0(int param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  char cVar7;

  uVar2 = 0;
  if (param_2 != (int *)0x0 && param_1 != 0) {
    recovered_2001e00(param_2,0,0x264);
    *param_2 = param_1;
    iVar3 = recovered_20046e0();
    param_2[1] = iVar3;
    iVar3 = recovered_20046c0();
    param_2[2] = iVar3;
    iVar3 = recovered_20046d0();
    param_2[3] = iVar3;
    recovered_2004710(param_1,(undefined1 *)(param_2 + 9),0xa0);
    piVar1 = param_2 + 0x31;
    *(undefined1 *)(param_2 + 0x31) = 0;
    uVar4 = recovered_2004700();
    if (0 < (int)uVar4) {
      if (0x3e < uVar4) {
        uVar4 = 0x3f;
      }
      piVar5 = piVar1;
      uVar6 = uVar4;
      do {
        if ((char)*piVar5 == '\0') {
          cVar7 = ',';
LAB_020831f2:
          *(char *)piVar5 = cVar7;
        }
        else {
          cVar7 = '.';
          if ((byte)((char)*piVar5 + 0x81U) < 0xa1) goto LAB_020831f2;
        }
        piVar5 = (int *)((int)piVar5 + 1);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      do {
        uVar6 = *(byte *)((int)param_2 + uVar4 + 0xc3) - 0x20;
        if ((0xe < uVar6) || ((0x5001U >> (uVar6 & 0x1f) & 1) == 0)) goto LAB_0208322a;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      uVar4 = 0;
LAB_0208322a:
      *(char *)((int)piVar1 + uVar4) = '\0';
      if ((char)*piVar1 != '\0') {
        *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
      }
    }
    piVar1 = param_2 + 0x41;
    *(undefined1 *)(param_2 + 0x41) = 0;
    uVar4 = recovered_2004700();
    if (0 < (int)uVar4) {
      if (0x3e < uVar4) {
        uVar4 = 0x3f;
      }
      piVar5 = piVar1;
      uVar6 = uVar4;
      do {
        if ((char)*piVar5 == '\0') {
          cVar7 = ',';
LAB_02083272:
          *(char *)piVar5 = cVar7;
        }
        else {
          cVar7 = '.';
          if ((byte)((char)*piVar5 + 0x81U) < 0xa1) goto LAB_02083272;
        }
        piVar5 = (int *)((int)piVar5 + 1);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      do {
        uVar6 = *(byte *)((int)param_2 + uVar4 + 0x103) - 0x20;
        if ((0xe < uVar6) || ((0x5001U >> (uVar6 & 0x1f) & 1) == 0)) goto LAB_020832aa;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      uVar4 = 0;
LAB_020832aa:
      *(char *)((int)piVar1 + uVar4) = '\0';
      if ((char)*piVar1 != '\0') {
        *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 2;
      }
    }
    piVar1 = param_2 + 0x51;
    *(undefined1 *)(param_2 + 0x51) = 0;
    uVar4 = recovered_2004700();
    if (0 < (int)uVar4) {
      if (0x5e < uVar4) {
        uVar4 = 0x5f;
      }
      piVar5 = piVar1;
      uVar6 = uVar4;
      do {
        if ((char)*piVar5 == '\0') {
          cVar7 = ',';
LAB_020832f2:
          *(char *)piVar5 = cVar7;
        }
        else {
          cVar7 = '.';
          if ((byte)((char)*piVar5 + 0x81U) < 0xa1) goto LAB_020832f2;
        }
        piVar5 = (int *)((int)piVar5 + 1);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      do {
        uVar6 = *(byte *)((int)param_2 + uVar4 + 0x143) - 0x20;
        if ((0xe < uVar6) || ((0x5001U >> (uVar6 & 0x1f) & 1) == 0)) goto LAB_0208332a;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      uVar4 = 0;
LAB_0208332a:
      *(char *)((int)piVar1 + uVar4) = '\0';
      if ((char)*piVar1 != '\0') {
        *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 4;
      }
    }
    piVar1 = param_2 + 0x69;
    *(undefined1 *)(param_2 + 0x69) = 0;
    uVar4 = recovered_2004700();
    if (0 < (int)uVar4) {
      if (0xbe < uVar4) {
        uVar4 = 0xbf;
      }
      piVar5 = piVar1;
      uVar6 = uVar4;
      do {
        if ((char)*piVar5 == '\0') {
          cVar7 = ',';
LAB_02083372:
          *(char *)piVar5 = cVar7;
        }
        else {
          cVar7 = '.';
          if ((byte)((char)*piVar5 + 0x81U) < 0xa1) goto LAB_02083372;
        }
        piVar5 = (int *)((int)piVar5 + 1);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      do {
        uVar6 = *(byte *)((int)param_2 + uVar4 + 0x1a3) - 0x20;
        if ((0xe < uVar6) || ((0x5001U >> (uVar6 & 0x1f) & 1) == 0)) goto LAB_020833aa;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      uVar4 = 0;
LAB_020833aa:
      *(char *)((int)piVar1 + uVar4) = '\0';
      if ((char)*piVar1 != '\0') {
        *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 8;
      }
    }
    iVar3 = recovered_2004700();
    if (iVar3 == 4) {
      param_2[5] = 0;
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 0x10;
    }
    iVar3 = recovered_2004700();
    if (iVar3 == 4) {
      param_2[6] = 0;
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 0x10;
    }
    iVar3 = recovered_2004700();
    if (iVar3 == 4) {
      param_2[7] = 0;
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 0x10;
    }
    iVar3 = recovered_2004700();
    if (iVar3 == 4) {
      param_2[8] = 0;
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 0x10;
    }
    uVar2 = 1;
  }
  return uVar2;
}

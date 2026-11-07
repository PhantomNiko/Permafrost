/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_20a3ea0(int incoming_ecx,void *incoming_edx,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar5;
  void *pvVar4;
  uint uVar6;
  int iVar7;
  byte bVar8;

  if (incoming_edx == (void *)0x0) {
    return 0;
  }
  pvVar4 = recovered_2001e00(incoming_edx,0,0xd);
  if (incoming_ecx == 0) {
    uVar6 = 0;
    incoming_edx = pvVar4;
  }
  else {
    uVar6 = 0;
    for (iVar7 = 0; bVar5 = *(byte *)(incoming_ecx + iVar7), bVar5 == 0x5c; iVar7 = iVar7 + 1) {
      bVar1 = *(byte *)(incoming_ecx + 1 + iVar7);
      bVar5 = 0x5c;
      if (bVar1 == 0) goto switchD_02076917_caseD_5d;
      if ((bVar1 & 0xdf) == 0x58) {
        bVar2 = *(byte *)(incoming_ecx + 2 + iVar7);
        if ((((byte)(bVar2 - 0x30U) < 10) || (bVar2 - 0x61U < 6)) || (bVar2 - 0x41U < 6)) {
          bVar8 = *(byte *)(incoming_ecx + 3 + iVar7);
          bVar3 = bVar8 - 0x30U;
          if (((bVar3 < 10) || (bVar8 - 0x61U < 6)) || (bVar8 - 0x41U < 6)) {
            bVar5 = bVar2 * '\x10';
            if (9 < (byte)(bVar2 - 0x30U)) {
              bVar5 = bVar5 + 0x90;
            }
            if ((byte)(bVar8 + 0x9f) < 0x1a) {
              bVar8 = bVar8 - 0x20;
            }
            if (9 < bVar3) {
              bVar3 = bVar8 - 0x37;
            }
            iVar7 = iVar7 + 3;
            bVar5 = bVar3 | bVar5;
            goto switchD_02076917_caseD_5d;
          }
        }
      }
      switch((uintptr_t)(bVar1)) {
      case 0x5c:
switchD_02076917_caseD_5c:
        iVar7 = iVar7 + 1;
        bVar5 = bVar1;
        break;
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x73:
        break;
      case 0x6e:
        bVar5 = 10;
        goto LAB_02076939;
      case 0x72:
        bVar5 = 0xd;
        goto LAB_02076939;
      case 0x74:
        bVar5 = 9;
LAB_02076939:
        iVar7 = iVar7 + 1;
        break;
      default:
        if ((bVar1 == 0x22) || (bVar1 == 0x27)) goto switchD_02076917_caseD_5c;
      }
switchD_02076917_caseD_5d:
      if (bVar5 == 0) {
        return 0;
      }
      if (0xb < uVar6) {
        return 0;
      }
      *(byte *)((int)incoming_edx + uVar6) = bVar5;
      uVar6 = uVar6 + 1;
    }
    if (bVar5 != 0) goto switchD_02076917_caseD_5d;
    *(undefined1 *)((int)incoming_edx + uVar6) = 0;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar6;
  }
  return CONCAT31((int3)((uint)incoming_edx >> 8),1);
}

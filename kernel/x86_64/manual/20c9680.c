/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20c9680(long param_1,long param_2,ulong *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;

  if (param_2 == 0) {
    return '\0';
  }
  recovered_2002110((void *)param_2,0,0xd);
  if (param_1 == 0) {
    if (param_3 == (ulong *)0x0) {
      return '\x01';
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    for (lVar6 = 0; bVar7 = *(byte *)(param_1 + lVar6), bVar7 == 0x5c; lVar6 = lVar6 + 1) {
      bVar4 = *(byte *)(param_1 + 1 + lVar6);
      bVar7 = 0x5c;
      if (bVar4 == 0) goto switchD_020887a7_caseD_5d;
      if ((bVar4 & 0xdf) == 0x58) {
        bVar2 = *(byte *)(param_1 + 2 + lVar6);
        if (((byte)(bVar2 - 0x30U) < 10) ||
           ((bVar2 - 0x41U < 0x26 && ((0x3f0000003fU >> ((ulong)(bVar2 - 0x41U) & 0x3f) & 1) != 0))))
        {
          bVar3 = *(byte *)(param_1 + 3 + lVar6);
          bVar1 = bVar3 - 0x30U;
          if ((bVar1 < 10) ||
             ((bVar3 - 0x41U < 0x26 && ((0x3f0000003fU >> ((ulong)(bVar3 - 0x41U) & 0x3f) & 1) != 0)))
             ) {
            bVar7 = bVar2 * '\x10' + 0x90;
            if ((byte)(bVar2 - 0x30U) < 10) {
              bVar7 = bVar2 * '\x10';
            }
            bVar4 = bVar3 - 0x20;
            if (0x19 < (byte)(bVar3 + 0x9f)) {
              bVar4 = bVar3;
            }
            if (9 < bVar1) {
              bVar1 = bVar4 - 0x37;
            }
            lVar6 = lVar6 + 3;
            bVar7 = bVar1 | bVar7;
            goto switchD_020887a7_caseD_5d;
          }
        }
      }
      switch((uintptr_t)(bVar4)) {
      case 0x5c:
switchD_020887a7_caseD_5c:
        lVar6 = lVar6 + 1;
        bVar7 = bVar4;
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
        bVar7 = 10;
        goto LAB_020887c9;
      case 0x72:
        bVar7 = 0xd;
        goto LAB_020887c9;
      case 0x74:
        bVar7 = 9;
LAB_020887c9:
        lVar6 = lVar6 + 1;
        break;
      default:
        if ((bVar4 == 0x22) || (bVar4 == 0x27)) goto switchD_020887a7_caseD_5c;
      }
switchD_020887a7_caseD_5d:
      if (bVar7 == 0) {
        return '\0';
      }
      if (0xb < uVar5) {
        return '\0';
      }
      *(byte *)(param_2 + uVar5) = bVar7;
      uVar5 = uVar5 + 1;
    }
    if (bVar7 != 0) goto switchD_020887a7_caseD_5d;
    *(undefined1 *)(param_2 + uVar5) = 0;
    if (param_3 == (ulong *)0x0) {
      return '\x01';
    }
  }
  *param_3 = uVar5;
  return '\x01';
}

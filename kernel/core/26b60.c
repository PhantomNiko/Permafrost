#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26b60
 */

undefined4 recovered_26b60(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint extraout_EAX = 0;
  undefined3 uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  switch((uintptr_t)(param_1)) {
  case 0:
switchD_00026b80_caseD_0:
    recovered_21348(param_2,param_3,param_5);
    uVar6 = extraout_EAX;
    break;
  case 1:
    uVar7 = param_5;
    if (param_6 < param_5) {
      uVar7 = param_6;
    }
    for (uVar1 = 0; uVar7 != uVar1; uVar1 = uVar1 + 1) {
      *(undefined1 *)(param_2 + uVar1) = *(undefined1 *)(param_3 + uVar1);
    }
    for (uVar6 = 0; param_5 + uVar7 * -2 + uVar1 != uVar6; uVar6 = uVar6 + 1) {
      *(char *)(param_2 + uVar7 + uVar6) =
           *(char *)((uVar7 - param_6) + param_2 + uVar6) + *(char *)(param_3 + uVar7 + uVar6);
    }
    break;
  case 2:
    if (param_4 == 0) goto switchD_00026b80_caseD_0;
    for (uVar6 = 0; param_5 != uVar6; uVar6 = uVar6 + 1) {
      *(char *)(param_2 + uVar6) = *(char *)(param_4 + uVar6) + *(char *)(param_3 + uVar6);
    }
    break;
  case 3:
    if (param_4 == 0) {
      uVar2 = 0;
      if (param_5 == 0) goto LAB_00026c59;
      uVar7 = param_5;
      if (param_6 < param_5) {
        uVar7 = param_6;
      }
      for (uVar6 = 0; uVar7 != uVar6; uVar6 = uVar6 + 1) {
        *(undefined1 *)(param_2 + uVar6) = *(undefined1 *)(param_3 + uVar6);
      }
      uVar6 = param_5 + uVar7 * -2 + uVar6;
      for (uVar1 = 0; uVar6 != uVar1; uVar1 = uVar1 + 1) {
        *(byte *)(param_2 + uVar7 + uVar1) =
             (*(byte *)((uVar7 - param_6) + param_2 + uVar1) >> 1) +
             *(char *)(param_3 + uVar7 + uVar1);
      }
    }
    else {
      uVar6 = param_2 - param_6;
      for (uVar7 = 0; param_5 != uVar7; uVar7 = uVar7 + 1) {
        if (uVar7 < param_6) {
          uVar1 = 0;
        }
        else {
          uVar1 = (uint)*(byte *)(uVar6 + uVar7);
        }
        *(char *)(param_2 + uVar7) =
             (char)(uVar1 + *(byte *)(param_4 + uVar7) >> 1) + *(char *)(param_3 + uVar7);
      }
    }
    break;
  case 4:
    if (param_4 == 0) {
      uVar7 = param_5;
      if (param_6 < param_5) {
        uVar7 = param_6;
      }
      for (uVar1 = 0; uVar7 != uVar1; uVar1 = uVar1 + 1) {
        *(undefined1 *)(param_2 + uVar1) = *(undefined1 *)(param_3 + uVar1);
      }
      for (uVar6 = 0; param_5 + uVar7 * -2 + uVar1 != uVar6; uVar6 = uVar6 + 1) {
        *(char *)(param_2 + uVar7 + uVar6) =
             *(char *)((uVar7 - param_6) + param_2 + uVar6) + *(char *)(param_3 + uVar7 + uVar6);
      }
    }
    else {
      uVar6 = param_2 - param_6;
      for (uVar7 = 0; param_5 != uVar7; uVar7 = uVar7 + 1) {
        uVar6 = 0;
        uVar1 = 0;
        if (param_6 <= uVar7) {
          uVar6 = (uint)*(byte *)((param_2 - param_6) + uVar7);
          uVar1 = (uint)*(byte *)((param_4 - param_6) + uVar7);
        }
        uVar8 = (uint)*(byte *)(param_4 + uVar7);
        uVar4 = uVar6 - uVar1;
        uVar10 = -(uVar8 - uVar1);
        if ((int)uVar10 < 0) {
          uVar10 = uVar8 - uVar1;
        }
        uVar9 = -uVar4;
        if ((int)-uVar4 < 0) {
          uVar9 = uVar4;
        }
        uVar3 = (uVar4 + uVar8) - uVar1;
        uVar4 = -uVar3;
        if ((int)uVar4 < 0) {
          uVar4 = uVar3;
        }
        if (uVar9 <= uVar4) {
          uVar1 = uVar8;
        }
        if (uVar4 < uVar10) {
          uVar6 = uVar1;
        }
        cVar5 = (char)uVar6;
        if (uVar9 < uVar10) {
          cVar5 = (char)uVar1;
        }
        *(char *)(param_2 + uVar7) = cVar5 + *(char *)(param_3 + uVar7);
        uVar6 = param_3;
      }
    }
    break;
  default:
    return 0;
  }
  uVar2 = (undefined3)(uVar6 >> 8);
LAB_00026c59:
  return CONCAT31(uVar2,1);
}

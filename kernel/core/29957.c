#include "functions.h"
#undef DAT_00047e50
#define DAT_00047e50 (*(int *)(0x47e50U))
#undef DAT_00047e54
#define DAT_00047e54 (*(uint *)(0x47e54U))
#undef DAT_00047e58
#define DAT_00047e58 (*(uint *)(0x47e58U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29957
 */

bool recovered_29957(uint *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64];

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (DAT_00047e50 == 0 || param_1 == (uint *)0x0) {
LAB_00029aa5:
    bVar6 = false;
  }
  else {
    if (param_3 == 0) {
      recovered_29ee8(*param_1);
      *param_1 = 0;
      return true;
    }
    if ((param_2 == 0) || (uVar5 = *param_1, uVar5 == 0)) {
      *param_1 = 0;
      param_2 = 0;
      uVar5 = 0;
    }
    else {
      uVar2 = 1;
      if (param_3 <= param_2) {
        while( true ) {
          if (param_3 == uVar2) break;
          if (DAT_00047e54 <= uVar5 || uVar5 < 2) goto LAB_00029aa5;
          uVar2 = uVar2 + 1;
          uVar5 = *(uint *)(DAT_00047e50 + uVar5 * 4);
        }
        if (DAT_00047e54 > uVar5 && uVar5 >= 2) {
          if (param_2 <= param_3) {
            return true;
          }
          uVar2 = *(uint *)(DAT_00047e50 + uVar5 * 4);
          recovered_29f3b(uVar5,-1);
          if (uVar2 - 1 < 0xfffffffe) {
            recovered_29ee8(uVar2);
            return true;
          }
          return true;
        }
        goto LAB_00029aa5;
      }
      for (; param_2 != uVar2; uVar2 = uVar2 + 1) {
        if (uVar5 < 2) {
          return false;
        }
        if (DAT_00047e54 <= uVar5) {
          return false;
        }
        uVar5 = *(uint *)(DAT_00047e50 + uVar5 * 4);
      }
    }
    uVar2 = 0;
    uVar3 = 0;
    for (; param_2 < param_3; param_2 = param_2 + 1) {
      if ((DAT_00047e50 == 0) || (DAT_00047e54 < 3)) {
LAB_00029a8f:
        recovered_29ee8(uVar2);
        if (uVar5 != 0) {
          recovered_29f3b(uVar5,-1);
        }
        goto LAB_00029aa5;
      }
      uVar1 = 2;
      if (DAT_00047e58 < DAT_00047e54) {
        uVar1 = DAT_00047e58;
      }
      if (DAT_00047e58 < 2) {
        uVar1 = 2;
      }
      for (uVar4 = uVar1; uVar4 < DAT_00047e54; uVar4 = uVar4 + 1) {
        if (*(int *)(DAT_00047e50 + uVar4 * 4) == 0) {
          if (uVar4 != 0) goto LAB_00029a53;
          goto LAB_00029a8f;
        }
      }
      uVar4 = 2;
      while( true ) {
        if (uVar1 <= uVar4) goto LAB_00029a8f;
        if (*(int *)(DAT_00047e50 + uVar4 * 4) == 0) break;
        uVar4 = uVar4 + 1;
      }
LAB_00029a53:
      recovered_29f3b(uVar4,-1);
      DAT_00047e58 = uVar4 + 1;
      if (DAT_00047e54 <= uVar4 + 1) {
        DAT_00047e58 = 2;
      }
      uVar1 = uVar4;
      if (uVar3 != 0) {
        recovered_29f3b(uVar3,uVar4);
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      uVar3 = uVar4;
    }
    if (*param_1 == 0) {
      *param_1 = uVar2;
    }
    else if (uVar2 == 0) {
      uVar2 = 1;
    }
    else {
      recovered_29f3b(uVar5,uVar2);
      uVar2 = *param_1;
    }
    bVar6 = uVar2 != 0;
  }
  return bVar6;
}

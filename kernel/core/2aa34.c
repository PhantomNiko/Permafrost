#include "functions.h"
#undef DAT_0004ee64
#define DAT_0004ee64 (*(int *)(0x4ee64U))
#undef DAT_0004ee68
#define DAT_0004ee68 (*(uint *)(0x4ee68U))
#undef DAT_0004ee6c
#define DAT_0004ee6c (*(uint *)(0x4ee6cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2aa34
 */

bool recovered_2aa34(uint *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64];

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (DAT_0004ee64 == 0 || param_1 == (uint *)0x0) {
LAB_0002ab82:
    bVar6 = false;
  }
  else {
    if (param_3 == 0) {
      recovered_2afc5(*param_1);
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
          if (DAT_0004ee68 <= uVar5 || uVar5 < 2) goto LAB_0002ab82;
          uVar2 = uVar2 + 1;
          uVar5 = *(uint *)(DAT_0004ee64 + uVar5 * 4);
        }
        if (DAT_0004ee68 > uVar5 && uVar5 >= 2) {
          if (param_2 <= param_3) {
            return true;
          }
          uVar2 = *(uint *)(DAT_0004ee64 + uVar5 * 4);
          recovered_2b018(uVar5,-1);
          if (uVar2 - 1 < 0xfffffffe) {
            recovered_2afc5(uVar2);
            return true;
          }
          return true;
        }
        goto LAB_0002ab82;
      }
      for (; param_2 != uVar2; uVar2 = uVar2 + 1) {
        if (uVar5 < 2) {
          return false;
        }
        if (DAT_0004ee68 <= uVar5) {
          return false;
        }
        uVar5 = *(uint *)(DAT_0004ee64 + uVar5 * 4);
      }
    }
    uVar2 = 0;
    uVar3 = 0;
    for (; param_2 < param_3; param_2 = param_2 + 1) {
      if ((DAT_0004ee64 == 0) || (DAT_0004ee68 < 3)) {
LAB_0002ab6c:
        recovered_2afc5(uVar2);
        if (uVar5 != 0) {
          recovered_2b018(uVar5,-1);
        }
        goto LAB_0002ab82;
      }
      uVar1 = 2;
      if (DAT_0004ee6c < DAT_0004ee68) {
        uVar1 = DAT_0004ee6c;
      }
      if (DAT_0004ee6c < 2) {
        uVar1 = 2;
      }
      for (uVar4 = uVar1; uVar4 < DAT_0004ee68; uVar4 = uVar4 + 1) {
        if (*(int *)(DAT_0004ee64 + uVar4 * 4) == 0) {
          if (uVar4 != 0) goto LAB_0002ab30;
          goto LAB_0002ab6c;
        }
      }
      uVar4 = 2;
      while( true ) {
        if (uVar1 <= uVar4) goto LAB_0002ab6c;
        if (*(int *)(DAT_0004ee64 + uVar4 * 4) == 0) break;
        uVar4 = uVar4 + 1;
      }
LAB_0002ab30:
      recovered_2b018(uVar4,-1);
      DAT_0004ee6c = uVar4 + 1;
      if (DAT_0004ee68 <= uVar4 + 1) {
        DAT_0004ee6c = 2;
      }
      uVar1 = uVar4;
      if (uVar3 != 0) {
        recovered_2b018(uVar3,uVar4);
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
      recovered_2b018(uVar5,uVar2);
      uVar2 = *param_1;
    }
    bVar6 = uVar2 != 0;
  }
  return bVar6;
}

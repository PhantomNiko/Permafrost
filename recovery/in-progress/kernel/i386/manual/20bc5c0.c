/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_20bc5c0(int incoming_ecx,uint incoming_edx,uint param_3,uint param_4,uint param_5,
                      uint *param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;

  if (param_6 == (uint *)0x0) {
LAB_0204a196:
    bVar5 = false;
  }
  else {
    *param_6 = 0;
    if (param_4 == 0) {
      bVar5 = param_3 == 0;
    }
    else {
      bVar5 = false;
      if ((1 < incoming_edx && incoming_ecx != 0) && param_5 != 0) {
        uVar6 = recovered_20012c0((param_4 + param_5) - 1,
                                  (CARRY4(param_4,param_5) - 1) + (uint)(param_4 + param_5 != 0),
                                  param_5,0);
        iVar2 = (int)((ulonglong)uVar6 >> 0x20);
        uVar4 = (uint)uVar6;
        bVar1 = (uint)(incoming_edx - 2 < uVar4) <= (uint)-iVar2;
        uVar3 = uVar4;
        if ((iVar2 != 0 || !bVar1) || iVar2 != 0) {
          uVar3 = 0;
        }
        if ((iVar2 == 0 && bVar1) && iVar2 == 0) {
          if (uVar4 != 0) {
            uVar4 = 1;
            do {
              if (param_3 < 2) {
                return false;
              }
              if (incoming_edx <= param_3) {
                return false;
              }
              if ((uVar4 < uVar3) &&
                 (param_3 = *(uint *)(incoming_ecx + param_3 * 4), param_3 + 1 < 2))
              goto LAB_0204a196;
              iVar2 = (1 - uVar3) + uVar4;
              uVar4 = uVar4 + 1;
            } while (iVar2 != 1);
          }
          *param_6 = uVar3;
          bVar5 = true;
        }
      }
    }
  }
  return bVar5;
}

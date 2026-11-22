/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

int recovered_2056fb0(int incoming_ecx,int incoming_edx,uint param_3,int param_4,int param_5,
                     uint param_6,uint param_7,char param_8,uint param_9,int param_10,int *param_11,
                     int *param_12)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *buffer;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;

  iVar4 = 0;
  if (((((1 < param_7) && (incoming_ecx != 0)) && (param_11 != (int *)0x0)) &&
      ((param_12 != (int *)0x0 && (iVar4 = 0, param_5 != 0)))) &&
     ((param_6 != 0 && (param_7 < param_3 + 2)))) {
    *param_11 = 0;
    *param_12 = 0;
    if (param_8 == '\0') {
      uVar5 = 0;
      uVar3 = param_7;
      do {
        if (uVar3 < 2) {
          return 0;
        }
        if (param_3 + 2 <= uVar3) {
          return 0;
        }
        if (param_3 <= uVar5) {
          return 0;
        }
        uVar5 = uVar5 + 1;
        uVar3 = *(uint *)(incoming_edx + uVar3 * 4) & 0xfffffff;
      } while (0xf0000008 < uVar3 + 0xf0000008);
    }
    else {
      if (param_9 == 0 && param_10 == 0) {
        uVar5 = 1;
      }
      else {
        uVar6 = recovered_20012c0((param_9 + param_6) - 1,
                                  param_10 + (uint)CARRY4(param_9,param_6) + -1 +
                                  (uint)(param_9 + param_6 != 0),param_6,0);
        uVar5 = (uint)uVar6;
      }
      if (uVar5 == 0) {
        return 0;
      }
      uVar3 = (uint)CARRY4(param_7 - 2,uVar5);
      if (uVar3 != 0 || -uVar3 < (uint)(param_3 < (param_7 - 2) + uVar5)) {
        return 0;
      }
    }
    if ((int)((ulonglong)param_6 * (ulonglong)uVar5 >> 0x20) == 0) {
      buffer = recovered_2001650(uVar5 * param_6);
      iVar4 = 0;
      if (buffer != (void *)0x0) {
        uVar3 = 1;
        do {
          uVar2 = recovered_204ed30((uint)*(byte *)(incoming_ecx + 4),
                                    (param_7 - 2) * param_5 + param_4 + *(int *)(incoming_ecx + 8),
                                    (int)buffer + iVar4,param_6);
          if ((char)uVar2 == '\0') {
            recovered_2001710(buffer);
            return 0;
          }
          if ((param_8 == '\0') && (uVar3 < uVar5)) {
            param_7 = *(uint *)(incoming_edx + param_7 * 4) & 0xfffffff;
          }
          else {
            param_7 = param_7 + 1;
          }
          iVar4 = iVar4 + param_6;
          iVar1 = (1 - uVar5) + uVar3;
          uVar3 = uVar3 + 1;
        } while (iVar1 != 1);
        *param_11 = (int)buffer;
        *param_12 = iVar4;
        iVar4 = CONCAT31((int3)((uint)iVar4 >> 8),1);
      }
    }
    else {
      iVar4 = 0;
    }
  }
  return iVar4;
}

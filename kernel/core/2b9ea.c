#include "functions.h"
#undef DAT_00048638
#define DAT_00048638 (*(uint8_t *)(0x48638U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b9ea
 */

undefined4 recovered_2b9ea(int *param_1,uint *param_2,int param_3,int param_4,int param_5,int param_6,
               char param_7,int param_8,uint *param_9)

{
  unsigned char frame[64];

  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;

  uVar5 = 0;
  uVar2 = 0;
  if (param_5 != 0 && (param_4 != 0 && param_2 != (uint *)0x0)) {
    uVar1 = *param_2;
    piVar4 = param_1;
    for (; uVar1 != uVar5; uVar5 = uVar5 + 1) {
      if ((*piVar4 == param_3) && (iVar3 = recovered_21415((int)(piVar4 + 2),param_4), iVar3 == 0))
      {
        if (-1 < (int)uVar5) {
          if ((char)piVar4[0x82] == param_7) {
            if (param_6 != -1) {
              piVar4[1] = param_6;
              piVar4[0x80] = param_8;
              param_6 = param_8;
            }
            uVar2 = CONCAT31((int3)((uint)param_6 >> 8),1);
            if (param_9 == (uint *)0x0) {
              return uVar2;
            }
            *param_9 = uVar5;
            return uVar2;
          }
          goto LAB_0002ba91;
        }
        break;
      }
      piVar4 = piVar4 + 0x83;
    }
    if (*param_2 < 0x200) {
      recovered_213af((int)(param_1 + *param_2 * 0x83),0,0x20c);
      uVar5 = *param_2;
      param_1[uVar5 * 0x83] = param_3;
      param_1[uVar5 * 0x83 + 1] = param_6;
      uVar5 = *param_2;
      *(char *)(param_1 + uVar5 * 0x83 + 0x82) = param_7;
      param_1[uVar5 * 0x83 + 0x80] = param_8;
      recovered_21de7((char *)(param_1 + uVar5 * 0x83 + 2),0xf1,&DAT_00048638,param_4);
      recovered_21de7((char *)((int)param_1 + *param_2 * 0x20c + 0xf9),0xf1,&DAT_00048638,param_5);
      uVar5 = *param_2;
      if (param_9 != (uint *)0x0) {
        *param_9 = uVar5;
      }
      uVar5 = uVar5 + 1;
      *param_2 = uVar5;
      uVar2 = CONCAT31((int3)(uVar5 >> 8),1);
    }
    else {
LAB_0002ba91:
      uVar2 = 0;
    }
  }
  return uVar2;
}

#include "functions.h"
#define local_1c (*(int *)(frame + 16))
#define local_18 (*(int *)(frame + 20))
#define local_14 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x41a09
 */

undefined4 recovered_41a09(uint *param_1,uint param_2,int param_3,uint *param_4)

{
  unsigned char frame[76] = {0};

  int iVar1;
  int iVar2;
  bool bVar3;

  if (param_4 != (uint *)0x0 && (param_3 != 0 && param_1 != (uint *)0x0)) {
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    for (; param_2 < *param_1; param_2 = param_2 + 1) {
      iVar2 = *(int *)(param_1[2] + param_2 * 4);
      iVar1 = recovered_214f9(iVar2,0x583f5);
      if (iVar1 == 0) {
        local_1c = local_1c + 1;
      }
      else {
        iVar1 = recovered_214f9(iVar2,0x5841a);
        if (iVar1 == 0) {
          bVar3 = local_1c == 0;
          local_1c = local_1c + -1;
          if (bVar3) {
            local_1c = 0;
          }
        }
        else {
          iVar1 = recovered_214f9(iVar2,0x58399);
          if (iVar1 == 0) {
            local_18 = local_18 + 1;
          }
          else {
            iVar1 = recovered_214f9(iVar2,0x5839b);
            if (iVar1 == 0) {
              bVar3 = local_18 == 0;
              local_18 = local_18 + -1;
              if (bVar3) {
                local_18 = 0;
              }
            }
            else {
              iVar1 = recovered_214f9(iVar2,0x58881);
              if (iVar1 == 0) {
                local_14 = local_14 + 1;
              }
              else {
                iVar1 = recovered_214f9(iVar2,0x58883);
                if (iVar1 == 0) {
                  bVar3 = local_14 == 0;
                  local_14 = local_14 + -1;
                  if (bVar3) {
                    local_14 = 0;
                  }
                }
                else if (((local_1c == 0) && (local_18 == 0)) && (local_14 == 0)) {
                  iVar2 = recovered_214f9(iVar2,param_3);
                  local_1c = 0;
                  local_18 = 0;
                  local_14 = 0;
                  if (iVar2 == 0) {
                    *param_4 = param_2;
                    return CONCAT31((int3)((uint)param_4 >> 8),1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

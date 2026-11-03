#include "functions.h"
#define local_1c (*(int *)(frame + 16))
#define local_18 (*(int *)(frame + 20))
#define local_14 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x31b85
 */

undefined4 recovered_31b85(uint *param_1,uint param_2,int param_3,uint *param_4)

{
  unsigned char frame[76];

  int iVar1;
  int iVar2;
  bool bVar3;

  if (param_4 != (uint *)0x0 && (param_3 != 0 && param_1 != (uint *)0x0)) {
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    for (; param_2 < *param_1; param_2 = param_2 + 1) {
      iVar2 = *(int *)(param_1[2] + param_2 * 4);
      iVar1 = recovered_21415(iVar2,0x470b4);
      if (iVar1 == 0) {
        local_1c = local_1c + 1;
      }
      else {
        iVar1 = recovered_21415(iVar2,0x470d9);
        if (iVar1 == 0) {
          bVar3 = local_1c == 0;
          local_1c = local_1c + -1;
          if (bVar3) {
            local_1c = 0;
          }
        }
        else {
          iVar1 = recovered_21415(iVar2,0x47058);
          if (iVar1 == 0) {
            local_18 = local_18 + 1;
          }
          else {
            iVar1 = recovered_21415(iVar2,0x4705a);
            if (iVar1 == 0) {
              bVar3 = local_18 == 0;
              local_18 = local_18 + -1;
              if (bVar3) {
                local_18 = 0;
              }
            }
            else {
              iVar1 = recovered_21415(iVar2,0x4753c);
              if (iVar1 == 0) {
                local_14 = local_14 + 1;
              }
              else {
                iVar1 = recovered_21415(iVar2,0x4753e);
                if (iVar1 == 0) {
                  bVar3 = local_14 == 0;
                  local_14 = local_14 + -1;
                  if (bVar3) {
                    local_14 = 0;
                  }
                }
                else if (((local_1c == 0) && (local_18 == 0)) && (local_14 == 0)) {
                  iVar2 = recovered_21415(iVar2,param_3);
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

#include "functions.h"
#undef str_0005c7a2
#define str_0005c7a2 (*(char (*)[1])(0x5c7a2U))
#define local_14 (*(int * *)(frame + 56))
#define local_10 (*(int *)(frame + 60))
#define local_3c (*(uint (*)[10])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4260c
 */

undefined4 recovered_4260c(uint param_1,int *param_2,uint *param_3)

{
  unsigned char frame[108] = {0};

  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;

  local_10 = 0;
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_3c[4] = 0;
  local_3c[5] = 0;
  local_3c[6] = 0;
  local_3c[7] = 0;
  local_3c[8] = 0;
  local_3c[9] = param_1;
  local_14 = param_2;
  uVar1 = recovered_428c6(local_3c + 9,local_3c);
  if ((char)uVar1 != '\0') {
    if (local_10 == *param_2) {
      if (param_3 == (uint *)0x0) {
        uVar2 = recovered_3352a(local_3c);
      }
      else {
        uVar2 = recovered_3352a(param_3);
        puVar4 = local_3c;
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *param_3 = *puVar4;
          puVar4 = puVar4 + 1;
          param_3 = param_3 + 1;
        }
      }
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
    recovered_3352a(local_3c);
    recovered_3f39b(param_1,*(char **)(param_2[2] + local_10 * 4),str_0005c7a2);
  }
  return 0;
}

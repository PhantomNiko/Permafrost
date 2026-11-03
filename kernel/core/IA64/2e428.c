#include "functions.h"
#undef DAT_0004627c
#define DAT_0004627c (*(uint8_t *)(0x4627cU))
#undef DAT_00046fd8
#define DAT_00046fd8 (*(uint8_t *)(0x46fd8U))
#undef DAT_00046fe3
#define DAT_00046fe3 (*(uint8_t *)(0x46fe3U))
#undef str_00046f97
#define str_00046f97 (*(char (*)[1])(0x46f97U))
#undef str_00046f9f
#define str_00046f9f (*(char (*)[1])(0x46f9fU))
#undef str_00046fb9
#define str_00046fb9 (*(char (*)[1])(0x46fb9U))
#undef str_00046fdc
#define str_00046fdc (*(char (*)[1])(0x46fdcU))
#undef str_00046fe8
#define str_00046fe8 (*(char (*)[1])(0x46fe8U))
#undef str_00046fee
#define str_00046fee (*(char (*)[1])(0x46feeU))
#define local_20 (*(uint *********** *)(frame + 52))
#define local_1c (*(undefined1 * *)(frame + 56))
#define local_18 (*(uint *********** *)(frame + 60))
#define local_14 (*(int *)(frame + 64))
#define local_44 (*(uint (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e428
 */

undefined4 recovered_2e428(int param_1,uint ***********param_2)

{
  unsigned char frame[116];

  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *format;
  uint ***********pppppppppppuVar4;

  local_18 = (uint ***********)0x0;
  local_14 = 0;
  local_44[0] = 0;
  local_44[1] = 0;
  local_44[2] = 0;
  local_44[3] = 0;
  local_44[4] = 0;
  local_44[5] = 0;
  local_44[6] = 0;
  local_44[7] = 0;
  local_44[8] = 0;
  if (param_2 == (uint ***********)0x0) {
    uVar1 = recovered_22d6b(str_00046f97);
LAB_0002e4d2:
    uVar3 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = recovered_2e561(param_1,param_2,(int *)&local_18,&local_14,local_44);
    if ((char)uVar1 == '\0') {
      local_44[0] = 0x2e4e1;
      recovered_26052(local_44);
    }
    else {
      if (local_14 == 0) {
        local_44[0] = 0x2e4eb;
        uVar1 = recovered_26052(local_44);
        for (pppppppppppuVar4 = local_18; pppppppppppuVar4 < param_2;
            pppppppppppuVar4 = (uint ***********)((int)pppppppppppuVar4 + 1)) {
          local_44[0] = 0x2e4ff;
          iVar2 = recovered_30fd2(*(int *)(param_1 + (int)pppppppppppuVar4 * 4),&DAT_00046fd8);
          if ((char)iVar2 != '\0') {
LAB_0002e539:
            local_1c = *(undefined1 **)(param_1 + (int)pppppppppppuVar4 * 4);
            format = str_00046fee;
            local_20 = pppppppppppuVar4;
            goto LAB_0002e54f;
          }
          local_44[0] = 0x2e510;
          iVar2 = recovered_30fd2(*(int *)(param_1 + (int)pppppppppppuVar4 * 4),str_00046fdc);
          if ((char)iVar2 != '\0') goto LAB_0002e539;
          local_44[0] = 0x2e521;
          iVar2 = recovered_30fd2(*(int *)(param_1 + (int)pppppppppppuVar4 * 4),&DAT_00046fe3);
          if ((char)iVar2 != '\0') goto LAB_0002e539;
          local_44[0] = 0x2e532;
          uVar1 = recovered_30fd2(*(int *)(param_1 + (int)pppppppppppuVar4 * 4),str_00046fe8);
          if ((char)uVar1 != '\0') goto LAB_0002e539;
        }
        goto LAB_0002e4d2;
      }
      local_20 = (uint ***********)0x0;
      local_1c = &DAT_0004627c;
      if (local_18 < param_2) {
        local_1c = *(undefined1 **)(param_1 + (int)local_18 * 4);
        local_20 = local_18;
      }
      local_44[0] = 0x2e4ab;
      recovered_26052(local_44);
      format = str_00046fb9;
      if (local_14 == 1) {
        format = str_00046f9f;
      }
LAB_0002e54f:
      recovered_30f0b((uint)&local_20,(char *)0x0,format);
    }
    uVar3 = 0;
  }
  return uVar3;
}

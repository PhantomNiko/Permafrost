#include "functions.h"
#undef DAT_0003f254
#define DAT_0003f254 (*(uint8_t *)(0x3f254U))
#undef DAT_0003fdb1
#define DAT_0003fdb1 (*(uint8_t *)(0x3fdb1U))
#undef DAT_0003fdbc
#define DAT_0003fdbc (*(uint8_t *)(0x3fdbcU))
#undef str_0003fd70
#define str_0003fd70 (*(char (*)[1])(0x3fd70U))
#undef str_0003fd78
#define str_0003fd78 (*(char (*)[1])(0x3fd78U))
#undef str_0003fd92
#define str_0003fd92 (*(char (*)[1])(0x3fd92U))
#undef str_0003fdb5
#define str_0003fdb5 (*(char (*)[1])(0x3fdb5U))
#undef str_0003fdc1
#define str_0003fdc1 (*(char (*)[1])(0x3fdc1U))
#undef str_0003fdc7
#define str_0003fdc7 (*(char (*)[1])(0x3fdc7U))
#define local_14 (*(int *)(frame + 64))
#define local_44 (*(uint (*)[9])(frame + 16))
#define local_20 (*(uint *********** *)(frame + 52))
#define local_1c (*(undefined1 * *)(frame + 56))
#define local_18 (*(uint *********** *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a75e
 */

undefined4 recovered_2a75e(int param_1,uint ***********param_2)

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
    uVar1 = recovered_22401(str_0003fd70);
LAB_0002a808:
    uVar3 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = recovered_2a897(param_1,param_2,(int *)&local_18,&local_14,local_44);
    if ((char)uVar1 == '\0') {
      local_44[0] = 0x2a817;
      recovered_28761(local_44);
    }
    else {
      if (local_14 == 0) {
        local_44[0] = 0x2a821;
        uVar1 = recovered_28761(local_44);
        for (pppppppppppuVar4 = local_18; pppppppppppuVar4 < param_2;
            pppppppppppuVar4 = (uint ***********)((int)pppppppppppuVar4 + 1)) {
          local_44[0] = 0x2a835;
          iVar2 = recovered_2d308(*(int *)(param_1 + (int)pppppppppppuVar4 * 4),&DAT_0003fdb1);
          if ((char)iVar2 != '\0') {
LAB_0002a86f:
            local_1c = *(undefined1 **)(param_1 + (int)pppppppppppuVar4 * 4);
            format = str_0003fdc7;
            local_20 = pppppppppppuVar4;
            goto LAB_0002a885;
          }
          local_44[0] = 0x2a846;
          iVar2 = recovered_2d308(*(int *)(param_1 + (int)pppppppppppuVar4 * 4),str_0003fdb5);
          if ((char)iVar2 != '\0') goto LAB_0002a86f;
          local_44[0] = 0x2a857;
          iVar2 = recovered_2d308(*(int *)(param_1 + (int)pppppppppppuVar4 * 4),&DAT_0003fdbc);
          if ((char)iVar2 != '\0') goto LAB_0002a86f;
          local_44[0] = 0x2a868;
          uVar1 = recovered_2d308(*(int *)(param_1 + (int)pppppppppppuVar4 * 4),str_0003fdc1);
          if ((char)uVar1 != '\0') goto LAB_0002a86f;
        }
        goto LAB_0002a808;
      }
      local_20 = (uint ***********)0x0;
      local_1c = &DAT_0003f254;
      if (local_18 < param_2) {
        local_1c = *(undefined1 **)(param_1 + (int)local_18 * 4);
        local_20 = local_18;
      }
      local_44[0] = 0x2a7e1;
      recovered_28761(local_44);
      format = str_0003fd92;
      if (local_14 == 1) {
        format = str_0003fd78;
      }
LAB_0002a885:
      recovered_2d241((uint)&local_20,(char *)0x0,format);
    }
    uVar3 = 0;
  }
  return uVar3;
}


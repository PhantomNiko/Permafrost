#include "functions.h"
#undef DAT_00046264
#define DAT_00046264 (*(uint8_t *)(0x46264U))
#undef DAT_00046f83
#define DAT_00046f83 (*(uint8_t *)(0x46f83U))
#undef DAT_00046f8e
#define DAT_00046f8e (*(uint8_t *)(0x46f8eU))
#undef str_00046f42
#define str_00046f42 (*(char (*)[1])(0x46f42U))
#undef str_00046f4a
#define str_00046f4a (*(char (*)[1])(0x46f4aU))
#undef str_00046f64
#define str_00046f64 (*(char (*)[1])(0x46f64U))
#undef str_00046f87
#define str_00046f87 (*(char (*)[1])(0x46f87U))
#undef str_00046f93
#define str_00046f93 (*(char (*)[1])(0x46f93U))
#undef str_00046f99
#define str_00046f99 (*(char (*)[1])(0x46f99U))
#define local_20 (*(uint *********** *)(frame + 52))
#define local_1c (*(undefined1 * *)(frame + 56))
#define local_18 (*(uint *********** *)(frame + 60))
#define local_14 (*(int *)(frame + 64))
#define local_44 (*(uint (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e3f0
 */

undefined4 recovered_2e3f0(int param_1,uint ***********param_2)

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
    uVar1 = recovered_22d6b(str_00046f42);
LAB_0002e49a:
    uVar3 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = recovered_2e529(param_1,param_2,(int *)&local_18,&local_14,local_44);
    if ((char)uVar1 == '\0') {
      local_44[0] = 0x2e4a9;
      recovered_2603e(local_44);
    }
    else {
      if (local_14 == 0) {
        local_44[0] = 0x2e4b3;
        uVar1 = recovered_2603e(local_44);
        for (pppppppppppuVar4 = local_18; pppppppppppuVar4 < param_2;
            pppppppppppuVar4 = (uint ***********)((int)pppppppppppuVar4 + 1)) {
          local_44[0] = 0x2e4c7;
          iVar2 = recovered_30f9a(*(int *)(param_1 + (int)pppppppppppuVar4 * 4),&DAT_00046f83);
          if ((char)iVar2 != '\0') {
LAB_0002e501:
            local_1c = *(undefined1 **)(param_1 + (int)pppppppppppuVar4 * 4);
            format = str_00046f99;
            local_20 = pppppppppppuVar4;
            goto LAB_0002e517;
          }
          local_44[0] = 0x2e4d8;
          iVar2 = recovered_30f9a(*(int *)(param_1 + (int)pppppppppppuVar4 * 4),str_00046f87);
          if ((char)iVar2 != '\0') goto LAB_0002e501;
          local_44[0] = 0x2e4e9;
          iVar2 = recovered_30f9a(*(int *)(param_1 + (int)pppppppppppuVar4 * 4),&DAT_00046f8e);
          if ((char)iVar2 != '\0') goto LAB_0002e501;
          local_44[0] = 0x2e4fa;
          uVar1 = recovered_30f9a(*(int *)(param_1 + (int)pppppppppppuVar4 * 4),str_00046f93);
          if ((char)uVar1 != '\0') goto LAB_0002e501;
        }
        goto LAB_0002e49a;
      }
      local_20 = (uint ***********)0x0;
      local_1c = &DAT_00046264;
      if (local_18 < param_2) {
        local_1c = *(undefined1 **)(param_1 + (int)local_18 * 4);
        local_20 = local_18;
      }
      local_44[0] = 0x2e473;
      recovered_2603e(local_44);
      format = str_00046f64;
      if (local_14 == 1) {
        format = str_00046f4a;
      }
LAB_0002e517:
      recovered_30ed3((uint)&local_20,(char *)0x0,format);
    }
    uVar3 = 0;
  }
  return uVar3;
}

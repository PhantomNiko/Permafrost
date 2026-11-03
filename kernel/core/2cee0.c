#include "functions.h"
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
#undef DAT_00043232
#define DAT_00043232 (*(uint8_t *)(0x43232U))
#undef DAT_0004323d
#define DAT_0004323d (*(uint8_t *)(0x4323dU))
#undef str_000431f1
#define str_000431f1 (*(char (*)[1])(0x431f1U))
#undef str_000431f9
#define str_000431f9 (*(char (*)[1])(0x431f9U))
#undef str_00043213
#define str_00043213 (*(char (*)[1])(0x43213U))
#undef str_00043236
#define str_00043236 (*(char (*)[1])(0x43236U))
#undef str_00043242
#define str_00043242 (*(char (*)[1])(0x43242U))
#undef str_00043248
#define str_00043248 (*(char (*)[1])(0x43248U))
#define local_20 (*(uint *********** *)(frame + 52))
#define local_1c (*(undefined1 * *)(frame + 56))
#define local_18 (*(uint *********** *)(frame + 60))
#define local_14 (*(int *)(frame + 64))
#define local_44 (*(uint (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2cee0
 */

undefined4 recovered_2cee0(int param_1,uint ***********param_2)

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
    uVar1 = recovered_22965(str_000431f1);
LAB_0002cf8a:
    uVar3 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = recovered_2d019(param_1,param_2,(int *)&local_18,&local_14,local_44);
    if ((char)uVar1 == '\0') {
      local_44[0] = 0x2cf99;
      recovered_2aec1(local_44);
    }
    else {
      if (local_14 == 0) {
        local_44[0] = 0x2cfa3;
        uVar1 = recovered_2aec1(local_44);
        for (pppppppppppuVar4 = local_18; pppppppppppuVar4 < param_2;
            pppppppppppuVar4 = (uint ***********)((int)pppppppppppuVar4 + 1)) {
          local_44[0] = 0x2cfb7;
          iVar2 = recovered_2fa8a(*(int *)(param_1 + (int)pppppppppppuVar4 * 4),&DAT_00043232);
          if ((char)iVar2 != '\0') {
LAB_0002cff1:
            local_1c = *(undefined1 **)(param_1 + (int)pppppppppppuVar4 * 4);
            format = str_00043248;
            local_20 = pppppppppppuVar4;
            goto LAB_0002d007;
          }
          local_44[0] = 0x2cfc8;
          iVar2 = recovered_2fa8a(*(int *)(param_1 + (int)pppppppppppuVar4 * 4),str_00043236);
          if ((char)iVar2 != '\0') goto LAB_0002cff1;
          local_44[0] = 0x2cfd9;
          iVar2 = recovered_2fa8a(*(int *)(param_1 + (int)pppppppppppuVar4 * 4),&DAT_0004323d);
          if ((char)iVar2 != '\0') goto LAB_0002cff1;
          local_44[0] = 0x2cfea;
          uVar1 = recovered_2fa8a(*(int *)(param_1 + (int)pppppppppppuVar4 * 4),str_00043242);
          if ((char)uVar1 != '\0') goto LAB_0002cff1;
        }
        goto LAB_0002cf8a;
      }
      local_20 = (uint ***********)0x0;
      local_1c = &DAT_00042614;
      if (local_18 < param_2) {
        local_1c = *(undefined1 **)(param_1 + (int)local_18 * 4);
        local_20 = local_18;
      }
      local_44[0] = 0x2cf63;
      recovered_2aec1(local_44);
      format = str_00043213;
      if (local_14 == 1) {
        format = str_000431f9;
      }
LAB_0002d007:
      recovered_2f9c3((uint)&local_20,(char *)0x0,format);
    }
    uVar3 = 0;
  }
  return uVar3;
}

#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
#undef DAT_000582be
#define DAT_000582be (*(uint8_t *)(0x582beU))
#undef DAT_000582c9
#define DAT_000582c9 (*(uint8_t *)(0x582c9U))
#undef str_0005827d
#define str_0005827d (*(char (*)[1])(0x5827dU))
#undef str_00058285
#define str_00058285 (*(char (*)[1])(0x58285U))
#undef str_0005829f
#define str_0005829f (*(char (*)[1])(0x5829fU))
#undef str_000582c2
#define str_000582c2 (*(char (*)[1])(0x582c2U))
#undef str_000582ce
#define str_000582ce (*(char (*)[1])(0x582ceU))
#undef str_000582d4
#define str_000582d4 (*(char (*)[1])(0x582d4U))
#define local_44 (*(undefined4 *)(frame + 16))
#define local_40 (*(undefined4 *)(frame + 20))
#define local_3c (*(undefined4 *)(frame + 24))
#define local_38 (*(undefined4 *)(frame + 28))
#define local_34 (*(undefined4 *)(frame + 32))
#define local_30 (*(undefined4 *)(frame + 36))
#define local_2c (*(undefined4 *)(frame + 40))
#define local_28 (*(undefined4 *)(frame + 44))
#define local_24 (*(undefined4 *)(frame + 48))
#define local_20 (*(uint ***** *)(frame + 52))
#define local_1c (*(undefined1 * *)(frame + 56))
#define local_18 (*(uint ***** *)(frame + 60))
#define local_14 (*(uint **** *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3c81b
 */

undefined4 recovered_3c81b(int param_1,uint *****param_2)

{
  unsigned char frame[116] = {0};

  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *format;
  uint *****pppppuVar4;

  local_18 = (uint *****)0x0;
  local_14 = (uint ****)0x0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  if (param_2 == (uint *****)0x0) {
    uVar1 = recovered_3018f(str_0005827d);
LAB_0003c8c5:
    uVar3 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = recovered_3c954(param_1,param_2,(uint *)&local_18,&local_14,&local_44);
    if ((char)uVar1 == '\0') {
      local_44 = 0x3c8d4;
      recovered_3352a(&local_44);
    }
    else {
      if (local_14 == (uint ****)0x0) {
        local_44 = 0x3c8de;
        uVar1 = recovered_3352a(&local_44);
        for (pppppuVar4 = local_18; pppppuVar4 < param_2;
            pppppuVar4 = (uint *****)((int)pppppuVar4 + 1)) {
          local_44 = 0x3c8f2;
          iVar2 = recovered_3f462(*(int *)(param_1 + (int)pppppuVar4 * 4),&DAT_000582be);
          if ((char)iVar2 != '\0') {
LAB_0003c92c:
            local_1c = *(undefined1 **)(param_1 + (int)pppppuVar4 * 4);
            format = str_000582d4;
            local_20 = pppppuVar4;
            goto LAB_0003c942;
          }
          local_44 = 0x3c903;
          iVar2 = recovered_3f462(*(int *)(param_1 + (int)pppppuVar4 * 4),str_000582c2);
          if ((char)iVar2 != '\0') goto LAB_0003c92c;
          local_44 = 0x3c914;
          iVar2 = recovered_3f462(*(int *)(param_1 + (int)pppppuVar4 * 4),&DAT_000582c9);
          if ((char)iVar2 != '\0') goto LAB_0003c92c;
          local_44 = 0x3c925;
          uVar1 = recovered_3f462(*(int *)(param_1 + (int)pppppuVar4 * 4),str_000582ce);
          if ((char)uVar1 != '\0') goto LAB_0003c92c;
        }
        goto LAB_0003c8c5;
      }
      local_20 = (uint *****)0x0;
      local_1c = &DAT_00057364;
      if (local_18 < param_2) {
        local_1c = *(undefined1 **)(param_1 + (int)local_18 * 4);
        local_20 = local_18;
      }
      local_44 = 0x3c89e;
      recovered_3352a(&local_44);
      format = str_0005829f;
      if (local_14 == (uint ****)0x1) {
        format = str_00058285;
      }
LAB_0003c942:
      recovered_3f39b((uint)&local_20,(char *)0x0,format);
    }
    uVar3 = 0;
  }
  return uVar3;
}

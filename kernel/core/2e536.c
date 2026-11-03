#include "functions.h"
#undef DAT_0004851c
#define DAT_0004851c (*(uint8_t *)(0x4851cU))
#undef DAT_00049253
#define DAT_00049253 (*(uint8_t *)(0x49253U))
#undef DAT_0004925e
#define DAT_0004925e (*(uint8_t *)(0x4925eU))
#undef str_00049212
#define str_00049212 (*(char (*)[1])(0x49212U))
#undef str_0004921a
#define str_0004921a (*(char (*)[1])(0x4921aU))
#undef str_00049234
#define str_00049234 (*(char (*)[1])(0x49234U))
#undef str_00049257
#define str_00049257 (*(char (*)[1])(0x49257U))
#undef str_00049263
#define str_00049263 (*(char (*)[1])(0x49263U))
#undef str_00049269
#define str_00049269 (*(char (*)[1])(0x49269U))
#define local_14 (*(uint **** *)(frame + 64))
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e536
 */

undefined4 recovered_2e536(int param_1,uint *****param_2)

{
  unsigned char frame[116];

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
    uVar1 = recovered_22d6b(str_00049212);
LAB_0002e5e0:
    uVar3 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = recovered_2e66f(param_1,param_2,(uint *)&local_18,&local_14,&local_44);
    if ((char)uVar1 == '\0') {
      local_44 = 0x2e5ef;
      recovered_25fea(&local_44);
    }
    else {
      if (local_14 == (uint ****)0x0) {
        local_44 = 0x2e5f9;
        uVar1 = recovered_25fea(&local_44);
        for (pppppuVar4 = local_18; pppppuVar4 < param_2;
            pppppuVar4 = (uint *****)((int)pppppuVar4 + 1)) {
          local_44 = 0x2e60d;
          iVar2 = recovered_3117d(*(int *)(param_1 + (int)pppppuVar4 * 4),&DAT_00049253);
          if ((char)iVar2 != '\0') {
LAB_0002e647:
            local_1c = *(undefined1 **)(param_1 + (int)pppppuVar4 * 4);
            format = str_00049269;
            local_20 = pppppuVar4;
            goto LAB_0002e65d;
          }
          local_44 = 0x2e61e;
          iVar2 = recovered_3117d(*(int *)(param_1 + (int)pppppuVar4 * 4),str_00049257);
          if ((char)iVar2 != '\0') goto LAB_0002e647;
          local_44 = 189999;
          iVar2 = recovered_3117d(*(int *)(param_1 + (int)pppppuVar4 * 4),&DAT_0004925e);
          if ((char)iVar2 != '\0') goto LAB_0002e647;
          local_44 = 0x2e640;
          uVar1 = recovered_3117d(*(int *)(param_1 + (int)pppppuVar4 * 4),str_00049263);
          if ((char)uVar1 != '\0') goto LAB_0002e647;
        }
        goto LAB_0002e5e0;
      }
      local_20 = (uint *****)0x0;
      local_1c = &DAT_0004851c;
      if (local_18 < param_2) {
        local_1c = *(undefined1 **)(param_1 + (int)local_18 * 4);
        local_20 = local_18;
      }
      local_44 = 0x2e5b9;
      recovered_25fea(&local_44);
      format = str_00049234;
      if (local_14 == (uint ****)0x1) {
        format = str_0004921a;
      }
LAB_0002e65d:
      recovered_310b6((uint)&local_20,(char *)0x0,format);
    }
    uVar3 = 0;
  }
  return uVar3;
}

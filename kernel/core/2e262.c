#include "functions.h"
#undef DAT_0005cf58
#define DAT_0005cf58 (*(uint8_t *)(0x5cf58U))
#undef LAB_0002e424
#define LAB_0002e424 (*(uint8_t *)(0x2e424U))
#undef PTR_LAB_0005d040
#define PTR_LAB_0005d040 (*(uint8_t * *)(0x5d040U))
#define local_54 (*(undefined1 * *)(frame + 200))
#define local_42 (*(ushort *)(frame + 218))
#define local_40 (*(uint *)(frame + 220))
#define local_30 (*(int *)(frame + 236))
#define local_2c (*(uint *)(frame + 240))
#define local_28 (*(undefined4 *)(frame + 244))
#define local_24 (*(int *)(frame + 248))
#define local_20 (*(ushort *)(frame + 252))
#define local_1c (*(uint *)(frame + 256))
#define local_18 (*(void * *)(frame + 260))
#define local_14 (*(uint * *)(frame + 264))
#define auStackY_10c (*(undefined1 (*)[128])(frame + 16))
#define local_7c (*(undefined4 *)(frame + 160))
#define local_78 (*(undefined4 *)(frame + 164))
#define local_64 (*(undefined * *)(frame + 184))
#define local_60 (*(undefined * *)(frame + 188))
#define local_5c (*(undefined1 * *)(frame + 192))
#define local_58 (*(undefined1 * *)(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e262
 */

undefined4 recovered_2e262(int param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  unsigned char frame[316] = {0};

  undefined4 uVar1;
  void *pvVar2;
  uint uVar3;

  local_14 = param_4;
  recovered_2e469((int)param_4);
  local_54 = auStackY_10c + 0x80;
  local_18 = (void *)0x0;
  if (0xffff < param_3) {
    param_3 = 0;
  }
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_42 = (ushort)param_3;
  local_20 = 0;
  local_64 = PTR_LAB_0005d040;
  local_60 = &DAT_0005cf58;
  local_58 = &LAB_0002e424;
  local_78 = 1;
  local_5c = (undefined1 *)((int)(uintptr_t)(frame + 284) + -4);
  recovered_234cb(&local_7c);
  uVar1 = recovered_2e485(param_1,param_2,&local_30,&local_42);
  if ((char)uVar1 != '\0') {
    if ((((-1 < (int)local_2c) && (local_2c != 0)) && (local_24 != 0)) && (local_20 != 0)) {
      local_40 = local_2c;
      local_1c = local_2c * 2;
      local_78 = 2;
      pvVar2 = recovered_211fa(local_1c);
      if (pvVar2 != (void *)0x0) {
        local_78 = 3;
        local_18 = pvVar2;
        recovered_21348((int)pvVar2,local_30,local_1c);
        *local_14 = local_18;
        local_14[1] = local_1c;
        local_14[2] = local_40;
        local_14[3] = local_24;
        uVar3 = (uint)local_20;
        local_14[4] = uVar3;
        local_14[5] = 0x10;
        if (uVar3 == 0) {
          local_2c = 0;
        }
        else {
          local_2c = local_2c / uVar3;
        }
        local_14[6] = local_2c;
        local_18 = (void *)0x1;
      }
    }
  }
  local_2c = 0;
  recovered_23194();
  recovered_234e0(&local_7c);
  return local_18;
}

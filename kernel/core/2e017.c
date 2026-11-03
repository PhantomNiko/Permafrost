#include "functions.h"
#undef DAT_0005cf44
#define DAT_0005cf44 (*(uint8_t *)(0x5cf44U))
#undef LAB_0002e144
#define LAB_0002e144 (*(uint8_t *)(0x2e144U))
#undef PTR_LAB_0005d040
#define PTR_LAB_0005d040 (*(uint8_t * *)(0x5d040U))
#define local_6c (*(undefined4 *)(frame + 160))
#define local_68 (*(undefined4 *)(frame + 164))
#define local_54 (*(undefined * *)(frame + 184))
#define local_50 (*(undefined * *)(frame + 188))
#define local_4c (*(undefined1 * *)(frame + 192))
#define local_48 (*(undefined1 * *)(frame + 196))
#define local_44 (*(undefined1 * *)(frame + 200))
#define local_28 (*(uint *)(frame + 228))
#define local_24 (*(uint *)(frame + 232))
#define local_20 (*(int *)(frame + 236))
#define local_1c (*(uint *)(frame + 240))
#define local_18 (*(undefined4 *)(frame + 244))
#define local_14 (*(undefined4 *)(frame + 248))
#define auStackY_fc (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e017
 */

uint recovered_2e017(int param_1,int param_2,undefined4 *param_3)

{
  unsigned char frame[300] = {0};

  byte *pbVar1;
  uint uVar2;

  local_14 = param_3;
  recovered_2e184((int)param_3);
  local_44 = auStackY_fc + 0x80;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_54 = PTR_LAB_0005d040;
  local_50 = &DAT_0005cf44;
  local_48 = &LAB_0002e144;
  local_4c = auStackY_fc + 0xf8;
  recovered_234cb(&local_6c);
  if (param_2 == 0 || param_1 == 0) {
    uVar2 = 0;
  }
  else {
    local_68 = 1;
    pbVar1 = recovered_23b42(param_1,param_2,&local_28);
    uVar2 = 0;
    if ((char)pbVar1 != '\0') {
      local_68 = 3;
      uVar2 = recovered_2e1a0(local_20,local_28,local_24,local_1c,local_14);
      uVar2 = uVar2 & 0xff;
    }
  }
  local_1c = 0;
  recovered_23194();
  recovered_234e0(&local_6c);
  return uVar2;
}

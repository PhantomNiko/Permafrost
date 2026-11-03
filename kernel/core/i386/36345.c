#include "functions.h"
#undef DAT_00046380
#define DAT_00046380 (*(uint8_t *)(0x46380U))
#define local_120 (*(byte (*)[256])(frame + 16))
#define local_20 (*(undefined4 *)(frame + 272))
#define local_1c (*(undefined4 * *)(frame + 276))
#define local_18 (*(byte * *)(frame + 280))
#define local_14 (*(uint *)(frame + 284))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x36345
 */

undefined4 recovered_36345(undefined4 param_1,undefined4 *param_2)

{
  unsigned char frame[336];

  byte bVar1;
  ulonglong uVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  undefined4 extraout_EDX = 0;

  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  recovered_21de7((char *)local_120,0x100,&DAT_00046380,param_1);
  recovered_28c62(local_120);
  if (local_120[0] != 0) {
    local_14 = 0x10;
    local_20 = CONCAT31((int3)((uint)extraout_EDX >> 8),1);
    local_1c = param_2;
    if (local_120[0] == 0x24) {
      iVar5 = 1;
    }
    else if ((local_120[0] == 0x30) && ((local_120[1] & 0xdf) == 0x58)) {
      iVar5 = 2;
    }
    else {
      local_20 = 0;
      local_14 = 10;
      iVar5 = 0;
    }
    local_18 = local_120 + iVar5;
    uVar2 = 0;
    bVar3 = false;
    do {
      bVar1 = *local_18;
      iVar5 = (int)(char)bVar1;
      if (iVar5 == 0) {
        if (!bVar3) {
          return 0;
        }
        *local_1c = (int)uVar2;
        return CONCAT31((int3)((uint)local_1c >> 8),1);
      }
      if ((char)local_20 == '\0') {
        if (9 < (byte)(bVar1 - 0x30)) {
          return 0;
        }
        iVar5 = iVar5 + -0x30;
      }
      else {
        bVar3 = recovered_29d69(bVar1);
        if (!bVar3) {
          return 0;
        }
        if ((byte)(bVar1 - 0x30) < 10) {
          iVar5 = iVar5 + -0x30;
        }
        else {
          bVar4 = bVar1 - 0x20;
          if (0x19 < (byte)(bVar1 + 0x9f)) {
            bVar4 = bVar1;
          }
          iVar5 = (char)bVar4 + -0x37;
        }
      }
      uVar2 = (uVar2 & 0xffffffff) * (ulonglong)local_14 +
              CONCAT44((int)(uVar2 >> 0x20) * local_14,iVar5);
      local_18 = local_18 + 1;
      bVar3 = true;
    } while ((int)(uVar2 >> 0x20) == 0);
  }
  return 0;
}

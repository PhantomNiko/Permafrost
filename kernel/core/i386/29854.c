#include "functions.h"
#undef DAT_000464c3
#define DAT_000464c3 (*(uint8_t *)(0x464c3U))
#undef DAT_000515c0
#define DAT_000515c0 (*(byte *)(0x515c0U))
#undef DAT_000515c4
#define DAT_000515c4 (*(int *)(0x515c4U))
#undef DAT_000515c8
#define DAT_000515c8 (*(uint8_t *)(0x515c8U))
#undef DAT_000516c8
#define DAT_000516c8 (*(uint16_t *)(0x516c8U))
#undef DAT_000617c8
#define DAT_000617c8 (*(byte *)(0x617c8U))
#define local_18 (*(uint *)(frame + 16))
#define local_14 (*(undefined1 * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29854
 */

void recovered_29854(undefined1 *param_1,uint param_2,byte param_3,char param_4)

{
  unsigned char frame[72];

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  local_14 = (undefined1 *)0x0;
  if (param_1 != (undefined1 *)0x0 || param_2 == 0) {
    local_18 = param_2;
    if ((param_4 != '\0') && ((DAT_000515c0 & 1) != 0)) {
      uVar1 = recovered_29983(param_1,param_2,&local_14,&local_18);
      if ((char)uVar1 == '\0') {
        recovered_21203((int)local_14);
        local_14 = (undefined1 *)0x0;
      }
      else {
        param_1 = local_14;
        param_2 = local_18;
      }
    }
    if (DAT_000515c4 == 0x100) {
      recovered_21369(0x515c8,0x516ca,0x100fe);
      DAT_000515c4 = 0xff;
    }
    uVar3 = 0xff;
    if (param_2 < 0xff) {
      uVar3 = param_2;
    }
    if (param_2 != 0) {
      recovered_21348((int)(&DAT_000515c8 + DAT_000515c4 * 0x102),(int)param_1,uVar3);
    }
    iVar2 = DAT_000515c4 * 0x102;
    (&DAT_000515c8)[uVar3 + iVar2] = 0;
    (&DAT_000516c8)[DAT_000515c4 * 0x81] = (short)uVar3;
    DAT_000515c4 = DAT_000515c4 + 1;
    if ((param_3 & DAT_000617c8) == 1) {
      for (uVar4 = 0; uVar3 != uVar4; uVar4 = uVar4 + 1) {
        recovered_29db5((&DAT_000515c8)[uVar4 + iVar2]);
      }
      recovered_29c06(&DAT_000464c3);
    }
    recovered_21203((int)local_14);
  }
  return;
}

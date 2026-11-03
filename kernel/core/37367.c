#include "functions.h"
#undef DAT_000577ec
#define DAT_000577ec (*(uint8_t *)(0x577ecU))
#undef DAT_00062e4c
#define DAT_00062e4c (*(byte *)(0x62e4cU))
#undef DAT_00062e50
#define DAT_00062e50 (*(int *)(0x62e50U))
#undef DAT_00062e54
#define DAT_00062e54 (*(uint8_t *)(0x62e54U))
#undef DAT_00062f54
#define DAT_00062f54 (*(uint16_t *)(0x62f54U))
#undef DAT_00073054
#define DAT_00073054 (*(byte *)(0x73054U))
#define local_18 (*(uint *)(frame + 16))
#define local_14 (*(undefined1 * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x37367
 */

void recovered_37367(undefined1 *param_1,uint param_2,byte param_3,char param_4)

{
  unsigned char frame[72] = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  local_14 = (undefined1 *)0x0;
  if (param_1 != (undefined1 *)0x0 || param_2 == 0) {
    local_18 = param_2;
    if ((param_4 != '\0') && ((DAT_00062e4c & 1) != 0)) {
      uVar1 = recovered_37496(param_1,param_2,&local_14,&local_18);
      if ((char)uVar1 == '\0') {
        recovered_21203((int)local_14);
        local_14 = (undefined1 *)0x0;
      }
      else {
        param_1 = local_14;
        param_2 = local_18;
      }
    }
    if (DAT_00062e50 == 0x100) {
      recovered_21369(0x62e54,0x62f56,0x100fe);
      DAT_00062e50 = 0xff;
    }
    uVar3 = 0xff;
    if (param_2 < 0xff) {
      uVar3 = param_2;
    }
    if (param_2 != 0) {
      recovered_21348((int)(&DAT_00062e54 + DAT_00062e50 * 0x102),(int)param_1,uVar3);
    }
    iVar2 = DAT_00062e50 * 0x102;
    (&DAT_00062e54)[uVar3 + iVar2] = 0;
    (&DAT_00062f54)[DAT_00062e50 * 0x81] = (short)uVar3;
    DAT_00062e50 = DAT_00062e50 + 1;
    if ((param_3 & DAT_00073054) == 1) {
      for (uVar4 = 0; uVar3 != uVar4; uVar4 = uVar4 + 1) {
        recovered_378c8((&DAT_00062e54)[uVar4 + iVar2]);
      }
      recovered_37719(&DAT_000577ec);
    }
    recovered_21203((int)local_14);
  }
  return;
}

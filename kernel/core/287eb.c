#include "functions.h"
#undef DAT_00042873
#define DAT_00042873 (*(uint8_t *)(0x42873U))
#undef DAT_0004c5a0
#define DAT_0004c5a0 (*(byte *)(0x4c5a0U))
#undef DAT_0004c5a4
#define DAT_0004c5a4 (*(int *)(0x4c5a4U))
#undef DAT_0004c5a8
#define DAT_0004c5a8 (*(uint8_t *)(0x4c5a8U))
#undef DAT_0004c6a8
#define DAT_0004c6a8 (*(uint16_t *)(0x4c6a8U))
#undef DAT_0005c7a8
#define DAT_0005c7a8 (*(byte *)(0x5c7a8U))
#define local_18 (*(uint *)(frame + 16))
#define local_14 (*(undefined1 * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x287eb
 */

void recovered_287eb(undefined1 *param_1,uint param_2,byte param_3,char param_4)

{
  unsigned char frame[72];

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  local_14 = (undefined1 *)0x0;
  if (param_1 != (undefined1 *)0x0 || param_2 == 0) {
    local_18 = param_2;
    if ((param_4 != '\0') && ((DAT_0004c5a0 & 1) != 0)) {
      uVar1 = recovered_2891a(param_1,param_2,&local_14,&local_18);
      if ((char)uVar1 == '\0') {
        recovered_20dfd((int)local_14);
        local_14 = (undefined1 *)0x0;
      }
      else {
        param_1 = local_14;
        param_2 = local_18;
      }
    }
    if (DAT_0004c5a4 == 0x100) {
      recovered_20f63(0x4c5a8,0x4c6aa,0x100fe);
      DAT_0004c5a4 = 0xff;
    }
    uVar3 = 0xff;
    if (param_2 < 0xff) {
      uVar3 = param_2;
    }
    if (param_2 != 0) {
      recovered_20f42((int)(&DAT_0004c5a8 + DAT_0004c5a4 * 0x102),(int)param_1,uVar3);
    }
    iVar2 = DAT_0004c5a4 * 0x102;
    (&DAT_0004c5a8)[uVar3 + iVar2] = 0;
    (&DAT_0004c6a8)[DAT_0004c5a4 * 0x81] = (short)uVar3;
    DAT_0004c5a4 = DAT_0004c5a4 + 1;
    if ((param_3 & DAT_0005c7a8) == 1) {
      for (uVar4 = 0; uVar3 != uVar4; uVar4 = uVar4 + 1) {
        recovered_28d4c((&DAT_0004c5a8)[uVar4 + iVar2]);
      }
      recovered_28b9d(&DAT_00042873);
    }
    recovered_20dfd((int)local_14);
  }
  return;
}

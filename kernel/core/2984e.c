#include "functions.h"
#undef DAT_0004877b
#define DAT_0004877b (*(uint8_t *)(0x4877bU))
#undef DAT_000535c0
#define DAT_000535c0 (*(byte *)(0x535c0U))
#undef DAT_000535c4
#define DAT_000535c4 (*(int *)(0x535c4U))
#undef DAT_000535c8
#define DAT_000535c8 (*(uint8_t *)(0x535c8U))
#undef DAT_000536c8
#define DAT_000536c8 (*(uint16_t *)(0x536c8U))
#undef DAT_000637c8
#define DAT_000637c8 (*(byte *)(0x637c8U))
#define local_18 (*(uint *)(frame + 16))
#define local_14 (*(undefined1 * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2984e
 */

void recovered_2984e(undefined1 *param_1,uint param_2,byte param_3,char param_4)

{
  unsigned char frame[72];

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  local_14 = (undefined1 *)0x0;
  if (param_1 != (undefined1 *)0x0 || param_2 == 0) {
    local_18 = param_2;
    if ((param_4 != '\0') && ((DAT_000535c0 & 1) != 0)) {
      uVar1 = recovered_2997d(param_1,param_2,&local_14,&local_18);
      if ((char)uVar1 == '\0') {
        recovered_21203((int)local_14);
        local_14 = (undefined1 *)0x0;
      }
      else {
        param_1 = local_14;
        param_2 = local_18;
      }
    }
    if (DAT_000535c4 == 0x100) {
      recovered_21369(0x535c8,0x536ca,0x100fe);
      DAT_000535c4 = 0xff;
    }
    uVar3 = 0xff;
    if (param_2 < 0xff) {
      uVar3 = param_2;
    }
    if (param_2 != 0) {
      recovered_21348((int)(&DAT_000535c8 + DAT_000535c4 * 0x102),(int)param_1,uVar3);
    }
    iVar2 = DAT_000535c4 * 0x102;
    (&DAT_000535c8)[uVar3 + iVar2] = 0;
    (&DAT_000536c8)[DAT_000535c4 * 0x81] = (short)uVar3;
    DAT_000535c4 = DAT_000535c4 + 1;
    if ((param_3 & DAT_000637c8) == 1) {
      for (uVar4 = 0; uVar3 != uVar4; uVar4 = uVar4 + 1) {
        recovered_29daf((&DAT_000535c8)[uVar4 + iVar2]);
      }
      recovered_29c00(&DAT_0004877b);
    }
    recovered_21203((int)local_14);
  }
  return;
}

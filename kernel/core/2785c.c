#include "functions.h"
#undef DAT_0003f53e
#define DAT_0003f53e (*(uint8_t *)(0x3f53eU))
#undef DAT_00078c58
#define DAT_00078c58 (*(int *)(0x78c58U))
#undef DAT_00078c5c
#define DAT_00078c5c (*(uint8_t *)(0x78c5cU))
#undef DAT_00078d5c
#define DAT_00078d5c (*(uint16_t *)(0x78d5cU))
#undef DAT_00088e5c
#define DAT_00088e5c (*(byte *)(0x88e5cU))
#undef DAT_00088e5d
#define DAT_00088e5d (*(byte *)(0x88e5dU))
#define local_18 (*(uint *)(frame + 16))
#define local_14 (*(undefined1 * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2785c
 */

void recovered_2785c(undefined1 *param_1,uint param_2,byte param_3,char param_4)

{
  unsigned char frame[72];

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  local_14 = (undefined1 *)0x0;
  if (param_1 != (undefined1 *)0x0 || param_2 == 0) {
    local_18 = param_2;
    if ((param_4 != '\0') && ((DAT_00088e5c & 1) != 0)) {
      uVar1 = recovered_2798b(param_1,param_2,&local_14,&local_18);
      if ((char)uVar1 == '\0') {
        recovered_20dfd((int)local_14);
        local_14 = (undefined1 *)0x0;
      }
      else {
        param_1 = local_14;
        param_2 = local_18;
      }
    }
    if (DAT_00078c58 == 0x100) {
      recovered_20f63(0x78c5c,0x78d5e,0x100fe);
      DAT_00078c58 = 0xff;
    }
    uVar3 = 0xff;
    if (param_2 < 0xff) {
      uVar3 = param_2;
    }
    if (param_2 != 0) {
      recovered_20f42((int)(&DAT_00078c5c + DAT_00078c58 * 0x102),(int)param_1,uVar3);
    }
    iVar2 = DAT_00078c58 * 0x102;
    (&DAT_00078c5c)[uVar3 + iVar2] = 0;
    (&DAT_00078d5c)[DAT_00078c58 * 0x81] = (short)uVar3;
    DAT_00078c58 = DAT_00078c58 + 1;
    if ((param_3 & DAT_00088e5d) == 1) {
      for (uVar4 = 0; uVar3 != uVar4; uVar4 = uVar4 + 1) {
        recovered_27dbd((&DAT_00078c5c)[uVar4 + iVar2]);
      }
      recovered_27c0e(&DAT_0003f53e);
    }
    recovered_20dfd((int)local_14);
  }
  return;
}


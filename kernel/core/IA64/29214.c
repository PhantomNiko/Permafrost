#include "functions.h"
#undef DAT_0004ce90
#define DAT_0004ce90 (*(char *)(0x4ce90U))
#undef DAT_000504c0
#define DAT_000504c0 (*(char *)(0x504c0U))
#undef DAT_000504c1
#define DAT_000504c1 (*(char *)(0x504c1U))
#undef str_0004619f
#define str_0004619f (*(char (*)[1])(0x4619fU))
#undef str_000463a0
#define str_000463a0 (*(char (*)[1])(0x463a0U))
#define local_90 (*(char (*)[128])(frame + 16))
#define local_10 (*(uint *)(frame + 144))
#define local_c (*(int *)(frame + 148))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29214
 */

void recovered_29214(void)

{
  unsigned char frame[192];

  undefined4 uVar1;

  local_c = 0;
  local_10 = 0;
  if (((DAT_000504c0 == '\0') && (DAT_000504c1 == '\0')) && (DAT_0004ce90 == '\x01')) {
    DAT_000504c1 = '\x01';
    uVar1 = recovered_22705(0x4619f,&local_c,&local_10);
    if ((local_10 != 0 & (byte)uVar1) == 1) {
      uVar1 = recovered_2932c(local_c,local_10,str_0004619f,local_90);
      if ((char)uVar1 == '\0') {
        recovered_233b7(str_000463a0,local_90);
      }
      recovered_25ae1();
    }
  }
  return;
}

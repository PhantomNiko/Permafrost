#include "functions.h"
#undef DAT_0004ee90
#define DAT_0004ee90 (*(char *)(0x4ee90U))
#undef DAT_000524c0
#define DAT_000524c0 (*(char *)(0x524c0U))
#undef DAT_000524c1
#define DAT_000524c1 (*(char *)(0x524c1U))
#undef str_0004843b
#define str_0004843b (*(char (*)[1])(0x4843bU))
#undef str_00048640
#define str_00048640 (*(char (*)[1])(0x48640U))
#define local_90 (*(char (*)[128])(frame + 16))
#define local_10 (*(uint *)(frame + 144))
#define local_c (*(int *)(frame + 148))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x291fa
 */

void recovered_291fa(void)

{
  unsigned char frame[192];

  undefined4 uVar1;

  local_c = 0;
  local_10 = 0;
  if (((DAT_000524c0 == '\0') && (DAT_000524c1 == '\0')) && (DAT_0004ee90 == '\x01')) {
    DAT_000524c1 = '\x01';
    uVar1 = recovered_22705(0x4843b,&local_c,&local_10);
    if ((local_10 != 0 & (byte)uVar1) == 1) {
      uVar1 = recovered_29312(local_c,local_10,str_0004843b,local_90);
      if ((char)uVar1 == '\0') {
        recovered_23390(str_00048640,local_90);
      }
      recovered_25a79();
    }
  }
  return;
}

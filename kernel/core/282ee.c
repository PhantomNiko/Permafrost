#include "functions.h"
#undef DAT_00047e7c
#define DAT_00047e7c (*(char *)(0x47e7cU))
#undef DAT_0004b4a0
#define DAT_0004b4a0 (*(char *)(0x4b4a0U))
#undef DAT_0004b4a1
#define DAT_0004b4a1 (*(char *)(0x4b4a1U))
#undef str_00042537
#define str_00042537 (*(char (*)[1])(0x42537U))
#undef str_00042738
#define str_00042738 (*(char (*)[1])(0x42738U))
#define local_90 (*(char (*)[128])(frame + 16))
#define local_10 (*(uint *)(frame + 144))
#define local_c (*(int *)(frame + 148))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x282ee
 */

void recovered_282ee(void)

{
  unsigned char frame[192];

  undefined4 uVar1;

  local_c = 0;
  local_10 = 0;
  if (((DAT_0004b4a0 == '\0') && (DAT_0004b4a1 == '\0')) && (DAT_00047e7c == '\x01')) {
    DAT_0004b4a1 = '\x01';
    uVar1 = recovered_222ff(0x42537,&local_c,&local_10);
    if ((local_10 != 0 & (byte)uVar1) == 1) {
      uVar1 = recovered_28406(local_c,local_10,str_00042537,local_90);
      if ((char)uVar1 == '\0') {
        recovered_22fa2(str_00042738,local_90);
      }
      recovered_25089();
    }
  }
  return;
}

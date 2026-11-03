#include "functions.h"
#undef DAT_00054e28
#define DAT_00054e28 (*(char *)(0x54e28U))
#undef DAT_00057334
#define DAT_00057334 (*(char *)(0x57334U))
#undef DAT_00057335
#define DAT_00057335 (*(char *)(0x57335U))
#undef str_0003f187
#define str_0003f187 (*(char (*)[1])(0x3f187U))
#undef str_0003f33e
#define str_0003f33e (*(char (*)[1])(0x3f33eU))
#define local_90 (*(char (*)[128])(frame + 16))
#define local_10 (*(uint *)(frame + 144))
#define local_c (*(int *)(frame + 148))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26b37
 */

void recovered_26b37(void)

{
  unsigned char frame[192];

  undefined4 uVar1;

  local_c = 0;
  local_10 = 0;
  if (((DAT_00057334 == '\0') && (DAT_00057335 == '\0')) && (DAT_00054e28 == '\x01')) {
    DAT_00057335 = '\x01';
    uVar1 = recovered_26c4f(str_0003f187,&local_c,&local_10);
    if ((local_10 != 0 & (byte)uVar1) == 1) {
      uVar1 = recovered_26ca6(local_c,local_10,str_0003f187,local_90);
      if ((char)uVar1 == '\0') {
        recovered_236f9(str_0003f33e,local_90);
      }
      recovered_23907();
    }
  }
  return;
}

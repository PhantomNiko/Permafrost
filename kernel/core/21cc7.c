#include "functions.h"
#undef DAT_00047600
#define DAT_00047600 (*(char *)(0x47600U))
#undef DAT_00047604
#define DAT_00047604 (*(int *)(0x47604U))
#undef DAT_00047608
#define DAT_00047608 (*(uint *)(0x47608U))
#undef DAT_00047612
#define DAT_00047612 (*(uint8_t *)(0x47612U))
#undef DAT_00047613
#define DAT_00047613 (*(uint8_t *)(0x47613U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21cc7
 */

void recovered_21cc7(byte param_1)

{
  unsigned char frame[64];

  int iVar1;

  if (DAT_00047600 == '\x01') {
    if (param_1 == 8) {
      if (DAT_00047608 != 0) {
        iVar1 = DAT_00047608 + DAT_00047604 * 0x51;
        DAT_00047608 = DAT_00047608 - 1;
        (&DAT_00047612)[iVar1] = 0x20;
      }
    }
    else {
      if (param_1 == 10) {
LAB_00021d3b:
        FUN_00028796();
        return;
      }
      if (param_1 == 0xd) {
        DAT_00047608 = 0;
      }
      else if (0x1f < param_1) {
        (&DAT_00047613)[DAT_00047608 + DAT_00047604 * 0x51] = param_1;
        if (0x4f < DAT_00047608 + 1) goto LAB_00021d3b;
        DAT_00047608 = DAT_00047608 + 1;
      }
    }
  }
  return;
}

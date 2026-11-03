#include "functions.h"
#undef DAT_00084088
#define DAT_00084088 (*(int *)(0x84088U))
#undef DAT_0008408c
#define DAT_0008408c (*(int *)(0x8408cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x414d7
 */

void recovered_414d7(void)

{
  unsigned char frame[64];

  int iVar1;

  if (DAT_00084088 == 0) {
    return;
  }
  iVar1 = DAT_00084088 * 8;
  DAT_00084088 = DAT_00084088 + -1;
  recovered_47288((undefined4 *)(iVar1 + -8 + DAT_0008408c));
  return;
}

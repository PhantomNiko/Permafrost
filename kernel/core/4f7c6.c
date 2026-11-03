#include "functions.h"
#undef DAT_00093914
#define DAT_00093914 (*(int *)(0x93914U))
#undef DAT_00093918
#define DAT_00093918 (*(int *)(0x93918U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4f7c6
 */

void recovered_4f7c6(void)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (DAT_00093914 == 0) {
    return;
  }
  iVar1 = DAT_00093914 * 8;
  DAT_00093914 = DAT_00093914 + -1;
  recovered_55379((undefined4 *)(iVar1 + -8 + DAT_00093918));
  return;
}

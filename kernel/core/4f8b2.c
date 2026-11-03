#include "functions.h"
#undef DAT_0005e720
#define DAT_0005e720 (*(char *)(0x5e720U))
#undef DAT_0005e92c
#define DAT_0005e92c (*(int *)(0x5e92cU))
#undef DAT_0005e930
#define DAT_0005e930 (*(int *)(0x5e930U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4f8b2
 */

bool recovered_4f8b2(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  bool bVar2;

  if (DAT_0005e720 != '\x01') {
    return false;
  }
  uVar1 = recovered_32c3e();
  bVar2 = false;
  if (((char)uVar1 != '\0') && (DAT_0005e92c != 0)) {
    bVar2 = DAT_0005e930 != 0;
  }
  return bVar2;
}

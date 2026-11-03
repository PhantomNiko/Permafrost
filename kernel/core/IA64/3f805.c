#include "functions.h"
#undef DAT_0004ce94
#define DAT_0004ce94 (*(char *)(0x4ce94U))
#undef DAT_0004cea0
#define DAT_0004cea0 (*(int *)(0x4cea0U))
#undef DAT_0004cea4
#define DAT_0004cea4 (*(int *)(0x4cea4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3f805
 */

bool recovered_3f805(void)

{
  unsigned char frame[64];

  uint uVar1;
  bool bVar2;

  if (DAT_0004ce94 != '\x01') {
    return false;
  }
  uVar1 = recovered_25725();
  bVar2 = false;
  if (((char)uVar1 != '\0') && (DAT_0004cea0 != 0)) {
    bVar2 = DAT_0004cea4 != 0;
  }
  return bVar2;
}

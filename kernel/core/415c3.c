#include "functions.h"
#undef DAT_0004ee94
#define DAT_0004ee94 (*(char *)(0x4ee94U))
#undef DAT_0004eea0
#define DAT_0004eea0 (*(int *)(0x4eea0U))
#undef DAT_0004eea4
#define DAT_0004eea4 (*(int *)(0x4eea4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x415c3
 */

bool recovered_415c3(void)

{
  unsigned char frame[64];

  uint uVar1;
  bool bVar2;

  if (DAT_0004ee94 != '\x01') {
    return false;
  }
  uVar1 = recovered_256fe();
  bVar2 = false;
  if (((char)uVar1 != '\0') && (DAT_0004eea0 != 0)) {
    bVar2 = DAT_0004eea4 != 0;
  }
  return bVar2;
}

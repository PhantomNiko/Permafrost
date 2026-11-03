#include "functions.h"
#undef DAT_00006110
#define DAT_00006110 (*(uint8_t *)(0x6110U))
#undef DAT_00006114
#define DAT_00006114 (*(uint8_t *)(0x6114U))
#undef DAT_0004ce98
#define DAT_0004ce98 (*(int *)(0x4ce98U))
#undef _DAT_00006110
#define _DAT_00006110 (*(uint32_t *)(0x6110U))
#undef _DAT_00006114
#define _DAT_00006114 (*(uint32_t *)(0x6114U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a361
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_2a361(void)

{
  unsigned char frame[64];

  if (DAT_0004ce98 == 0) {
    return 0;
  }
  return CONCAT44(_DAT_00006114,_DAT_00006110);
}

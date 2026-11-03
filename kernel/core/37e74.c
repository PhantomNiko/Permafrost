#include "functions.h"
#undef DAT_00006110
#define DAT_00006110 (*(uint8_t *)(0x6110U))
#undef DAT_00006114
#define DAT_00006114 (*(uint8_t *)(0x6114U))
#undef DAT_0005e924
#define DAT_0005e924 (*(int *)(0x5e924U))
#undef _DAT_00006110
#define _DAT_00006110 (*(uint32_t *)(0x6110U))
#undef _DAT_00006114
#define _DAT_00006114 (*(uint32_t *)(0x6114U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x37e74
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_37e74(void)

{
  unsigned char frame[64] = {0};

  if (DAT_0005e924 == 0) {
    return 0;
  }
  return CONCAT44(_DAT_00006114,_DAT_00006110);
}

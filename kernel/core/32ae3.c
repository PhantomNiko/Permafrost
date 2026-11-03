#include "functions.h"
#undef DAT_0005d760
#define DAT_0005d760 (*(uint8_t *)(0x5d760U))
#undef DAT_0005d761
#define DAT_0005d761 (*(uint8_t *)(0x5d761U))
#undef DAT_0005d769
#define DAT_0005d769 (*(uint8_t *)(0x5d769U))
#undef DAT_0005e720
#define DAT_0005e720 (*(uint8_t *)(0x5e720U))
#undef DAT_0005e934
#define DAT_0005e934 (*(uint8_t *)(0x5e934U))
#undef DAT_00073068
#define DAT_00073068 (*(uint8_t *)(0x73068U))
#undef DAT_00073069
#define DAT_00073069 (*(uint8_t *)(0x73069U))
#undef DAT_0007306a
#define DAT_0007306a (*(uint8_t *)(0x7306aU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x32ae3
 */

void recovered_32ae3(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  unsigned char frame[64] = {0};

  DAT_0005e720 = 0;
  DAT_0005e934 = (undefined1)((uint)param_1 >> 8);
  DAT_0005d761 = (undefined1)param_1;
  DAT_0005d760 = (undefined1)((uint)param_1 >> 0x10);
  DAT_00073069 = (undefined1)((uint)param_2 >> 8);
  DAT_0007306a = (undefined1)param_2;
  DAT_00073068 = (undefined1)((uint)param_2 >> 0x10);
  DAT_0005d769 = param_3;
  recovered_3a301();
  return;
}

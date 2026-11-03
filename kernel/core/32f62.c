#include "functions.h"
#undef DAT_0005dea0
#define DAT_0005dea0 (*(uint8_t *)(0x5dea0U))
#undef DAT_0005e720
#define DAT_0005e720 (*(uint8_t *)(0x5e720U))
#undef DAT_0005e928
#define DAT_0005e928 (*(uint8_t *)(0x5e928U))
#undef DAT_0005e92c
#define DAT_0005e92c (*(uint32_t *)(0x5e92cU))
#undef DAT_0005e930
#define DAT_0005e930 (*(uint32_t *)(0x5e930U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x32f62
 */

int recovered_32f62(void)

{
  unsigned char frame[64] = {0};

  FUN_0002079d();
  DAT_0005e928 = 0;
  DAT_0005e92c = 0;
  DAT_0005e720 = 0;
  DAT_0005e930 = 0;
  recovered_32e94();
  DAT_0005dea0 = 0;
  recovered_32ae3(0xff00ff,0,0x50);
  recovered_32fb9();
  recovered_2f46d();
  return 1;
}

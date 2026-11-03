#include "functions.h"
#undef DAT_000475ed
#define DAT_000475ed (*(uint8_t *)(0x475edU))
#undef DAT_000475ee
#define DAT_000475ee (*(uint8_t *)(0x475eeU))
#undef DAT_000475ef
#define DAT_000475ef (*(uint8_t *)(0x475efU))
#undef DAT_00047e80
#define DAT_00047e80 (*(uint8_t *)(0x47e80U))
#undef DAT_0005c7bc
#define DAT_0005c7bc (*(uint8_t *)(0x5c7bcU))
#undef DAT_0005c7bd
#define DAT_0005c7bd (*(uint8_t *)(0x5c7bdU))
#undef DAT_0005c7be
#define DAT_0005c7be (*(uint8_t *)(0x5c7beU))
#undef DAT_0007cfd5
#define DAT_0007cfd5 (*(uint8_t *)(0x7cfd5U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x24ed9
 */

void recovered_24ed9(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  unsigned char frame[64];

  DAT_00047e80 = 0;
  DAT_0007cfd5 = (undefined1)((uint)param_1 >> 8);
  DAT_000475ef = (undefined1)param_1;
  DAT_000475ee = (undefined1)((uint)param_1 >> 0x10);
  DAT_0005c7bd = (undefined1)((uint)param_2 >> 8);
  DAT_0005c7be = (undefined1)param_2;
  DAT_0005c7bc = (undefined1)((uint)param_2 >> 0x10);
  DAT_000475ed = param_3;
  recovered_2ac55();
  return;
}

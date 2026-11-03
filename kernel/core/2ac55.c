#include "functions.h"
#undef DAT_000475ee
#define DAT_000475ee (*(uint8_t *)(0x475eeU))
#undef DAT_000475ef
#define DAT_000475ef (*(uint8_t *)(0x475efU))
#undef DAT_0004b490
#define DAT_0004b490 (*(uint32_t *)(0x4b490U))
#undef DAT_0005c7ac
#define DAT_0005c7ac (*(uint32_t *)(0x5c7acU))
#undef DAT_0007cfd5
#define DAT_0007cfd5 (*(uint8_t *)(0x7cfd5U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ac55
 */

void recovered_2ac55(void)

{
  unsigned char frame[64];

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;

  uVar3 = DAT_0007cfd5;
  uVar2 = DAT_000475ef;
  uVar1 = DAT_000475ee;
  recovered_27dba(&DAT_0005c7ac,DAT_000475ee,DAT_0007cfd5,DAT_000475ef);
  recovered_27dba(&DAT_0004b490,uVar1,uVar3,uVar2);
  return;
}

#include "functions.h"
#undef DAT_0004851c
#define DAT_0004851c (*(uint8_t *)(0x4851cU))
#undef DAT_0004e614
#define DAT_0004e614 (*(uint8_t *)(0x4e614U))
#undef DAT_0004ee94
#define DAT_0004ee94 (*(uint8_t *)(0x4ee94U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22d38
 */

int recovered_22d38(char *text)

{
  unsigned char frame[64];

  char *pcVar1;

  DAT_0004e614 = 0;
  DAT_0004ee94 = 0;
  pcVar1 = &DAT_0004851c;
  if (text != (char *)0x0) {
    pcVar1 = text;
  }
  recovered_22d6b(pcVar1);
  recovered_2219f();
  return 1;
}

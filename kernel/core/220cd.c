#include "functions.h"
#undef DAT_0004e614
#define DAT_0004e614 (*(char *)(0x4e614U))
#undef DAT_0004e618
#define DAT_0004e618 (*(int *)(0x4e618U))
#undef DAT_0004e61c
#define DAT_0004e61c (*(uint *)(0x4e61cU))
#undef DAT_0004e626
#define DAT_0004e626 (*(uint8_t *)(0x4e626U))
#undef DAT_0004e627
#define DAT_0004e627 (*(uint8_t *)(0x4e627U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x220cd
 */

void recovered_220cd(byte param_1)

{
  unsigned char frame[64];

  int iVar1;

  if (DAT_0004e614 == '\x01') {
    if (param_1 == 8) {
      if (DAT_0004e61c != 0) {
        iVar1 = DAT_0004e61c + DAT_0004e618 * 0x51;
        DAT_0004e61c = DAT_0004e61c - 1;
        (&DAT_0004e626)[iVar1] = 0x20;
      }
    }
    else {
      if (param_1 == 10) {
LAB_00022141:
        FUN_000297f9();
        return;
      }
      if (param_1 == 0xd) {
        DAT_0004e61c = 0;
      }
      else if (0x1f < param_1) {
        (&DAT_0004e627)[DAT_0004e61c + DAT_0004e618 * 0x51] = param_1;
        if (0x4f < DAT_0004e61c + 1) goto LAB_00022141;
        DAT_0004e61c = DAT_0004e61c + 1;
      }
    }
  }
  return;
}

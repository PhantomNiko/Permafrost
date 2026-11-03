#include "functions.h"
#undef DAT_000445f0
#define DAT_000445f0 (*(char *)(0x445f0U))
#undef DAT_000445f4
#define DAT_000445f4 (*(int *)(0x445f4U))
#undef DAT_000445f8
#define DAT_000445f8 (*(uint *)(0x445f8U))
#undef DAT_00044602
#define DAT_00044602 (*(uint8_t *)(0x44602U))
#undef DAT_00044603
#define DAT_00044603 (*(uint8_t *)(0x44603U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21cc7
 */

void recovered_21cc7(byte param_1)

{
  unsigned char frame[64];

  int iVar1;

  if (DAT_000445f0 == '\x01') {
    if (param_1 == 8) {
      if (DAT_000445f8 != 0) {
        iVar1 = DAT_000445f8 + DAT_000445f4 * 0x51;
        DAT_000445f8 = DAT_000445f8 - 1;
        (&DAT_00044602)[iVar1] = 0x20;
      }
    }
    else {
      if (param_1 == 10) {
LAB_00021d3b:
        FUN_00027242();
        return;
      }
      if (param_1 == 0xd) {
        DAT_000445f8 = 0;
      }
      else if (0x1f < param_1) {
        (&DAT_00044603)[DAT_000445f8 + DAT_000445f4 * 0x51] = param_1;
        if (0x4f < DAT_000445f8 + 1) goto LAB_00021d3b;
        DAT_000445f8 = DAT_000445f8 + 1;
      }
    }
  }
  return;
}

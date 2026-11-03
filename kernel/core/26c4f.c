#include "functions.h"
#undef DAT_00044ee4
#define DAT_00044ee4 (*(uint32_t *)(0x44ee4U))
#undef DAT_00044ee8
#define DAT_00044ee8 (*(uint32_t *)(0x44ee8U))
#undef DAT_00044eec
#define DAT_00044eec (*(uint32_t *)(0x44eecU))
#undef DAT_00054e28
#define DAT_00054e28 (*(char *)(0x54e28U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26c4f
 */

undefined4 recovered_26c4f(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64];

  undefined4 uVar1;
  uint uVar2;

  uVar1 = 0;
  if ((((param_3 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) &&
      (param_1 != (char *)0x0)) && (DAT_00054e28 != '\0')) {
    uVar2 = recovered_26d47(param_1);
    if ((uVar2 == 0xffffffff) || ((*(byte *)(&DAT_00044eec + uVar2 * 0x40) & 2) != 0)) {
      uVar1 = 0;
    }
    else {
      *param_2 = (&DAT_00044ee4)[uVar2 * 0x40];
      uVar1 = (&DAT_00044ee8)[uVar2 * 0x40];
      *param_3 = uVar1;
      uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  return uVar1;
}

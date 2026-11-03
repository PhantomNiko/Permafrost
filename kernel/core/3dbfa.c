#include "functions.h"
#undef DAT_0003f336
#define DAT_0003f336 (*(uint8_t *)(0x3f336U))
#undef DAT_00044df0
#define DAT_00044df0 (*(uint8_t *)(0x44df0U))
#undef DAT_00044ee4
#define DAT_00044ee4 (*(uint32_t *)(0x44ee4U))
#undef DAT_00044ee8
#define DAT_00044ee8 (*(uint32_t *)(0x44ee8U))
#undef DAT_00044eec
#define DAT_00044eec (*(uint32_t *)(0x44eecU))
#undef DAT_00054df0
#define DAT_00054df0 (*(uint *)(0x54df0U))
#define local_101 (*(char (*)[241])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3dbfa
 */

undefined4 recovered_3dbfa(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[305];

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_1 != 0) {
    recovered_26d9b(param_1,local_101);
    if (((local_101[0] != '\0') &&
        (uVar2 = recovered_26d47(local_101), uVar1 = DAT_00054df0, uVar2 == 0xffffffff)) &&
       (DAT_00054df0 < 0x100)) {
      iVar3 = DAT_00054df0 * 0x100;
      DAT_00054df0 = DAT_00054df0 + 1;
      recovered_20fa9((int)(&DAT_00044df0 + iVar3),0,0x100);
      recovered_219e1(&DAT_00044df0 + iVar3,0xf1,&DAT_0003f336,local_101);
      (&DAT_00044ee4)[uVar1 * 0x40] = param_2;
      (&DAT_00044ee8)[uVar1 * 0x40] = param_3;
      (&DAT_00044eec)[uVar1 * 0x40] = param_4;
      return CONCAT31((int3)((uint)param_4 >> 8),1);
    }
  }
  recovered_20dfd(param_2);
  return 0;
}

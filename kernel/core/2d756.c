#include "functions.h"
#undef DAT_0004eeac
#define DAT_0004eeac (*(uint *)(0x4eeacU))
#undef DAT_0004eeb0
#define DAT_0004eeb0 (*(uint32_t *)(0x4eeb0U))
#undef DAT_0004eeb4
#define DAT_0004eeb4 (*(uint8_t *)(0x4eeb4U))
#undef DAT_0004eeb8
#define DAT_0004eeb8 (*(uint32_t *)(0x4eeb8U))
#undef DAT_0004eebc
#define DAT_0004eebc (*(uint32_t *)(0x4eebcU))
#undef DAT_0004eec0
#define DAT_0004eec0 (*(uint8_t *)(0x4eec0U))
#undef DAT_0004eec4
#define DAT_0004eec4 (*(uint32_t *)(0x4eec4U))
#undef DAT_0004eec8
#define DAT_0004eec8 (*(uint8_t *)(0x4eec8U))
#undef DAT_0004eed8
#define DAT_0004eed8 (*(uint32_t *)(0x4eed8U))
#undef DAT_0004eedc
#define DAT_0004eedc (*(uint32_t *)(0x4eedcU))
#undef DAT_0004eee0
#define DAT_0004eee0 (*(uint32_t *)(0x4eee0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d756
 */

int * recovered_2d756(byte param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
               undefined1 param_6,undefined4 param_7)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;
  int *piVar3;

  uVar1 = DAT_0004eeac;
  piVar3 = (int *)0x0;
  if (param_3 != 0 && DAT_0004eeac < 0x100) {
    iVar2 = DAT_0004eeac * 0x34;
    piVar3 = &DAT_0004eeb0 + DAT_0004eeac * 0xd;
    recovered_213af((int)piVar3,0,0x34);
    *piVar3 = DAT_0004eeac + 1;
    (&DAT_0004eeb4)[iVar2] = param_1;
    (&DAT_0004eeb8)[uVar1 * 0xd] = param_2;
    (&DAT_0004eebc)[uVar1 * 0xd] = param_3;
    *(undefined4 *)(&DAT_0004eec0 + iVar2) = param_4;
    (&DAT_0004eec4)[uVar1 * 0xd] = param_5;
    (&DAT_0004eec8)[iVar2] = param_6;
    (&DAT_0004eed8)[uVar1 * 0xd] = param_7;
    iVar2 = recovered_2de3b((uint)param_1,param_2,param_3);
    (&DAT_0004eedc)[uVar1 * 0xd] = iVar2;
    (&DAT_0004eee0)[uVar1 * 0xd] = 0;
    recovered_2dd1e((int)piVar3);
    DAT_0004eeac = DAT_0004eeac + 1;
  }
  return piVar3;
}

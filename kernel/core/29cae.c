#include "functions.h"
#undef DAT_00054f20
#define DAT_00054f20 (*(uint *)(0x54f20U))
#undef DAT_00054f24
#define DAT_00054f24 (*(uint32_t *)(0x54f24U))
#undef DAT_00054f28
#define DAT_00054f28 (*(uint8_t *)(0x54f28U))
#undef DAT_00054f2c
#define DAT_00054f2c (*(uint32_t *)(0x54f2cU))
#undef DAT_00054f30
#define DAT_00054f30 (*(uint32_t *)(0x54f30U))
#undef DAT_00054f34
#define DAT_00054f34 (*(uint32_t *)(0x54f34U))
#undef DAT_00054f38
#define DAT_00054f38 (*(uint8_t *)(0x54f38U))
#undef DAT_00054f3c
#define DAT_00054f3c (*(uint32_t *)(0x54f3cU))
#undef DAT_00054f40
#define DAT_00054f40 (*(uint32_t *)(0x54f40U))
#undef DAT_00054f44
#define DAT_00054f44 (*(uint32_t *)(0x54f44U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29cae
 */

int * recovered_29cae(byte param_1,uint param_2,uint param_3,undefined4 param_4,undefined1 param_5,
               undefined4 param_6)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;
  int *piVar3;

  uVar1 = DAT_00054f20;
  piVar3 = (int *)0x0;
  if (param_3 != 0 && DAT_00054f20 < 0x100) {
    iVar2 = DAT_00054f20 * 0x24;
    piVar3 = &DAT_00054f24 + DAT_00054f20 * 9;
    recovered_20fa9((int)piVar3,0,0x24);
    *piVar3 = DAT_00054f20 + 1;
    (&DAT_00054f28)[iVar2] = param_1;
    (&DAT_00054f2c)[uVar1 * 9] = param_2;
    (&DAT_00054f30)[uVar1 * 9] = param_3;
    (&DAT_00054f34)[uVar1 * 9] = param_4;
    (&DAT_00054f38)[iVar2] = param_5;
    (&DAT_00054f3c)[uVar1 * 9] = param_6;
    iVar2 = recovered_2a18c((uint)param_1,param_2,param_3);
    (&DAT_00054f40)[uVar1 * 9] = iVar2;
    (&DAT_00054f44)[uVar1 * 9] = 0;
    DAT_00054f20 = DAT_00054f20 + 1;
  }
  return piVar3;
}

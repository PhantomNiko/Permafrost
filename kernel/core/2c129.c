#include "functions.h"
#undef DAT_0004808c
#define DAT_0004808c (*(uint *)(0x4808cU))
#undef DAT_00048090
#define DAT_00048090 (*(uint32_t *)(0x48090U))
#undef DAT_00048094
#define DAT_00048094 (*(uint8_t *)(0x48094U))
#undef DAT_00048098
#define DAT_00048098 (*(uint32_t *)(0x48098U))
#undef DAT_0004809c
#define DAT_0004809c (*(uint32_t *)(0x4809cU))
#undef DAT_000480a0
#define DAT_000480a0 (*(uint8_t *)(0x480a0U))
#undef DAT_000480a4
#define DAT_000480a4 (*(uint32_t *)(0x480a4U))
#undef DAT_000480a8
#define DAT_000480a8 (*(uint8_t *)(0x480a8U))
#undef DAT_000480b8
#define DAT_000480b8 (*(uint32_t *)(0x480b8U))
#undef DAT_000480bc
#define DAT_000480bc (*(uint32_t *)(0x480bcU))
#undef DAT_000480c0
#define DAT_000480c0 (*(uint32_t *)(0x480c0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c129
 */

int * recovered_2c129(byte param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
               undefined1 param_6,undefined4 param_7)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;
  int *piVar3;

  uVar1 = DAT_0004808c;
  piVar3 = (int *)0x0;
  if (param_3 != 0 && DAT_0004808c < 0x100) {
    iVar2 = DAT_0004808c * 0x34;
    piVar3 = &DAT_00048090 + DAT_0004808c * 0xd;
    recovered_20fa9((int)piVar3,0,0x34);
    *piVar3 = DAT_0004808c + 1;
    (&DAT_00048094)[iVar2] = param_1;
    (&DAT_00048098)[uVar1 * 0xd] = param_2;
    (&DAT_0004809c)[uVar1 * 0xd] = param_3;
    *(undefined4 *)(&DAT_000480a0 + iVar2) = param_4;
    (&DAT_000480a4)[uVar1 * 0xd] = param_5;
    (&DAT_000480a8)[iVar2] = param_6;
    (&DAT_000480b8)[uVar1 * 0xd] = param_7;
    iVar2 = recovered_2c7e5((uint)param_1,param_2,param_3);
    (&DAT_000480bc)[uVar1 * 0xd] = iVar2;
    (&DAT_000480c0)[uVar1 * 0xd] = 0;
    recovered_2c6f1((int)piVar3);
    DAT_0004808c = DAT_0004808c + 1;
  }
  return piVar3;
}

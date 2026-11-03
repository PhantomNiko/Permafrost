#include "functions.h"
#undef DAT_0004ceac
#define DAT_0004ceac (*(uint *)(0x4ceacU))
#undef DAT_0004ceb0
#define DAT_0004ceb0 (*(uint32_t *)(0x4ceb0U))
#undef DAT_0004ceb4
#define DAT_0004ceb4 (*(uint8_t *)(0x4ceb4U))
#undef DAT_0004ceb8
#define DAT_0004ceb8 (*(uint32_t *)(0x4ceb8U))
#undef DAT_0004cebc
#define DAT_0004cebc (*(uint32_t *)(0x4cebcU))
#undef DAT_0004cec0
#define DAT_0004cec0 (*(uint8_t *)(0x4cec0U))
#undef DAT_0004cec4
#define DAT_0004cec4 (*(uint32_t *)(0x4cec4U))
#undef DAT_0004cec8
#define DAT_0004cec8 (*(uint8_t *)(0x4cec8U))
#undef DAT_0004ced8
#define DAT_0004ced8 (*(uint32_t *)(0x4ced8U))
#undef DAT_0004cedc
#define DAT_0004cedc (*(uint32_t *)(0x4cedcU))
#undef DAT_0004cee0
#define DAT_0004cee0 (*(uint32_t *)(0x4cee0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d610
 */

int * recovered_2d610(byte param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
               undefined1 param_6,undefined4 param_7)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;
  int *piVar3;

  uVar1 = DAT_0004ceac;
  piVar3 = (int *)0x0;
  if (param_3 != 0 && DAT_0004ceac < 0x100) {
    iVar2 = DAT_0004ceac * 0x34;
    piVar3 = &DAT_0004ceb0 + DAT_0004ceac * 0xd;
    recovered_213af((int)piVar3,0,0x34);
    *piVar3 = DAT_0004ceac + 1;
    (&DAT_0004ceb4)[iVar2] = param_1;
    (&DAT_0004ceb8)[uVar1 * 0xd] = param_2;
    (&DAT_0004cebc)[uVar1 * 0xd] = param_3;
    *(undefined4 *)(&DAT_0004cec0 + iVar2) = param_4;
    (&DAT_0004cec4)[uVar1 * 0xd] = param_5;
    (&DAT_0004cec8)[iVar2] = param_6;
    (&DAT_0004ced8)[uVar1 * 0xd] = param_7;
    iVar2 = recovered_2dcf5((uint)param_1,param_2,param_3);
    (&DAT_0004cedc)[uVar1 * 0xd] = iVar2;
    (&DAT_0004cee0)[uVar1 * 0xd] = 0;
    recovered_2dbd8((int)piVar3);
    DAT_0004ceac = DAT_0004ceac + 1;
  }
  return piVar3;
}

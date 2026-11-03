#include "functions.h"
#undef DAT_0005e938
#define DAT_0005e938 (*(uint *)(0x5e938U))
#undef DAT_0005e93c
#define DAT_0005e93c (*(uint32_t *)(0x5e93cU))
#undef DAT_0005e940
#define DAT_0005e940 (*(uint8_t *)(0x5e940U))
#undef DAT_0005e944
#define DAT_0005e944 (*(uint32_t *)(0x5e944U))
#undef DAT_0005e948
#define DAT_0005e948 (*(uint32_t *)(0x5e948U))
#undef DAT_0005e94c
#define DAT_0005e94c (*(uint8_t *)(0x5e94cU))
#undef DAT_0005e950
#define DAT_0005e950 (*(uint32_t *)(0x5e950U))
#undef DAT_0005e954
#define DAT_0005e954 (*(uint8_t *)(0x5e954U))
#undef DAT_0005e964
#define DAT_0005e964 (*(uint32_t *)(0x5e964U))
#undef DAT_0005e968
#define DAT_0005e968 (*(uint32_t *)(0x5e968U))
#undef DAT_0005e96c
#define DAT_0005e96c (*(uint32_t *)(0x5e96cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3ba53
 */

int * recovered_3ba53(byte param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
               undefined1 param_6,undefined4 param_7)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  int *piVar3;

  uVar1 = DAT_0005e938;
  piVar3 = (int *)0x0;
  if (param_3 != 0 && DAT_0005e938 < 0x100) {
    iVar2 = DAT_0005e938 * 0x34;
    piVar3 = &DAT_0005e93c + DAT_0005e938 * 0xd;
    recovered_213af((int)piVar3,0,0x34);
    *piVar3 = DAT_0005e938 + 1;
    (&DAT_0005e940)[iVar2] = param_1;
    (&DAT_0005e944)[uVar1 * 0xd] = param_2;
    (&DAT_0005e948)[uVar1 * 0xd] = param_3;
    *(undefined4 *)(&DAT_0005e94c + iVar2) = param_4;
    (&DAT_0005e950)[uVar1 * 0xd] = param_5;
    (&DAT_0005e954)[iVar2] = param_6;
    (&DAT_0005e964)[uVar1 * 0xd] = param_7;
    iVar2 = recovered_3c138((uint)param_1,param_2,param_3);
    (&DAT_0005e968)[uVar1 * 0xd] = iVar2;
    (&DAT_0005e96c)[uVar1 * 0xd] = 0;
    recovered_3c01b((int)piVar3);
    DAT_0005e938 = DAT_0005e938 + 1;
  }
  return piVar3;
}

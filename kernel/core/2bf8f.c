#include "functions.h"
#undef DAT_00006118
#define DAT_00006118 (*(uint8_t *)(0x6118U))
#undef DAT_0000611c
#define DAT_0000611c (*(uint8_t *)(0x611cU))
#undef DAT_00047e24
#define DAT_00047e24 (*(int *)(0x47e24U))
#undef DAT_00047e28
#define DAT_00047e28 (*(uint32_t *)(0x47e28U))
#undef DAT_00047e34
#define DAT_00047e34 (*(int *)(0x47e34U))
#undef DAT_00047e7c
#define DAT_00047e7c (*(byte *)(0x47e7cU))
#undef DAT_00047e84
#define DAT_00047e84 (*(int *)(0x47e84U))
#undef DAT_0004808c
#define DAT_0004808c (*(int *)(0x4808cU))
#undef DAT_00048090
#define DAT_00048090 (*(uint32_t *)(0x48090U))
#undef _DAT_00006118
#define _DAT_00006118 (*(int *)(0x6118U))
#define local_254 (*(undefined1 (*)[8])(frame + 16))
#define local_24c (*(undefined1 (*)[504])(frame + 24))
#define local_54 (*(int (*)[14])(frame + 528))
#define local_1c (*(int *)(frame + 584))
#define local_18 (*(uint *)(frame + 588))
#define local_11 (*(byte *)(frame + 595))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2bf8f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_2bf8f(byte param_1,uint param_2,char param_3)

{
  unsigned char frame[644];

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  bool bVar7;

  piVar1 = recovered_2c129(param_1,0,param_2,0,0,0,0);
  if (piVar1 == (int *)0x0) {
    return;
  }
  *(char *)(piVar1 + 6) = param_3;
  local_18 = (uint)param_1;
  uVar2 = recovered_2c1c4(local_18,param_2,local_54,1);
  if ((char)uVar2 != '\0') {
    piVar1[10] = local_54[0];
    recovered_2c6f1((int)piVar1);
    if (((local_54[0] == 3) &&
        (uVar2 = recovered_2a1fc(local_18,0x41,(int)local_254,0x200), (char)uVar2 != '\0')) &&
       (recovered_2c795((int)piVar1 + 0x19,(int)local_24c), *(char *)((int)piVar1 + 0x19) == '\0'))
    {
      recovered_2c6f1((int)piVar1);
    }
  }
  iVar5 = DAT_00047e34;
  if (param_3 == '\0') {
    return;
  }
  if ((DAT_00047e84 == 0) || (_DAT_00006118 == 0)) {
    iVar3 = 0;
    if ((DAT_00047e24 != 0 & DAT_00047e7c) != 1) goto LAB_0002c0c7;
    local_11 = 1;
    puVar4 = &DAT_00047e28;
    iVar3 = DAT_00047e24;
  }
  else {
    local_11 = DAT_00047e7c;
    puVar4 = (uint *)&DAT_0000611c;
    iVar3 = _DAT_00006118;
  }
  local_1c = DAT_00047e34;
  piVar1 = &DAT_00048090;
  iVar6 = DAT_0004808c;
  while (bVar7 = iVar6 != 0, iVar6 = iVar6 + -1, bVar7) {
    if (((*(byte *)(piVar1 + 1) == param_1) && (0 < piVar1[5])) &&
       ((piVar1[2] == iVar3 && ((*puVar4 == 0 || (*puVar4 <= (uint)piVar1[3])))))) {
      *(undefined1 *)(piVar1 + 6) = 1;
      if ((local_11 & iVar5 != 0) == 0) {
        iVar5 = piVar1[0xb];
      }
      goto LAB_0002c11b;
    }
    piVar1 = piVar1 + 0xd;
  }
LAB_0002c0c7:
  if ((((0x41 < param_2) && (iVar3 == 0 || iVar3 == 0x41)) &&
      (piVar1 = recovered_2c129((byte)local_18,0x41,param_2 - 0x41,0,0xffffffff,1,0),
      piVar1 != (int *)0x0)) && (piVar1[0xb] == 1)) {
    iVar5 = 1;
LAB_0002c11b:
    piVar1[0xc] = iVar5;
  }
  return;
}

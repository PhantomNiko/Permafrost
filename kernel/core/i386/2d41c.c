#include "functions.h"
#undef DAT_00006118
#define DAT_00006118 (*(uint8_t *)(0x6118U))
#undef DAT_0000611c
#define DAT_0000611c (*(uint8_t *)(0x611cU))
#undef DAT_0004ce38
#define DAT_0004ce38 (*(int *)(0x4ce38U))
#undef DAT_0004ce3c
#define DAT_0004ce3c (*(uint32_t *)(0x4ce3cU))
#undef DAT_0004ce48
#define DAT_0004ce48 (*(int *)(0x4ce48U))
#undef DAT_0004ce90
#define DAT_0004ce90 (*(byte *)(0x4ce90U))
#undef DAT_0004ce98
#define DAT_0004ce98 (*(int *)(0x4ce98U))
#undef DAT_0004ceac
#define DAT_0004ceac (*(int *)(0x4ceacU))
#undef DAT_0004ceb4
#define DAT_0004ceb4 (*(uint8_t *)(0x4ceb4U))
#undef _DAT_00006118
#define _DAT_00006118 (*(int *)(0x6118U))
#define local_258 (*(undefined1 (*)[8])(frame + 16))
#define local_250 (*(undefined1 (*)[504])(frame + 24))
#define local_58 (*(int (*)[14])(frame + 528))
#define local_20 (*(int *)(frame + 584))
#define local_1c (*(uint *)(frame + 588))
#define local_18 (*(uint *)(frame + 592))
#define local_11 (*(byte *)(frame + 599))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d41c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_2d41c(byte param_1,uint param_2,char param_3)

{
  unsigned char frame[648];

  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  byte *pbVar8;
  int iVar9;

  piVar2 = recovered_2d610(param_1,0,param_2,0,0,0,0);
  if (piVar2 == (int *)0x0) {
    return;
  }
  *(char *)(piVar2 + 6) = param_3;
  local_1c = (uint)param_1;
  uVar3 = recovered_2d6ab(local_1c,param_2,local_58,1);
  if ((char)uVar3 != '\0') {
    piVar2[10] = local_58[0];
    recovered_2dbd8((int)piVar2);
    if (((local_58[0] == 3) && (bVar1 = recovered_2b362(local_1c,0x41,(int)local_258,0x200), bVar1))
       && (recovered_2dca5((int)piVar2 + 0x19,(int)local_250), *(char *)((int)piVar2 + 0x19) == '\0'
          )) {
      recovered_2dbd8((int)piVar2);
    }
  }
  iVar5 = DAT_0004ce48;
  if (param_3 == '\0') {
    bVar1 = false;
    goto LAB_0002d573;
  }
  if ((DAT_0004ce98 == 0) || (_DAT_00006118 == 0)) {
    iVar4 = 0;
    if ((DAT_0004ce38 != 0 & DAT_0004ce90) == 1) {
      local_11 = 1;
      puVar7 = &DAT_0004ce3c;
      iVar4 = DAT_0004ce38;
      goto LAB_0002d523;
    }
  }
  else {
    local_11 = DAT_0004ce90;
    puVar7 = (uint *)&DAT_0000611c;
    iVar4 = _DAT_00006118;
LAB_0002d523:
    local_20 = DAT_0004ce48;
    pbVar8 = &DAT_0004ceb4;
    iVar9 = DAT_0004ceac;
    while (bVar1 = iVar9 != 0, iVar9 = iVar9 + -1, local_18 = param_2, bVar1) {
      if (((*pbVar8 == param_1) && (0 < *(int *)(pbVar8 + 0x10))) &&
         ((*(int *)(pbVar8 + 4) == iVar4 && ((*puVar7 == 0 || (*puVar7 <= *(uint *)(pbVar8 + 8))))))
         ) {
        pbVar8[0x14] = 1;
        if ((local_11 & iVar5 != 0) == 0) {
          iVar5 = *(int *)(pbVar8 + 0x28);
        }
        *(int *)(pbVar8 + 0x2c) = iVar5;
        bVar1 = false;
        goto LAB_0002d573;
      }
      pbVar8 = pbVar8 + 0x34;
    }
  }
  bVar1 = iVar4 == 0x41 || iVar4 == 0;
LAB_0002d573:
  if ((piVar2[10] == 0) && (0x41 < param_2 && piVar2[0xb] == 0)) {
    iVar5 = recovered_2dcf5(local_1c,0x41,param_2 - 0x41);
    if ((iVar5 == 1) &&
       (piVar6 = recovered_2d610((byte)local_1c,0x41,param_2 - 0x41,1,0xffffffff,bVar1,4),
       piVar6 != (int *)0x0)) {
      piVar6[0xb] = 6;
      if (bVar1 != false) {
        piVar6[0xc] = 6;
      }
      piVar2[10] = 4;
      recovered_2dbd8((int)piVar2);
    }
  }
  return;
}

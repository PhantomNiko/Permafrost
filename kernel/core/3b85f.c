#include "functions.h"
#undef DAT_00006118
#define DAT_00006118 (*(uint8_t *)(0x6118U))
#undef DAT_0000611c
#define DAT_0000611c (*(uint8_t *)(0x611cU))
#undef DAT_0005e6c4
#define DAT_0005e6c4 (*(int *)(0x5e6c4U))
#undef DAT_0005e6c8
#define DAT_0005e6c8 (*(uint32_t *)(0x5e6c8U))
#undef DAT_0005e6d4
#define DAT_0005e6d4 (*(int *)(0x5e6d4U))
#undef DAT_0005e71c
#define DAT_0005e71c (*(byte *)(0x5e71cU))
#undef DAT_0005e924
#define DAT_0005e924 (*(int *)(0x5e924U))
#undef DAT_0005e938
#define DAT_0005e938 (*(int *)(0x5e938U))
#undef DAT_0005e940
#define DAT_0005e940 (*(uint8_t *)(0x5e940U))
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
 * Address: 0x3b85f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_3b85f(byte param_1,uint param_2,char param_3)

{
  unsigned char frame[648] = {0};

  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  byte *pbVar8;
  int iVar9;

  piVar2 = recovered_3ba53(param_1,0,param_2,0,0,0,0);
  if (piVar2 == (int *)0x0) {
    return;
  }
  *(char *)(piVar2 + 6) = param_3;
  local_1c = (uint)param_1;
  uVar3 = recovered_3baee(local_1c,param_2,local_58,1);
  if ((char)uVar3 != '\0') {
    piVar2[10] = local_58[0];
    recovered_3c01b((int)piVar2);
    if (((local_58[0] == 3) &&
        (bVar1 = recovered_3864c((byte)local_1c,0x41,(int)local_258,0x200), bVar1)) &&
       (recovered_3c0e8((int)piVar2 + 0x19,(int)local_250), *(char *)((int)piVar2 + 0x19) == '\0'))
    {
      recovered_3c01b((int)piVar2);
    }
  }
  iVar5 = DAT_0005e6d4;
  if (param_3 == '\0') {
    bVar1 = false;
    goto LAB_0003b9b6;
  }
  if ((DAT_0005e924 == 0) || (_DAT_00006118 == 0)) {
    iVar4 = 0;
    if ((DAT_0005e6c4 != 0 & DAT_0005e71c) == 1) {
      local_11 = 1;
      puVar7 = &DAT_0005e6c8;
      iVar4 = DAT_0005e6c4;
      goto LAB_0003b966;
    }
  }
  else {
    local_11 = DAT_0005e71c;
    puVar7 = (uint *)&DAT_0000611c;
    iVar4 = _DAT_00006118;
LAB_0003b966:
    local_20 = DAT_0005e6d4;
    pbVar8 = &DAT_0005e940;
    iVar9 = DAT_0005e938;
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
        goto LAB_0003b9b6;
      }
      pbVar8 = pbVar8 + 0x34;
    }
  }
  bVar1 = iVar4 == 0x41 || iVar4 == 0;
LAB_0003b9b6:
  if ((piVar2[10] == 0) && (0x41 < param_2 && piVar2[0xb] == 0)) {
    iVar5 = recovered_3c138(local_1c,0x41,param_2 - 0x41);
    if ((iVar5 == 1) &&
       (piVar6 = recovered_3ba53((byte)local_1c,0x41,param_2 - 0x41,1,0xffffffff,bVar1,4),
       piVar6 != (int *)0x0)) {
      piVar6[0xb] = 6;
      if (bVar1 != false) {
        piVar6[0xc] = 6;
      }
      piVar2[10] = 4;
      recovered_3c01b((int)piVar2);
    }
  }
  return;
}

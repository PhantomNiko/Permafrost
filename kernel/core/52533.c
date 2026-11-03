#include "functions.h"
#undef str_0005aec3
#define str_0005aec3 (*(char (*)[1])(0x5aec3U))
#undef str_0005aee5
#define str_0005aee5 (*(char (*)[1])(0x5aee5U))
#undef str_0005af06
#define str_0005af06 (*(char (*)[1])(0x5af06U))
#undef str_0005af40
#define str_0005af40 (*(char (*)[1])(0x5af40U))
#undef str_0005af73
#define str_0005af73 (*(char (*)[1])(0x5af73U))
#undef str_0005af98
#define str_0005af98 (*(char (*)[1])(0x5af98U))
#undef str_0005afcd
#define str_0005afcd (*(char (*)[1])(0x5afcdU))
#undef str_0005affb
#define str_0005affb (*(char (*)[1])(0x5affbU))
#undef str_0005b028
#define str_0005b028 (*(char (*)[1])(0x5b028U))
#undef str_0005b056
#define str_0005b056 (*(char (*)[1])(0x5b056U))
#undef str_0005b082
#define str_0005b082 (*(char (*)[1])(0x5b082U))
#undef str_0005b0b7
#define str_0005b0b7 (*(char (*)[1])(0x5b0b7U))
#undef str_0005b0e5
#define str_0005b0e5 (*(char (*)[1])(0x5b0e5U))
#undef str_0005b114
#define str_0005b114 (*(char (*)[1])(0x5b114U))
#undef str_0005b13c
#define str_0005b13c (*(char (*)[1])(0x5b13cU))
#undef str_0005b165
#define str_0005b165 (*(char (*)[1])(0x5b165U))
#undef str_0005b195
#define str_0005b195 (*(char (*)[1])(0x5b195U))
#undef str_0005b1c3
#define str_0005b1c3 (*(char (*)[1])(0x5b1c3U))
#define local_20 (*(void * *)(frame + 84))
#define local_1c (*(char * *)(frame + 88))
#define local_18 (*(char * *)(frame + 92))
#define local_14 (*(int *)(frame + 96))
#define local_4c (*(ushort (*)[2])(frame + 40))
#define local_48 (*(int (*)[9])(frame + 44))
#define local_24 (*(void * *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x52533
 */

undefined4 recovered_52533(int param_1,uint param_2,undefined4 *param_3,char *param_4,uint param_5)

{
  unsigned char frame[148] = {0};

  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;

  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_24 = (void *)0x0;
  local_20 = (void *)0x0;
  if (param_3 == (undefined4 *)0x0 || param_1 == 0) {
    return 0;
  }
  if ((param_2 < 6) || (iVar2 = recovered_213fb(param_1,0x596d6,4), iVar2 != 0)) {
    recovered_22362(param_4,param_5,str_0005aec3);
    return 0;
  }
  local_18 = (char *)param_2;
  local_4c[0] = *(ushort *)(param_1 + 4);
  uVar8 = (uint)local_4c[0];
  if ((6 < uVar8) || ((0x72U >> (uVar8 & 0x1f) & 1) == 0)) {
    pcVar11 = str_0005aee5;
    goto LAB_00052837;
  }
  if (3 < local_4c[0]) {
    if (param_2 < 10) {
      pcVar11 = str_0005af06;
    }
    else {
      iVar2 = *(int *)(param_1 + 6);
      if (param_2 < (char *)(iVar2 + 10U)) {
        pcVar11 = str_0005af40;
      }
      else {
        local_1c = (char *)(iVar2 + 10U);
        local_14 = iVar2;
        local_24 = recovered_3773b(param_1 + 10,iVar2);
        if (local_24 == (void *)0x0 && local_14 != 0) {
LAB_0005282b:
          pcVar11 = str_0005af73;
        }
        else {
          if (uVar8 != 4) {
            pcVar11 = (char *)(local_14 + 0xe);
            if (local_18 < pcVar11) {
              pcVar11 = str_0005af98;
              goto LAB_00052837;
            }
            local_14 = *(int *)(local_1c + param_1);
            if (local_18 < pcVar11 + local_14) {
              pcVar11 = str_0005afcd;
              goto LAB_00052837;
            }
            local_1c = pcVar11 + local_14;
            local_20 = recovered_3773b((int)(pcVar11 + param_1),local_14);
            if (local_20 == (void *)0x0 && local_14 != 0) {
              pcVar11 = str_0005af73;
              goto LAB_00052837;
            }
          }
          pcVar6 = local_1c + 4;
          if (pcVar6 <= local_18) {
            iVar2 = *(int *)(local_1c + param_1);
            local_14 = 0;
            iVar9 = 0;
            do {
              if (iVar9 == iVar2) {
LAB_0005284c:
                puVar7 = local_4c;
                for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *param_3 = *(undefined4 *)puVar7;
                  puVar7 = puVar7 + 2;
                  param_3 = param_3 + 1;
                }
                return CONCAT31((int3)((uint)pcVar6 >> 8),1);
              }
              pcVar11 = pcVar6 + 4;
              if (local_18 < pcVar11) {
                pcVar11 = str_0005b028;
                goto LAB_00052837;
              }
              iVar5 = *(int *)(pcVar6 + param_1);
              pcVar10 = pcVar11 + iVar5;
              local_1c = pcVar11;
              if (local_18 < pcVar10) {
                pcVar11 = str_0005b056;
                goto LAB_00052837;
              }
              uVar3 = recovered_3c7a5(local_48 + 6,(uint *)(local_48 + 8),local_14 + 1);
              if ((char)uVar3 == '\0') {
                pcVar11 = str_0005af73;
                goto LAB_00052837;
              }
              pvVar4 = recovered_3773b((int)(local_1c + param_1),iVar5);
              *(void **)(local_48[6] + local_48[7] * 4) = pvVar4;
              if (pvVar4 == (void *)0x0) goto LAB_0005282b;
              local_48[7] = local_48[7] + 1;
              if ((5 < local_4c[0]) && (pcVar10 = pcVar10 + 4, local_18 < pcVar10)) {
                pcVar11 = str_0005b082;
                goto LAB_00052837;
              }
              local_14 = local_48[7];
              pcVar6 = pcVar10 + 4;
              if (local_18 < pcVar6) {
                pcVar11 = str_0005b0b7;
                goto LAB_00052837;
              }
              iVar5 = *(int *)(pcVar10 + param_1) + 1;
              while (iVar5 = iVar5 + -1, iVar5 != 0) {
                if (local_18 < pcVar6 + 4) {
                  pcVar11 = str_0005b0e5;
                  goto LAB_00052837;
                }
                pcVar6 = pcVar6 + 4 + *(int *)(pcVar6 + param_1);
                if (local_18 < pcVar6) {
                  pcVar11 = str_0005b114;
                  goto LAB_00052837;
                }
              }
              iVar9 = iVar9 + 1;
            } while( true );
          }
          pcVar11 = str_0005affb;
        }
      }
    }
    goto LAB_00052837;
  }
  if (param_2 < 0xe) {
    pcVar11 = str_0005b13c;
    goto LAB_00052837;
  }
  local_14 = *(int *)(param_1 + 10);
  iVar2 = *(int *)(param_1 + 6) + 1;
  pcVar11 = (char *)0xe;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar2 = local_14 + 1;
      goto LAB_000526cb;
    }
    pcVar6 = pcVar11 + 4;
    if (local_18 < pcVar6) {
      pcVar11 = str_0005b165;
      goto LAB_00052837;
    }
    puVar1 = (uint *)(pcVar11 + param_1);
    pcVar11 = pcVar6 + *puVar1;
    if (local_18 < pcVar11) {
      pcVar11 = str_0005b195;
      goto LAB_00052837;
    }
    uVar8 = recovered_426a9(local_48,pcVar6 + param_1,*puVar1);
  } while ((char)uVar8 != '\0');
  goto LAB_00052704;
  while( true ) {
    if (local_18 < pcVar11) {
      pcVar11 = str_0005b1c3;
      goto LAB_00052837;
    }
    local_14 = iVar2 + -1;
    uVar3 = recovered_552a8((uint *)(local_48 + 3),pcVar11[param_1 + -0xc],
                            *(undefined4 *)(pcVar11 + param_1 + -8),
                            *(undefined4 *)(pcVar11 + param_1 + -4));
    iVar2 = local_14;
    if ((char)uVar3 == '\0') break;
LAB_000526cb:
    pcVar11 = pcVar11 + 0xc;
    pcVar6 = param_4;
    if (iVar2 + -1 == 0) goto LAB_0005284c;
  }
LAB_00052704:
  pcVar11 = str_0005af73;
LAB_00052837:
  recovered_22362(param_4,param_5,pcVar11);
  recovered_528f9(local_4c);
  return 0;
}

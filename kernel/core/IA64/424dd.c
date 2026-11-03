#include "functions.h"
#undef str_00049b34
#define str_00049b34 (*(char (*)[1])(0x49b34U))
#undef str_00049b56
#define str_00049b56 (*(char (*)[1])(0x49b56U))
#undef str_00049b77
#define str_00049b77 (*(char (*)[1])(0x49b77U))
#undef str_00049bb1
#define str_00049bb1 (*(char (*)[1])(0x49bb1U))
#undef str_00049be4
#define str_00049be4 (*(char (*)[1])(0x49be4U))
#undef str_00049c09
#define str_00049c09 (*(char (*)[1])(0x49c09U))
#undef str_00049c3e
#define str_00049c3e (*(char (*)[1])(0x49c3eU))
#undef str_00049c6c
#define str_00049c6c (*(char (*)[1])(0x49c6cU))
#undef str_00049c99
#define str_00049c99 (*(char (*)[1])(0x49c99U))
#undef str_00049cc7
#define str_00049cc7 (*(char (*)[1])(0x49cc7U))
#undef str_00049cf3
#define str_00049cf3 (*(char (*)[1])(0x49cf3U))
#undef str_00049d28
#define str_00049d28 (*(char (*)[1])(0x49d28U))
#undef str_00049d56
#define str_00049d56 (*(char (*)[1])(0x49d56U))
#undef str_00049d85
#define str_00049d85 (*(char (*)[1])(0x49d85U))
#undef str_00049dad
#define str_00049dad (*(char (*)[1])(0x49dadU))
#undef str_00049dd6
#define str_00049dd6 (*(char (*)[1])(0x49dd6U))
#undef str_00049e06
#define str_00049e06 (*(char (*)[1])(0x49e06U))
#undef str_00049e34
#define str_00049e34 (*(char (*)[1])(0x49e34U))
#define local_18 (*(char * *)(frame + 92))
#define local_14 (*(int *)(frame + 96))
#define local_4c (*(ushort (*)[2])(frame + 40))
#define local_48 (*(int (*)[9])(frame + 44))
#define local_24 (*(void * *)(frame + 80))
#define local_20 (*(void * *)(frame + 84))
#define local_1c (*(char * *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x424dd
 */

undefined4 recovered_424dd(int param_1,uint param_2,undefined4 *param_3,char *param_4,uint param_5)

{
  unsigned char frame[148];

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
  if ((param_2 < 6) || (iVar2 = recovered_213cb(param_1,0x48323,4), iVar2 != 0)) {
    recovered_21de7(param_4,param_5,str_00049b34);
    return 0;
  }
  local_18 = (char *)param_2;
  local_4c[0] = *(ushort *)(param_1 + 4);
  uVar8 = (uint)local_4c[0];
  if ((6 < uVar8) || ((0x72U >> (uVar8 & 0x1f) & 1) == 0)) {
    pcVar11 = str_00049b56;
    goto LAB_000427e1;
  }
  if (3 < local_4c[0]) {
    if (param_2 < 10) {
      pcVar11 = str_00049b77;
    }
    else {
      iVar2 = *(int *)(param_1 + 6);
      if (param_2 < (char *)(iVar2 + 10U)) {
        pcVar11 = str_00049bb1;
      }
      else {
        local_1c = (char *)(iVar2 + 10U);
        local_14 = iVar2;
        local_24 = recovered_29c3c(param_1 + 10,iVar2);
        if (local_24 == (void *)0x0 && local_14 != 0) {
LAB_000427d5:
          pcVar11 = str_00049be4;
        }
        else {
          if (uVar8 != 4) {
            pcVar11 = (char *)(local_14 + 0xe);
            if (local_18 < pcVar11) {
              pcVar11 = str_00049c09;
              goto LAB_000427e1;
            }
            local_14 = *(int *)(local_1c + param_1);
            if (local_18 < pcVar11 + local_14) {
              pcVar11 = str_00049c3e;
              goto LAB_000427e1;
            }
            local_1c = pcVar11 + local_14;
            local_20 = recovered_29c3c((int)(pcVar11 + param_1),local_14);
            if (local_20 == (void *)0x0 && local_14 != 0) {
              pcVar11 = str_00049be4;
              goto LAB_000427e1;
            }
          }
          pcVar6 = local_1c + 4;
          if (pcVar6 <= local_18) {
            iVar2 = *(int *)(local_1c + param_1);
            local_14 = 0;
            iVar9 = 0;
            do {
              if (iVar9 == iVar2) {
LAB_000427f6:
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
                pcVar11 = str_00049c99;
                goto LAB_000427e1;
              }
              iVar5 = *(int *)(pcVar6 + param_1);
              pcVar10 = pcVar11 + iVar5;
              local_1c = pcVar11;
              if (local_18 < pcVar10) {
                pcVar11 = str_00049cc7;
                goto LAB_000427e1;
              }
              uVar3 = recovered_2e3b2(local_48 + 6,(uint *)(local_48 + 8),local_14 + 1);
              if ((char)uVar3 == '\0') {
                pcVar11 = str_00049be4;
                goto LAB_000427e1;
              }
              pvVar4 = recovered_29c3c((int)(local_1c + param_1),iVar5);
              *(void **)(local_48[6] + local_48[7] * 4) = pvVar4;
              if (pvVar4 == (void *)0x0) goto LAB_000427d5;
              local_48[7] = local_48[7] + 1;
              if ((5 < local_4c[0]) && (pcVar10 = pcVar10 + 4, local_18 < pcVar10)) {
                pcVar11 = str_00049cf3;
                goto LAB_000427e1;
              }
              local_14 = local_48[7];
              pcVar6 = pcVar10 + 4;
              if (local_18 < pcVar6) {
                pcVar11 = str_00049d28;
                goto LAB_000427e1;
              }
              iVar5 = *(int *)(pcVar10 + param_1) + 1;
              while (iVar5 = iVar5 + -1, iVar5 != 0) {
                if (local_18 < pcVar6 + 4) {
                  pcVar11 = str_00049d56;
                  goto LAB_000427e1;
                }
                pcVar6 = pcVar6 + 4 + *(int *)(pcVar6 + param_1);
                if (local_18 < pcVar6) {
                  pcVar11 = str_00049d85;
                  goto LAB_000427e1;
                }
              }
              iVar9 = iVar9 + 1;
            } while( true );
          }
          pcVar11 = str_00049c6c;
        }
      }
    }
    goto LAB_000427e1;
  }
  if (param_2 < 0xe) {
    pcVar11 = str_00049dad;
    goto LAB_000427e1;
  }
  local_14 = *(int *)(param_1 + 10);
  iVar2 = *(int *)(param_1 + 6) + 1;
  pcVar11 = (char *)0xe;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar2 = local_14 + 1;
      goto LAB_00042675;
    }
    pcVar6 = pcVar11 + 4;
    if (local_18 < pcVar6) {
      pcVar11 = str_00049dd6;
      goto LAB_000427e1;
    }
    puVar1 = (uint *)(pcVar11 + param_1);
    pcVar11 = pcVar6 + *puVar1;
    if (local_18 < pcVar11) {
      pcVar11 = str_00049e06;
      goto LAB_000427e1;
    }
    uVar8 = recovered_32af8(local_48,pcVar6 + param_1,*puVar1);
  } while ((char)uVar8 != '\0');
  goto LAB_000426ae;
  while( true ) {
    if (local_18 < pcVar11) {
      pcVar11 = str_00049e34;
      goto LAB_000427e1;
    }
    local_14 = iVar2 + -1;
    uVar3 = recovered_453ec((uint *)(local_48 + 3),pcVar11[param_1 + -0xc],
                            *(undefined4 *)(pcVar11 + param_1 + -8),
                            *(undefined4 *)(pcVar11 + param_1 + -4));
    iVar2 = local_14;
    if ((char)uVar3 == '\0') break;
LAB_00042675:
    pcVar11 = pcVar11 + 0xc;
    pcVar6 = param_4;
    if (iVar2 + -1 == 0) goto LAB_000427f6;
  }
LAB_000426ae:
  pcVar11 = str_00049be4;
LAB_000427e1:
  recovered_21de7(param_4,param_5,pcVar11);
  recovered_428a3(local_4c);
  return 0;
}

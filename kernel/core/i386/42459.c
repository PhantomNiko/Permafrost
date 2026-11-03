#include "functions.h"
#undef str_00049b03
#define str_00049b03 (*(char (*)[1])(0x49b03U))
#undef str_00049b25
#define str_00049b25 (*(char (*)[1])(0x49b25U))
#undef str_00049b46
#define str_00049b46 (*(char (*)[1])(0x49b46U))
#undef str_00049b80
#define str_00049b80 (*(char (*)[1])(0x49b80U))
#undef str_00049bb3
#define str_00049bb3 (*(char (*)[1])(0x49bb3U))
#undef str_00049bd8
#define str_00049bd8 (*(char (*)[1])(0x49bd8U))
#undef str_00049c0d
#define str_00049c0d (*(char (*)[1])(0x49c0dU))
#undef str_00049c3b
#define str_00049c3b (*(char (*)[1])(0x49c3bU))
#undef str_00049c68
#define str_00049c68 (*(char (*)[1])(0x49c68U))
#undef str_00049c96
#define str_00049c96 (*(char (*)[1])(0x49c96U))
#undef str_00049cc2
#define str_00049cc2 (*(char (*)[1])(0x49cc2U))
#undef str_00049cf7
#define str_00049cf7 (*(char (*)[1])(0x49cf7U))
#undef str_00049d25
#define str_00049d25 (*(char (*)[1])(0x49d25U))
#undef str_00049d54
#define str_00049d54 (*(char (*)[1])(0x49d54U))
#undef str_00049d7c
#define str_00049d7c (*(char (*)[1])(0x49d7cU))
#undef str_00049da5
#define str_00049da5 (*(char (*)[1])(0x49da5U))
#undef str_00049dd5
#define str_00049dd5 (*(char (*)[1])(0x49dd5U))
#undef str_00049e03
#define str_00049e03 (*(char (*)[1])(0x49e03U))
#define local_4c (*(ushort (*)[2])(frame + 40))
#define local_48 (*(int (*)[9])(frame + 44))
#define local_24 (*(void * *)(frame + 80))
#define local_20 (*(void * *)(frame + 84))
#define local_1c (*(char * *)(frame + 88))
#define local_18 (*(char * *)(frame + 92))
#define local_14 (*(int *)(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x42459
 */

undefined4 recovered_42459(int param_1,uint param_2,undefined4 *param_3,char *param_4,uint param_5)

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
  if ((param_2 < 6) || (iVar2 = recovered_213cb(param_1,0x48345,4), iVar2 != 0)) {
    recovered_21de7(param_4,param_5,str_00049b03);
    return 0;
  }
  local_18 = (char *)param_2;
  local_4c[0] = *(ushort *)(param_1 + 4);
  uVar8 = (uint)local_4c[0];
  if ((6 < uVar8) || ((0x72U >> (uVar8 & 0x1f) & 1) == 0)) {
    pcVar11 = str_00049b25;
    goto LAB_0004275d;
  }
  if (3 < local_4c[0]) {
    if (param_2 < 10) {
      pcVar11 = str_00049b46;
    }
    else {
      iVar2 = *(int *)(param_1 + 6);
      if (param_2 < (char *)(iVar2 + 10U)) {
        pcVar11 = str_00049b80;
      }
      else {
        local_1c = (char *)(iVar2 + 10U);
        local_14 = iVar2;
        local_24 = recovered_29c28(param_1 + 10,iVar2);
        if (local_24 == (void *)0x0 && local_14 != 0) {
LAB_00042751:
          pcVar11 = str_00049bb3;
        }
        else {
          if (uVar8 != 4) {
            pcVar11 = (char *)(local_14 + 0xe);
            if (local_18 < pcVar11) {
              pcVar11 = str_00049bd8;
              goto LAB_0004275d;
            }
            local_14 = *(int *)(local_1c + param_1);
            if (local_18 < pcVar11 + local_14) {
              pcVar11 = str_00049c0d;
              goto LAB_0004275d;
            }
            local_1c = pcVar11 + local_14;
            local_20 = recovered_29c28((int)(pcVar11 + param_1),local_14);
            if (local_20 == (void *)0x0 && local_14 != 0) {
              pcVar11 = str_00049bb3;
              goto LAB_0004275d;
            }
          }
          pcVar6 = local_1c + 4;
          if (pcVar6 <= local_18) {
            iVar2 = *(int *)(local_1c + param_1);
            local_14 = 0;
            iVar9 = 0;
            do {
              if (iVar9 == iVar2) {
LAB_00042772:
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
                pcVar11 = str_00049c68;
                goto LAB_0004275d;
              }
              iVar5 = *(int *)(pcVar6 + param_1);
              pcVar10 = pcVar11 + iVar5;
              local_1c = pcVar11;
              if (local_18 < pcVar10) {
                pcVar11 = str_00049c96;
                goto LAB_0004275d;
              }
              uVar3 = recovered_2e37a(local_48 + 6,(uint *)(local_48 + 8),local_14 + 1);
              if ((char)uVar3 == '\0') {
                pcVar11 = str_00049bb3;
                goto LAB_0004275d;
              }
              pvVar4 = recovered_29c28((int)(local_1c + param_1),iVar5);
              *(void **)(local_48[6] + local_48[7] * 4) = pvVar4;
              if (pvVar4 == (void *)0x0) goto LAB_00042751;
              local_48[7] = local_48[7] + 1;
              if ((5 < local_4c[0]) && (pcVar10 = pcVar10 + 4, local_18 < pcVar10)) {
                pcVar11 = str_00049cc2;
                goto LAB_0004275d;
              }
              local_14 = local_48[7];
              pcVar6 = pcVar10 + 4;
              if (local_18 < pcVar6) {
                pcVar11 = str_00049cf7;
                goto LAB_0004275d;
              }
              iVar5 = *(int *)(pcVar10 + param_1) + 1;
              while (iVar5 = iVar5 + -1, iVar5 != 0) {
                if (local_18 < pcVar6 + 4) {
                  pcVar11 = str_00049d25;
                  goto LAB_0004275d;
                }
                pcVar6 = pcVar6 + 4 + *(int *)(pcVar6 + param_1);
                if (local_18 < pcVar6) {
                  pcVar11 = str_00049d54;
                  goto LAB_0004275d;
                }
              }
              iVar9 = iVar9 + 1;
            } while( true );
          }
          pcVar11 = str_00049c3b;
        }
      }
    }
    goto LAB_0004275d;
  }
  if (param_2 < 0xe) {
    pcVar11 = str_00049d7c;
    goto LAB_0004275d;
  }
  local_14 = *(int *)(param_1 + 10);
  iVar2 = *(int *)(param_1 + 6) + 1;
  pcVar11 = (char *)0xe;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar2 = local_14 + 1;
      goto LAB_000425f1;
    }
    pcVar6 = pcVar11 + 4;
    if (local_18 < pcVar6) {
      pcVar11 = str_00049da5;
      goto LAB_0004275d;
    }
    puVar1 = (uint *)(pcVar11 + param_1);
    pcVar11 = pcVar6 + *puVar1;
    if (local_18 < pcVar11) {
      pcVar11 = str_00049dd5;
      goto LAB_0004275d;
    }
    uVar8 = recovered_32ac0(local_48,pcVar6 + param_1,*puVar1);
  } while ((char)uVar8 != '\0');
  goto LAB_0004262a;
  while( true ) {
    if (local_18 < pcVar11) {
      pcVar11 = str_00049e03;
      goto LAB_0004275d;
    }
    local_14 = iVar2 + -1;
    uVar3 = recovered_453d1((uint *)(local_48 + 3),pcVar11[param_1 + -0xc],
                            *(undefined4 *)(pcVar11 + param_1 + -8),
                            *(undefined4 *)(pcVar11 + param_1 + -4));
    iVar2 = local_14;
    if ((char)uVar3 == '\0') break;
LAB_000425f1:
    pcVar11 = pcVar11 + 0xc;
    pcVar6 = param_4;
    if (iVar2 + -1 == 0) goto LAB_00042772;
  }
LAB_0004262a:
  pcVar11 = str_00049bb3;
LAB_0004275d:
  recovered_21de7(param_4,param_5,pcVar11);
  recovered_4281f(local_4c);
  return 0;
}

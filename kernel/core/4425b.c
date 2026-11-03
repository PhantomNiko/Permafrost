#include "functions.h"
#undef str_0004be58
#define str_0004be58 (*(char (*)[1])(0x4be58U))
#undef str_0004be7a
#define str_0004be7a (*(char (*)[1])(0x4be7aU))
#undef str_0004be9b
#define str_0004be9b (*(char (*)[1])(0x4be9bU))
#undef str_0004bed5
#define str_0004bed5 (*(char (*)[1])(0x4bed5U))
#undef str_0004bf08
#define str_0004bf08 (*(char (*)[1])(0x4bf08U))
#undef str_0004bf2d
#define str_0004bf2d (*(char (*)[1])(0x4bf2dU))
#undef str_0004bf62
#define str_0004bf62 (*(char (*)[1])(0x4bf62U))
#undef str_0004bf90
#define str_0004bf90 (*(char (*)[1])(0x4bf90U))
#undef str_0004bfbd
#define str_0004bfbd (*(char (*)[1])(0x4bfbdU))
#undef str_0004bfeb
#define str_0004bfeb (*(char (*)[1])(0x4bfebU))
#undef str_0004c017
#define str_0004c017 (*(char (*)[1])(0x4c017U))
#undef str_0004c04c
#define str_0004c04c (*(char (*)[1])(0x4c04cU))
#undef str_0004c07a
#define str_0004c07a (*(char (*)[1])(0x4c07aU))
#undef str_0004c0a9
#define str_0004c0a9 (*(char (*)[1])(0x4c0a9U))
#undef str_0004c0d1
#define str_0004c0d1 (*(char (*)[1])(0x4c0d1U))
#undef str_0004c0fa
#define str_0004c0fa (*(char (*)[1])(0x4c0faU))
#undef str_0004c12a
#define str_0004c12a (*(char (*)[1])(0x4c12aU))
#undef str_0004c158
#define str_0004c158 (*(char (*)[1])(0x4c158U))
#define local_24 (*(void * *)(frame + 80))
#define local_20 (*(void * *)(frame + 84))
#define local_1c (*(char * *)(frame + 88))
#define local_18 (*(char * *)(frame + 92))
#define local_14 (*(int *)(frame + 96))
#define local_4c (*(ushort (*)[2])(frame + 40))
#define local_48 (*(int (*)[9])(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4425b
 */

undefined4 recovered_4425b(int param_1,uint param_2,undefined4 *param_3,char *param_4,uint param_5)

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
  if ((param_2 < 6) || (iVar2 = recovered_213cb(param_1,0x4a66b,4), iVar2 != 0)) {
    recovered_21de7(param_4,param_5,str_0004be58);
    return 0;
  }
  local_18 = (char *)param_2;
  local_4c[0] = *(ushort *)(param_1 + 4);
  uVar8 = (uint)local_4c[0];
  if ((6 < uVar8) || ((0x72U >> (uVar8 & 0x1f) & 1) == 0)) {
    pcVar11 = str_0004be7a;
    goto LAB_0004455f;
  }
  if (3 < local_4c[0]) {
    if (param_2 < 10) {
      pcVar11 = str_0004be9b;
    }
    else {
      iVar2 = *(int *)(param_1 + 6);
      if (param_2 < (char *)(iVar2 + 10U)) {
        pcVar11 = str_0004bed5;
      }
      else {
        local_1c = (char *)(iVar2 + 10U);
        local_14 = iVar2;
        local_24 = recovered_29c22(param_1 + 10,iVar2);
        if (local_24 == (void *)0x0 && local_14 != 0) {
LAB_00044553:
          pcVar11 = str_0004bf08;
        }
        else {
          if (uVar8 != 4) {
            pcVar11 = (char *)(local_14 + 0xe);
            if (local_18 < pcVar11) {
              pcVar11 = str_0004bf2d;
              goto LAB_0004455f;
            }
            local_14 = *(int *)(local_1c + param_1);
            if (local_18 < pcVar11 + local_14) {
              pcVar11 = str_0004bf62;
              goto LAB_0004455f;
            }
            local_1c = pcVar11 + local_14;
            local_20 = recovered_29c22((int)(pcVar11 + param_1),local_14);
            if (local_20 == (void *)0x0 && local_14 != 0) {
              pcVar11 = str_0004bf08;
              goto LAB_0004455f;
            }
          }
          pcVar6 = local_1c + 4;
          if (pcVar6 <= local_18) {
            iVar2 = *(int *)(local_1c + param_1);
            local_14 = 0;
            iVar9 = 0;
            do {
              if (iVar9 == iVar2) {
LAB_00044574:
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
                pcVar11 = str_0004bfbd;
                goto LAB_0004455f;
              }
              iVar5 = *(int *)(pcVar6 + param_1);
              pcVar10 = pcVar11 + iVar5;
              local_1c = pcVar11;
              if (local_18 < pcVar10) {
                pcVar11 = str_0004bfeb;
                goto LAB_0004455f;
              }
              uVar3 = recovered_2e4c0(local_48 + 6,(uint *)(local_48 + 8),local_14 + 1);
              if ((char)uVar3 == '\0') {
                pcVar11 = str_0004bf08;
                goto LAB_0004455f;
              }
              pvVar4 = recovered_29c22((int)(local_1c + param_1),iVar5);
              *(void **)(local_48[6] + local_48[7] * 4) = pvVar4;
              if (pvVar4 == (void *)0x0) goto LAB_00044553;
              local_48[7] = local_48[7] + 1;
              if ((5 < local_4c[0]) && (pcVar10 = pcVar10 + 4, local_18 < pcVar10)) {
                pcVar11 = str_0004c017;
                goto LAB_0004455f;
              }
              local_14 = local_48[7];
              pcVar6 = pcVar10 + 4;
              if (local_18 < pcVar6) {
                pcVar11 = str_0004c04c;
                goto LAB_0004455f;
              }
              iVar5 = *(int *)(pcVar10 + param_1) + 1;
              while (iVar5 = iVar5 + -1, iVar5 != 0) {
                if (local_18 < pcVar6 + 4) {
                  pcVar11 = str_0004c07a;
                  goto LAB_0004455f;
                }
                pcVar6 = pcVar6 + 4 + *(int *)(pcVar6 + param_1);
                if (local_18 < pcVar6) {
                  pcVar11 = str_0004c0a9;
                  goto LAB_0004455f;
                }
              }
              iVar9 = iVar9 + 1;
            } while( true );
          }
          pcVar11 = str_0004bf90;
        }
      }
    }
    goto LAB_0004455f;
  }
  if (param_2 < 0xe) {
    pcVar11 = str_0004c0d1;
    goto LAB_0004455f;
  }
  local_14 = *(int *)(param_1 + 10);
  iVar2 = *(int *)(param_1 + 6) + 1;
  pcVar11 = (char *)0xe;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar2 = local_14 + 1;
      goto LAB_000443f3;
    }
    pcVar6 = pcVar11 + 4;
    if (local_18 < pcVar6) {
      pcVar11 = str_0004c0fa;
      goto LAB_0004455f;
    }
    puVar1 = (uint *)(pcVar11 + param_1);
    pcVar11 = pcVar6 + *puVar1;
    if (local_18 < pcVar11) {
      pcVar11 = str_0004c12a;
      goto LAB_0004455f;
    }
    uVar8 = recovered_343c4(local_48,pcVar6 + param_1,*puVar1);
  } while ((char)uVar8 != '\0');
  goto LAB_0004442c;
  while( true ) {
    if (local_18 < pcVar11) {
      pcVar11 = str_0004c158;
      goto LAB_0004455f;
    }
    local_14 = iVar2 + -1;
    uVar3 = recovered_471b7((uint *)(local_48 + 3),pcVar11[param_1 + -0xc],
                            *(undefined4 *)(pcVar11 + param_1 + -8),
                            *(undefined4 *)(pcVar11 + param_1 + -4));
    iVar2 = local_14;
    if ((char)uVar3 == '\0') break;
LAB_000443f3:
    pcVar11 = pcVar11 + 0xc;
    pcVar6 = param_4;
    if (iVar2 + -1 == 0) goto LAB_00044574;
  }
LAB_0004442c:
  pcVar11 = str_0004bf08;
LAB_0004455f:
  recovered_21de7(param_4,param_5,pcVar11);
  recovered_44621(local_4c);
  return 0;
}

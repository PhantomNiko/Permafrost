#include "functions.h"
#undef str_000457a1
#define str_000457a1 (*(char (*)[1])(0x457a1U))
#undef str_000457c3
#define str_000457c3 (*(char (*)[1])(0x457c3U))
#undef str_000457e4
#define str_000457e4 (*(char (*)[1])(0x457e4U))
#undef str_0004581e
#define str_0004581e (*(char (*)[1])(0x4581eU))
#undef str_00045851
#define str_00045851 (*(char (*)[1])(0x45851U))
#undef str_00045876
#define str_00045876 (*(char (*)[1])(0x45876U))
#undef str_000458ab
#define str_000458ab (*(char (*)[1])(0x458abU))
#undef str_000458d9
#define str_000458d9 (*(char (*)[1])(0x458d9U))
#undef str_00045906
#define str_00045906 (*(char (*)[1])(0x45906U))
#undef str_00045934
#define str_00045934 (*(char (*)[1])(0x45934U))
#undef str_00045960
#define str_00045960 (*(char (*)[1])(0x45960U))
#undef str_00045995
#define str_00045995 (*(char (*)[1])(0x45995U))
#undef str_000459c3
#define str_000459c3 (*(char (*)[1])(0x459c3U))
#undef str_000459f2
#define str_000459f2 (*(char (*)[1])(0x459f2U))
#undef str_00045a1a
#define str_00045a1a (*(char (*)[1])(0x45a1aU))
#undef str_00045a43
#define str_00045a43 (*(char (*)[1])(0x45a43U))
#undef str_00045a73
#define str_00045a73 (*(char (*)[1])(0x45a73U))
#undef str_00045aa1
#define str_00045aa1 (*(char (*)[1])(0x45aa1U))
#define local_4c (*(ushort (*)[2])(frame + 40))
#define local_48 (*(int (*)[9])(frame + 44))
#define local_24 (*(void * *)(frame + 80))
#define local_20 (*(void * *)(frame + 84))
#define local_1c (*(char * *)(frame + 88))
#define local_18 (*(char * *)(frame + 92))
#define local_14 (*(int *)(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3eba2
 */

undefined4 recovered_3eba2(int param_1,uint param_2,undefined4 *param_3,char *param_4,uint param_5)

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
  if ((param_2 < 6) || (iVar2 = recovered_20fc5(param_1,0x444c0,4), iVar2 != 0)) {
    recovered_219e1(param_4,param_5,str_000457a1);
    return 0;
  }
  local_18 = (char *)param_2;
  local_4c[0] = *(ushort *)(param_1 + 4);
  uVar8 = (uint)local_4c[0];
  if ((6 < uVar8) || ((0x72U >> (uVar8 & 0x1f) & 1) == 0)) {
    pcVar11 = str_000457c3;
    goto LAB_0003eea6;
  }
  if (3 < local_4c[0]) {
    if (param_2 < 10) {
      pcVar11 = str_000457e4;
    }
    else {
      iVar2 = *(int *)(param_1 + 6);
      if (param_2 < (char *)(iVar2 + 10U)) {
        pcVar11 = str_0004581e;
      }
      else {
        local_1c = (char *)(iVar2 + 10U);
        local_14 = iVar2;
        local_24 = recovered_28bbf(param_1 + 10,iVar2);
        if (local_24 == (void *)0x0 && local_14 != 0) {
LAB_0003ee9a:
          pcVar11 = str_00045851;
        }
        else {
          if (uVar8 != 4) {
            pcVar11 = (char *)(local_14 + 0xe);
            if (local_18 < pcVar11) {
              pcVar11 = str_00045876;
              goto LAB_0003eea6;
            }
            local_14 = *(int *)(local_1c + param_1);
            if (local_18 < pcVar11 + local_14) {
              pcVar11 = str_000458ab;
              goto LAB_0003eea6;
            }
            local_1c = pcVar11 + local_14;
            local_20 = recovered_28bbf((int)(pcVar11 + param_1),local_14);
            if (local_20 == (void *)0x0 && local_14 != 0) {
              pcVar11 = str_00045851;
              goto LAB_0003eea6;
            }
          }
          pcVar6 = local_1c + 4;
          if (pcVar6 <= local_18) {
            iVar2 = *(int *)(local_1c + param_1);
            local_14 = 0;
            iVar9 = 0;
            do {
              if (iVar9 == iVar2) {
LAB_0003eebb:
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
                pcVar11 = str_00045906;
                goto LAB_0003eea6;
              }
              iVar5 = *(int *)(pcVar6 + param_1);
              pcVar10 = pcVar11 + iVar5;
              local_1c = pcVar11;
              if (local_18 < pcVar10) {
                pcVar11 = str_00045934;
                goto LAB_0003eea6;
              }
              uVar3 = recovered_2ce6a(local_48 + 6,(uint *)(local_48 + 8),local_14 + 1);
              if ((char)uVar3 == '\0') {
                pcVar11 = str_00045851;
                goto LAB_0003eea6;
              }
              pvVar4 = recovered_28bbf((int)(local_1c + param_1),iVar5);
              *(void **)(local_48[6] + local_48[7] * 4) = pvVar4;
              if (pvVar4 == (void *)0x0) goto LAB_0003ee9a;
              local_48[7] = local_48[7] + 1;
              if ((5 < local_4c[0]) && (pcVar10 = pcVar10 + 4, local_18 < pcVar10)) {
                pcVar11 = str_00045960;
                goto LAB_0003eea6;
              }
              local_14 = local_48[7];
              pcVar6 = pcVar10 + 4;
              if (local_18 < pcVar6) {
                pcVar11 = str_00045995;
                goto LAB_0003eea6;
              }
              iVar5 = *(int *)(pcVar10 + param_1) + 1;
              while (iVar5 = iVar5 + -1, iVar5 != 0) {
                if (local_18 < pcVar6 + 4) {
                  pcVar11 = str_000459c3;
                  goto LAB_0003eea6;
                }
                pcVar6 = pcVar6 + 4 + *(int *)(pcVar6 + param_1);
                if (local_18 < pcVar6) {
                  pcVar11 = str_000459f2;
                  goto LAB_0003eea6;
                }
              }
              iVar9 = iVar9 + 1;
            } while( true );
          }
          pcVar11 = str_000458d9;
        }
      }
    }
    goto LAB_0003eea6;
  }
  if (param_2 < 0xe) {
    pcVar11 = str_00045a1a;
    goto LAB_0003eea6;
  }
  local_14 = *(int *)(param_1 + 10);
  iVar2 = *(int *)(param_1 + 6) + 1;
  pcVar11 = (char *)0xe;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar2 = local_14 + 1;
      goto LAB_0003ed3a;
    }
    pcVar6 = pcVar11 + 4;
    if (local_18 < pcVar6) {
      pcVar11 = str_00045a43;
      goto LAB_0003eea6;
    }
    puVar1 = (uint *)(pcVar11 + param_1);
    pcVar11 = pcVar6 + *puVar1;
    if (local_18 < pcVar11) {
      pcVar11 = str_00045a73;
      goto LAB_0003eea6;
    }
    uVar8 = recovered_315bc(local_48,pcVar6 + param_1,*puVar1);
  } while ((char)uVar8 != '\0');
  goto LAB_0003ed73;
  while( true ) {
    if (local_18 < pcVar11) {
      pcVar11 = str_00045aa1;
      goto LAB_0003eea6;
    }
    local_14 = iVar2 + -1;
    uVar3 = recovered_417e6((uint *)(local_48 + 3),pcVar11[param_1 + -0xc],
                            *(undefined4 *)(pcVar11 + param_1 + -8),
                            *(undefined4 *)(pcVar11 + param_1 + -4));
    iVar2 = local_14;
    if ((char)uVar3 == '\0') break;
LAB_0003ed3a:
    pcVar11 = pcVar11 + 0xc;
    pcVar6 = param_4;
    if (iVar2 + -1 == 0) goto LAB_0003eebb;
  }
LAB_0003ed73:
  pcVar11 = str_00045851;
LAB_0003eea6:
  recovered_219e1(param_4,param_5,pcVar11);
  recovered_3ef68(local_4c);
  return 0;
}

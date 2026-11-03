#include "functions.h"
#undef str_00041faa
#define str_00041faa (*(char (*)[1])(0x41faaU))
#undef str_00041fcc
#define str_00041fcc (*(char (*)[1])(0x41fccU))
#undef str_00041fed
#define str_00041fed (*(char (*)[1])(0x41fedU))
#undef str_00042027
#define str_00042027 (*(char (*)[1])(0x42027U))
#undef str_0004205a
#define str_0004205a (*(char (*)[1])(0x4205aU))
#undef str_0004207f
#define str_0004207f (*(char (*)[1])(0x4207fU))
#undef str_000420b4
#define str_000420b4 (*(char (*)[1])(0x420b4U))
#undef str_000420e2
#define str_000420e2 (*(char (*)[1])(0x420e2U))
#undef str_0004210f
#define str_0004210f (*(char (*)[1])(0x4210fU))
#undef str_0004213d
#define str_0004213d (*(char (*)[1])(0x4213dU))
#undef str_00042169
#define str_00042169 (*(char (*)[1])(0x42169U))
#undef str_0004219e
#define str_0004219e (*(char (*)[1])(0x4219eU))
#undef str_000421cc
#define str_000421cc (*(char (*)[1])(0x421ccU))
#undef str_000421fb
#define str_000421fb (*(char (*)[1])(0x421fbU))
#undef str_00042223
#define str_00042223 (*(char (*)[1])(0x42223U))
#undef str_0004224c
#define str_0004224c (*(char (*)[1])(0x4224cU))
#undef str_0004227c
#define str_0004227c (*(char (*)[1])(0x4227cU))
#undef str_000422aa
#define str_000422aa (*(char (*)[1])(0x422aaU))
#define local_4c (*(ushort (*)[2])(frame + 40))
#define local_48 (*(int (*)[9])(frame + 44))
#define pcVar11 (*(char * *)(frame + 16))
#define local_24 (*(void * *)(frame + 80))
#define local_20 (*(void * *)(frame + 84))
#define local_1c (*(char * *)(frame + 88))
#define local_18 (*(char * *)(frame + 92))
#define local_14 (*(int *)(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3ba49
 */

undefined4 recovered_3ba49(int param_1,uint param_2,undefined4 *param_3,char *param_4,uint param_5)

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
  if ((param_2 < 6) || (iVar2 = recovered_20fc5(param_1,0x4100b,4), iVar2 != 0)) {
    recovered_219e1(param_4,param_5,str_00041faa);
    return 0;
  }
  local_18 = (char *)param_2;
  local_4c[0] = *(ushort *)(param_1 + 4);
  uVar8 = (uint)local_4c[0];
  if ((6 < uVar8) || ((0x72U >> (uVar8 & 0x1f) & 1) == 0)) {
    pcVar11 = str_00041fcc;
    goto LAB_0003bd4d;
  }
  if (3 < local_4c[0]) {
    if (param_2 < 10) {
      pcVar11 = str_00041fed;
    }
    else {
      iVar2 = *(int *)(param_1 + 6);
      if (param_2 < (char *)(iVar2 + 10U)) {
        pcVar11 = str_00042027;
      }
      else {
        local_1c = (char *)(iVar2 + 10U);
        local_14 = iVar2;
        local_24 = recovered_27c30(param_1 + 10,iVar2);
        if (local_24 == (void *)0x0 && local_14 != 0) {
LAB_0003bd41:
          pcVar11 = str_0004205a;
        }
        else {
          if (uVar8 != 4) {
            pcVar11 = (char *)(local_14 + 0xe);
            if (local_18 < pcVar11) {
              pcVar11 = str_0004207f;
              goto LAB_0003bd4d;
            }
            local_14 = *(int *)(local_1c + param_1);
            if (local_18 < pcVar11 + local_14) {
              pcVar11 = str_000420b4;
              goto LAB_0003bd4d;
            }
            local_1c = pcVar11 + local_14;
            local_20 = recovered_27c30((int)(pcVar11 + param_1),local_14);
            if (local_20 == (void *)0x0 && local_14 != 0) {
              pcVar11 = str_0004205a;
              goto LAB_0003bd4d;
            }
          }
          pcVar6 = local_1c + 4;
          if (pcVar6 <= local_18) {
            iVar2 = *(int *)(local_1c + param_1);
            local_14 = 0;
            iVar9 = 0;
            do {
              if (iVar9 == iVar2) {
LAB_0003bd62:
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
                pcVar11 = str_0004210f;
                goto LAB_0003bd4d;
              }
              iVar5 = *(int *)(pcVar6 + param_1);
              pcVar10 = pcVar11 + iVar5;
              local_1c = pcVar11;
              if (local_18 < pcVar10) {
                pcVar11 = str_0004213d;
                goto LAB_0003bd4d;
              }
              uVar3 = recovered_2a6e8(local_48 + 6,(uint *)(local_48 + 8),local_14 + 1);
              if ((char)uVar3 == '\0') {
                pcVar11 = str_0004205a;
                goto LAB_0003bd4d;
              }
              pvVar4 = recovered_27c30((int)(local_1c + param_1),iVar5);
              *(void **)(local_48[6] + local_48[7] * 4) = pvVar4;
              if (pvVar4 == (void *)0x0) goto LAB_0003bd41;
              local_48[7] = local_48[7] + 1;
              if ((5 < local_4c[0]) && (pcVar10 = pcVar10 + 4, local_18 < pcVar10)) {
                pcVar11 = str_00042169;
                goto LAB_0003bd4d;
              }
              local_14 = local_48[7];
              pcVar6 = pcVar10 + 4;
              if (local_18 < pcVar6) {
                pcVar11 = str_0004219e;
                goto LAB_0003bd4d;
              }
              iVar5 = *(int *)(pcVar10 + param_1) + 1;
              while (iVar5 = iVar5 + -1, iVar5 != 0) {
                if (local_18 < pcVar6 + 4) {
                  pcVar11 = str_000421cc;
                  goto LAB_0003bd4d;
                }
                pcVar6 = pcVar6 + 4 + *(int *)(pcVar6 + param_1);
                if (local_18 < pcVar6) {
                  pcVar11 = str_000421fb;
                  goto LAB_0003bd4d;
                }
              }
              iVar9 = iVar9 + 1;
            } while( true );
          }
          pcVar11 = str_000420e2;
        }
      }
    }
    goto LAB_0003bd4d;
  }
  if (param_2 < 0xe) {
    pcVar11 = str_00042223;
    goto LAB_0003bd4d;
  }
  local_14 = *(int *)(param_1 + 10);
  iVar2 = *(int *)(param_1 + 6) + 1;
  pcVar11 = (char *)0xe;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar2 = local_14 + 1;
      goto LAB_0003bbe1;
    }
    pcVar6 = pcVar11 + 4;
    if (local_18 < pcVar6) {
      pcVar11 = str_0004224c;
      goto LAB_0003bd4d;
    }
    puVar1 = (uint *)(pcVar11 + param_1);
    pcVar11 = pcVar6 + *puVar1;
    if (local_18 < pcVar11) {
      pcVar11 = str_0004227c;
      goto LAB_0003bd4d;
    }
    uVar8 = recovered_2ee3a(local_48,pcVar6 + param_1,*puVar1);
  } while ((char)uVar8 != '\0');
  goto LAB_0003bc1a;
  while( true ) {
    if (local_18 < pcVar11) {
      pcVar11 = str_000422aa;
      goto LAB_0003bd4d;
    }
    local_14 = iVar2 + -1;
    uVar3 = recovered_3e441((uint *)(local_48 + 3),pcVar11[param_1 + -0xc],
                            *(undefined4 *)(pcVar11 + param_1 + -8),
                            *(undefined4 *)(pcVar11 + param_1 + -4));
    iVar2 = local_14;
    if ((char)uVar3 == '\0') break;
LAB_0003bbe1:
    pcVar11 = pcVar11 + 0xc;
    pcVar6 = param_4;
    if (iVar2 + -1 == 0) goto LAB_0003bd62;
  }
LAB_0003bc1a:
  pcVar11 = str_0004205a;
LAB_0003bd4d:
  recovered_219e1(param_4,param_5,pcVar11);
  recovered_3be0f(local_4c);
  return 0;
}


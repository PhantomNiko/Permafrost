/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a3f48 (*(uint8_t *)(0x20f4709U))
#define DAT_020e60e0 (*(uint64_t volatile *)(0x2274170U))
#define DAT_020e60f0 (*(uint64_t volatile *)(0x2274180U))
#define DAT_020e6110 (*(uint64_t volatile *)(0x22741a0U))
#define DAT_020e6118 (*(uint64_t volatile *)(0x22741a8U))
#define local_108 (*(undefined8 *)(frame + 72))
#define local_118 (*(undefined8 *)(frame + 56))
#define local_128 (*(undefined8 *)(frame + 40))
#define local_130 (*(undefined4 *)(frame + 32))
#define local_138 (*(undefined8 *)(frame + 24))
#define local_31 (*(undefined1 *)(frame + 287))
#define local_32 (*(byte *)(frame + 286))
#define local_40 (*(int * *)(frame + 272))
#define local_48 (*(char * *)(frame + 264))
#define local_4c (*(int *)(frame + 260))
#define local_50 (*(int *)(frame + 256))
#define local_58 (*(ulong * *)(frame + 248))
#define local_60 (*(uint * *)(frame + 240))
#define local_70 (*(undefined8 *)(frame + 224))
#define local_80 (*(undefined8 *)(frame + 208))
#define local_90 (*(undefined8 *)(frame + 192))
#define local_98 (*(undefined4 *)(frame + 184))
#define local_a0 (*(undefined8 *)(frame + 176))
#define local_a8 (*(byte * *)(frame + 168))
#define local_b0 (*(int * *)(frame + 160))
#define local_b8 (*(ulong *)(frame + 152))
#define local_c8 (*(undefined8 *)(frame + 136))
#define local_d8 (*(undefined8 *)(frame + 120))
#define local_e8 (*(undefined8 *)(frame + 104))
#define local_f0 (*(undefined4 *)(frame + 96))
#define local_f8 (*(undefined8 *)(frame + 88))
#define str_020a3d85 (*(char (*)[1])(0x20f4546U))
#define str_020ab6d1 (*(char (*)[1])(0x20fcd45U))
#define str_020ab6f2 (*(char (*)[1])(0x20fcd66U))
#define str_020ab708 (*(char (*)[1])(0x20fcd7cU))
#define uStack_100 (*(undefined8 *)(frame + 80))
#define uStack_110 (*(undefined8 *)(frame + 64))
#define uStack_120 (*(undefined8 *)(frame + 48))
#define uStack_68 (*(undefined8 *)(frame + 232))
#define uStack_78 (*(undefined8 *)(frame + 216))
#define uStack_88 (*(undefined8 *)(frame + 200))
#define uStack_c0 (*(undefined8 *)(frame + 144))
#define uStack_d0 (*(undefined8 *)(frame + 128))
#define uStack_e0 (*(undefined8 *)(frame + 112))
uint recovered_20e1c70(int *param_1,int param_2,long param_3,ulong *param_4,byte *param_5,
                      long param_6)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  byte *pbVar2;
  uchar uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  ulong uVar10;
  char *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;

  if (param_6 == 0 || (param_5 == (byte *)0x0 || param_3 == 0)) {
    return 0;
  }
  if ((param_4 != (ulong *)0x0) && (*param_4 != 0)) {
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_32 = *param_5;
    local_31 = 0;
    lVar17 = DAT_020e60e0;
    local_a8 = param_5;
    local_60 = (uint *)param_6;
    local_58 = param_4;
    local_4c = param_2;
    local_48 = (char *)param_3;
    local_40 = param_1;
    do {
      param_1 = local_40;
      param_3 = (long)local_48;
      pbVar2 = local_a8;
      if (lVar17 == 0) {
        uVar10 = DAT_020e6118;
        if (uVar10 == 0) goto LAB_0209c29a;
        lVar17 = DAT_020e6110;
        lVar12 = 0;
        uVar15 = 0;
        goto LAB_0209c140;
      }
      lVar12 = DAT_020e60f0;
      lVar17 = lVar17 + -1;
      if (lVar12 != 0) {
        plVar14 = (long *)(lVar12 + lVar17 * 0x18);
        uVar10 = plVar14[1];
        if (uVar10 != 0) {
          lVar12 = 0;
          uVar15 = 0;
          do {
            if ((*(char *)(*plVar14 + 0x48 + lVar12) == '\x01') &&
               (pcVar11 = *(char **)(*plVar14 + lVar12), pcVar11 != (char *)0x0)) {
              iVar5 = recovered_2002eb0(pcVar11,local_48);
              if (iVar5 == 0) {
                if (-1 < (int)(uint)uVar15) {
                  lVar12 = DAT_020e60f0;
                  uVar6 = recovered_20a0670(&local_a0,
                                            (undefined8 *)
                                            (*(long *)(lVar12 + lVar17 * 0x18) +
                                             (ulong)((uint)uVar15 & 0x7fffffff) * 0x50 + 8));
                  param_1 = local_40;
                  param_3 = (long)local_48;
                  if ((char)uVar6 != '\0') goto LAB_0209c3d1;
                  recovered_205ec00(&local_a0);
                  pcVar11 = str_020ab6d1;
                  goto LAB_0209c311;
                }
                break;
              }
              uVar10 = plVar14[1];
            }
            uVar15 = uVar15 + 1;
            lVar12 = lVar12 + 0x50;
          } while (uVar15 < uVar10);
        }
      }
    } while( true );
  }
  lVar17 = param_6;
  iVar5 = recovered_2002eb0((char *)param_5,&DAT_020a3f48);
  if (iVar5 != 0) {
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    PF_PART2(local_138, 0) = (ushort)*param_5;
    uVar10 = DAT_020e60e0;
    local_60 = (uint *)param_6;
    local_4c = param_2;
    local_40 = param_1;
    do {
      param_1 = local_40;
      if (uVar10 == 0) {
        uVar10 = DAT_020e6118;
        if (uVar10 == 0) goto LAB_0209c358;
        lVar12 = DAT_020e6110;
        lVar18 = 0;
        uVar15 = 0;
        goto LAB_0209c1b0;
      }
      lVar12 = DAT_020e60f0;
      uVar10 = uVar10 - 1;
      if (lVar12 != 0) {
        local_48 = (char *)(uVar10 * 3);
        plVar14 = (long *)(lVar12 + uVar10 * 0x18);
        uVar15 = plVar14[1];
        if (uVar15 != 0) {
          lVar12 = 0;
          uVar16 = 0;
          do {
            if ((*(char *)(*plVar14 + 0x48 + lVar12) == '\x01') &&
               (pcVar11 = *(char **)(*plVar14 + lVar12), pcVar11 != (char *)0x0)) {
              iVar5 = recovered_2002eb0(pcVar11,(char *)param_3);
              if (iVar5 == 0) {
                if (-1 < (int)(uint)uVar16) {
                  lVar12 = DAT_020e60f0;
                  uVar6 = recovered_20a0670(&local_a0,
                                            (undefined8 *)
                                            (*(long *)(lVar12 + (long)local_48 * 8) +
                                             (ulong)((uint)uVar16 & 0x7fffffff) * 0x50 + 8));
                  cVar4 = (char)uVar6;
                  param_1 = local_40;
                  goto joined_r0x0209c737;
                }
                break;
              }
              uVar15 = plVar14[1];
            }
            uVar16 = uVar16 + 1;
            lVar12 = lVar12 + 0x50;
          } while (uVar16 < uVar15);
        }
      }
    } while( true );
  }
  if (param_2 - 1U < 2) {
    lVar17 = DAT_020e60e0;
    uVar1 = DAT_020e60f0;
    uVar1 = DAT_020e60f0;
    lVar12 = DAT_020e60f0;
    plVar14 = (long *)(lVar17 * 0x18 + lVar12 + -0x18);
    if (plVar14 == (long *)0x0 || lVar17 == 0) goto LAB_0209c216;
    uVar6 = recovered_20df440(plVar14,param_3,param_6);
    cVar4 = (char)uVar6;
  }
  else {
LAB_0209c216:
    uVar6 = recovered_20a0540(param_3,(undefined8 *)param_6);
    cVar4 = (char)uVar6;
  }
  if (cVar4 != '\0') {
    return (uint)CONCAT71((uint7)(uint3)(param_2 - 1U >> 8),1);
  }
  pcVar11 = str_020a3d85;
LAB_0209c317:
  pf_varargs_205eb00__8_(param_1,(char *)param_3,pcVar11,param_3);
  return 0;
LAB_0209c140:
  do {
    if ((*(char *)(lVar17 + 0x48 + lVar12) == '\x01') &&
       (*(char **)(lVar17 + lVar12) != (char *)0x0)) {
      iVar5 = recovered_2002eb0(*(char **)(lVar17 + lVar12),(char *)param_3);
      if (iVar5 == 0) {
        if (-1 < (int)(uint)uVar15) {
          lVar17 = DAT_020e6110;
          uVar6 = recovered_20a0670(&local_a0,
                                    (undefined8 *)
                                    (lVar17 + (ulong)((uint)uVar15 & 0x7fffffff) * 0x50 + 8));
          if ((char)uVar6 != '\0') goto LAB_0209c3d1;
          recovered_205ec00(&local_a0);
          pcVar11 = str_020ab6d1;
          goto LAB_0209c311;
        }
        break;
      }
      lVar17 = DAT_020e6110;
      uVar10 = DAT_020e6118;
    }
    uVar15 = uVar15 + 1;
    lVar12 = lVar12 + 0x50;
  } while (uVar15 < uVar10);
LAB_0209c29a:
  iVar5 = recovered_2002eb0((char *)pbVar2,&DAT_020a3f48);
  if (iVar5 == 0) {
    if (*(int *)local_58[2] == 1) {
      uVar6 = recovered_209f260((undefined4 *)&local_a0);
      if ((char)uVar6 == '\0') goto LAB_0209c2f8;
LAB_0209c3d1:
      puVar7 = local_58;
      if (*local_58 < 2) {
        piVar8 = (int *)&local_a0;
      }
      else {
        piVar8 = (int *)&local_a0;
        uVar10 = 1;
        lVar17 = 0;
        do {
          pbVar2 = local_a8;
          uVar15 = puVar7[2];
          local_b8 = uVar10;
          local_b0 = piVar8;
          iVar5 = recovered_2002eb0((char *)local_a8,&DAT_020a3f48);
          piVar8 = (int *)recovered_209f320(local_b0,(int *)(uVar15 + lVar17),iVar5 == 0);
          if (piVar8 == (int *)0x0) {
            recovered_205ec00(&local_a0);
            param_3 = (long)local_48;
            param_1 = local_40;
            goto LAB_0209c6f0;
          }
          iVar5 = recovered_2002eb0((char *)pbVar2,&DAT_020a3f48);
          if ((iVar5 == 0) && (*piVar8 == 0)) {
            iVar5 = *(int *)(puVar7[2] + 0x40 + lVar17);
            local_b0 = piVar8;
            puVar9 = recovered_2000ad0(0x20);
            piVar8 = local_b0;
            if (iVar5 == 1) {
              if (puVar9 == (undefined4 *)0x0) goto LAB_0209c820;
              *puVar9 = 1;
              *(undefined1 *)(puVar9 + 1) = 0;
              lVar12 = 0x28;
              local_50 = 7;
            }
            else {
              if (puVar9 == (undefined4 *)0x0) {
LAB_0209c820:
                recovered_205ec00(&local_a0);
                pcVar11 = str_020a3d85;
                param_3 = (long)local_48;
                param_1 = local_40;
                goto LAB_0209c317;
              }
              *puVar9 = 1;
              lVar12 = 0x30;
              local_50 = 8;
            }
            *(undefined8 *)(puVar9 + 2) = 0;
            *(undefined8 *)(puVar9 + 4) = 0;
            *(undefined8 *)(puVar9 + 6) = 0;
            recovered_205ec00((undefined8 *)local_b0);
            *piVar8 = local_50;
            *(undefined4 **)((long)piVar8 + lVar12) = puVar9;
            puVar7 = local_58;
          }
          uVar10 = local_b8 + 1;
          lVar17 = lVar17 + 0x40;
        } while (uVar10 < *puVar7);
      }
      iVar5 = recovered_2002eb0((char *)local_a8,&DAT_020a3f48);
      if (iVar5 == 0) {
        uVar3 = recovered_209f5a0(piVar8,(int *)(puVar7[2] + *puVar7 * 0x40 + -0x40),(int *)local_60
                                  ,1);
        param_3 = (long)local_48;
        param_1 = local_40;
        if (uVar3 == '\0') goto LAB_0209c6b4;
      }
      else {
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_138 = 0;
        local_130 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0;
        uStack_100 = 0;
        uVar6 = recovered_20a7ca0(piVar8,(int *)(puVar7[2] + *puVar7 * 0x40 + -0x40),&local_f8);
        param_1 = local_40;
        param_3 = (long)local_48;
        if ((((char)uVar6 == '\0') ||
            (uVar6 = recovered_20a25e0(local_40,&local_32,(uint *)&local_f8,local_60,&local_138,
                                       param_6), (char)uVar6 == '\0')) ||
           (uVar3 = recovered_209f5a0(piVar8,(int *)(local_58[2] + *local_58 * 0x40 + -0x40),
                                      (int *)&local_138,0), uVar3 == '\0')) {
          recovered_205ec00(&local_f8);
          recovered_205ec00(&local_138);
LAB_0209c6b4:
          recovered_205ec00(&local_a0);
LAB_0209c6f0:
          pf_varargs_205eb00___(param_1,(char *)param_3,str_020ab708);
          return 0;
        }
        recovered_205ec00(&local_f8);
        recovered_205ec00(&local_138);
      }
      uVar6 = recovered_209d7d0(local_4c,param_3,&local_a0);
      recovered_205ec00(&local_a0);
      if ((char)uVar6 != '\0') {
        return (uint)CONCAT71((int7)((ulong)&local_a0 >> 8),1);
      }
    }
    else {
      uVar3 = recovered_209f2c0((undefined4 *)&local_a0);
      if (uVar3 != '\0') goto LAB_0209c3d1;
LAB_0209c2f8:
      puVar13 = &local_a0;
LAB_0209c2ff:
      recovered_205ec00(puVar13);
    }
    pcVar11 = str_020a3d85;
  }
  else {
    recovered_205ec00(&local_a0);
    pcVar11 = str_020ab6f2;
  }
LAB_0209c311:
  goto LAB_0209c317;
LAB_0209c1b0:
  if ((*(char *)(lVar12 + 0x48 + lVar18) != '\x01') || (*(char **)(lVar12 + lVar18) == (char *)0x0))
  goto LAB_0209c1a0;
  iVar5 = recovered_2002eb0(*(char **)(lVar12 + lVar18),(char *)param_3);
  if (iVar5 != 0) {
    lVar12 = DAT_020e6110;
    uVar10 = DAT_020e6118;
    goto LAB_0209c1a0;
  }
  if (-1 < (int)(uint)uVar15) {
    lVar12 = DAT_020e6110;
    uVar10 = (ulong)((uint)uVar15 & 0x7fffffff);
    uVar6 = recovered_20a0670(&local_a0,(undefined8 *)(lVar12 + uVar10 * 0x50 + 8));
    cVar4 = (char)uVar6;
joined_r0x0209c737:
    if (cVar4 == '\0') goto LAB_0209c36f;
    uVar6 = recovered_20a25e0(param_1,(byte *)&local_138,(uint *)&local_a0,local_60,&local_f8,lVar17
                             );
    if ((char)uVar6 == '\0') {
      recovered_205ec00(&local_a0);
      puVar13 = &local_f8;
      goto LAB_0209c376;
    }
    if (local_4c - 1U < 2) {
      lVar17 = DAT_020e60e0;
      uVar1 = DAT_020e60f0;
      uVar1 = DAT_020e60f0;
      lVar12 = DAT_020e60f0;
      plVar14 = (long *)(lVar17 * 0x18 + lVar12 + -0x18);
      if (plVar14 == (long *)0x0 || lVar17 == 0) goto LAB_0209c795;
      uVar6 = recovered_20df440(plVar14,param_3,(long)&local_f8);
      cVar4 = (char)uVar6;
    }
    else {
LAB_0209c795:
      uVar6 = recovered_20a0540(param_3,&local_f8);
      cVar4 = (char)uVar6;
    }
    if (cVar4 != '\0') {
      recovered_205ec00(&local_a0);
      recovered_205ec00(&local_f8);
      return (uint)CONCAT71((int7)(uVar10 >> 8),1);
    }
    recovered_205ec00(&local_a0);
    puVar13 = &local_f8;
    goto LAB_0209c2ff;
  }
  goto LAB_0209c358;
LAB_0209c1a0:
  uVar15 = uVar15 + 1;
  lVar18 = lVar18 + 0x50;
  if (uVar10 <= uVar15) {
LAB_0209c358:
    pf_varargs_205eb00__8_(param_1,(char *)param_3,str_020ab6f2,param_3);
LAB_0209c36f:
    puVar13 = &local_a0;
LAB_0209c376:
    recovered_205ec00(puVar13);
    return 0;
  }
  goto LAB_0209c1b0;
}

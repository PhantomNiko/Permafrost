/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020a3b08 (*(uint8_t *)(0x20f42c9U))
#define DAT_020a3b09 (*(uint8_t *)(0x20f42caU))
#define DAT_020a3b0a (*(uint8_t *)(0x20f42cbU))
#define DAT_020a3b0b (*(uint8_t *)(0x20f42ccU))
#define DAT_020a3b0c (*(uint8_t *)(0x20f42cdU))
#define DAT_020a3b0d (*(uint8_t *)(0x20f42ceU))
#define DAT_020a3b0e (*(uint8_t *)(0x20f42cfU))
#define DAT_020a3b0f (*(uint8_t *)(0x20f42d0U))
#define DAT_020a3b10 (*(uint8_t *)(0x20f42d1U))
#define DAT_020a3b11 (*(uint8_t *)(0x20f42d2U))
#define DAT_020a3b12 (*(uint8_t *)(0x20f42d3U))
#define DAT_020a3b13 (*(uint8_t *)(0x20f42d4U))
#define DAT_020a3b14 (*(uint8_t *)(0x20f42d5U))
#define DAT_020a3b15 (*(uint8_t *)(0x20f42d6U))
#define DAT_020a3b16 (*(uint8_t *)(0x20f42d7U))
#define DAT_020a3b17 (*(uint8_t *)(0x20f42d8U))
#define DAT_020a3dc0 (*(uint8_t *)(0x20f4581U))
#define DAT_020a3f28 (*(uint8_t *)(0x20f46e9U))
#define DAT_020a3f48 (*(uint8_t *)(0x20f4709U))
#define DAT_020de638 (*(uint64_t volatile *)(0x226c288U))
#define DAT_020de640 (*(uint64_t volatile *)(0x226c290U))
#define DAT_020de770 (*(uint8_t volatile *)(0x226c3c0U))
#define DAT_020de771 (*(uint8_t volatile *)(0x226c3c1U))
#define DAT_020e6080 (*(uint8_t volatile *)(0x22740f0U))
#define DAT_020e6088 (*(uint64_t volatile *)(0x22740f8U))
#define DAT_020e6090 (*(uint64_t volatile *)(0x2274100U))
#define DAT_020e60a8 (*(uint64_t volatile *)(0x2274118U))
#define DAT_020e60b0 (*(uint64_t volatile *)(0x2274120U))
#define DAT_020e60b8 (*(uint64_t volatile *)(0x2274128U))
#define DAT_020e60c0 (*(uint64_t volatile *)(0x2274130U))
#define DAT_020e60c8 (*(uint64_t volatile *)(0x2274138U))
#define DAT_020e60e0 (*(uint64_t volatile *)(0x2274170U))
#define DAT_020e60f0 (*(uint64_t volatile *)(0x2274180U))
#define DAT_020e6100 (*(uint8_t volatile *)(0x2274190U))
#define DAT_020e6108 (*(uint8_t volatile *)(0x2274198U))
#define local_31 (*(char *)(frame + 1215))
#define local_32 (*(char *)(frame + 1214))
#define local_40 (*(ulong ****** *)(frame + 1200))
#define local_438 (*(undefined8 *)(frame + 184))
#define local_448 (*(undefined8 *)(frame + 168))
#define local_458 (*(undefined8 *)(frame + 152))
#define local_468 (*(undefined8 *)(frame + 136))
#define local_470 (*(undefined4 *)(frame + 128))
#define local_478 (*(undefined8 *)(frame + 120))
#define local_48 (*(undefined8 * *)(frame + 1192))
#define local_488 (*(undefined8 *)(frame + 104))
#define local_490 (*(undefined4 *)(frame + 96))
#define local_4a8 (*(ulong *)(frame + 72))
#define local_4b8 (*(long *)(frame + 56))
#define local_4c8 (*(void * *)(frame + 40))
#define local_4d8 (*(undefined8 *)(frame + 24))
#define local_58 (*(ulong *)(frame + 1176))
#define local_5c (*(int *)(frame + 1172))
#define local_68 (*(long * *)(frame + 1160))
#define local_70 (*(long *)(frame + 1152))
#define local_78 (*(ulong *)(frame + 1144))
#define local_80 (*(ulong ****** *)(frame + 1136))
#define local_88 (*(ulong *)(frame + 1128))
#define local_90 (*(void * *)(frame + 1120))
#define local_a8 (*(ulong *)(frame + 1096))
#define local_b8 (*(long *)(frame + 1080))
#define local_c8 (*(void * *)(frame + 1064))
#define local_d8 (*(ulong ****** *)(frame + 1048))
#define pppppppuStack_50 (*(ulong ******* *)(frame + 1184))
#define ppppppuStack_4b0 (*(ulong ****** *)(frame + 64))
#define ppppppuStack_4c0 (*(ulong ****** *)(frame + 48))
#define ppppppuStack_b0 (*(ulong ****** *)(frame + 1088))
#define ppppppuStack_c0 (*(ulong ****** *)(frame + 1072))
#define puStack_d0 (*(undefined1 * *)(frame + 1056))
#define str_020a3acf (*(char (*)[1])(0x20f4290U))
#define str_020a3b18 (*(char (*)[1])(0x20f42d9U))
#define str_020a3b63 (*(char (*)[1])(0x20f4324U))
#define str_020a3d85 (*(char (*)[1])(0x20f4546U))
#define str_020a3e52 (*(char (*)[1])(0x20f4613U))
#define str_020a3e58 (*(char (*)[1])(0x20f4619U))
#define str_020a3ea6 (*(char (*)[1])(0x20f4667U))
#define str_020a3ead (*(char (*)[1])(0x20f466eU))
#define str_020a3f2c (*(char (*)[1])(0x20f46edU))
#define str_020ab2a5 (*(char (*)[1])(0x20fc920U))
#define str_020ab2e6 (*(char (*)[1])(0x20fc960U))
#define str_020ab327 (*(char (*)[1])(0x20fc9a0U))
#define str_020ab367 (*(char (*)[1])(0x20fc9dfU))
#define str_020ab3a5 (*(char (*)[1])(0x20fca1cU))
#define str_020ab3d8 (*(char (*)[1])(0x20fca4fU))
#define str_020ab401 (*(char (*)[1])(0x20fca78U))
#define str_020ab42b (*(char (*)[1])(0x20fcaa2U))
#define str_020ab456 (*(char (*)[1])(0x20fcacdU))
#define str_020ab47e (*(char (*)[1])(0x20fcaf5U))
#define str_020ab4a8 (*(char (*)[1])(0x20fcb1fU))
#define str_020ab4d3 (*(char (*)[1])(0x20fcb4aU))
#define str_020ab4fb (*(char (*)[1])(0x20fcb72U))
#define str_020ab5ea (*(char (*)[1])(0x20fcc61U))
#define uStack_440 (*(undefined8 *)(frame + 176))
#define uStack_450 (*(undefined8 *)(frame + 160))
#define uStack_460 (*(undefined8 *)(frame + 144))
#define uStack_480 (*(undefined8 *)(frame + 112))
#define uStack_498 (*(undefined8 *)(frame + 88))
#define uStack_4a0 (*(undefined8 *)(frame + 80))
#define uStack_4d0 (*(undefined8 *)(frame + 32))
#define uStack_a0 (*(undefined8 *)(frame + 1104))
uchar recovered_209d820(undefined4 *param_1,ulong ************in_R8,ulong ***********in_R9)

{
  unsigned char frame[1296] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 uVar2;
  uchar uVar3;
  bool bVar4;
  void *pvVar5;
  undefined8 *puVar6;
  uchar uVar7;
  uint uVar8;
  int iVar9;
  ulong *******pppppppuVar10;
  char cVar11;
  char cVar12;
  long in_RCX;
  ulong ******ppppppuVar13;
  long lVar14;
  char *pcVar15;
  ulong *context;
  ulong *******in_R8_00;
  ulong *******in_R9_00;
  long lVar16;
  char cVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  char *pcVar21;
  long *plVar22;

  uVar3 = DAT_020e6100;
  if (uVar3 == '\x01') {
    cVar17 = DAT_020e6108;
    if (cVar17 == '\x01') {
      DAT_020e6108 = 0;
    }
    if (param_1 == (undefined4 *)0x0) {
      return '\x01';
    }
    *param_1 = 3;
    return '\x01';
  }
  cVar17 = DAT_020e6080;
  if (cVar17 != '\x01') {
    return uVar3;
  }
  lVar16 = DAT_020e6088;
  if (lVar16 == 0) {
    return uVar3;
  }
  cVar17 = DAT_020de770;
  if (cVar17 != '\0') {
    return uVar3;
  }
  DAT_020de770 = 1;
  local_d8 = (ulong ******)0x0;
  puStack_d0 = (undefined1 *)((ulong)puStack_d0 & 0xffffffff00000000);
  local_c8 = (void *)0x0;
  ppppppuStack_c0 = (ulong ******)0x0;
  local_b8 = 0;
  ppppppuStack_b0 = (ulong ******)0x0;
  local_a8 = 0;
  uStack_a0 = 0;
  uVar7 = recovered_20b10a0();
  if (uVar7 == '\0') {
    uVar19 = 0;
    pcVar15 = str_020ab2a5;
    while( true ) {
      do {
        pcVar21 = pcVar15 + 1;
        cVar17 = *pcVar15;
        pcVar15 = pcVar21;
      } while (cVar17 == '\r');
      if (cVar17 == '\0') break;
      if (cVar17 == '\n') {
        recovered_20c6270((undefined1 *)&local_4d8,uVar19,1,'\x01');
        uVar19 = 0;
      }
      else if (uVar19 + 1 < 0x400) {
        *(char *)((long)&local_4d8 + uVar19) = cVar17;
        uVar19 = uVar19 + 1;
      }
    }
    recovered_20c6270((undefined1 *)&local_4d8,uVar19,1,'\x01');
    recovered_20c0b60();
    DAT_020de770 = 0;
    recovered_203e680();
    return uVar3;
  }
  lVar16 = DAT_020e60e0;
  lVar18 = DAT_020e60f0;
  plVar22 = (long *)(lVar18 + -0x18 + lVar16 * 0x18);
  if (lVar16 == 0) {
    plVar22 = (long *)0x0;
  }
  uVar7 = recovered_20e07f0(plVar22,&DAT_020e6090);
  if (uVar7 == '\0') {
    uVar19 = 0;
    pcVar15 = str_020ab2e6;
    while( true ) {
      do {
        pcVar21 = pcVar15 + 1;
        cVar17 = *pcVar15;
        pcVar15 = pcVar21;
      } while (cVar17 == '\r');
      if (cVar17 == '\0') break;
      if (cVar17 == '\n') {
        recovered_20c6270((undefined1 *)&local_4d8,uVar19,1,'\x01');
        uVar19 = 0;
      }
      else if (uVar19 + 1 < 0x400) {
        *(char *)((long)&local_4d8 + uVar19) = cVar17;
        uVar19 = uVar19 + 1;
      }
    }
    recovered_20c6270((undefined1 *)&local_4d8,uVar19,1,'\x01');
LAB_0206155b:
    bVar4 = false;
    local_5c = 0;
  }
  else {
    lVar16 = DAT_020e6088;
    cVar17 = *(char *)(lVar16 + 10);
    if (cVar17 == '\x01') {
      lVar16 = DAT_020e60a8;
      uVar19 = DAT_020e60b0;
      uVar7 = recovered_20b12f0(lVar16,uVar19);
      if (uVar7 == '\0') {
        recovered_2057db0(str_020ab327);
        goto LAB_0206155b;
      }
    }
    local_31 = cVar17;
    recovered_205ec00(&local_d8);
    lVar16 = DAT_020e6088;
    if (lVar16 != 0) {
      lVar16 = 0;
      local_5c = 0;
LAB_02060076:
      cVar17 = local_31;
      context = &local_4d8;
      lVar1 = DAT_020e60c8;
      lVar18 = DAT_020e60c0;
      lVar20 = lVar1 * 0xa8 + lVar18;
switchD_020600c4_default:
      if (lVar1 == 0) goto LAB_02061656;
      lVar16 = lVar16 + 1;
      if (lVar16 == 0x1001) {
        local_4d8 = (ulong ******)DAT_020e60b8;
        lVar16 = DAT_020e6088;
        if (local_4d8 < *(ulong *******)(lVar16 + 0x78)) {
          uStack_4d0 = *(undefined1 **)(*(long *)(lVar16 + 0x70) + (long)local_4d8 * 8);
        }
        else {
          uStack_4d0 = &DAT_020a259c;
        }
        bVar4 = false;
        pf_varargs_205eb00___(&local_4d8,(char *)0x0,str_020ab3a5);
        goto joined_r0x02061716;
      }
      uVar8 = PF_PART4(uStack_4d0, 4);
      switch((uintptr_t)(*(undefined4 *)(lVar20 + -0xa8))) {
      case 0:
        goto switchD_020600c4_caseD_0;
      case 1:
        local_58 = *(ulong *)(lVar20 + -0x90);
        lVar18 = DAT_020e6088;
        pppppppuStack_50 = *(ulong ********)(*(long *)(lVar18 + 0x70) + local_58 * 8);
        local_78 = (ulong)PF_PART7(local_78, 1) << 8;
        DAT_020e60b8 = local_58;
        uVar7 = recovered_209c670((long)pppppppuStack_50,context);
        if (uVar7 == '\0') goto LAB_020606de;
        uVar7 = recovered_20e18e0((long)&local_58,context,str_020a3e52,(long)&local_78,in_R8_00);
        if (uVar7 != '\0') {
          if (local_4d8 != (ulong ******)0x0) {
            ppppppuVar13 = (ulong ******)0x0;
            do {
              recovered_2000bb0(*(void **)((long)local_4c8 + (long)ppppppuVar13 * 8));
              ppppppuVar13 = (ulong ******)((long)ppppppuVar13 + 1);
            } while (ppppppuVar13 < local_4d8);
          }
          recovered_2000bb0(local_4c8);
          local_4d8 = (ulong ******)0x0;
          uStack_4d0 = (undefined1 *)0x0;
          local_4c8 = (void *)0x0;
          if ((char)local_78 != '\0') {
            uVar7 = recovered_20df320(0x22740f0U,*(ulong *)(lVar20 + -0x88),
                                      *(ulong *)(lVar20 + -0x80));
            iVar9 = 2;
            if (uVar7 != '\0') goto LAB_02060881;
            context = &local_58;
            pcVar15 = str_020a3e52;
            pcVar21 = str_020ab47e;
            goto LAB_020606e7;
          }
LAB_02060833:
          local_4c8 = (void *)0x0;
          uStack_4d0 = (undefined1 *)0x0;
          local_4d8 = (ulong ******)0x0;
          lVar18 = DAT_020e60c8;
          iVar9 = 2;
          if (lVar18 != 0) {
            DAT_020e60c8 = lVar18 + -1;
            uVar2 = DAT_020e60c0;
            uVar2 = DAT_020e60c0;
            lVar1 = DAT_020e60c0;
            recovered_20de6a0((undefined4 *)((lVar18 + -1) * 0xa8 + lVar1));
          }
          goto LAB_02060881;
        }
        if (local_4d8 != (ulong ******)0x0) {
          ppppppuVar13 = (ulong ******)0x0;
          do {
            recovered_2000bb0(*(void **)((long)local_4c8 + (long)ppppppuVar13 * 8));
            ppppppuVar13 = (ulong ******)((long)ppppppuVar13 + 1);
          } while (ppppppuVar13 < local_4d8);
        }
        goto LAB_02060825;
      case 2:
        if ((*(char *)(lVar20 + -0x78) != '\x01') || (*(char *)(lVar20 + -0x76) == '\0')) {
          local_4d8 = *(ulong *******)(lVar20 + -0x88);
          lVar18 = DAT_020e6088;
          uStack_4d0 = &DAT_020a259c;
          if (local_4d8 < *(ulong *******)(lVar18 + 0x78)) {
            uStack_4d0 = *(undefined1 **)(*(long *)(lVar18 + 0x70) + (long)local_4d8 * 8);
          }
          *(undefined1 *)(lVar20 + -0x78) = 1;
          *(undefined1 *)(lVar20 + -0x76) = 1;
          uVar7 = recovered_20df320(0x22740f0U,(ulong)local_4d8,*(ulong *)(lVar20 + -0x80));
          iVar9 = 2;
          if (uVar7 != '\0') goto LAB_02060881;
          pcVar15 = str_020a3ea6;
          pcVar21 = str_020ab4a8;
          goto LAB_020606e7;
        }
        local_58 = *(ulong *)(lVar20 + -0x90);
        lVar18 = DAT_020e6088;
        pppppppuStack_50 = *(ulong ********)(*(long *)(lVar18 + 0x70) + local_58 * 8);
        local_78 = (ulong)PF_PART7(local_78, 1) << 8;
        DAT_020e60b8 = local_58;
        uVar7 = recovered_209c670((long)pppppppuStack_50,context);
        if (uVar7 == '\0') {
LAB_020606de:
          context = &local_58;
          pcVar15 = (char *)0x0;
          pcVar21 = str_020a3b63;
          goto LAB_020606e7;
        }
        uVar7 = recovered_20e18e0((long)&local_58,context,str_020a3b18,(long)&local_78,in_R8_00);
        if (uVar7 != '\0') {
          if (local_4d8 != (ulong ******)0x0) {
            ppppppuVar13 = (ulong ******)0x0;
            do {
              recovered_2000bb0(*(void **)((long)local_4c8 + (long)ppppppuVar13 * 8));
              ppppppuVar13 = (ulong ******)((long)ppppppuVar13 + 1);
            } while (ppppppuVar13 < local_4d8);
          }
          recovered_2000bb0(local_4c8);
          local_4d8 = (ulong ******)0x0;
          uStack_4d0 = (undefined1 *)0x0;
          local_4c8 = (void *)0x0;
          if ((char)local_78 != '\x01') {
            *(undefined1 *)(lVar20 + -0x76) = 0;
            iVar9 = 2;
            goto LAB_02060881;
          }
          goto LAB_02060833;
        }
        if (local_4d8 != (ulong ******)0x0) {
          ppppppuVar13 = (ulong ******)0x0;
          do {
            recovered_2000bb0(*(void **)((long)local_4c8 + (long)ppppppuVar13 * 8));
            ppppppuVar13 = (ulong ******)((long)ppppppuVar13 + 1);
          } while (ppppppuVar13 < local_4d8);
        }
LAB_02060825:
        recovered_2000bb0(local_4c8);
        goto LAB_0206087c;
      case 3:
        iVar9 = *(int *)(lVar20 + -0x68);
        bVar4 = iVar9 < *(int *)(lVar20 + -100);
        if (0 < *(int *)(lVar20 + -0x60)) {
          bVar4 = *(int *)(lVar20 + -100) < iVar9;
        }
        in_R8_00 = (ulong *******)(ulong)bVar4;
        local_58 = *(ulong *)(lVar20 + -0x90);
        lVar14 = DAT_020e6088;
        in_R9_00 = *(ulong ********)(*(long *)(lVar14 + 0x70) + local_58 * 8);
        DAT_020e60b8 = local_58;
        pppppppuStack_50 = in_R9_00;
        if (bVar4 == true) goto LAB_02060727;
        if (*(char *)(lVar20 + -0x77) != '\x01') {
          local_4c8 = (void *)0x0;
          ppppppuStack_4c0 = (ulong ******)0x0;
          local_4b8 = 0;
          ppppppuStack_4b0 = (ulong ******)0x0;
          local_4a8 = 0;
          uStack_4a0 = 0;
          local_4d8 = (ulong ******)CONCAT44(iVar9,1);
          uStack_4d0 = (undefined1 *)CONCAT44(PF_PART4(uStack_4d0, 4),(float)iVar9);
          uVar8 = recovered_20a0540(*(long *)(lVar20 + -0x70),context);
          recovered_205ec00(context);
          if ((char)uVar8 == '\0') {
            pcVar15 = *(char **)(lVar20 + -0x70);
            goto LAB_02060867;
          }
          *(undefined1 *)(lVar20 + -0x77) = 1;
          uVar7 = recovered_20df320(0x22740f0U,*(ulong *)(lVar20 + -0x88),*(ulong *)(lVar20 + -0x80))
          ;
          iVar9 = 2;
          if (uVar7 != '\0') goto LAB_02060881;
          context = &local_58;
          pcVar15 = &DAT_020a3f28;
          pcVar21 = str_020ab4d3;
          goto LAB_020606e7;
        }
        *(int *)(lVar20 + -0x68) = iVar9 + *(int *)(lVar20 + -0x60);
        break;
      case 4:
        local_58 = *(ulong *)(lVar20 + -0x90);
        lVar14 = DAT_020e6088;
        pppppppuStack_50 = *(ulong ********)(*(long *)(lVar14 + 0x70) + local_58 * 8);
        DAT_020e60b8 = local_58;
        iVar9 = *(int *)(lVar20 + -0x48);
        if (iVar9 == 8) {
          lVar14 = *(long *)(lVar20 + -0x18);
        }
        else {
          if (iVar9 != 7) goto LAB_02060727;
          lVar14 = *(long *)(lVar20 + -0x20);
        }
        if ((lVar14 == 0) || (uVar19 = *(ulong *)(lVar20 + -8), *(ulong *)(lVar14 + 8) <= uVar19))
        goto LAB_02060727;
        if (*(char *)(lVar20 + -0x77) != '\x01') {
          if (iVar9 == 7) {
            if ((*(long *)(lVar20 + -0x20) == 0) || (*(long *)(lVar20 + -0x50) == 0))
            goto LAB_02061052;
            local_68 = (long *)(uVar19 * 0x40 + *(long *)(*(long *)(lVar20 + -0x20) + 0x18));
            local_4d8 = (ulong ******)0x0;
            uStack_4d0 = (undefined1 *)((ulong)PF_PART4(uStack_4d0, 4) << 0x20);
            local_4c8 = (void *)0x0;
            ppppppuStack_4c0 = (ulong ******)0x0;
            local_4b8 = 0;
            ppppppuStack_4b0 = (ulong ******)0x0;
            local_4a8 = 0;
            uStack_4a0 = 0;
            if (((int)*local_68 == 7) && (lVar18 = local_68[5], lVar18 != 0)) {
              if (*(long *)(lVar18 + 8) != 0) {
                plVar22 = *(long **)(lVar18 + 0x18);
                goto LAB_02060c04;
              }
            }
            else if (*(long *)(lVar20 + -0x50) == 1) {
              plVar22 = local_68;
LAB_02060c04:
              recovered_20a0670(&local_4d8,plVar22);
            }
            else {
              iVar9 = (int)uVar19 + 1;
              local_4d8 = (ulong ******)CONCAT44(iVar9,1);
              uStack_4d0 = (undefined1 *)CONCAT44(uVar8,(float)iVar9);
              local_4c8 = (void *)0x0;
              ppppppuStack_4c0 = (ulong ******)0x0;
              local_4b8 = 0;
              ppppppuStack_4b0 = (ulong ******)0x0;
              local_4a8 = 0;
              uStack_4a0 = 0;
            }
            uVar8 = recovered_20a0540(**(long **)(lVar20 + -0x58),&local_4d8);
            if ((char)uVar8 != '\0') {
              recovered_205ec00(&local_4d8);
              if (*(ulong *)(lVar20 + -0x50) < 2) goto LAB_02061052;
              local_4d8 = (ulong ******)0x0;
              uStack_4d0 = (undefined1 *)((ulong)uStack_4d0 & 0xffffffff00000000);
              local_4c8 = (void *)0x0;
              ppppppuStack_4c0 = (ulong ******)0x0;
              local_4b8 = 0;
              ppppppuStack_4b0 = (ulong ******)0x0;
              local_4a8 = 0;
              uStack_4a0 = 0;
              plVar22 = local_68;
              if (((int)*local_68 == 7) && (lVar18 = local_68[5], lVar18 != 0)) {
                if (1 < *(ulong *)(lVar18 + 8)) {
                  plVar22 = (long *)(*(long *)(lVar18 + 0x18) + 0x40);
                  goto LAB_02060f76;
                }
              }
              else {
LAB_02060f76:
                recovered_20a0670(&local_4d8,plVar22);
              }
              uVar8 = recovered_20a0540(*(long *)(*(long *)(lVar20 + -0x58) + 8),&local_4d8);
              uVar19 = 1;
              if ((char)uVar8 == '\0') goto LAB_02061094;
              recovered_205ec00(&local_4d8);
              if (*(ulong *)(lVar20 + -0x50) < 3) goto LAB_02061052;
              uVar19 = 2;
              lVar18 = 0x80;
              goto LAB_02060fbd;
            }
          }
          else {
            if ((*(long *)(lVar20 + -0x18) == 0) || (*(long *)(lVar20 + -0x50) == 0))
            goto LAB_02061052;
            plVar22 = (long *)(uVar19 * 0x48 + *(long *)(*(long *)(lVar20 + -0x18) + 0x18));
            local_68 = plVar22 + 1;
            local_4d8 = (ulong ******)0x0;
            uStack_4d0 = (undefined1 *)((ulong)PF_PART4(uStack_4d0, 4) << 0x20);
            local_4c8 = (void *)0x0;
            ppppppuStack_4c0 = (ulong ******)0x0;
            local_4b8 = 0;
            ppppppuStack_4b0 = (ulong ******)0x0;
            local_4a8 = 0;
            uStack_4a0 = 0;
            if (*(long *)(lVar20 + -0x50) == 1) {
              recovered_20a0670(&local_4d8,local_68);
            }
            else {
              pcVar15 = (char *)*plVar22;
              if (pcVar15 == (char *)0x0) {
                pcVar15 = &DAT_020a259c;
              }
              local_88 = recovered_2002e80(pcVar15);
              local_90 = recovered_2000ad0(local_88 + 1);
              if (local_90 == (void *)0x0) {
                recovered_205ec00(&local_4d8);
                pcVar15 = (char *)*plVar22;
                context = &local_58;
                pcVar21 = str_020ab5ea;
                goto LAB_020606e7;
              }
              if (local_88 != 0) {
                recovered_2001410(local_90,pcVar15,local_88);
              }
              pvVar5 = local_90;
              *(undefined1 *)((long)local_90 + local_88) = 0;
              recovered_205ec00(&local_4d8);
              local_4d8 = (ulong ******)CONCAT44(PF_PART4(local_4d8, 4),3);
              local_4c8 = pvVar5;
            }
            uVar8 = recovered_20a0540(**(long **)(lVar20 + -0x58),&local_4d8);
            if ((char)uVar8 != '\0') {
              recovered_205ec00(&local_4d8);
              if (*(ulong *)(lVar20 + -0x50) < 2) goto LAB_02061052;
              local_4d8 = (ulong ******)0x0;
              uStack_4d0 = (undefined1 *)((ulong)uStack_4d0 & 0xffffffff00000000);
              local_4c8 = (void *)0x0;
              ppppppuStack_4c0 = (ulong ******)0x0;
              local_4b8 = 0;
              ppppppuStack_4b0 = (ulong ******)0x0;
              local_4a8 = 0;
              uStack_4a0 = 0;
              recovered_20a0670(&local_4d8,local_68);
              uVar8 = recovered_20a0540(*(long *)(*(long *)(lVar20 + -0x58) + 8),&local_4d8);
              uVar19 = 1;
              if ((char)uVar8 == '\0') goto LAB_02061094;
              recovered_205ec00(&local_4d8);
              if (*(ulong *)(lVar20 + -0x50) < 3) goto LAB_02061052;
              uVar19 = 2;
              goto LAB_02060e58;
            }
          }
          uVar19 = 0;
          goto LAB_02061094;
        }
        *(ulong *)(lVar20 + -8) = uVar19 + 1;
        break;
      default:
        goto switchD_020600c4_default;
      }
      *(undefined1 *)(lVar20 + -0x77) = 0;
      iVar9 = 2;
      goto LAB_02060881;
    }
    local_5c = 0;
LAB_02061656:
    lVar16 = DAT_020e60e0;
    lVar18 = DAT_020e60f0;
    plVar22 = (long *)(lVar18 + -0x18 + lVar16 * 0x18);
    if (lVar16 == 0) {
      plVar22 = (long *)0x0;
    }
    uVar7 = recovered_20e07f0(&DAT_020e6090,plVar22);
    bVar4 = true;
    cVar17 = local_31;
    if (uVar7 == '\0') {
      recovered_2057db0(str_020ab367);
      bVar4 = false;
      cVar17 = local_31;
    }
joined_r0x02061716:
    if ((cVar17 != '\0') && (lVar16 = DAT_020de638, lVar16 != 0)) {
      DAT_020de638 = lVar16 + -1;
      lVar18 = DAT_020de640;
      if (lVar18 != 0) {
        plVar22 = (long *)(lVar18 + (lVar16 + -1) * 0x10);
        if (plVar22[1] != 0) {
          lVar16 = 0;
          uVar19 = 0;
          do {
            recovered_205ec00((undefined8 *)(*plVar22 + lVar16));
            uVar19 = uVar19 + 1;
            lVar16 = lVar16 + 0x40;
          } while (uVar19 < (ulong)plVar22[1]);
        }
        recovered_2000bb0((void *)*plVar22);
        *plVar22 = 0;
        plVar22[1] = 0;
      }
    }
  }
  lVar16 = DAT_020e60e0;
  if (lVar16 != 0) {
    DAT_020e60e0 = lVar16 + -1;
    lVar18 = DAT_020e60f0;
    if (lVar18 != 0) {
      plVar22 = (long *)(lVar18 + (lVar16 + -1) * 0x18);
      if (plVar22[1] != 0) {
        lVar16 = 8;
        uVar19 = 0;
        do {
          recovered_2000bb0(*(void **)(*plVar22 + -8 + lVar16));
          recovered_205ec00((undefined8 *)(*plVar22 + lVar16));
          uVar19 = uVar19 + 1;
          lVar16 = lVar16 + 0x50;
        } while (uVar19 < (ulong)plVar22[1]);
      }
      recovered_2000bb0((void *)*plVar22);
      *plVar22 = 0;
      plVar22[1] = 0;
      plVar22[2] = 0;
    }
  }
  recovered_205ec00(&local_d8);
  cVar17 = DAT_020de771;
  if (((cVar17 != '\x01') && (bVar4)) && ((local_5c != 2 && (lVar16 = DAT_020e60c8, lVar16 != 0))))
  {
    if (local_5c != 1) goto LAB_020617b3;
    local_4d8 = (ulong ******)DAT_020e60b8;
    lVar16 = DAT_020e6088;
    if (local_4d8 < *(ulong *******)(lVar16 + 0x78)) {
      uStack_4d0 = *(undefined1 **)(*(long *)(lVar16 + 0x70) + (long)local_4d8 * 8);
    }
    else {
      uStack_4d0 = &DAT_020a259c;
    }
    pf_varargs_205eb00___(&local_4d8,(char *)0x0,str_020a3acf);
  }
  recovered_20c0b60();
LAB_020617b3:
  DAT_020e6100 = 0;
  DAT_020e6108 = 0;
  DAT_020de770 = 0;
  return uVar3;
  while( true ) {
    recovered_205ec00(&local_4d8);
    uVar19 = uVar19 + 1;
    lVar18 = lVar18 + 0x40;
    if (*(ulong *)(lVar20 + -0x50) <= uVar19) break;
LAB_02060fbd:
    local_4d8 = (ulong ******)0x0;
    uStack_4d0 = (undefined1 *)((ulong)uStack_4d0 & 0xffffffff00000000);
    local_4c8 = (void *)0x0;
    ppppppuStack_4c0 = (ulong ******)0x0;
    local_4b8 = 0;
    ppppppuStack_4b0 = (ulong ******)0x0;
    local_4a8 = 0;
    uStack_4a0 = 0;
    if ((((int)*local_68 == 7) && (lVar1 = local_68[5], lVar1 != 0)) &&
       (uVar19 < *(ulong *)(lVar1 + 8))) {
      recovered_20a0670(&local_4d8,(undefined8 *)(*(long *)(lVar1 + 0x18) + lVar18));
    }
    uVar8 = recovered_20a0540(*(long *)(*(long *)(lVar20 + -0x58) + uVar19 * 8),&local_4d8);
    if ((char)uVar8 == '\0') goto LAB_02061094;
  }
  goto LAB_02061052;
  while( true ) {
    recovered_205ec00(&local_4d8);
    uVar19 = uVar19 + 1;
    if (*(ulong *)(lVar20 + -0x50) <= uVar19) break;
LAB_02060e58:
    local_4d8 = (ulong ******)0x0;
    uStack_4d0 = (undefined1 *)((ulong)uStack_4d0 & 0xffffffff00000000);
    local_4c8 = (void *)0x0;
    ppppppuStack_4c0 = (ulong ******)0x0;
    local_4b8 = 0;
    ppppppuStack_4b0 = (ulong ******)0x0;
    local_4a8 = 0;
    uStack_4a0 = 0;
    uVar8 = recovered_20a0540(*(long *)(*(long *)(lVar20 + -0x58) + uVar19 * 8),&local_4d8);
    if ((char)uVar8 == '\0') goto LAB_02061094;
  }
LAB_02061052:
  *(undefined1 *)(lVar20 + -0x77) = 1;
  uVar7 = recovered_20df320(0x22740f0U,*(ulong *)(lVar20 + -0x88),*(ulong *)(lVar20 + -0x80));
  iVar9 = 2;
  if (uVar7 == '\0') {
    context = &local_58;
    pcVar15 = &DAT_020a3f28;
    pcVar21 = str_020ab4fb;
LAB_020606e7:
    pf_varargs_205eb00___(context,pcVar15,pcVar21);
LAB_0206087c:
    iVar9 = 1;
  }
LAB_02060881:
  cVar17 = '\0';
LAB_02060884:
  if (iVar9 != 2) {
    bVar4 = false;
    cVar17 = local_31;
    goto joined_r0x02061716;
  }
  if (cVar17 != '\0') goto LAB_02061656;
  goto LAB_02060076;
LAB_02061094:
  recovered_205ec00(&local_4d8);
  pcVar15 = *(char **)(*(long *)(lVar20 + -0x58) + uVar19 * 8);
LAB_02060867:
  pf_varargs_205eb00__8_(&local_58,pcVar15,str_020a3d85,(ulonglong)pcVar15);
  goto LAB_0206087c;
switchD_020600c4_caseD_0:
  uVar19 = *(ulong *)(lVar20 + -0xa0);
  if (*(ulong *)(lVar20 + -0x98) <= uVar19) {
LAB_02060727:
    DAT_020e60c8 = lVar1 + -1;
    recovered_20de6a0((undefined4 *)(lVar18 + (lVar1 + -1) * 0xa8));
    iVar9 = 2;
    goto LAB_02060881;
  }
  DAT_020e60b8 = uVar19;
  lVar18 = DAT_020e6088;
  local_70 = *(long *)(*(long *)(lVar18 + 0x70) + uVar19 * 8);
  local_78 = uVar19;
  uVar7 = recovered_209c670(local_70,&local_58);
  if (uVar7 == '\0') {
    cVar17 = '\0';
    pf_varargs_205eb00___(&local_78,(char *)0x0,str_020a3b63);
    iVar9 = 1;
    goto LAB_02060884;
  }
  if (local_58 != 0) {
    pcVar15 = (char *)*local_48;
    if (pcVar15 != (char *)0x0) {
      cVar17 = *pcVar15;
      pcVar21 = &DAT_020a3b0c;
      if (cVar17 == '\0') {
LAB_020602ea:
        if (*pcVar21 != '\0') {
          pcVar21 = &DAT_020a3b13;
          if (cVar17 != '\0') goto LAB_02060302;
LAB_020603b7:
          if (*pcVar21 != '\0') goto LAB_020603bc;
        }
      }
      else {
        if (cVar17 != 'e') {
          cVar11 = cVar17 + -0x20;
          if (0x19 < (byte)(cVar17 + 0x9fU)) {
            cVar11 = cVar17;
          }
          if (cVar11 == 'E') goto LAB_02060153;
LAB_020601c4:
          if (cVar17 == 'e') {
LAB_020601e3:
            cVar11 = pcVar15[1];
            pcVar21 = &DAT_020a3b0d;
            if (cVar11 != '\0') {
              if (cVar11 != 'l') {
                cVar12 = cVar11 + -0x20;
                if (0x19 < (byte)(cVar11 + 0x9fU)) {
                  cVar12 = cVar11;
                }
                if (cVar12 != 'L') goto LAB_02060302;
              }
              cVar11 = pcVar15[2];
              pcVar21 = &DAT_020a3b0e;
              if (cVar11 != '\0') {
                if (cVar11 != 's') {
                  cVar12 = cVar11 + -0x20;
                  if (0x19 < (byte)(cVar11 + 0x9fU)) {
                    cVar12 = cVar11;
                  }
                  if (cVar12 != 'S') goto LAB_02060302;
                }
                cVar11 = pcVar15[3];
                pcVar21 = &DAT_020a3b0f;
                if (cVar11 != '\0') {
                  if (cVar11 != 'e') {
                    cVar12 = cVar11 + -0x20;
                    if (0x19 < (byte)(cVar11 + 0x9fU)) {
                      cVar12 = cVar11;
                    }
                    if (cVar12 != 'E') goto LAB_02060302;
                  }
                  cVar11 = pcVar15[4];
                  pcVar21 = &DAT_020a3b10;
                  if (cVar11 != '\0') {
                    if (cVar11 != 'i') {
                      cVar12 = cVar11 + -0x20;
                      if (0x19 < (byte)(cVar11 + 0x9fU)) {
                        cVar12 = cVar11;
                      }
                      if (cVar12 != 'I') goto LAB_02060302;
                    }
                    cVar11 = pcVar15[5];
                    pcVar21 = &DAT_020a3b11;
                    if (cVar11 != '\0') {
                      if (cVar11 != 'f') {
                        cVar12 = cVar11 + -0x20;
                        if (0x19 < (byte)(cVar11 + 0x9fU)) {
                          cVar12 = cVar11;
                        }
                        if (cVar12 != 'F') goto LAB_02060302;
                      }
                      pcVar21 = &DAT_020a3b12;
                      if (pcVar15[6] != '\0') goto LAB_02060302;
                    }
                  }
                }
              }
            }
            goto LAB_020602ea;
          }
          cVar11 = cVar17 + -0x20;
          if (0x19 < (byte)(cVar17 + 0x9fU)) {
            cVar11 = cVar17;
          }
          if (cVar11 == 'E') goto LAB_020601e3;
LAB_02060302:
          if (cVar17 != 'e') {
            cVar11 = cVar17 + -0x20;
            if (0x19 < (byte)(cVar17 + 0x9fU)) {
              cVar11 = cVar17;
            }
            if (cVar11 != 'E') goto LAB_020603bc;
          }
          cVar17 = pcVar15[1];
          pcVar21 = &DAT_020a3b14;
          if (cVar17 != '\0') {
            if (cVar17 != 'l') {
              cVar11 = cVar17 + -0x20;
              if (0x19 < (byte)(cVar17 + 0x9fU)) {
                cVar11 = cVar17;
              }
              if (cVar11 != 'L') goto LAB_020603bc;
            }
            cVar17 = pcVar15[2];
            pcVar21 = &DAT_020a3b15;
            if (cVar17 != '\0') {
              if (cVar17 != 's') {
                cVar11 = cVar17 + -0x20;
                if (0x19 < (byte)(cVar17 + 0x9fU)) {
                  cVar11 = cVar17;
                }
                if (cVar11 != 'S') goto LAB_020603bc;
              }
              cVar17 = pcVar15[3];
              pcVar21 = &DAT_020a3b16;
              if (cVar17 != '\0') {
                if (cVar17 != 'e') {
                  cVar11 = cVar17 + -0x20;
                  if (0x19 < (byte)(cVar17 + 0x9fU)) {
                    cVar11 = cVar17;
                  }
                  if (cVar11 != 'E') goto LAB_020603bc;
                }
                pcVar21 = &DAT_020a3b17;
                if (pcVar15[4] != '\0') goto LAB_020603bc;
              }
            }
          }
          goto LAB_020603b7;
        }
LAB_02060153:
        cVar11 = pcVar15[1];
        pcVar21 = &DAT_020a3b09;
        if (cVar11 != '\0') {
          if (cVar11 != 'n') {
            cVar12 = cVar11 + -0x20;
            if (0x19 < (byte)(cVar11 + 0x9fU)) {
              cVar12 = cVar11;
            }
            if (cVar12 != 'N') goto LAB_020601c4;
          }
          cVar11 = pcVar15[2];
          pcVar21 = &DAT_020a3b0a;
          if (cVar11 != '\0') {
            if (cVar11 != 'd') {
              cVar12 = cVar11 + -0x20;
              if (0x19 < (byte)(cVar11 + 0x9fU)) {
                cVar12 = cVar11;
              }
              if (cVar12 != 'D') goto LAB_020601c4;
            }
            pcVar21 = &DAT_020a3b0b;
            if (pcVar15[3] != '\0') goto LAB_020601c4;
          }
        }
        if (*pcVar21 != '\0') goto LAB_020601c4;
      }
LAB_020603d3:
      uVar19 = 0;
      do {
        recovered_2000bb0((void *)local_48[uVar19]);
        uVar19 = uVar19 + 1;
      } while (uVar19 < local_58);
      goto LAB_020603ef;
    }
LAB_020603bc:
    uVar8 = recovered_209cd00(pcVar15,str_020a3b18);
    if ((char)uVar8 != '\0') goto LAB_020603d3;
    uVar8 = recovered_209cd00(pcVar15,&DAT_020a3dc0);
    if ((char)uVar8 != '\0') {
      local_4d8 = (ulong ******)0x0;
      local_40 = (ulong ******)0x0;
      local_80 = (ulong ******)0x0;
      local_32 = '\0';
      recovered_209cca0(&local_58);
      lVar18 = DAT_020e6088;
      in_R8_00 = &local_40;
      in_R9_00 = &local_80;
      uVar7 = recovered_20e0a10(*(long *)(lVar18 + 0x70),*(ulong *)(lVar18 + 0x78),
                                *(ulong *)(lVar20 + -0xa0),&local_4d8,(ulong *)in_R8_00,
                                (long *)in_R9_00,&local_32);
      iVar9 = 1;
      if (uVar7 != '\0') {
        *(ulong *******)(lVar20 + -0xa0) = local_80;
        iVar9 = 2;
        if (((local_32 == '\x01') && (local_4d8 < local_40)) &&
           (uVar7 = recovered_20df320(0x22740f0U,(ulong)local_4d8,(ulong)local_40), uVar7 == '\0')) {
          context = &local_78;
          pcVar15 = &DAT_020a3dc0;
          pcVar21 = str_020ab3d8;
          goto LAB_020606e7;
        }
      }
      goto LAB_02060881;
    }
    uVar8 = recovered_209cd00(pcVar15,str_020a3e52);
    if ((char)uVar8 != '\0') {
      local_40 = (ulong ******)0x0;
      lVar18 = DAT_020e6088;
      uVar7 = recovered_209d0a0(*(long *)(lVar18 + 0x70),*(ulong *)(lVar18 + 0x78),
                                *(long *)(lVar20 + -0xa0) + 1,(ulong *)&local_40);
      if (uVar7 == '\0') {
        recovered_209cca0(&local_58);
        context = &local_78;
        pcVar15 = &DAT_020a3b08;
        pcVar21 = str_020a3e58;
      }
      else {
        uStack_4d0 = (undefined1 *)0x0;
        local_4c8 = (void *)0x0;
        local_4a8 = local_4a8 & 0xffffffffff000000;
        uStack_4a0 = 0;
        uStack_498 = 0;
        local_490 = 1;
        local_488 = 0;
        uStack_480 = 0;
        local_478 = 0;
        local_470 = 0;
        local_468 = 0;
        uStack_460 = 0;
        local_458 = 0;
        uStack_450 = 0;
        local_448 = 0;
        uStack_440 = 0;
        local_438 = 0;
        local_4d8 = (ulong ******)CONCAT44(PF_PART4(local_4d8, 4),1);
        ppppppuStack_4c0 = *(ulong *******)(lVar20 + -0xa0);
        local_4b8 = (long)ppppppuStack_4c0 + 1;
        ppppppuStack_4b0 = local_40;
        *(ulong *)(lVar20 + -0xa0) = (long)local_40 + 1;
        recovered_209cca0(&local_58);
        uVar7 = recovered_20df7d0(0x22740f0U,(long)&local_4d8);
        iVar9 = 2;
        if (uVar7 != '\0') goto LAB_02060881;
        recovered_20de6a0((undefined4 *)&local_4d8);
        context = &local_78;
        pcVar15 = str_020a3e52;
        pcVar21 = str_020ab401;
      }
      goto LAB_020606e7;
    }
    uVar8 = recovered_209cd00(pcVar15,str_020a3ea6);
    if ((char)uVar8 != '\0') {
      local_40 = (ulong ******)0x0;
      lVar18 = DAT_020e6088;
      uVar7 = recovered_209fcc0(*(long *)(lVar18 + 0x70),*(ulong *)(lVar18 + 0x78),
                                *(long *)(lVar20 + -0xa0) + 1,(ulong *)&local_40);
      if (uVar7 == '\0') {
        recovered_209cca0(&local_58);
        context = &local_78;
        pcVar15 = str_020a3b18;
        pcVar21 = str_020a3ead;
      }
      else {
        uStack_4d0 = (undefined1 *)0x0;
        local_4c8 = (void *)0x0;
        local_4a8 = local_4a8 & 0xffffffffff000000;
        uStack_4a0 = 0;
        uStack_498 = 0;
        local_490 = 1;
        local_488 = 0;
        uStack_480 = 0;
        local_478 = 0;
        local_470 = 0;
        local_468 = 0;
        uStack_460 = 0;
        local_458 = 0;
        uStack_450 = 0;
        local_448 = 0;
        uStack_440 = 0;
        local_438 = 0;
        local_4d8 = (ulong ******)CONCAT44(PF_PART4(local_4d8, 4),2);
        ppppppuStack_4c0 = local_40;
        local_4b8 = *(long *)(lVar20 + -0xa0) + 1;
        ppppppuStack_4b0 = local_40;
        *(ulong *)(lVar20 + -0xa0) = (long)local_40 + 1;
        recovered_209cca0(&local_58);
        uVar7 = recovered_20df7d0(0x22740f0U,(long)&local_4d8);
        iVar9 = 2;
        if (uVar7 != '\0') goto LAB_02060881;
        recovered_20de6a0((undefined4 *)&local_4d8);
        context = &local_78;
        pcVar15 = str_020a3ea6;
        pcVar21 = str_020ab42b;
      }
      goto LAB_020606e7;
    }
    uVar8 = recovered_209cd00(pcVar15,&DAT_020a3f28);
    if ((char)uVar8 != '\0') {
      local_40 = (ulong ******)0x0;
      lVar18 = DAT_020e6088;
      pppppppuVar10 = &local_40;
      uVar7 = recovered_209d0a0(*(long *)(lVar18 + 0x70),*(ulong *)(lVar18 + 0x78),
                                *(long *)(lVar20 + -0xa0) + 1,(ulong *)pppppppuVar10);
      puVar6 = local_48;
      if (uVar7 == '\0') {
        recovered_209cca0(&local_58);
        context = &local_78;
        pcVar15 = &DAT_020a3b08;
        pcVar21 = str_020a3f2c;
      }
      else {
        local_4d8 = (ulong ******)((ulong)local_4d8 & 0xffffffff00000000);
        uStack_4d0 = (undefined1 *)0x0;
        local_4c8 = (void *)0x0;
        ppppppuStack_4c0 = (ulong ******)0x0;
        local_4b8 = 0;
        ppppppuStack_4b0 = (ulong ******)0x0;
        local_4a8 = local_4a8 & 0xffffffffff000000;
        uStack_4a0 = 0;
        uStack_498 = 0;
        local_490 = 1;
        local_488 = 0;
        uStack_480 = 0;
        local_478 = 0;
        local_470 = 0;
        local_468 = 0;
        uStack_460 = 0;
        local_458 = 0;
        uStack_450 = 0;
        local_448 = 0;
        uStack_440 = 0;
        local_438 = 0;
        iVar9 = 4;
        if ((5 < local_58) && (uVar7 = recovered_209cd80((byte *)local_48[1]), uVar7 != '\0')) {
          iVar9 = recovered_2002eb0((char *)puVar6[2],&DAT_020a3f48);
          iVar9 = 4 - (uint)(iVar9 == 0);
        }
        local_4d8 = (ulong ******)CONCAT44(PF_PART4(local_4d8, 4),iVar9);
        ppppppuStack_4c0 = *(ulong *******)(lVar20 + -0xa0);
        local_4b8 = (long)ppppppuStack_4c0 + 1;
        ppppppuStack_4b0 = local_40;
        lVar18 = (long)local_40 + 1;
        if (iVar9 == 3) {
          uVar19 = recovered_20e0fe0((long)&local_78,&local_58,(long)&local_4d8,(ulong)in_R8_00,
                                     (ulong)in_R9_00);
          cVar17 = (char)uVar19;
        }
        else {
          uVar8 = recovered_20e13d0((long)&local_78,&local_58,(long)&local_4d8,
                                    (ulong *)pppppppuVar10,(ulong *)in_R8_00);
          cVar17 = (char)uVar8;
        }
        *(long *)(lVar20 + -0xa0) = lVar18;
        recovered_209cca0(&local_58);
        if (cVar17 == '\0') {
          recovered_20de6a0((undefined4 *)&local_4d8);
          goto LAB_0206087c;
        }
        uVar7 = recovered_20df7d0(0x22740f0U,(long)&local_4d8);
        iVar9 = 2;
        if (uVar7 != '\0') goto LAB_02060881;
        recovered_20de6a0((undefined4 *)&local_4d8);
        context = &local_78;
        pcVar15 = &DAT_020a3f28;
        pcVar21 = str_020ab456;
      }
      goto LAB_020606e7;
    }
    local_40 = *(ulong *******)(lVar20 + -0xa0);
    local_80 = (ulong ******)((ulong)local_80 & 0xffffffff00000000);
    local_4d8 = (ulong ******)0x0;
    uStack_4d0 = (undefined1 *)((ulong)uStack_4d0 & 0xffffffff00000000);
    local_4c8 = (void *)0x0;
    ppppppuStack_4c0 = (ulong ******)0x0;
    local_4b8 = 0;
    ppppppuStack_4b0 = (ulong ******)0x0;
    local_4a8 = 0;
    uStack_4a0 = 0;
    recovered_209cca0(&local_58);
    lVar18 = DAT_020e6088;
    pppppppuVar10 = &local_40;
    in_R8_00 = &local_80;
    in_R9_00 = (ulong *******)&local_4d8;
    uVar7 = recovered_20e16d0(*(long *)(lVar18 + 0x70),*(ulong *)(lVar18 + 0x78),
                              *(ulong *)(lVar20 + -0xa0),(ulong *)pppppppuVar10,(int *)in_R8_00,
                              in_R9_00);
    if (uVar7 != '\0') {
      *(ulong *******)(lVar20 + -0xa0) = local_40;
      if ((int)local_80 == 2) {
        recovered_205ec00(&local_d8);
        local_a8 = local_4a8;
        uStack_a0 = uStack_4a0;
        local_b8 = local_4b8;
        ppppppuStack_b0 = ppppppuStack_4b0;
        local_c8 = local_4c8;
        ppppppuStack_c0 = ppppppuStack_4c0;
        local_d8 = local_4d8;
        puStack_d0 = uStack_4d0;
        local_4d8 = (ulong ******)0x0;
        uStack_4d0 = (undefined1 *)((ulong)uStack_4d0 & 0xffffffff00000000);
        local_4c8 = (void *)0x0;
        ppppppuStack_4c0 = (ulong ******)0x0;
        local_4b8 = 0;
        ppppppuStack_4b0 = (ulong ******)0x0;
        local_4a8 = 0;
        uStack_4a0 = 0;
        recovered_20de640(0x22740f0U);
        cVar17 = '\x01';
        local_5c = 2;
        iVar9 = 2;
      }
      else {
        recovered_205ec00(&local_4d8);
        if ((int)local_80 == 1) {
          uVar8 = recovered_20e1850(0x22740f0U,(int *)&local_78,in_RCX,(long)pppppppuVar10,in_R8_00);
          cVar17 = (char)uVar8;
          iVar9 = (uVar8 & 0xff) + 1;
        }
        else {
          iVar9 = 2;
          cVar17 = '\x01';
        }
      }
      goto LAB_02060884;
    }
    recovered_205ec00(&local_4d8);
    goto LAB_0206087c;
  }
LAB_020603ef:
  recovered_2000bb0(local_48);
  local_58 = 0;
  pppppppuStack_50 = (ulong *******)0x0;
  local_48 = (undefined8 *)0x0;
  *(long *)(lVar20 + -0xa0) = *(long *)(lVar20 + -0xa0) + 1;
  iVar9 = 2;
  goto LAB_02060881;
}

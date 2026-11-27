/* Recovered Type1 virtual ABI; Pooka's Free Software License. */
#include "functions.h"
#undef DAT_02127e20
#define DAT_02127e20 (*(uint8_t volatile *)(0x2127e20U))
#undef DAT_021310b8
#define DAT_021310b8 (*(uint8_t volatile *)(0x21310b8U))
#undef DAT_025ebb18
#define DAT_025ebb18 (*(uint64_t volatile *)(0x25ebb18U))
#undef DAT_025ebb30
#define DAT_025ebb30 (*(uint8_t volatile *)(0x25ebb30U))
#undef LAB_020908df
#define LAB_020908df (*(uint8_t *)(0x20908dfU))
#define local_1b8 (*(uchar * *)(pf_stack_frame + 32))
#define local_1a8 (*(void * *)(pf_stack_frame + 48))
#define pcStack_1b0 (*(char * *)(pf_stack_frame + 40))
#define local_198 (*(undefined8 *)(pf_stack_frame + 64))
#define local_188 (*(undefined8 *)(pf_stack_frame + 80))
#define uStack_1a0 (*(undefined8 *)(pf_stack_frame + 56))
#define local_178 (*(undefined2 *)(pf_stack_frame + 96))
#define local_170 (*(undefined8 *)(pf_stack_frame + 104))
#define pvStack_190 (*(void * *)(pf_stack_frame + 72))
#define local_160 (*(undefined8 *)(pf_stack_frame + 120))
#define local_150 (*(undefined8 *)(pf_stack_frame + 136))
#define uStack_180 (*(undefined8 *)(pf_stack_frame + 88))
#define local_140 (*(undefined8 *)(pf_stack_frame + 152))
#define uStack_168 (*(undefined8 *)(pf_stack_frame + 112))
#define local_130 (*(undefined8 *)(pf_stack_frame + 168))
#define local_120 (*(undefined8 *)(pf_stack_frame + 184))
#define uStack_158 (*(undefined8 *)(pf_stack_frame + 128))
#define local_110 (*(double *)(pf_stack_frame + 200))
#define local_108 (*(undefined2 *)(pf_stack_frame + 208))
#define uStack_148 (*(undefined8 *)(pf_stack_frame + 144))
#define local_106 (*(undefined1 *)(pf_stack_frame + 210))
#define local_100 (*(undefined8 *)(pf_stack_frame + 216))
#define uStack_138 (*(undefined8 *)(pf_stack_frame + 160))
#define local_f8 (*(undefined4 *)(pf_stack_frame + 224))
#define local_e0 (*(code * *)(pf_stack_frame + 248))
#define uStack_128 (*(undefined8 *)(pf_stack_frame + 176))
#define local_d8 (*(undefined * *)(pf_stack_frame + 256))
#define local_d0 (*(undefined1 * *)(pf_stack_frame + 264))
#define uStack_118 (*(undefined8 *)(pf_stack_frame + 192))
#define local_c8 (*(undefined1 * *)(pf_stack_frame + 272))
#define local_c0 (*(undefined1 * *)(pf_stack_frame + 280))
#define local_a8 (*(ulong *)(pf_stack_frame + 304))
#define local_a0 (*(ulong *)(pf_stack_frame + 312))
#define local_98 (*(ulong *)(pf_stack_frame + 320))
#define local_90 (*(long *)(pf_stack_frame + 328))
#define local_88 (*(ulong *)(pf_stack_frame + 336))
#define local_80 (*(ulong *)(pf_stack_frame + 344))
#define local_74 (*(uint *)(pf_stack_frame + 356))
#define local_70 (*(int * *)(pf_stack_frame + 360))
#define local_68 (*(ulong *)(pf_stack_frame + 368))
#define local_60 (*(ulong *)(pf_stack_frame + 376))
#define local_58 (*(char * *)(pf_stack_frame + 384))
#define local_50 (*(char * *)(pf_stack_frame + 392))
#define local_48 (*(void * *)(pf_stack_frame + 400))
#define local_40 (*(void * *)(pf_stack_frame + 408))
#define local_38 (*(int * *)(pf_stack_frame + 416))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x208ffe0
 */

int * recovered_208ffe0(double scale,int *out,uchar *backend,uint glyph)

{
  unsigned char pf_stack_frame[504] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  uint uVar10;
  void *pvVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  char *pcVar15;
  ulong uVar16;
  int iVar17;
  char *pcVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  uchar *puVar23;
  ulong uVar24;
  long lVar25;

  local_d0 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 472) + -8);
  local_c0 = (undefined1 *)&local_1b8;
  local_e0 = recovered_20721d0;
  local_d8 = &DAT_021310b8;
  local_c8 = &LAB_020908df;
  local_50 = (char *)(uintptr_t)pf_double_bits(scale);
  local_38 = out;
  recovered_2072870(&local_100);
  if ((glyph < 0x100) && (*(long *)(backend + (ulong)glyph * 0x18 + 0x30) != 0)) {
    puVar23 = backend + (ulong)glyph * 0x18 + 0x28;
  }
  else {
    puVar23 = (uchar *)&DAT_025ebb18;
    cVar3 = DAT_025ebb30;
    if (cVar3 == '\0') {
      local_f8 = 0xffffffff;
      recovered_2124d70();
    }
  }
  uVar20 = 0x14650fb0739d0383;
  if (*(long *)(backend + 0x1860) == 0) {
    lVar5 = *(long *)(backend + 0x1840);
  }
  else {
    puVar4 = *(undefined1 **)puVar23;
    uVar14 = *(ulong *)(puVar23 + 8);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_02127e20;
    }
    uVar19 = 0x14650fb0739d0383;
    if (uVar14 != 0) {
      uVar16 = (ulong)((uint)uVar14 & 3);
      if (uVar14 < 4) {
        uVar8 = 0;
        uVar19 = 0x14650fb0739d0383;
      }
      else {
        uVar8 = 0;
        uVar19 = 0x14650fb0739d0383;
        do {
          uVar19 = ((ulong)(byte)puVar4[uVar8 + 3] ^
                   ((ulong)(byte)puVar4[uVar8 + 2] ^
                   ((ulong)(byte)puVar4[uVar8 + 1] ^ ((byte)puVar4[uVar8] ^ uVar19) * 0x100000001b3)
                   * 0x100000001b3) * 0x100000001b3) * 0x100000001b3;
          uVar8 = uVar8 + 4;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar8);
      }
      if (uVar16 != 0) {
        uVar24 = 0;
        do {
          uVar19 = ((byte)puVar4[uVar24 + uVar8] ^ uVar19) * 0x100000001b3;
          uVar24 = uVar24 + 1;
        } while (uVar16 != uVar24);
      }
    }
    uVar19 = *(long *)(backend + 0x1860) - 1U & uVar19;
    lVar5 = *(long *)(backend + 0x1840);
    lVar25 = *(long *)(backend + 0x1858);
    while (uVar19 = *(ulong *)(lVar25 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar19 * 8), uVar19 != 0xffffffffffffffff) {
      lVar25 = (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar19 * 0x30;
      puVar13 = *(undefined1 **)(lVar5 + lVar25);
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &DAT_02127e20;
      }
      if (*(ulong *)(lVar5 + 8 + lVar25) == uVar14) {
        lVar25 = lVar25 + lVar5;
        if (uVar14 == 0) goto LAB_020901db;
        uVar16 = 0;
        while (puVar13[uVar16] == puVar4[uVar16]) {
          uVar16 = uVar16 + 1;
          if (uVar14 == uVar16) {
            if (uVar19 != 0xffffffffffffffff) goto LAB_020901db;
            goto LAB_020901c9;
          }
        }
      }
      lVar25 = *(long *)(backend + 0x1870);
    }
  }
LAB_020901c9:
  lVar25 = *(long *)(backend + 0x1848) * 0x30 + lVar5;
LAB_020901db:
  local_1b8 = (uchar *)0x0;
  pcStack_1b0 = (char *)0x0;
  local_1a8 = (void *)0x0;
  local_f8 = 0xffffffff;
  recovered_2090a00((long *)&local_1b8,0x2127df7,7);
  if (*(long *)(backend + 0x1860) == 0) {
    lVar5 = *(long *)(backend + 0x1840);
  }
  else {
    puVar23 = local_1b8;
    if (local_1b8 == (uchar *)0x0) {
      puVar23 = &DAT_02127e20;
    }
    if (pcStack_1b0 == (char *)0x0) {
      uVar20 = 0x14650fb0739d0383;
    }
    else {
      uVar14 = (ulong)((uint)pcStack_1b0 & 3);
      if (pcStack_1b0 < (char *)0x4) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          uVar20 = ((ulong)puVar23[uVar19 + 3] ^
                   ((ulong)puVar23[uVar19 + 2] ^
                   ((ulong)puVar23[uVar19 + 1] ^ (puVar23[uVar19] ^ uVar20) * 0x100000001b3) *
                   0x100000001b3) * 0x100000001b3) * 0x100000001b3;
          uVar19 = uVar19 + 4;
        } while (((ulong)pcStack_1b0 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar14 != 0) {
        uVar16 = 0;
        do {
          uVar20 = (puVar23[uVar16 + uVar19] ^ uVar20) * 0x100000001b3;
          uVar16 = uVar16 + 1;
        } while (uVar14 != uVar16);
      }
    }
    uVar20 = *(long *)(backend + 0x1860) - 1U & uVar20;
    lVar5 = *(long *)(backend + 0x1840);
    lVar21 = *(long *)(backend + 0x1858);
    while (uVar20 = *(ulong *)(lVar21 + uVar20 * 8), uVar20 != 0xffffffffffffffff) {
      lVar21 = uVar20 * 0x30;
      puVar4 = *(undefined1 **)(lVar5 + lVar21);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_02127e20;
      }
      if (*(char **)(lVar5 + 8 + lVar21) == pcStack_1b0) {
        lVar21 = lVar21 + lVar5;
        if (pcStack_1b0 == (char *)0x0) goto LAB_0209036b;
        pcVar18 = (char *)0x0;
        while (pcVar18[(long)puVar4] == puVar23[(long)pcVar18]) {
          pcVar18 = pcVar18 + 1;
          if (pcStack_1b0 == pcVar18) {
            if (uVar20 != 0xffffffffffffffff) goto LAB_0209036b;
            goto LAB_02090359;
          }
        }
      }
      lVar21 = *(long *)(backend + 0x1870);
    }
  }
LAB_02090359:
  lVar21 = *(long *)(backend + 0x1848) * 0x30 + lVar5;
LAB_0209036b:
  recovered_2072280(local_1b8);
  lVar5 = *(long *)(backend + 0x1848) * 0x30 + *(long *)(backend + 0x1840);
  if ((lVar25 == lVar5) && (lVar21 == lVar5)) {
    local_38[8] = 0;
    local_38[9] = 0;
    local_38[10] = 0;
    local_38[0xb] = 0;
    local_38[4] = 0;
    local_38[5] = 0;
    local_38[6] = 0;
    local_38[7] = 0;
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    goto LAB_020908aa;
  }
  if (lVar25 != lVar5) {
    lVar21 = lVar25;
  }
  pcStack_1b0 = local_50;
  local_1a8 = (void *)0x0;
  uStack_1a0 = 0;
  local_198 = 0;
  pvStack_190 = (void *)0x0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0.0;
  local_108 = 0;
  local_106 = 0;
  local_f8 = 1;
  local_1b8 = backend;
  local_70 = out;
  uVar20 = recovered_2091c40((long *)&local_1b8,(long *)(lVar21 + 0x18),0);
  if ((char)uVar20 != '\0') {
    local_f8 = 2;
    recovered_208c060(local_110,local_38,(long *)&pvStack_190);
    uVar22 = local_38[2];
    uVar20 = (ulong)(int)uVar22;
    if (0 < (long)uVar20) {
      uVar2 = local_38[3];
      uVar14 = (ulong)uVar2;
      if ((0 < (int)uVar2) && (*(long *)(local_38 + 8) != 0)) {
        local_58 = *(char **)(local_38 + 6);
        pcVar6 = local_58 + (uVar20 - 1);
        uVar16 = 0;
        uVar19 = uVar14;
        pcVar18 = local_58;
        do {
          uVar8 = 0;
          do {
            if (pcVar18[uVar8] != '\0') {
              uVar10 = (uint)uVar16;
              if (uVar2 == uVar10) goto LAB_0209053e;
              local_48 = (void *)(ulong)(uVar2 - uVar10);
              if (uVar2 - uVar10 == 0 || (int)uVar2 < (int)uVar10) {
                local_48 = (void *)0x0;
                goto LAB_020905a4;
              }
              pcVar9 = local_58 + (uVar14 - 1) * uVar20;
              pvVar11 = (void *)0x0;
              goto LAB_0209057c;
            }
            uVar8 = uVar8 + 1;
          } while (uVar20 != uVar8);
          uVar16 = uVar16 + 1;
          uVar19 = (ulong)((int)uVar19 - 1);
          pcVar18 = pcVar18 + uVar20;
          pcVar6 = pcVar6 + uVar20;
        } while (uVar16 != uVar14);
        goto LAB_0209053e;
      }
    }
    goto LAB_0209086b;
  }
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  *(double *)(local_38 + 4) = local_110;
LAB_0209087c:
  out = local_70;
  local_188 = 0;
  recovered_2072280(pvStack_190);
  uStack_1a0 = 0;
  recovered_2072280(local_1a8);
LAB_020908aa:
  recovered_2072890(&local_100);
  return out;
LAB_0209057c:
  do {
    uVar14 = 0;
    do {
      if (pcVar9[uVar14] != '\0') {
        local_48 = (void *)((ulong)pvVar11 & 0xffffffff);
        goto LAB_020905a4;
      }
      uVar14 = uVar14 + 1;
    } while (uVar20 != uVar14);
    pvVar11 = (void *)((long)pvVar11 + 1);
    pcVar9 = pcVar9 + -uVar20;
  } while (pvVar11 != local_48);
LAB_020905a4:
  iVar7 = uVar2 - (int)local_48;
  local_60 = 0;
  pcVar9 = pcVar18;
  do {
    pcVar15 = pcVar9;
    uVar14 = uVar16 & 0xffffffff;
    if ((int)uVar10 < iVar7) {
      do {
        if (*pcVar15 != '\0') goto LAB_020905f6;
        uVar14 = uVar14 + 1;
        pcVar15 = pcVar15 + uVar20;
      } while ((long)uVar14 < (long)iVar7);
    }
    local_60 = local_60 + 1;
    pcVar9 = pcVar9 + 1;
  } while (local_60 != uVar20);
  local_60 = (ulong)uVar22;
LAB_020905f6:
  iVar17 = (int)local_60;
  uVar12 = uVar22 - iVar17;
  if (uVar12 == 0 || (int)uVar22 < iVar17) {
    uVar12 = 0;
  }
  else {
    uVar14 = 0;
    do {
      pcVar9 = pcVar6;
      uVar8 = uVar16 & 0xffffffff;
      if ((int)uVar10 < iVar7) {
        do {
          if (*pcVar9 != '\0') {
            uVar12 = (uint)uVar14;
            goto LAB_02090652;
          }
          uVar8 = uVar8 + 1;
          pcVar9 = pcVar9 + uVar20;
        } while ((long)uVar8 < (long)iVar7);
      }
      uVar14 = uVar14 + 1;
      pcVar6 = pcVar6 + -1;
    } while (uVar14 != uVar12);
  }
LAB_02090652:
  uVar10 = (uVar2 - (int)local_48) - uVar10;
  local_68 = uVar19;
  local_50 = pcVar18;
  if (((int)uVar10 < 1) || (uVar22 = uVar22 - (uVar12 + iVar17), (int)uVar22 < 1)) {
LAB_0209053e:
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    local_38[8] = 0;
    local_38[9] = 0;
  }
  else {
    local_80 = (ulong)uVar22;
    local_90 = uVar10 * local_80;
    local_f8 = 3;
    local_a8 = uVar20;
    local_a0 = (ulong)uVar10;
    local_98 = uVar16;
    local_74 = uVar22;
    local_40 = recovered_2072220(local_90);
    pcVar18 = local_50;
    uVar14 = 0;
    recovered_2072280((void *)0x0);
    uVar19 = (ulong)(uint)((int)local_68 - (int)local_48);
    uVar20 = local_80 * uVar19;
    local_88 = uVar20 + (uVar20 == 0);
    if (uVar20 < 8) {
LAB_0209078d:
      do {
        *(undefined1 *)((long)local_40 + uVar14) = 0;
        uVar14 = uVar14 + 1;
      } while (local_80 * uVar19 + (ulong)(local_80 * uVar19 == 0) != uVar14);
    }
    else if (uVar20 < 0x20) {
      uVar16 = 0;
LAB_0209074a:
      uVar14 = local_88 & 0x7ffffffffffffff8;
      do {
        *(undefined8 *)((long)local_40 + uVar16) = 0;
        uVar16 = uVar16 + 8;
      } while ((local_80 * uVar19 + (ulong)(local_80 * uVar19 == 0) & 0x7ffffffffffffff8) != uVar16)
      ;
      if (uVar20 != uVar14) goto LAB_0209078d;
    }
    else {
      uVar14 = local_88 & 0x7fffffffffffffe0;
      uVar16 = 0;
      do {
        *(undefined8 *)((long)local_40 + uVar16) = 0;
        ((undefined8 *)((long)local_40 + uVar16))[1] = 0;
        puVar1 = (undefined8 *)((long)local_40 + uVar16 + 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar16 = uVar16 + 0x20;
      } while ((local_80 * uVar19 + (ulong)(local_80 * uVar19 == 0) & 0x7fffffffffffffe0) != uVar16)
      ;
      if (uVar20 != uVar14) {
        uVar16 = uVar14;
        if ((local_88 & 0x18) == 0) goto LAB_0209078d;
        goto LAB_0209074a;
      }
    }
    pcVar18 = pcVar18 + (local_60 & 0xffffffff);
    pvVar11 = local_40;
    do {
      local_f8 = 4;
      local_68 = uVar19;
      local_50 = pcVar18;
      local_48 = pvVar11;
      recovered_2001870(pvVar11,pcVar18,local_80);
      pvVar11 = (void *)((long)local_48 + local_80);
      pcVar18 = local_50 + local_a8;
      uVar19 = local_68 - 1;
    } while (uVar19 != 0);
    *local_38 = (int)local_60 + *local_38;
    local_38[1] = local_38[1] - (int)local_98;
    local_38[2] = local_74;
    local_38[3] = (int)local_a0;
    recovered_2072280(local_58);
    *(void **)(local_38 + 6) = local_40;
    *(ulong *)(local_38 + 8) = local_88;
    *(long *)(local_38 + 10) = local_90;
    recovered_2072280((void *)0x0);
  }
LAB_0209086b:
  *(double *)(local_38 + 4) = local_110;
  goto LAB_0209087c;
}

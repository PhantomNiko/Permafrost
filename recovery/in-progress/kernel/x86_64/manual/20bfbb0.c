/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a52b0 (*(uint8_t *)(0x20f5a50U))
#define lStack_68 (*(long *)(frame + 88))
#define lStack_a0 (*(long *)(frame + 32))
#define local_38 (*(char * *)(frame + 136))
#define local_40 (*(ulong *)(frame + 128))
#define local_41 (*(byte *)(frame + 127))
#define local_48 (*(uint *)(frame + 120))
#define local_50 (*(ulonglong *)(frame + 112))
#define local_60 (*(ulong *)(frame + 96))
#define local_70 (*(long *)(frame + 80))
#define local_80 (*(ulong *)(frame + 64))
#define local_a8 (*(ushort *)(frame + 24))
#define pvStack_78 (*(void * *)(frame + 72))
#define pvStack_90 (*(void * *)(frame + 48))
#define str_020a9a0f (*(char (*)[1])(0x20faf86U))
#define str_020a9a31 (*(char (*)[1])(0x20fafa8U))
#define str_020a9a52 (*(char (*)[1])(0x20fafc9U))
#define str_020a9a8c (*(char (*)[1])(0x20fb003U))
#define str_020a9abf (*(char (*)[1])(0x20fb036U))
#define str_020a9ae4 (*(char (*)[1])(0x20fb05bU))
#define str_020a9b19 (*(char (*)[1])(0x20fb090U))
#define str_020a9b47 (*(char (*)[1])(0x20fb0beU))
#define str_020a9b74 (*(char (*)[1])(0x20fb0ebU))
#define str_020a9ba2 (*(char (*)[1])(0x20fb119U))
#define str_020a9bce (*(char (*)[1])(0x20fb145U))
#define str_020a9c03 (*(char (*)[1])(0x20fb17aU))
#define str_020a9c31 (*(char (*)[1])(0x20fb1a8U))
#define str_020a9c60 (*(char (*)[1])(0x20fb1d7U))
#define str_020a9c88 (*(char (*)[1])(0x20fb1ffU))
#define str_020a9cb1 (*(char (*)[1])(0x20fb228U))
#define str_020a9ce1 (*(char (*)[1])(0x20fb258U))
#define str_020a9d0f (*(char (*)[1])(0x20fb286U))
#define uStack_58 (*(ulonglong *)(frame + 104))
#define uStack_88 (*(ulong *)(frame + 56))
#define uStack_98 (*(ulong *)(frame + 40))
#define uStack_a6 (*(undefined6 *)(frame + 26))
uint recovered_20bfbb0(long param_1,ulong param_2,undefined8 *param_3,char *param_4,ulong param_5)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  uchar uVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  ulonglong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  char *format;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  bool bVar22;

  lStack_a0 = 0;
  uStack_98 = 0;
  pvStack_90 = (void *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  pvStack_78 = (void *)0x0;
  local_70 = 0;
  lStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (param_3 == (undefined8 *)0x0 || param_1 == 0) {
    return 0;
  }
  if ((param_2 < 6) || (iVar5 = recovered_2002a00((void *)param_1,&DAT_020a52b0,4), iVar5 != 0)) {
    pf_varargs_20039e0___(param_4,param_5,str_020a9a0f);
    return 0;
  }
  local_a8 = *(ushort *)(param_1 + 4);
  uVar14 = (uint)local_a8;
  local_40 = param_5;
  local_38 = param_4;
  if ((6 < uVar14) || ((0x72U >> (uVar14 & 0x1f) & 1) == 0)) {
    pf_varargs_20039e0__4_(param_4,param_5,str_020a9a31,uVar14);
    goto LAB_02081ead;
  }
  if (local_a8 < 4) {
    if (0xd < param_2) {
      uVar14 = *(uint *)(param_1 + 6);
      local_48 = *(uint *)(param_1 + 10);
      uVar9 = 0xe;
      uVar15 = param_5;
      uVar21 = uVar9;
      if (uVar14 != 0) {
        lVar13 = 0;
        bVar22 = true;
        uVar19 = 0;
        do {
          uVar18 = uStack_98;
          uVar21 = uVar9 + 4;
          if (param_2 < uVar21) {
            format = str_020a9cb1;
            goto LAB_02081ea6;
          }
          uVar15 = (ulong)*(uint *)(param_1 + uVar9);
          uVar9 = uVar21 + uVar15;
          if (param_2 < uVar9) {
            format = str_020a9ce1;
            goto LAB_02081ea6;
          }
          uVar6 = lVar13 + 1;
          local_41 = bVar22;
          if (uStack_98 < uVar6) {
            uVar20 = uStack_98;
            if (uStack_98 == 0) {
              uVar20 = 8;
            }
            for (; uVar20 < uVar6; uVar20 = uVar20 * 2) {
              if ((long)uVar20 < 0) {
                uVar20 = uVar6;
                break;
              }
            }
            pvVar7 = recovered_2000d40(pvStack_90,uVar20 * 8);
            if (pvVar7 != (void *)0x0) {
              uVar6 = uVar20 - uVar18;
              if (uVar18 <= uVar20 && uVar6 != 0) {
                uVar17 = uVar18;
                if (3 < uVar6) {
                  uVar12 = uVar6 & 0xfffffffffffffffc;
                  uVar17 = uVar18 + uVar12;
                  uVar16 = 0;
                  do {
                    puVar1 = (undefined8 *)((long)pvVar7 + uVar16 * 8 + uVar18 * 8);
                    *puVar1 = 0;
                    puVar1[1] = 0;
                    puVar1 = (undefined8 *)((long)pvVar7 + uVar16 * 8 + uVar18 * 8 + 0x10);
                    *puVar1 = 0;
                    puVar1[1] = 0;
                    uVar16 = uVar16 + 4;
                  } while (uVar12 != uVar16);
                  if (uVar6 == uVar12) goto LAB_02081b00;
                }
                do {
                  *(undefined8 *)((long)pvVar7 + uVar17 * 8) = 0;
                  uVar17 = uVar17 + 1;
                } while (uVar20 != uVar17);
              }
LAB_02081b00:
              uStack_98 = uVar20;
              pvStack_90 = pvVar7;
              goto LAB_02081b0e;
            }
LAB_02081bbe:
            uVar15 = 0;
            pf_varargs_20039e0___(local_38,local_40,str_020a9abf);
            recovered_20c0290(&local_a8);
            if ((local_41 & 1) != 0) {
              return 0;
            }
            break;
          }
LAB_02081b0e:
          pvVar7 = recovered_2000ad0(uVar15 + 1);
          if (pvVar7 == (void *)0x0) goto LAB_02081bbe;
          if (uVar15 != 0) {
            recovered_2001410(pvVar7,(void *)(uVar21 + param_1),uVar15);
          }
          *(undefined1 *)((long)pvVar7 + uVar15) = 0;
          lVar13 = lStack_a0 + 1;
          *(void **)((long)pvStack_90 + lStack_a0 * 8) = pvVar7;
          uVar19 = uVar19 + 1;
          bVar22 = uVar19 < uVar14;
          uVar21 = uVar9;
          lStack_a0 = lVar13;
        } while (uVar19 != uVar14);
      }
      if (local_48 != 0) {
        uVar15 = 0;
        do {
          if (param_2 < uVar21 + 0xc) {
            format = str_020a9d0f;
            goto LAB_02081ea6;
          }
          uVar3 = *(undefined1 *)(param_1 + uVar21);
          uVar2 = *(undefined8 *)(param_1 + 4 + uVar21);
          uVar9 = uStack_88 + 1;
          if (local_80 < uVar9) {
            uVar18 = local_80;
            if (local_80 == 0) {
              uVar18 = 0x10;
            }
            for (; uVar18 < uVar9; uVar18 = uVar18 * 2) {
              if ((long)uVar18 < 0) {
                uVar18 = uVar9;
                break;
              }
            }
            pvVar7 = recovered_2000d40(pvStack_78,uVar18 * 0xc);
            if (pvVar7 == (void *)0x0) goto LAB_02081e95;
            uVar9 = uStack_88 + 1;
            local_80 = uVar18;
            pvStack_78 = pvVar7;
          }
          *(undefined1 *)((long)pvStack_78 + uStack_88 * 0xc) = uVar3;
          *(undefined8 *)((long)pvStack_78 + uStack_88 * 0xc + 4) = uVar2;
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulong)uVar14;
          uVar21 = uVar21 + 0xc;
          uStack_88 = uVar9;
        } while (uVar14 != local_48);
      }
      param_3[10] = uStack_58;
      param_3[0xb] = local_50;
      param_3[8] = lStack_68;
      param_3[9] = local_60;
      param_3[6] = pvStack_78;
      param_3[7] = local_70;
      param_3[4] = uStack_88;
      param_3[5] = local_80;
      param_3[2] = uStack_98;
      param_3[3] = pvStack_90;
      *param_3 = CONCAT62(uStack_a6,local_a8);
      param_3[1] = lStack_a0;
      goto LAB_02081d10;
    }
    format = str_020a9c88;
  }
  else if (param_2 < 10) {
    format = str_020a9a52;
  }
  else {
    uVar15 = (ulong)*(uint *)(param_1 + 6);
    uVar21 = uVar15 + 10;
    if (param_2 < uVar21) {
      format = str_020a9a8c;
    }
    else {
      uStack_58 = recovered_2096310(param_1 + 10,uVar15);
      if (uStack_58 == 0 && uVar15 != 0) {
LAB_02081e95:
        format = str_020a9abf;
      }
      else if (uVar14 == 4) {
LAB_02081ba3:
        uVar9 = uVar21 + 4;
        if (uVar9 <= param_2) {
          iVar5 = *(int *)(param_1 + uVar21);
          if (iVar5 != 0) {
            lVar13 = 0;
            iVar11 = 0;
            do {
              uVar15 = uVar9 + 4;
              if (param_2 < uVar15) {
                format = str_020a9b74;
                goto LAB_02081ea6;
              }
              uVar14 = *(uint *)(param_1 + uVar9);
              uVar21 = uVar15 + uVar14;
              if (param_2 < uVar21) {
                format = str_020a9ba2;
                goto LAB_02081ea6;
              }
              uVar4 = recovered_20961c0(&local_70,&local_60,lVar13 + 1);
              if (uVar4 == '\0') goto LAB_02081e95;
              uVar15 = uVar15 + param_1;
              uVar8 = recovered_2096310(uVar15,(ulong)uVar14);
              *(ulonglong *)(local_70 + lStack_68 * 8) = uVar8;
              if (uVar8 == 0) goto LAB_02081e95;
              lVar13 = lStack_68 + 1;
              lStack_68 = lVar13;
              if ((5 < local_a8) && (uVar21 = uVar21 + 4, param_2 < uVar21)) {
                format = str_020a9bce;
                goto LAB_02081ea6;
              }
              uVar9 = uVar21 + 4;
              if (param_2 < uVar9) {
                format = str_020a9c03;
                goto LAB_02081ea6;
              }
              for (iVar10 = *(int *)(param_1 + uVar21); iVar10 != 0; iVar10 = iVar10 + -1) {
                if (param_2 < uVar9 + 4) {
                  format = str_020a9c31;
                  goto LAB_02081ea6;
                }
                uVar9 = uVar9 + 4 + (ulong)*(uint *)(param_1 + uVar9);
                if (param_2 < uVar9) {
                  format = str_020a9c60;
                  goto LAB_02081ea6;
                }
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 != iVar5);
          }
          param_3[10] = uStack_58;
          param_3[0xb] = local_50;
          param_3[8] = lStack_68;
          param_3[9] = local_60;
          param_3[6] = pvStack_78;
          param_3[7] = local_70;
          param_3[4] = uStack_88;
          param_3[5] = local_80;
          param_3[2] = uStack_98;
          param_3[3] = pvStack_90;
          *param_3 = CONCAT62(uStack_a6,local_a8);
          param_3[1] = lStack_a0;
LAB_02081d10:
          return (uint)CONCAT71((int7)(uVar15 >> 8),1);
        }
        format = str_020a9b47;
      }
      else {
        uVar15 = uVar15 + 0xe;
        if (param_2 < uVar15) {
          format = str_020a9ae4;
        }
        else {
          uVar9 = (ulong)*(uint *)(param_1 + uVar21);
          uVar21 = uVar15 + uVar9;
          if (param_2 < uVar21) {
            format = str_020a9b19;
          }
          else {
            uVar15 = uVar15 + param_1;
            local_50 = recovered_2096310(uVar15,uVar9);
            if ((uVar9 == 0) || (local_50 != 0)) goto LAB_02081ba3;
            format = str_020a9abf;
          }
        }
      }
    }
  }
LAB_02081ea6:
  pf_varargs_20039e0___(local_38,local_40,format);
LAB_02081ead:
  recovered_20c0290(&local_a8);
  return 0;
}

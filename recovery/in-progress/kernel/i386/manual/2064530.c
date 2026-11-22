/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_00000004 (*(uint8_t *)(0x4U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5f8c (*(uint8_t *)(0x20c5f8cU))
#define str_020c5bb8 (*(char (*)[1])(0x20c5bb8U))
#define str_020c7d29 (*(char (*)[1])(0x20c7d29U))
#define str_020ca777 (*(char (*)[1])(0x20ca777U))
#define str_020ca799 (*(char (*)[1])(0x20ca799U))
#define str_020ca7c6 (*(char (*)[1])(0x20ca7c6U))
#define str_020ca7ff (*(char (*)[1])(0x20ca7ffU))
#define str_020ca823 (*(char (*)[1])(0x20ca823U))
#define str_020ca82c (*(char (*)[1])(0x20ca82cU))
#define str_020ca837 (*(char (*)[1])(0x20ca837U))
#define str_020ca844 (*(char (*)[1])(0x20ca844U))
#define str_020ca850 (*(char (*)[1])(0x20ca850U))
#define str_020ca85b (*(char (*)[1])(0x20ca85bU))
#define str_020ca868 (*(char (*)[1])(0x20ca868U))
#define str_020ca883 (*(char (*)[1])(0x20ca883U))
#define str_020ca89f (*(char (*)[1])(0x20ca89fU))
#define str_020ca8bc (*(char (*)[1])(0x20ca8bcU))
#define str_020ca8d9 (*(char (*)[1])(0x20ca8d9U))
#define str_020ca8f6 (*(char (*)[1])(0x20ca8f6U))
#define str_020ca914 (*(char (*)[1])(0x20ca914U))
#define str_020ca927 (*(char (*)[1])(0x20ca927U))
#define str_020ca936 (*(char (*)[1])(0x20ca936U))
#define str_020ca944 (*(char (*)[1])(0x20ca944U))
#define str_020ca955 (*(char (*)[1])(0x20ca955U))
#define str_020ca966 (*(char (*)[1])(0x20ca966U))
#define str_020ca97a (*(char (*)[1])(0x20ca97aU))
#define str_020ca98b (*(char (*)[1])(0x20ca98bU))
#define str_020ca99c (*(char (*)[1])(0x20ca99cU))
#define str_020ca9aa (*(char (*)[1])(0x20ca9aaU))
#define str_020ca9b9 (*(char (*)[1])(0x20ca9b9U))
#define str_020ca9c5 (*(char (*)[1])(0x20ca9c5U))
#define str_020ca9d2 (*(char (*)[1])(0x20ca9d2U))
#define str_020caa06 (*(char (*)[1])(0x20caa06U))
#define str_020caa2c (*(char (*)[1])(0x20caa2cU))
#define str_020caa53 (*(char (*)[1])(0x20caa53U))
#define str_020caa80 (*(char (*)[1])(0x20caa80U))
#define str_020caaad (*(char (*)[1])(0x20caaadU))
#define str_020caad0 (*(char (*)[1])(0x20caad0U))
#define str_020caafb (*(char (*)[1])(0x20caafbU))
#define str_020cab29 (*(char (*)[1])(0x20cab29U))
#define str_020cab50 (*(char (*)[1])(0x20cab50U))
#define str_020cab7c (*(char (*)[1])(0x20cab7cU))
#define str_020caba7 (*(char (*)[1])(0x20caba7U))
#define str_020cabd4 (*(char (*)[1])(0x20cabd4U))
#define str_020cabff (*(char (*)[1])(0x20cabffU))
#define str_020cac18 (*(char (*)[1])(0x20cac18U))
#define str_020cac4b (*(char (*)[1])(0x20cac4bU))
#define str_020cac7d (*(char (*)[1])(0x20cac7dU))
#define local_24 (*(undefined1 *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(uint *)(frame + 44))


undefined4
recovered_2064530(int in_ECX,uint *in_EDX,uint param_3,int param_4,char *param_5,uint param_6,
                 int param_7,uint param_8,int param_9,char *param_10)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined1 uVar12;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar13;
  undefined3 uVar16;
  undefined4 uVar14;
  uint uVar15;
  int iVar17;
  bool bVar18;

  if ((in_ECX == 0) || (iVar17 = *(int *)(in_ECX + 0x19a0), iVar17 == 0)) {
switchD_02064578_caseD_4:
    pcVar5 = str_020c5bb8;
LAB_02064635:
    pf_varargs_20044f0__4__4_(param_10,0xc0,str_020ca777,(uint)pcVar5,(uint)param_5);
    goto LAB_0206464f;
  }
  iVar1 = *(int *)(iVar17 + 0x1c);
  uVar16 = (undefined3)((uint)iVar17 >> 8);
  if (iVar1 < 0xb7) {
    switch((uintptr_t)(iVar1)) {
    case 3:
      if (param_5 == (char *)0x0) {
        return CONCAT31(uVar16,1);
      }
      if (param_5 == (char *)0x2) {
        uVar4 = (param_8 + param_6) - param_3;
        if ((int)uVar4 >> 0x1f ==
            ((param_9 + param_7 + (uint)CARRY4(param_8,param_6)) - param_4) -
            (uint)(param_8 + param_6 < param_3)) goto LAB_02064b43;
        param_5 = str_020ca82c;
        pcVar5 = str_020ca7c6;
      }
      else if (param_5 == (char *)0x1) {
        if (param_9 + param_7 + (uint)CARRY4(param_8,param_6) == 0) {
LAB_02064bfd:
          uVar4 = param_8 + param_6;
          if (in_EDX == (uint *)0x0) {
            return CONCAT31(uVar16,1);
          }
          uVar7 = (undefined1)(uVar4 >> 0x10);
          if (*(char *)(in_ECX + 9) == '\x01') {
            uVar9 = uVar4;
            uVar4 = uVar4 >> 0x18;
            uVar12 = uVar7;
          }
          else {
            uVar12 = (undefined1)(uVar4 >> 8);
            uVar9 = (uint)CONCAT11(uVar7,(char)(uVar4 >> 0x18));
          }
          *(char *)in_EDX = (char)uVar9;
          *(char *)((int)in_EDX + 1) = (char)(uVar9 >> 8);
          *(undefined1 *)((int)in_EDX + 2) = uVar12;
          *(char *)((int)in_EDX + 3) = (char)uVar4;
          return CONCAT31(uVar16,1);
        }
        param_5 = str_020ca823;
LAB_02064ff9:
        pcVar5 = str_020ca799;
      }
      else {
        pcVar5 = str_020ca7ff;
      }
      break;
    default:
      goto switchD_02064578_caseD_4;
    case 8:
      pcVar5 = &DAT_020c5f8c;
      goto LAB_02064635;
    case 0x14:
      uVar6 = param_8 + param_6;
      if (param_5 < (char *)0x7) {
        uVar14 = CONCAT31(uVar16,1);
        switch((uintptr_t)(param_5)) {
        case 0x0:
          return uVar14;
        case 0x1:
          if (param_9 + param_7 + (uint)CARRY4(param_8,param_6) == 0) goto LAB_02064bfd;
          param_5 = str_020ca837;
          goto LAB_02064ff9;
        case 0x4:
          if (in_EDX == (uint *)0x0) {
            return uVar14;
          }
LAB_02065093:
          bVar18 = *(char *)(in_ECX + 9) == '\0';
          uVar4 = uVar6;
          if (bVar18) {
            uVar4 = uVar6 >> 8 & 0xff;
          }
          *(char *)in_EDX = (char)uVar4;
          if (bVar18) {
            uVar6 = (uVar6 & 0xff) << 8;
          }
          *(char *)((int)in_EDX + 1) = (char)(uVar6 >> 8);
          return CONCAT31(uVar16,1);
        case 0x6:
          if (in_EDX == (uint *)0x0) {
            return uVar14;
          }
          uVar13 = (undefined1)(uVar6 + 0x800 >> 0x10);
          uVar12 = (undefined1)(uVar6 + 0x800 >> 0x18);
          bVar18 = *(char *)(in_ECX + 9) == '\0';
          uVar7 = uVar13;
          if (bVar18) {
            uVar7 = uVar12;
          }
          *(undefined1 *)in_EDX = uVar7;
          if (bVar18) {
            uVar12 = uVar13;
          }
          *(undefined1 *)((int)in_EDX + 1) = uVar12;
          return uVar14;
        }
      }
      pcVar5 = str_020caa2c;
      break;
    case 0x15:
      local_20 = param_8 + param_6;
      uVar4 = param_9 + param_7 + (uint)CARRY4(param_8,param_6);
      if ((int)param_5 < 0x26) {
        if (param_5 == (char *)0x0) {
LAB_02064c71:
          return CONCAT31(uVar16,1);
        }
        if (param_5 != (char *)0xa) goto switchD_020646f8_caseD_27;
        local_18 = local_20 - param_3;
        if ((local_18 & 3) == 0 &&
            ((uVar4 - param_4) - (uint)(local_20 < param_3)) + (uint)(0xfdffffff < local_18) <
            (uint)(local_18 + 0x2000000 < 0x4000000)) {
          uVar7 = (undefined1)(local_18 >> 0x10);
          if (*(char *)(in_ECX + 9) == '\x01') {
            uVar4 = local_18 & 0x3fffffc | *in_EDX & 0xfc000003;
            uVar9 = uVar4 >> 0x18;
            uVar12 = uVar7;
          }
          else {
            uVar9 = local_18 & 0x3fffffc |
                    ((uint)*(byte *)((int)in_EDX + 3) | (uint)(byte)*in_EDX << 0x18) & 0xfc000003;
            uVar4 = uVar9 >> 0x18;
            uVar12 = (undefined1)(local_18 >> 8);
            local_18 = (uint)CONCAT11(uVar7,uVar7);
          }
          uVar13 = (undefined1)uVar9;
          uVar14 = CONCAT31((int3)(local_18 >> 8),1);
          *(char *)in_EDX = (char)uVar4;
          *(char *)((int)in_EDX + 1) = (char)(local_18 >> 8);
          goto LAB_0206517f;
        }
        param_5 = str_020ca936;
        pcVar5 = str_020caa53;
      }
      else {
        switch((uintptr_t)(param_5)) {
        case 0x26:
          if (in_EDX == (uint *)0x0) goto LAB_02064c71;
          uVar12 = (undefined1)(uVar4 >> 0x10);
          uVar7 = (undefined1)(local_20 >> 0x10);
          if (*(char *)(in_ECX + 9) == '\x01') {
            uVar10 = uVar4 >> 0x18;
            uVar9 = local_20;
            uVar6 = uVar4;
            uVar4 = local_20 >> 0x18;
            uVar13 = uVar12;
            local_20 = uVar10;
            local_24 = uVar7;
          }
          else {
            uVar13 = (undefined1)(local_20 >> 8);
            uVar9 = (uint)CONCAT11(uVar12,(char)(uVar4 >> 0x18));
            local_24 = (undefined1)(uVar4 >> 8);
            uVar6 = (uint)CONCAT11(uVar7,(char)(local_20 >> 0x18));
          }
          *(char *)in_EDX = (char)uVar9;
          *(char *)((int)in_EDX + 1) = (char)(uVar9 >> 8);
          *(undefined1 *)((int)in_EDX + 2) = local_24;
          *(char *)((int)in_EDX + 3) = (char)uVar4;
          *(char *)(in_EDX + 1) = (char)uVar6;
          *(char *)((int)in_EDX + 5) = (char)(uVar6 >> 8);
          *(undefined1 *)((int)in_EDX + 6) = uVar13;
          PF_PART1(local_14, 0) = (byte)local_20;
          goto LAB_0206533f;
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x31:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
switchD_020646f8_caseD_27:
          pcVar5 = str_020cac7d;
          break;
        case 0x30:
        case 0x32:
        case 0x40:
          uVar9 = *(uint *)(iVar17 + 0xbcc);
          if (uVar9 == 0 && *(int *)(iVar17 + 0xbd0) == 0) {
            param_5 = str_020cabff;
            pcVar5 = &DAT_020c5119;
          }
          else {
            uVar6 = local_20 - uVar9;
            if ((int)uVar6 >> 0x1f == (uVar4 - *(int *)(iVar17 + 0xbd0)) - (uint)(local_20 < uVar9))
            {
              if (param_5 == (char *)0x32) {
                uVar6 = uVar6 + 0x800 >> 0x10;
              }
              else {
                uVar6 = (-(uint)(param_5 != (char *)0x40) | 0xfffffffc) & uVar6;
              }
              if (in_EDX == (uint *)0x0) {
                return CONCAT31(uVar16,1);
              }
              goto LAB_02065093;
            }
            if (param_5 == (char *)0x30) {
              param_5 = str_020ca944;
            }
            else if (param_5 == (char *)0x40) {
              param_5 = str_020ca966;
            }
            else if (param_5 == (char *)0x32) {
              param_5 = str_020ca955;
            }
            else {
              param_5 = str_020c5bb8;
            }
            pcVar5 = str_020cac18;
          }
          break;
        default:
          if ((param_5 != (char *)0xfa) && (param_5 != (char *)0xfc))
          goto switchD_020646f8_caseD_27;
          uVar9 = local_20 - param_3;
          iVar17 = (uVar4 - param_4) - (uint)(local_20 < param_3);
          if ((int)uVar9 >> 0x1f == iVar17) {
            if (in_EDX != (uint *)0x0) {
              if (param_5 == (char *)0xfc) {
                uVar9 = uVar9 + 0x800 >> 0x10;
              }
              uVar7 = (undefined1)(uVar9 >> 8);
              bVar18 = *(char *)(in_ECX + 9) == '\0';
              uVar4 = uVar9;
              if (bVar18) {
                uVar4 = uVar9 >> 8;
              }
              *(char *)in_EDX = (char)uVar4;
              if (bVar18) {
                uVar7 = (undefined1)uVar9;
              }
              *(undefined1 *)((int)in_EDX + 1) = uVar7;
              return CONCAT31((int3)((uint)iVar17 >> 8),1);
            }
            goto LAB_02064c71;
          }
          pcVar5 = str_020ca97a;
          if (param_5 != (char *)0xfa) {
            pcVar5 = str_020c5bb8;
          }
          bVar18 = param_5 != (char *)0xfc;
          param_5 = str_020ca98b;
          if (bVar18) {
            param_5 = pcVar5;
          }
          pcVar5 = str_020cac4b;
        }
      }
      break;
    case 0x28:
      uVar4 = param_8 + param_6;
      iVar17 = param_9 + param_7 + (uint)CARRY4(param_8,param_6);
      if (param_5 < (char *)0x2d) {
        uVar14 = CONCAT31(uVar16,1);
        bVar2 = (byte)(uVar4 >> 8);
        uVar7 = (undefined1)(uVar4 >> 0x10);
        switch((uintptr_t)(param_5)) {
        case 0x0:
          return uVar14;
        default:
          goto switchD_02064670_caseD_1;
        case 0x2:
          if (iVar17 != 0) {
            param_5 = str_020ca844;
            goto LAB_02064ff9;
          }
          if (in_EDX == (uint *)0x0) {
            return uVar14;
          }
          if (*(char *)(in_ECX + 9) != '\x01') {
            uVar14 = 1;
            uVar3 = CONCAT11(uVar7,(char)(uVar4 >> 0x18));
            uVar9 = uVar4;
            goto LAB_02064cb0;
          }
LAB_02064b58:
          uVar14 = CONCAT31(uVar16,1);
          bVar2 = (byte)(uVar4 >> 0x10);
          uVar7 = (undefined1)(uVar4 >> 0x18);
LAB_02064cb2:
          *(char *)in_EDX = (char)uVar4;
          *(char *)((int)in_EDX + 1) = (char)(uVar4 >> 8);
          *(byte *)((int)in_EDX + 2) = bVar2;
          *(undefined1 *)((int)in_EDX + 3) = uVar7;
          return uVar14;
        case 0x1c:
          uVar9 = uVar4 - param_3;
          if ((uVar9 & 3) == 0 &&
              ((iVar17 - param_4) - (uint)(uVar4 < param_3)) + (uint)(0xfdffffff < uVar9) <
              (uint)(uVar9 + 0x2000000 < 0x4000000)) {
            if (*(char *)(in_ECX + 9) == '\x01') {
              PF_PART1(local_14, 0) = *(undefined1 *)((int)in_EDX + 3);
              uVar7 = (undefined1)(uVar9 >> 2);
              uVar12 = (undefined1)(uVar9 >> 10);
              uVar13 = (undefined1)(uVar9 >> 0x12);
            }
            else {
              uVar7 = (undefined1)*in_EDX;
              PF_PART1(local_14, 0) = (byte)(uVar9 >> 2);
              uVar12 = (undefined1)(uVar9 >> 0x12);
              uVar13 = (undefined1)(uVar9 >> 10);
            }
            *(undefined1 *)in_EDX = uVar7;
            *(undefined1 *)((int)in_EDX + 1) = uVar12;
            *(undefined1 *)((int)in_EDX + 2) = uVar13;
            *(byte *)((int)in_EDX + 3) = (byte)local_14;
            return uVar14;
          }
          param_5 = str_020ca850;
          pcVar5 = str_020caa53;
          break;
        case 0x2a:
          uVar9 = uVar4 - param_3;
          if (-1 < (int)(uVar9 + 0x40000000) &&
              ((iVar17 - param_4) - (uint)(uVar4 < param_3)) + (uint)(0xbfffffff < uVar9) == 0) {
            uVar7 = (undefined1)(uVar9 >> 0x10);
            if (*(char *)(in_ECX + 9) == '\x01') {
              uVar4 = (uVar9 & 0x7f000000 | *in_EDX & 0x80000000) >> 0x18;
              uVar12 = uVar7;
            }
            else {
              uVar4 = uVar9 & 0x7fffffff | (int)(char)*in_EDX & 0x80000000U;
              uVar12 = (undefined1)(uVar9 >> 8);
              uVar14 = 1;
              uVar9 = (uint)CONCAT11(uVar7,(char)(uVar4 >> 0x18));
            }
            *(char *)in_EDX = (char)uVar9;
            *(char *)((int)in_EDX + 1) = (char)(uVar9 >> 8);
            *(undefined1 *)((int)in_EDX + 2) = uVar12;
            *(char *)((int)in_EDX + 3) = (char)uVar4;
            return uVar14;
          }
          param_5 = str_020ca85b;
          pcVar5 = str_020caa80;
          break;
        case 0x2b:
          if (*(char *)(in_ECX + 9) == '\x01') {
            uVar9 = *in_EDX & 0xfff0f000;
            bVar8 = (byte)(uVar4 * 0x10 >> 0x10) & 0xf | (byte)(uVar9 >> 0x10);
            bVar2 = bVar2 & 0xf | (byte)(uVar9 >> 8);
            uVar9 = *in_EDX >> 0x18;
            local_18 = uVar4;
          }
          else {
            local_18 = (uint)(byte)*in_EDX;
            uVar6 = uVar4 * 0x10 & 0xf0000 |
                    ((uint)*(byte *)((int)in_EDX + 2) << 8 |
                    (uint)*(byte *)((int)in_EDX + 1) << 0x10) & 0xf0f000;
            uVar9 = uVar4 & 0xfff | uVar6;
            bVar2 = (byte)(uVar6 >> 0x10);
            bVar8 = (byte)(uVar9 >> 8);
            uVar14 = 1;
          }
          *(char *)in_EDX = (char)local_18;
          *(byte *)((int)in_EDX + 1) = bVar2;
          *(byte *)((int)in_EDX + 2) = bVar8;
          *(char *)((int)in_EDX + 3) = (char)uVar9;
          return uVar14;
        case 0x2c:
          if (*(char *)(in_ECX + 9) == '\x01') {
            uVar9 = *in_EDX;
          }
          else {
            uVar9 = (uint)*(byte *)((int)in_EDX + 2) << 8 |
                    (uint)*(byte *)((int)in_EDX + 1) << 0x10 | (uint)(byte)*in_EDX << 0x18;
          }
          uVar6 = uVar4 >> 0xc & 0xf0000 | uVar9 & 0xfff0f000;
          uVar4 = uVar4 >> 0x10 & 0xfff | uVar6;
          uVar13 = (undefined1)(uVar6 >> 0x10);
          uVar12 = (undefined1)(uVar4 >> 8);
          if (*(char *)(in_ECX + 9) == '\0') {
            uVar7 = (undefined1)(uVar9 >> 0x18);
            PF_PART1(local_18, 0) = uVar13;
          }
          else {
            uVar4 = uVar9 >> 0x18;
            PF_PART1(local_18, 0) = uVar12;
            uVar12 = uVar13;
          }
          uVar13 = (undefined1)uVar4;
          uVar14 = 1;
          *(undefined1 *)in_EDX = uVar7;
          goto LAB_0206517c;
        }
      }
      else {
switchD_02064670_caseD_1:
        pcVar5 = str_020caaad;
      }
      break;
    case 0x3e:
      if (param_5 < (char *)0xc) {
        uVar14 = CONCAT31(uVar16,1);
        switch((uintptr_t)(param_5)) {
        case 0x0:
          goto switchD_0206475c_caseD_0;
        case 0x1:
          local_14 = param_8 + param_6;
          uVar4 = param_9 + param_7 + (uint)CARRY4(param_8,param_6);
          if (in_EDX == (uint *)0x0) {
            return uVar14;
          }
          uVar12 = (undefined1)(uVar4 >> 0x10);
          uVar7 = (undefined1)(local_14 >> 0x10);
          if (*(char *)(in_ECX + 9) == '\x01') {
            uVar10 = uVar4 >> 0x18;
            uVar9 = local_14;
            uVar6 = uVar4;
            uVar4 = local_14 >> 0x18;
            uVar13 = uVar12;
            local_14 = uVar10;
            PF_PART1(local_18, 0) = uVar7;
          }
          else {
            uVar13 = (undefined1)(local_14 >> 8);
            uVar9 = (uint)CONCAT11(uVar12,(char)(uVar4 >> 0x18));
            PF_PART1(local_18, 0) = (undefined1)(uVar4 >> 8);
            uVar6 = (uint)CONCAT11(uVar7,(char)(local_14 >> 0x18));
          }
          *(char *)in_EDX = (char)uVar9;
          *(char *)((int)in_EDX + 1) = (char)(uVar9 >> 8);
          *(undefined1 *)((int)in_EDX + 2) = (undefined1)local_18;
          *(char *)((int)in_EDX + 3) = (char)uVar4;
          *(char *)(in_EDX + 1) = (char)uVar6;
          *(char *)((int)in_EDX + 5) = (char)(uVar6 >> 8);
          goto LAB_02065339;
        case 0x2:
        case 0x4:
          uVar4 = (param_8 + param_6) - param_3;
          if ((int)uVar4 >> 0x1f ==
              ((param_9 + param_7 + (uint)CARRY4(param_8,param_6)) - param_4) -
              (uint)(param_8 + param_6 < param_3)) {
LAB_02064b43:
            if (in_EDX == (uint *)0x0) {
              return CONCAT31(uVar16,1);
            }
            if (*(char *)(in_ECX + 9) != '\x01') {
              bVar2 = (byte)(uVar4 >> 8);
              uVar14 = CONCAT31(uVar16,1);
              uVar3 = CONCAT11((char)(uVar4 >> 0x10),(char)(uVar4 >> 0x18));
              uVar9 = uVar4;
LAB_02064cb0:
              uVar4 = (uint)uVar3;
              uVar7 = (undefined1)uVar9;
              goto LAB_02064cb2;
            }
            goto LAB_02064b58;
          }
          pcVar5 = str_020ca99c;
          if (param_5 != (char *)0x2) {
            pcVar5 = str_020c5bb8;
          }
          bVar18 = param_5 != &DAT_00000004;
          param_5 = str_020ca9aa;
          if (bVar18) {
            param_5 = pcVar5;
          }
          pcVar5 = str_020ca7c6;
          break;
        default:
          goto switchD_0206475c_caseD_3;
        case 0xa:
          if (param_9 + param_7 + (uint)CARRY4(param_8,param_6) == 0) goto LAB_02064bfd;
          param_5 = str_020ca9b9;
          goto LAB_02064ff9;
        case 0xb:
          uVar4 = param_8 + param_6;
          if ((int)uVar4 >> 0x1f == param_9 + param_7 + (uint)CARRY4(param_8,param_6))
          goto LAB_02064b43;
          param_5 = str_020ca9c5;
          pcVar5 = str_020ca9d2;
        }
      }
      else {
switchD_0206475c_caseD_3:
        pcVar5 = str_020caa06;
      }
    }
    goto LAB_02065006;
  }
  if (iVar1 != 0xb7) {
    if (iVar1 == 0xf3) {
      pcVar5 = str_020c7d29;
      goto LAB_02064635;
    }
    if (iVar1 != 0x102) goto switchD_02064578_caseD_4;
    local_14 = param_8 + param_6;
    uVar4 = param_9 + param_7 + (uint)CARRY4(param_8,param_6);
    uVar14 = CONCAT31(uVar16,1);
    if ((int)param_5 < 0x47) {
      if (param_5 == (char *)0x0) {
        return uVar14;
      }
      if (param_5 == (char *)0x2) {
        if (in_EDX == (uint *)0x0) {
          return uVar14;
        }
        uVar12 = (undefined1)(uVar4 >> 0x10);
        uVar7 = (undefined1)(local_14 >> 0x10);
        if (*(char *)(in_ECX + 9) == '\x01') {
          uVar10 = uVar4 >> 0x18;
          uVar9 = uVar4;
          uVar6 = local_14;
          uVar4 = local_14 >> 0x18;
          uVar13 = uVar12;
          local_14 = uVar10;
          PF_PART1(local_18, 0) = uVar7;
        }
        else {
          uVar13 = (undefined1)(local_14 >> 8);
          uVar6 = (uint)CONCAT11(uVar12,(char)(uVar4 >> 0x18));
          PF_PART1(local_18, 0) = (undefined1)(uVar4 >> 8);
          uVar9 = (uint)CONCAT11(uVar7,(char)(local_14 >> 0x18));
        }
        *(char *)in_EDX = (char)uVar6;
        *(char *)((int)in_EDX + 1) = (char)(uVar6 >> 8);
        *(undefined1 *)((int)in_EDX + 2) = (undefined1)local_18;
        *(char *)((int)in_EDX + 3) = (char)uVar4;
        *(char *)(in_EDX + 1) = (char)uVar9;
        *(char *)((int)in_EDX + 5) = (char)(uVar9 >> 8);
        *(undefined1 *)((int)in_EDX + 6) = uVar13;
        *(char *)((int)in_EDX + 7) = (char)local_14;
        return CONCAT31((int3)(uVar4 >> 8),1);
      }
LAB_02064a4f:
      pcVar5 = str_020cabd4;
    }
    else if (param_5 == (char *)0x47) {
      uVar9 = local_14 - (param_3 & 0xfffff000);
      uVar6 = uVar9 + 0x800;
      iVar17 = ((uVar4 - param_4) - (uint)(local_14 < (param_3 & 0xfffff000))) +
               (uint)(0xfffff7ff < uVar9);
      uVar4 = uVar6 >> 0xc;
      uVar9 = iVar17 * 0x100000 | uVar4;
      if ((iVar17 >> 0xc) + (uint)(0xfff7ffff < uVar9) < (uint)(uVar9 + 0x80000 < 0x100000)) {
        if (*(char *)(in_ECX + 9) == '\x01') {
          uVar9 = uVar4 << 5 | *in_EDX & 0xfe00001f;
          uVar7 = (undefined1)(uVar6 >> 0xf);
          uVar12 = (undefined1)(uVar6 >> 0x17);
          uVar4 = uVar9 >> 0x18;
        }
        else {
          uVar4 = uVar4 << 5 |
                  ((uint)*(byte *)((int)in_EDX + 3) | (uint)(byte)*in_EDX << 0x18) & 0xfe00001f;
          uVar9 = uVar4 >> 0x18;
          uVar7 = (undefined1)(uVar6 >> 0x17);
          uVar12 = (undefined1)(uVar6 >> 0xf);
        }
        *(char *)in_EDX = (char)uVar9;
        *(undefined1 *)((int)in_EDX + 1) = uVar7;
        *(undefined1 *)((int)in_EDX + 2) = uVar12;
        *(char *)((int)in_EDX + 3) = (char)uVar4;
        return uVar14;
      }
      param_5 = str_020ca914;
      pcVar5 = str_020cab50;
    }
    else {
      if (param_5 == (char *)0x48) {
        if (*(char *)(in_ECX + 9) == '\x01') {
          uVar9 = *in_EDX;
          uVar4 = local_14 * 0x400 & 0x3ffc00 | uVar9 & 0xffc003ff;
          PF_PART1(local_18, 0) = (undefined1)(uVar4 >> 8);
          uVar7 = (undefined1)(uVar4 >> 0x10);
          uVar4 = uVar9 >> 0x18;
          local_14 = uVar9;
        }
        else {
          uVar4 = local_14 * 0x400 & 0x3ffc00 | (uint)*(byte *)((int)in_EDX + 3) |
                  ((uint)*(byte *)((int)in_EDX + 2) << 8 | (uint)*(byte *)((int)in_EDX + 1) << 0x10)
                  & 0xc00300;
          PF_PART1(local_18, 0) = (undefined1)(uVar4 >> 0x10);
          uVar7 = (undefined1)(uVar4 >> 8);
          local_14 = (uint)(byte)*in_EDX;
        }
        *(char *)in_EDX = (char)local_14;
        *(undefined1 *)((int)in_EDX + 1) = (undefined1)local_18;
        *(undefined1 *)((int)in_EDX + 2) = uVar7;
        *(char *)((int)in_EDX + 3) = (char)uVar4;
        return uVar14;
      }
      if (param_5 != (char *)0x6e) goto LAB_02064a4f;
      uVar9 = local_14 - param_3;
      iVar17 = ((uVar4 - param_4) - (uint)(local_14 < param_3)) + (uint)(0xfffdffff < uVar9);
      if ((uVar9 & 3) == 0) {
        uVar4 = uVar9 + 0x20000 >> 0x12;
        uVar6 = iVar17 * 0x4000;
        if ((iVar17 >> 0x12) + (uint)(0xfff7ffff < (uVar4 | uVar6)) <
            (uint)((uVar4 | uVar6) + 0x80000 < 0x100000)) {
          if (*(char *)(in_ECX + 9) == '\x01') {
            uVar15 = (uVar4 | uVar6 & 0xfffff) << 5 | *in_EDX & 0xfe00001f;
            uVar10 = (uVar4 | uVar6 & 0x7ffffff) >> 3;
            uVar7 = (undefined1)((uVar4 | uVar6 & 0x7ffffff) >> 0xb);
            uVar11 = uVar15 >> 0x18;
          }
          else {
            uVar11 = (uVar4 | uVar6 & 0xfffff) << 5 |
                     ((uint)*(byte *)((int)in_EDX + 3) | (uint)(byte)*in_EDX << 0x18) & 0xfe00001f;
            uVar15 = uVar11 >> 0x18;
            uVar10 = (uVar4 | uVar6 & 0x7ffffff) >> 0xb;
            uVar7 = (undefined1)(uVar9 + 0x20000 >> 0x15);
          }
          *(char *)in_EDX = (char)uVar15;
          *(char *)((int)in_EDX + 1) = (char)uVar10;
          *(undefined1 *)((int)in_EDX + 2) = uVar7;
          *(char *)((int)in_EDX + 3) = (char)uVar11;
          if (*(char *)(in_ECX + 9) == '\x01') {
            local_14 = in_EDX[1];
            uVar4 = (uVar9 & 0x3fffc) << 8 | local_14 & 0xfc0003ff;
            uVar6 = uVar4 >> 0x18;
            uVar9 = uVar9 & 0xffffff;
          }
          else {
            uVar6 = (uVar9 & 0x3fffc) << 8 | (uint)*(byte *)((int)in_EDX + 7) |
                    ((uint)*(byte *)((int)in_EDX + 6) << 8 | (uint)(byte)in_EDX[1] << 0x18) &
                    0xfc000300;
            local_14 = uVar6 >> 0x18;
            uVar4 = uVar9 & 0xffffff;
            uVar9 = uVar6;
          }
          *(char *)(in_EDX + 1) = (char)local_14;
          *(char *)((int)in_EDX + 5) = (char)(uVar4 >> 8);
          *(char *)((int)in_EDX + 6) = (char)(uVar9 >> 8);
          *(char *)((int)in_EDX + 7) = (char)uVar6;
          return CONCAT31((int3)(uVar10 >> 8),1);
        }
        param_5 = str_020ca927;
        pcVar5 = str_020caba7;
      }
      else {
        param_5 = str_020ca927;
        pcVar5 = str_020cab7c;
      }
    }
    goto LAB_02065006;
  }
  local_14 = param_8 + param_6;
  uVar4 = param_9 + param_7 + (uint)CARRY4(param_8,param_6);
  uVar14 = CONCAT31(uVar16,1);
  switch((uintptr_t)(param_5)) {
  case 0x101:
    if (in_EDX == (uint *)0x0) {
      return uVar14;
    }
    uVar12 = (undefined1)(uVar4 >> 0x10);
    uVar7 = (undefined1)(local_14 >> 0x10);
    if (*(char *)(in_ECX + 9) == '\x01') {
      uVar10 = uVar4 >> 0x18;
      uVar9 = uVar4;
      uVar6 = local_14;
      uVar4 = local_14 >> 0x18;
      uVar13 = uVar12;
      local_14 = uVar10;
      PF_PART1(local_20, 0) = uVar7;
    }
    else {
      uVar13 = (undefined1)(local_14 >> 8);
      uVar6 = (uint)CONCAT11(uVar12,(char)(uVar4 >> 0x18));
      PF_PART1(local_20, 0) = (undefined1)(uVar4 >> 8);
      uVar9 = (uint)CONCAT11(uVar7,(char)(local_14 >> 0x18));
    }
    *(char *)in_EDX = (char)uVar6;
    *(char *)((int)in_EDX + 1) = (char)(uVar6 >> 8);
    *(undefined1 *)((int)in_EDX + 2) = (undefined1)local_20;
    *(char *)((int)in_EDX + 3) = (char)uVar4;
    *(char *)(in_EDX + 1) = (char)uVar9;
    *(char *)((int)in_EDX + 5) = (char)(uVar9 >> 8);
LAB_02065339:
    *(undefined1 *)((int)in_EDX + 6) = uVar13;
LAB_0206533f:
    *(byte *)((int)in_EDX + 7) = (byte)local_14;
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0x113:
    uVar6 = local_14 - (param_3 & 0xfffff000);
    iVar17 = (uVar4 - param_4) - (uint)(local_14 < (param_3 & 0xfffff000));
    uVar4 = uVar6 >> 0xc;
    uVar9 = iVar17 * 0x100000;
    uVar10 = uVar4 | uVar9;
    if ((iVar17 >> 0xc) + (uint)(0xffefffff < uVar10) < (uint)(uVar10 + 0x100000 < 0x200000)) {
      if (*(char *)(in_ECX + 9) == '\x01') {
        uVar11 = *in_EDX;
      }
      else {
        uVar11 = (uint)*(byte *)((int)in_EDX + 3) | (uint)(byte)*in_EDX << 0x18;
      }
      PF_PART1(local_14, 0) = (byte)(((uVar4 & 3) << 0x1d) >> 0x18) | (byte)((uVar11 & 0x9f00001f) >> 0x18)
      ;
      bVar2 = (byte)((uVar10 & 0x1ffffc) << 3) | (byte)(uVar11 & 0x9f00001f);
      uVar7 = (undefined1)((uVar4 | uVar9 & 0x1fffffff) >> 0xd);
      if (*(char *)(in_ECX + 9) == '\0') {
        uVar4 = uVar4 | uVar9 & 0x1fffffff;
        uVar13 = (undefined1)(uVar4 >> 5);
        uVar14 = CONCAT31((uint3)(uVar4 >> 0xd),1);
        uVar12 = uVar7;
        bVar8 = bVar2;
      }
      else {
        uVar12 = (char)(uVar6 >> 0x11);
        uVar13 = uVar7;
        bVar8 = (byte)local_14;
        PF_PART1(local_14, 0) = bVar2;
      }
      *(byte *)in_EDX = (byte)local_14;
      *(undefined1 *)((int)in_EDX + 1) = uVar12;
      *(undefined1 *)((int)in_EDX + 2) = uVar13;
      *(byte *)((int)in_EDX + 3) = bVar8;
      return uVar14;
    }
    param_5 = str_020ca868;
    pcVar5 = str_020caad0;
    goto LAB_02065006;
  case 0x115:
    if (*(char *)(in_ECX + 9) == '\x01') {
      uVar9 = *in_EDX;
      uVar4 = (local_14 & 0xfff) << 10 | uVar9 & 0xffc003ff;
      PF_PART1(local_18, 0) = (undefined1)(uVar4 >> 8);
      uVar12 = (undefined1)(uVar4 >> 0x10);
      uVar4 = uVar9 >> 0x18;
      local_14 = uVar9;
    }
    else {
      uVar4 = (local_14 & 0xfff) << 10 | (uint)*(byte *)((int)in_EDX + 3) |
              ((uint)*(byte *)((int)in_EDX + 2) << 8 | (uint)*(byte *)((int)in_EDX + 1) << 0x10) &
              0xc00300;
      PF_PART1(local_18, 0) = (undefined1)(uVar4 >> 0x10);
      uVar12 = (undefined1)(uVar4 >> 8);
      local_14 = (uint)(byte)*in_EDX;
    }
    uVar13 = (undefined1)uVar4;
    *(char *)in_EDX = (char)local_14;
LAB_0206517c:
    *(undefined1 *)((int)in_EDX + 1) = (undefined1)local_18;
LAB_0206517f:
    *(undefined1 *)((int)in_EDX + 2) = uVar12;
    *(undefined1 *)((int)in_EDX + 3) = uVar13;
    return uVar14;
  case 0x116:
    bVar2 = 0;
    break;
  case 0x11c:
    bVar2 = 1;
    break;
  case 0x11d:
    bVar2 = 2;
    break;
  case 0x11e:
    bVar2 = 3;
    break;
  case 0x12b:
    bVar2 = 4;
    break;
  default:
    if (param_5 == (char *)0x0) {
      return uVar14;
    }
  case 0x102:
  case 0x103:
  case 0x104:
  case 0x105:
  case 0x106:
  case 0x107:
  case 0x108:
  case 0x109:
  case 0x10a:
  case 0x10b:
  case 0x10c:
  case 0x10d:
  case 0x10e:
  case 0x10f:
  case 0x110:
  case 0x111:
  case 0x112:
  case 0x114:
  case 0x117:
  case 0x118:
  case 0x119:
  case 0x11a:
  case 0x11b:
  case 0x11f:
  case 0x120:
  case 0x121:
  case 0x122:
  case 0x123:
  case 0x124:
  case 0x125:
  case 0x126:
  case 0x127:
  case 0x128:
  case 0x129:
  case 0x12a:
    pcVar5 = str_020cab29;
    goto LAB_02065006;
  }
  if ((~(-1 << bVar2) & local_14) == 0 &&
      (uVar4 & ~(0x7fffffffU >> (~bVar2 & 0x1f) | -1 << bVar2)) == 0) {
    if (*(char *)(in_ECX + 9) == '\x01') {
      local_18 = *in_EDX;
      uVar4 = ((local_14 & 0xfff) >> bVar2) << 10 | local_18 & 0xffc003ff;
      PF_PART1(local_14, 0) = (byte)(uVar4 >> 8);
      uVar7 = (undefined1)(uVar4 >> 0x10);
      uVar4 = local_18 >> 0x18;
    }
    else {
      local_18 = (uint)(byte)*in_EDX;
      uVar4 = ((local_14 & 0xfff) >> bVar2) << 10 | (uint)*(byte *)((int)in_EDX + 3) |
              ((uint)*(byte *)((int)in_EDX + 2) << 8 | (uint)*(byte *)((int)in_EDX + 1) << 0x10) &
              0xc00300;
      PF_PART1(local_14, 0) = (byte)(uVar4 >> 0x10);
      uVar7 = (undefined1)(uVar4 >> 8);
    }
    *(char *)in_EDX = (char)local_18;
    *(byte *)((int)in_EDX + 1) = (byte)local_14;
    *(undefined1 *)((int)in_EDX + 2) = uVar7;
    *(char *)((int)in_EDX + 3) = (char)uVar4;
  }
  else {
    switch((uintptr_t)(param_5)) {
    case 0x116:
      param_5 = str_020ca883;
      break;
    default:
      param_5 = str_020c5bb8;
      break;
    case 0x11c:
      param_5 = str_020ca89f;
      break;
    case 0x11d:
      param_5 = str_020ca8bc;
      break;
    case 0x11e:
      param_5 = str_020ca8d9;
      break;
    case 0x12b:
      param_5 = str_020ca8f6;
    }
    pcVar5 = str_020caafb;
LAB_02065006:
    pf_varargs_20044f0__4_(param_10,0xc0,pcVar5,(uint)param_5);
LAB_0206464f:
    uVar14 = 0;
  }
switchD_0206475c_caseD_0:
  return uVar14;
}
#undef DAT_00000004
#undef DAT_020c5119
#undef DAT_020c5f8c
#undef str_020c5bb8
#undef str_020c7d29
#undef str_020ca777
#undef str_020ca799
#undef str_020ca7c6
#undef str_020ca7ff
#undef str_020ca823
#undef str_020ca82c
#undef str_020ca837
#undef str_020ca844
#undef str_020ca850
#undef str_020ca85b
#undef str_020ca868
#undef str_020ca883
#undef str_020ca89f
#undef str_020ca8bc
#undef str_020ca8d9
#undef str_020ca8f6
#undef str_020ca914
#undef str_020ca927
#undef str_020ca936
#undef str_020ca944
#undef str_020ca955
#undef str_020ca966
#undef str_020ca97a
#undef str_020ca98b
#undef str_020ca99c
#undef str_020ca9aa
#undef str_020ca9b9
#undef str_020ca9c5
#undef str_020ca9d2
#undef str_020caa06
#undef str_020caa2c
#undef str_020caa53
#undef str_020caa80
#undef str_020caaad
#undef str_020caad0
#undef str_020caafb
#undef str_020cab29
#undef str_020cab50
#undef str_020cab7c
#undef str_020caba7
#undef str_020cabd4
#undef str_020cabff
#undef str_020cac18
#undef str_020cac4b
#undef str_020cac7d
#undef local_24
#undef local_20
#undef local_18
#undef local_14

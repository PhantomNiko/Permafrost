/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_020a1a40 (*(uint128 *)(0x20eb2e0U))
uchar recovered_202e570(undefined4 param_1,long param_2,long param_3,long param_4,ulong param_5,
                       ulong param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char *pcVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  uint128 auVar73;
  ushort uVar74;
  uint uVar75;
  char cVar76;
  uint uVar77;
  ulong uVar78;
  uint uVar79;
  ulong uVar80;
  ulong uVar81;
  long lVar82;
  int iVar83;
  ulong uVar84;
  ulong uVar85;
  uchar uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint128 auVar91;
  uint128 auVar92;

  iVar83 = (int)param_5;
  switch((uintptr_t)(param_1)) {
  case 1:
    uVar85 = param_5;
    if (param_6 < param_5) {
      uVar85 = param_6;
    }
    if (uVar85 != 0) {
      if ((ulong)(param_2 - param_3) < 0x20 || uVar85 < 4) {
        uVar81 = 0;
      }
      else {
        if (uVar85 < 0x20) {
          uVar80 = 0;
        }
        else {
          uVar81 = uVar85 & 0xffffffffffffffe0;
          uVar80 = 0;
          do {
            uVar70 = ((undefined8 *)(param_3 + uVar80))[1];
            puVar3 = (undefined8 *)(param_3 + 0x10 + uVar80);
            uVar71 = *puVar3;
            uVar72 = puVar3[1];
            *(undefined8 *)(param_2 + uVar80) = *(undefined8 *)(param_3 + uVar80);
            ((undefined8 *)(param_2 + uVar80))[1] = uVar70;
            puVar3 = (undefined8 *)(param_2 + 0x10 + uVar80);
            *puVar3 = uVar71;
            puVar3[1] = uVar72;
            uVar80 = uVar80 + 0x20;
          } while (uVar81 != uVar80);
          if (uVar85 == uVar81) goto LAB_020230cb;
          uVar80 = uVar81;
          if ((uVar85 & 0x1c) == 0) goto LAB_02023066;
        }
        uVar81 = uVar85 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(param_2 + uVar80) = *(undefined4 *)(param_3 + uVar80);
          uVar80 = uVar80 + 4;
        } while (uVar81 != uVar80);
        if (uVar85 == uVar81) goto LAB_020230cb;
      }
LAB_02023066:
      uVar84 = uVar85 & 3;
      uVar80 = uVar81;
      if (uVar84 != 0) {
        do {
          *(undefined1 *)(param_2 + uVar80) = *(undefined1 *)(param_3 + uVar80);
          uVar80 = uVar80 + 1;
          uVar84 = uVar84 - 1;
        } while (uVar84 != 0);
      }
      if (uVar81 - uVar85 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)(param_2 + uVar80) = *(undefined1 *)(param_3 + uVar80);
          *(undefined1 *)(param_2 + 1 + uVar80) = *(undefined1 *)(param_3 + 1 + uVar80);
          *(undefined1 *)(param_2 + 2 + uVar80) = *(undefined1 *)(param_3 + 2 + uVar80);
          *(undefined1 *)(param_2 + 3 + uVar80) = *(undefined1 *)(param_3 + 3 + uVar80);
          uVar80 = uVar80 + 4;
        } while (uVar85 != uVar80);
      }
    }
LAB_020230cb:
    uVar86 = '\x01';
    if (param_5 <= param_6) {
      return '\x01';
    }
    uVar81 = param_5 - uVar85;
    if ((uVar81 < 4) || (param_6 < 0x20 || (ulong)(param_2 - param_3) < 0x20)) {
LAB_020230fd:
      uVar84 = uVar85;
    }
    else {
      if (uVar81 < 0x20) {
        uVar80 = 0;
      }
      else {
        uVar80 = uVar81 & 0xffffffffffffffe0;
        lVar82 = ((uVar85 + 0x10) - param_6) + param_2;
        uVar84 = 0;
        do {
          pcVar4 = (char *)(param_3 + uVar85 + uVar84);
          cVar76 = pcVar4[1];
          cVar9 = pcVar4[2];
          cVar10 = pcVar4[3];
          cVar11 = pcVar4[4];
          cVar12 = pcVar4[5];
          cVar13 = pcVar4[6];
          cVar14 = pcVar4[7];
          cVar15 = pcVar4[8];
          cVar16 = pcVar4[9];
          cVar17 = pcVar4[10];
          cVar18 = pcVar4[0xb];
          cVar19 = pcVar4[0xc];
          cVar20 = pcVar4[0xd];
          cVar21 = pcVar4[0xe];
          cVar22 = pcVar4[0xf];
          pcVar1 = (char *)(param_3 + uVar85 + 0x10 + uVar84);
          cVar23 = *pcVar1;
          cVar24 = pcVar1[1];
          cVar25 = pcVar1[2];
          cVar26 = pcVar1[3];
          cVar27 = pcVar1[4];
          cVar28 = pcVar1[5];
          cVar29 = pcVar1[6];
          cVar30 = pcVar1[7];
          cVar31 = pcVar1[8];
          cVar32 = pcVar1[9];
          cVar33 = pcVar1[10];
          cVar34 = pcVar1[0xb];
          cVar35 = pcVar1[0xc];
          cVar36 = pcVar1[0xd];
          cVar37 = pcVar1[0xe];
          cVar38 = pcVar1[0xf];
          pcVar5 = (char *)(lVar82 + -0x10 + uVar84);
          cVar39 = pcVar5[1];
          cVar40 = pcVar5[2];
          cVar41 = pcVar5[3];
          cVar42 = pcVar5[4];
          cVar43 = pcVar5[5];
          cVar44 = pcVar5[6];
          cVar45 = pcVar5[7];
          cVar46 = pcVar5[8];
          cVar47 = pcVar5[9];
          cVar48 = pcVar5[10];
          cVar49 = pcVar5[0xb];
          cVar50 = pcVar5[0xc];
          cVar51 = pcVar5[0xd];
          cVar52 = pcVar5[0xe];
          cVar53 = pcVar5[0xf];
          pcVar1 = (char *)(lVar82 + uVar84);
          cVar54 = *pcVar1;
          cVar55 = pcVar1[1];
          cVar56 = pcVar1[2];
          cVar57 = pcVar1[3];
          cVar58 = pcVar1[4];
          cVar59 = pcVar1[5];
          cVar60 = pcVar1[6];
          cVar61 = pcVar1[7];
          cVar62 = pcVar1[8];
          cVar63 = pcVar1[9];
          cVar64 = pcVar1[10];
          cVar65 = pcVar1[0xb];
          cVar66 = pcVar1[0xc];
          cVar67 = pcVar1[0xd];
          cVar68 = pcVar1[0xe];
          cVar69 = pcVar1[0xf];
          pcVar1 = (char *)(param_2 + uVar85 + uVar84);
          *pcVar1 = *pcVar5 + *pcVar4;
          pcVar1[1] = cVar39 + cVar76;
          pcVar1[2] = cVar40 + cVar9;
          pcVar1[3] = cVar41 + cVar10;
          pcVar1[4] = cVar42 + cVar11;
          pcVar1[5] = cVar43 + cVar12;
          pcVar1[6] = cVar44 + cVar13;
          pcVar1[7] = cVar45 + cVar14;
          pcVar1[8] = cVar46 + cVar15;
          pcVar1[9] = cVar47 + cVar16;
          pcVar1[10] = cVar48 + cVar17;
          pcVar1[0xb] = cVar49 + cVar18;
          pcVar1[0xc] = cVar50 + cVar19;
          pcVar1[0xd] = cVar51 + cVar20;
          pcVar1[0xe] = cVar52 + cVar21;
          pcVar1[0xf] = cVar53 + cVar22;
          pcVar1 = (char *)(param_2 + uVar85 + 0x10 + uVar84);
          *pcVar1 = cVar54 + cVar23;
          pcVar1[1] = cVar55 + cVar24;
          pcVar1[2] = cVar56 + cVar25;
          pcVar1[3] = cVar57 + cVar26;
          pcVar1[4] = cVar58 + cVar27;
          pcVar1[5] = cVar59 + cVar28;
          pcVar1[6] = cVar60 + cVar29;
          pcVar1[7] = cVar61 + cVar30;
          pcVar1[8] = cVar62 + cVar31;
          pcVar1[9] = cVar63 + cVar32;
          pcVar1[10] = cVar64 + cVar33;
          pcVar1[0xb] = cVar65 + cVar34;
          pcVar1[0xc] = cVar66 + cVar35;
          pcVar1[0xd] = cVar67 + cVar36;
          pcVar1[0xe] = cVar68 + cVar37;
          pcVar1[0xf] = cVar69 + cVar38;
          uVar84 = uVar84 + 0x20;
        } while (uVar80 != uVar84);
        if (uVar81 == uVar80) {
          return '\x01';
        }
        if ((uVar81 & 0x1c) == 0) {
          uVar85 = uVar85 + uVar80;
          goto LAB_020230fd;
        }
      }
      uVar78 = uVar81 & 0xfffffffffffffffc;
      uVar84 = uVar85 + uVar78;
      do {
        uVar7 = *(undefined4 *)(param_3 + uVar85 + uVar80);
        uVar8 = *(undefined4 *)((uVar85 - param_6) + param_2 + uVar80);
        *(uint *)(param_2 + uVar85 + uVar80) =
             CONCAT13((char)((uint)uVar8 >> 0x18) + (char)((uint)uVar7 >> 0x18),
                      CONCAT12((char)((uint)uVar8 >> 0x10) + (char)((uint)uVar7 >> 0x10),
                               CONCAT11((char)((uint)uVar8 >> 8) + (char)((uint)uVar7 >> 8),
                                        (char)uVar8 + (char)uVar7)));
        uVar80 = uVar80 + 4;
      } while (uVar78 != uVar80);
      if (uVar81 == uVar78) {
        return '\x01';
      }
    }
    uVar85 = uVar84;
    if ((iVar83 - (int)uVar84 & 1U) != 0) {
      *(char *)(param_2 + uVar84) =
           *(char *)(param_2 + (uVar84 - param_6)) + *(char *)(param_3 + uVar84);
      uVar85 = uVar84 + 1;
    }
    if (uVar84 != param_5 - 1) {
      lVar82 = (param_2 + 1) - param_6;
      do {
        *(char *)(param_2 + uVar85) = *(char *)(lVar82 + -1 + uVar85) + *(char *)(param_3 + uVar85);
        *(char *)(param_2 + 1 + uVar85) =
             *(char *)(lVar82 + uVar85) + *(char *)(param_3 + 1 + uVar85);
        uVar85 = uVar85 + 2;
      } while (param_5 != uVar85);
    }
    break;
  case 2:
    if (param_4 != 0) {
      if (param_5 == 0) {
        return '\x01';
      }
      if ((param_5 < 4) || ((ulong)(param_2 - param_4) < 0x20 || (ulong)(param_2 - param_3) < 0x20))
      {
        uVar85 = 0;
      }
      else {
        if (param_5 < 0x20) {
          uVar81 = 0;
        }
        else {
          uVar85 = param_5 & 0xffffffffffffffe0;
          uVar81 = 0;
          do {
            pcVar1 = (char *)(param_3 + uVar81);
            cVar76 = pcVar1[1];
            cVar9 = pcVar1[2];
            cVar10 = pcVar1[3];
            cVar11 = pcVar1[4];
            cVar12 = pcVar1[5];
            cVar13 = pcVar1[6];
            cVar14 = pcVar1[7];
            cVar15 = pcVar1[8];
            cVar16 = pcVar1[9];
            cVar17 = pcVar1[10];
            cVar18 = pcVar1[0xb];
            cVar19 = pcVar1[0xc];
            cVar20 = pcVar1[0xd];
            cVar21 = pcVar1[0xe];
            cVar22 = pcVar1[0xf];
            pcVar4 = (char *)(param_3 + 0x10 + uVar81);
            cVar23 = *pcVar4;
            cVar24 = pcVar4[1];
            cVar25 = pcVar4[2];
            cVar26 = pcVar4[3];
            cVar27 = pcVar4[4];
            cVar28 = pcVar4[5];
            cVar29 = pcVar4[6];
            cVar30 = pcVar4[7];
            cVar31 = pcVar4[8];
            cVar32 = pcVar4[9];
            cVar33 = pcVar4[10];
            cVar34 = pcVar4[0xb];
            cVar35 = pcVar4[0xc];
            cVar36 = pcVar4[0xd];
            cVar37 = pcVar4[0xe];
            cVar38 = pcVar4[0xf];
            pcVar4 = (char *)(param_4 + uVar81);
            cVar39 = pcVar4[1];
            cVar40 = pcVar4[2];
            cVar41 = pcVar4[3];
            cVar42 = pcVar4[4];
            cVar43 = pcVar4[5];
            cVar44 = pcVar4[6];
            cVar45 = pcVar4[7];
            cVar46 = pcVar4[8];
            cVar47 = pcVar4[9];
            cVar48 = pcVar4[10];
            cVar49 = pcVar4[0xb];
            cVar50 = pcVar4[0xc];
            cVar51 = pcVar4[0xd];
            cVar52 = pcVar4[0xe];
            cVar53 = pcVar4[0xf];
            pcVar5 = (char *)(param_4 + 0x10 + uVar81);
            cVar54 = *pcVar5;
            cVar55 = pcVar5[1];
            cVar56 = pcVar5[2];
            cVar57 = pcVar5[3];
            cVar58 = pcVar5[4];
            cVar59 = pcVar5[5];
            cVar60 = pcVar5[6];
            cVar61 = pcVar5[7];
            cVar62 = pcVar5[8];
            cVar63 = pcVar5[9];
            cVar64 = pcVar5[10];
            cVar65 = pcVar5[0xb];
            cVar66 = pcVar5[0xc];
            cVar67 = pcVar5[0xd];
            cVar68 = pcVar5[0xe];
            cVar69 = pcVar5[0xf];
            pcVar5 = (char *)(param_2 + uVar81);
            *pcVar5 = *pcVar4 + *pcVar1;
            pcVar5[1] = cVar39 + cVar76;
            pcVar5[2] = cVar40 + cVar9;
            pcVar5[3] = cVar41 + cVar10;
            pcVar5[4] = cVar42 + cVar11;
            pcVar5[5] = cVar43 + cVar12;
            pcVar5[6] = cVar44 + cVar13;
            pcVar5[7] = cVar45 + cVar14;
            pcVar5[8] = cVar46 + cVar15;
            pcVar5[9] = cVar47 + cVar16;
            pcVar5[10] = cVar48 + cVar17;
            pcVar5[0xb] = cVar49 + cVar18;
            pcVar5[0xc] = cVar50 + cVar19;
            pcVar5[0xd] = cVar51 + cVar20;
            pcVar5[0xe] = cVar52 + cVar21;
            pcVar5[0xf] = cVar53 + cVar22;
            pcVar1 = (char *)(param_2 + 0x10 + uVar81);
            *pcVar1 = cVar54 + cVar23;
            pcVar1[1] = cVar55 + cVar24;
            pcVar1[2] = cVar56 + cVar25;
            pcVar1[3] = cVar57 + cVar26;
            pcVar1[4] = cVar58 + cVar27;
            pcVar1[5] = cVar59 + cVar28;
            pcVar1[6] = cVar60 + cVar29;
            pcVar1[7] = cVar61 + cVar30;
            pcVar1[8] = cVar62 + cVar31;
            pcVar1[9] = cVar63 + cVar32;
            pcVar1[10] = cVar64 + cVar33;
            pcVar1[0xb] = cVar65 + cVar34;
            pcVar1[0xc] = cVar66 + cVar35;
            pcVar1[0xd] = cVar67 + cVar36;
            pcVar1[0xe] = cVar68 + cVar37;
            pcVar1[0xf] = cVar69 + cVar38;
            uVar81 = uVar81 + 0x20;
          } while (uVar85 != uVar81);
          if (uVar85 == param_5) {
            return '\x01';
          }
          uVar81 = uVar85;
          if ((param_5 & 0x1c) == 0) goto LAB_02022e0d;
        }
        uVar85 = param_5 & 0xfffffffffffffffc;
        do {
          uVar7 = *(undefined4 *)(param_3 + uVar81);
          uVar8 = *(undefined4 *)(param_4 + uVar81);
          *(uint *)(param_2 + uVar81) =
               CONCAT13((char)((uint)uVar8 >> 0x18) + (char)((uint)uVar7 >> 0x18),
                        CONCAT12((char)((uint)uVar8 >> 0x10) + (char)((uint)uVar7 >> 0x10),
                                 CONCAT11((char)((uint)uVar8 >> 8) + (char)((uint)uVar7 >> 8),
                                          (char)uVar8 + (char)uVar7)));
          uVar81 = uVar81 + 4;
        } while (uVar85 != uVar81);
        if (uVar85 == param_5) {
          return '\x01';
        }
      }
LAB_02022e0d:
      uVar80 = param_5 & 3;
      uVar81 = uVar85;
      if (uVar80 != 0) {
        do {
          *(char *)(param_2 + uVar81) = *(char *)(param_4 + uVar81) + *(char *)(param_3 + uVar81);
          uVar81 = uVar81 + 1;
          uVar80 = uVar80 - 1;
        } while (uVar80 != 0);
      }
      if (0xfffffffffffffffc < uVar85 - param_5) {
        return '\x01';
      }
      do {
        *(char *)(param_2 + uVar81) = *(char *)(param_4 + uVar81) + *(char *)(param_3 + uVar81);
        *(char *)(param_2 + 1 + uVar81) =
             *(char *)(param_4 + 1 + uVar81) + *(char *)(param_3 + 1 + uVar81);
        *(char *)(param_2 + 2 + uVar81) =
             *(char *)(param_4 + 2 + uVar81) + *(char *)(param_3 + 2 + uVar81);
        *(char *)(param_2 + 3 + uVar81) =
             *(char *)(param_4 + 3 + uVar81) + *(char *)(param_3 + 3 + uVar81);
        uVar81 = uVar81 + 4;
      } while (param_5 != uVar81);
      return '\x01';
    }
  case 0:
    recovered_2001410((void *)param_2,(void *)param_3,param_5);
    uVar86 = '\x01';
    break;
  case 3:
    if (param_4 != 0) {
      if (param_5 == 0) {
        return '\x01';
      }
      if (param_5 == 1) {
        uVar81 = 0;
      }
      else {
        uVar85 = 0;
        do {
          uVar81 = uVar85;
          if (uVar81 < param_6) {
            uVar74 = 0;
          }
          else {
            uVar74 = (ushort)*(byte *)((param_2 - param_6) + uVar81);
          }
          *(char *)(param_2 + uVar81) =
               (char)((uint)uVar74 + (uint)*(byte *)(param_4 + uVar81) >> 1) +
               *(char *)(param_3 + uVar81);
          if (uVar81 + 1 < param_6) {
            uVar74 = 0;
          }
          else {
            uVar74 = (ushort)*(byte *)((param_2 - param_6) + 1 + uVar81);
          }
          *(char *)(param_2 + 1 + uVar81) =
               (char)((uint)uVar74 + (uint)*(byte *)(param_4 + 1 + uVar81) >> 1) +
               *(char *)(param_3 + 1 + uVar81);
          uVar85 = uVar81 + 2;
        } while (uVar81 + 2 != (param_5 & 0xfffffffffffffffe));
        uVar81 = uVar81 + 2;
      }
      if ((param_5 & 1) == 0) {
        return '\x01';
      }
      if (uVar81 < param_6) {
        uVar74 = 0;
      }
      else {
        uVar74 = (ushort)*(byte *)(param_2 + (uVar81 - param_6));
      }
      *(char *)(param_2 + uVar81) =
           (char)((uint)uVar74 + (uint)*(byte *)(param_4 + uVar81) >> 1) +
           *(char *)(param_3 + uVar81);
      return '\x01';
    }
    if (param_5 == 0) {
      return '\x01';
    }
    uVar85 = param_5;
    if (param_6 < param_5) {
      uVar85 = param_6;
    }
    if (param_6 == 0) {
      uVar81 = 0;
    }
    else {
      uVar81 = uVar85;
      if ((ulong)(param_2 - param_3) < 0x20 || uVar85 < 4) {
        uVar84 = 0;
      }
      else {
        if (uVar85 < 0x20) {
          uVar80 = 0;
        }
        else {
          uVar84 = uVar85 & 0xffffffffffffffe0;
          uVar80 = 0;
          do {
            uVar70 = ((undefined8 *)(param_3 + uVar80))[1];
            puVar3 = (undefined8 *)(param_3 + 0x10 + uVar80);
            uVar71 = *puVar3;
            uVar72 = puVar3[1];
            *(undefined8 *)(param_2 + uVar80) = *(undefined8 *)(param_3 + uVar80);
            ((undefined8 *)(param_2 + uVar80))[1] = uVar70;
            puVar3 = (undefined8 *)(param_2 + 0x10 + uVar80);
            *puVar3 = uVar71;
            puVar3[1] = uVar72;
            uVar80 = uVar80 + 0x20;
          } while (uVar84 != uVar80);
          if (uVar85 == uVar84) goto LAB_02023576;
          uVar80 = uVar84;
          if ((uVar85 & 0x1c) == 0) goto LAB_02023507;
        }
        uVar84 = uVar85 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(param_2 + uVar80) = *(undefined4 *)(param_3 + uVar80);
          uVar80 = uVar80 + 4;
        } while (uVar84 != uVar80);
        if (uVar85 == uVar84) goto LAB_02023576;
      }
LAB_02023507:
      uVar78 = uVar85 & 3;
      uVar80 = uVar84;
      if (uVar78 != 0) {
        do {
          *(undefined1 *)(param_2 + uVar80) = *(undefined1 *)(param_3 + uVar80);
          uVar80 = uVar80 + 1;
          uVar78 = uVar78 - 1;
        } while (uVar78 != 0);
      }
      if (uVar84 - uVar85 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)(param_2 + uVar80) = *(undefined1 *)(param_3 + uVar80);
          *(undefined1 *)(param_2 + 1 + uVar80) = *(undefined1 *)(param_3 + 1 + uVar80);
          *(undefined1 *)(param_2 + 2 + uVar80) = *(undefined1 *)(param_3 + 2 + uVar80);
          *(undefined1 *)(param_2 + 3 + uVar80) = *(undefined1 *)(param_3 + 3 + uVar80);
          uVar80 = uVar80 + 4;
        } while (uVar85 != uVar80);
      }
    }
LAB_02023576:
    auVar73 = _DAT_020a1a40;
    if (param_5 <= uVar81) {
      return '\x01';
    }
    uVar85 = param_5 - uVar85;
    if ((uVar85 < 4) || (param_6 < 0x20 || (ulong)(param_2 - param_3) < 0x20)) {
LAB_020235a3:
      uVar84 = uVar81;
    }
    else {
      if (uVar85 < 0x20) {
        uVar80 = 0;
      }
      else {
        uVar80 = uVar85 & 0xffffffffffffffe0;
        lVar82 = ((uVar81 + 0x10) - param_6) + param_2;
        uVar84 = 0;
        do {
          pcVar4 = (char *)(param_3 + uVar81 + uVar84);
          cVar76 = pcVar4[1];
          cVar9 = pcVar4[2];
          cVar10 = pcVar4[3];
          cVar11 = pcVar4[4];
          cVar12 = pcVar4[5];
          cVar13 = pcVar4[6];
          cVar14 = pcVar4[7];
          cVar15 = pcVar4[8];
          cVar16 = pcVar4[9];
          cVar17 = pcVar4[10];
          cVar18 = pcVar4[0xb];
          cVar19 = pcVar4[0xc];
          cVar20 = pcVar4[0xd];
          cVar21 = pcVar4[0xe];
          cVar22 = pcVar4[0xf];
          pcVar1 = (char *)(param_3 + uVar81 + 0x10 + uVar84);
          cVar23 = *pcVar1;
          cVar24 = pcVar1[1];
          cVar25 = pcVar1[2];
          cVar26 = pcVar1[3];
          cVar27 = pcVar1[4];
          cVar28 = pcVar1[5];
          cVar29 = pcVar1[6];
          cVar30 = pcVar1[7];
          cVar31 = pcVar1[8];
          cVar32 = pcVar1[9];
          cVar33 = pcVar1[10];
          cVar34 = pcVar1[0xb];
          cVar35 = pcVar1[0xc];
          cVar36 = pcVar1[0xd];
          cVar37 = pcVar1[0xe];
          cVar38 = pcVar1[0xf];
          puVar6 = (ushort *)(lVar82 + -0x10 + uVar84);
          puVar2 = (ushort *)(lVar82 + uVar84);
          PF_PART2(auVar91, 0) = *puVar6 >> 1;
          PF_PART2(auVar91, 2) = puVar6[1] >> 1;
          PF_PART2(auVar91, 4) = puVar6[2] >> 1;
          PF_PART2(auVar91, 6) = puVar6[3] >> 1;
          PF_PART2(auVar91, 8) = puVar6[4] >> 1;
          PF_PART2(auVar91, 10) = puVar6[5] >> 1;
          PF_PART2(auVar91, 12) = puVar6[6] >> 1;
          PF_PART2(auVar91, 14) = puVar6[7] >> 1;
          auVar91 = auVar91 & auVar73;
          PF_PART2(auVar92, 0) = *puVar2 >> 1;
          PF_PART2(auVar92, 2) = puVar2[1] >> 1;
          PF_PART2(auVar92, 4) = puVar2[2] >> 1;
          PF_PART2(auVar92, 6) = puVar2[3] >> 1;
          PF_PART2(auVar92, 8) = puVar2[4] >> 1;
          PF_PART2(auVar92, 10) = puVar2[5] >> 1;
          PF_PART2(auVar92, 12) = puVar2[6] >> 1;
          PF_PART2(auVar92, 14) = puVar2[7] >> 1;
          auVar92 = auVar92 & auVar73;
          pcVar1 = (char *)(param_2 + uVar81 + uVar84);
          *pcVar1 = PF_PART1(auVar91,0) + *pcVar4;
          pcVar1[1] = PF_PART1(auVar91,1) + cVar76;
          pcVar1[2] = PF_PART1(auVar91,2) + cVar9;
          pcVar1[3] = PF_PART1(auVar91,3) + cVar10;
          pcVar1[4] = PF_PART1(auVar91,4) + cVar11;
          pcVar1[5] = PF_PART1(auVar91,5) + cVar12;
          pcVar1[6] = PF_PART1(auVar91,6) + cVar13;
          pcVar1[7] = PF_PART1(auVar91,7) + cVar14;
          pcVar1[8] = PF_PART1(auVar91,8) + cVar15;
          pcVar1[9] = PF_PART1(auVar91,9) + cVar16;
          pcVar1[10] = PF_PART1(auVar91,10) + cVar17;
          pcVar1[0xb] = PF_PART1(auVar91,0xb) + cVar18;
          pcVar1[0xc] = PF_PART1(auVar91,0xc) + cVar19;
          pcVar1[0xd] = PF_PART1(auVar91,0xd) + cVar20;
          pcVar1[0xe] = PF_PART1(auVar91,0xe) + cVar21;
          pcVar1[0xf] = PF_PART1(auVar91,0xf) + cVar22;
          pcVar1 = (char *)(param_2 + uVar81 + 0x10 + uVar84);
          *pcVar1 = PF_PART1(auVar92,0) + cVar23;
          pcVar1[1] = PF_PART1(auVar92,1) + cVar24;
          pcVar1[2] = PF_PART1(auVar92,2) + cVar25;
          pcVar1[3] = PF_PART1(auVar92,3) + cVar26;
          pcVar1[4] = PF_PART1(auVar92,4) + cVar27;
          pcVar1[5] = PF_PART1(auVar92,5) + cVar28;
          pcVar1[6] = PF_PART1(auVar92,6) + cVar29;
          pcVar1[7] = PF_PART1(auVar92,7) + cVar30;
          pcVar1[8] = PF_PART1(auVar92,8) + cVar31;
          pcVar1[9] = PF_PART1(auVar92,9) + cVar32;
          pcVar1[10] = PF_PART1(auVar92,10) + cVar33;
          pcVar1[0xb] = PF_PART1(auVar92,0xb) + cVar34;
          pcVar1[0xc] = PF_PART1(auVar92,0xc) + cVar35;
          pcVar1[0xd] = PF_PART1(auVar92,0xd) + cVar36;
          pcVar1[0xe] = PF_PART1(auVar92,0xe) + cVar37;
          pcVar1[0xf] = PF_PART1(auVar92,0xf) + cVar38;
          uVar84 = uVar84 + 0x20;
        } while (uVar80 != uVar84);
        if (uVar85 == uVar80) {
          return '\x01';
        }
        if ((uVar85 & 0x1c) == 0) {
          uVar81 = uVar81 + uVar80;
          goto LAB_020235a3;
        }
      }
      auVar73 = _DAT_020a1a40;
      uVar78 = uVar85 & 0xfffffffffffffffc;
      uVar84 = uVar81 + uVar78;
      do {
        uVar7 = *(undefined4 *)(param_3 + uVar81 + uVar80);
        uVar8 = *(undefined4 *)((uVar81 - param_6) + param_2 + uVar80);
        auVar91 = ZEXT416(CONCAT22((ushort)((uint)uVar8 >> 0x11),(ushort)uVar8 >> 1)) & auVar73;
        *(uint *)(param_2 + uVar81 + uVar80) =
             CONCAT13(PF_PART1(auVar91,3) + (char)((uint)uVar7 >> 0x18),
                      CONCAT12(PF_PART1(auVar91,2) + (char)((uint)uVar7 >> 0x10),
                               CONCAT11(PF_PART1(auVar91,1) + (char)((uint)uVar7 >> 8),
                                        PF_PART1(auVar91,0) + (char)uVar7)));
        uVar80 = uVar80 + 4;
      } while (uVar78 != uVar80);
      if (uVar85 == uVar78) {
        return '\x01';
      }
    }
    uVar85 = uVar84;
    if ((iVar83 - (int)uVar84 & 1U) != 0) {
      *(byte *)(param_2 + uVar84) =
           (*(byte *)(param_2 + (uVar84 - param_6)) >> 1) + *(char *)(param_3 + uVar84);
      uVar85 = uVar84 + 1;
    }
    if (uVar84 == param_5 - 1) {
      return '\x01';
    }
    lVar82 = (param_2 + 1) - param_6;
    do {
      *(byte *)(param_2 + uVar85) =
           (*(byte *)(lVar82 + -1 + uVar85) >> 1) + *(char *)(param_3 + uVar85);
      *(byte *)(param_2 + 1 + uVar85) =
           (*(byte *)(lVar82 + uVar85) >> 1) + *(char *)(param_3 + 1 + uVar85);
      uVar85 = uVar85 + 2;
    } while (param_5 != uVar85);
    return '\x01';
  case 4:
    if (param_4 != 0) {
      if (param_5 == 0) {
        return '\x01';
      }
      uVar85 = 0;
      do {
        uVar77 = 0;
        uVar89 = 0;
        if (param_6 <= uVar85) {
          uVar77 = (uint)*(byte *)((param_2 - param_6) + uVar85);
          uVar89 = (uint)*(byte *)((param_4 - param_6) + uVar85);
        }
        uVar90 = (uint)*(byte *)(param_4 + uVar85);
        uVar79 = uVar77 - uVar89;
        uVar87 = -(uVar90 - uVar89);
        if ((int)uVar87 < 0) {
          uVar87 = uVar90 - uVar89;
        }
        uVar88 = -uVar79;
        if ((int)-uVar79 < 0) {
          uVar88 = uVar79;
        }
        uVar75 = (uVar79 + uVar90) - uVar89;
        uVar79 = -uVar75;
        if ((int)uVar79 < 0) {
          uVar79 = uVar75;
        }
        if (uVar88 <= uVar79) {
          uVar89 = uVar90;
        }
        if (uVar79 < uVar87) {
          uVar77 = uVar89;
        }
        cVar76 = (char)uVar77;
        if (uVar88 < uVar87) {
          cVar76 = (char)uVar89;
        }
        *(char *)(param_2 + uVar85) = cVar76 + *(char *)(param_3 + uVar85);
        uVar85 = uVar85 + 1;
      } while (param_5 != uVar85);
      return '\x01';
    }
    uVar85 = param_5;
    if (param_6 < param_5) {
      uVar85 = param_6;
    }
    if (uVar85 != 0) {
      if ((ulong)(param_2 - param_3) < 0x20 || uVar85 < 4) {
        uVar81 = 0;
      }
      else {
        if (uVar85 < 0x20) {
          uVar80 = 0;
        }
        else {
          uVar81 = uVar85 & 0xffffffffffffffe0;
          uVar80 = 0;
          do {
            uVar70 = ((undefined8 *)(param_3 + uVar80))[1];
            puVar3 = (undefined8 *)(param_3 + 0x10 + uVar80);
            uVar71 = *puVar3;
            uVar72 = puVar3[1];
            *(undefined8 *)(param_2 + uVar80) = *(undefined8 *)(param_3 + uVar80);
            ((undefined8 *)(param_2 + uVar80))[1] = uVar70;
            puVar3 = (undefined8 *)(param_2 + 0x10 + uVar80);
            *puVar3 = uVar71;
            puVar3[1] = uVar72;
            uVar80 = uVar80 + 0x20;
          } while (uVar81 != uVar80);
          if (uVar85 == uVar81) goto LAB_0202335b;
          uVar80 = uVar81;
          if ((uVar85 & 0x1c) == 0) goto LAB_020232f6;
        }
        uVar81 = uVar85 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(param_2 + uVar80) = *(undefined4 *)(param_3 + uVar80);
          uVar80 = uVar80 + 4;
        } while (uVar81 != uVar80);
        if (uVar85 == uVar81) goto LAB_0202335b;
      }
LAB_020232f6:
      uVar84 = uVar85 & 3;
      uVar80 = uVar81;
      if (uVar84 != 0) {
        do {
          *(undefined1 *)(param_2 + uVar80) = *(undefined1 *)(param_3 + uVar80);
          uVar80 = uVar80 + 1;
          uVar84 = uVar84 - 1;
        } while (uVar84 != 0);
      }
      if (uVar81 - uVar85 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)(param_2 + uVar80) = *(undefined1 *)(param_3 + uVar80);
          *(undefined1 *)(param_2 + 1 + uVar80) = *(undefined1 *)(param_3 + 1 + uVar80);
          *(undefined1 *)(param_2 + 2 + uVar80) = *(undefined1 *)(param_3 + 2 + uVar80);
          *(undefined1 *)(param_2 + 3 + uVar80) = *(undefined1 *)(param_3 + 3 + uVar80);
          uVar80 = uVar80 + 4;
        } while (uVar85 != uVar80);
      }
    }
LAB_0202335b:
    if (param_5 <= param_6) {
      return '\x01';
    }
    uVar81 = param_5 - uVar85;
    if ((uVar81 < 4) || (param_6 < 0x20 || (ulong)(param_2 - param_3) < 0x20)) {
LAB_02023391:
      uVar84 = uVar85;
    }
    else {
      if (uVar81 < 0x20) {
        uVar80 = 0;
      }
      else {
        uVar80 = uVar81 & 0xffffffffffffffe0;
        lVar82 = ((uVar85 + 0x10) - param_6) + param_2;
        uVar84 = 0;
        do {
          pcVar4 = (char *)(param_3 + uVar85 + uVar84);
          cVar76 = pcVar4[1];
          cVar9 = pcVar4[2];
          cVar10 = pcVar4[3];
          cVar11 = pcVar4[4];
          cVar12 = pcVar4[5];
          cVar13 = pcVar4[6];
          cVar14 = pcVar4[7];
          cVar15 = pcVar4[8];
          cVar16 = pcVar4[9];
          cVar17 = pcVar4[10];
          cVar18 = pcVar4[0xb];
          cVar19 = pcVar4[0xc];
          cVar20 = pcVar4[0xd];
          cVar21 = pcVar4[0xe];
          cVar22 = pcVar4[0xf];
          pcVar1 = (char *)(param_3 + uVar85 + 0x10 + uVar84);
          cVar23 = *pcVar1;
          cVar24 = pcVar1[1];
          cVar25 = pcVar1[2];
          cVar26 = pcVar1[3];
          cVar27 = pcVar1[4];
          cVar28 = pcVar1[5];
          cVar29 = pcVar1[6];
          cVar30 = pcVar1[7];
          cVar31 = pcVar1[8];
          cVar32 = pcVar1[9];
          cVar33 = pcVar1[10];
          cVar34 = pcVar1[0xb];
          cVar35 = pcVar1[0xc];
          cVar36 = pcVar1[0xd];
          cVar37 = pcVar1[0xe];
          cVar38 = pcVar1[0xf];
          pcVar5 = (char *)(lVar82 + -0x10 + uVar84);
          cVar39 = pcVar5[1];
          cVar40 = pcVar5[2];
          cVar41 = pcVar5[3];
          cVar42 = pcVar5[4];
          cVar43 = pcVar5[5];
          cVar44 = pcVar5[6];
          cVar45 = pcVar5[7];
          cVar46 = pcVar5[8];
          cVar47 = pcVar5[9];
          cVar48 = pcVar5[10];
          cVar49 = pcVar5[0xb];
          cVar50 = pcVar5[0xc];
          cVar51 = pcVar5[0xd];
          cVar52 = pcVar5[0xe];
          cVar53 = pcVar5[0xf];
          pcVar1 = (char *)(lVar82 + uVar84);
          cVar54 = *pcVar1;
          cVar55 = pcVar1[1];
          cVar56 = pcVar1[2];
          cVar57 = pcVar1[3];
          cVar58 = pcVar1[4];
          cVar59 = pcVar1[5];
          cVar60 = pcVar1[6];
          cVar61 = pcVar1[7];
          cVar62 = pcVar1[8];
          cVar63 = pcVar1[9];
          cVar64 = pcVar1[10];
          cVar65 = pcVar1[0xb];
          cVar66 = pcVar1[0xc];
          cVar67 = pcVar1[0xd];
          cVar68 = pcVar1[0xe];
          cVar69 = pcVar1[0xf];
          pcVar1 = (char *)(param_2 + uVar85 + uVar84);
          *pcVar1 = *pcVar5 + *pcVar4;
          pcVar1[1] = cVar39 + cVar76;
          pcVar1[2] = cVar40 + cVar9;
          pcVar1[3] = cVar41 + cVar10;
          pcVar1[4] = cVar42 + cVar11;
          pcVar1[5] = cVar43 + cVar12;
          pcVar1[6] = cVar44 + cVar13;
          pcVar1[7] = cVar45 + cVar14;
          pcVar1[8] = cVar46 + cVar15;
          pcVar1[9] = cVar47 + cVar16;
          pcVar1[10] = cVar48 + cVar17;
          pcVar1[0xb] = cVar49 + cVar18;
          pcVar1[0xc] = cVar50 + cVar19;
          pcVar1[0xd] = cVar51 + cVar20;
          pcVar1[0xe] = cVar52 + cVar21;
          pcVar1[0xf] = cVar53 + cVar22;
          pcVar1 = (char *)(param_2 + uVar85 + 0x10 + uVar84);
          *pcVar1 = cVar54 + cVar23;
          pcVar1[1] = cVar55 + cVar24;
          pcVar1[2] = cVar56 + cVar25;
          pcVar1[3] = cVar57 + cVar26;
          pcVar1[4] = cVar58 + cVar27;
          pcVar1[5] = cVar59 + cVar28;
          pcVar1[6] = cVar60 + cVar29;
          pcVar1[7] = cVar61 + cVar30;
          pcVar1[8] = cVar62 + cVar31;
          pcVar1[9] = cVar63 + cVar32;
          pcVar1[10] = cVar64 + cVar33;
          pcVar1[0xb] = cVar65 + cVar34;
          pcVar1[0xc] = cVar66 + cVar35;
          pcVar1[0xd] = cVar67 + cVar36;
          pcVar1[0xe] = cVar68 + cVar37;
          pcVar1[0xf] = cVar69 + cVar38;
          uVar84 = uVar84 + 0x20;
        } while (uVar80 != uVar84);
        if (uVar81 == uVar80) {
          return '\x01';
        }
        if ((uVar81 & 0x1c) == 0) {
          uVar85 = uVar85 + uVar80;
          goto LAB_02023391;
        }
      }
      uVar78 = uVar81 & 0xfffffffffffffffc;
      uVar84 = uVar85 + uVar78;
      do {
        uVar7 = *(undefined4 *)(param_3 + uVar85 + uVar80);
        uVar8 = *(undefined4 *)((uVar85 - param_6) + param_2 + uVar80);
        *(uint *)(param_2 + uVar85 + uVar80) =
             CONCAT13((char)((uint)uVar8 >> 0x18) + (char)((uint)uVar7 >> 0x18),
                      CONCAT12((char)((uint)uVar8 >> 0x10) + (char)((uint)uVar7 >> 0x10),
                               CONCAT11((char)((uint)uVar8 >> 8) + (char)((uint)uVar7 >> 8),
                                        (char)uVar8 + (char)uVar7)));
        uVar80 = uVar80 + 4;
      } while (uVar78 != uVar80);
      if (uVar81 == uVar78) {
        return '\x01';
      }
    }
    uVar85 = uVar84;
    if ((iVar83 - (int)uVar84 & 1U) != 0) {
      *(char *)(param_2 + uVar84) =
           *(char *)(param_2 + (uVar84 - param_6)) + *(char *)(param_3 + uVar84);
      uVar85 = uVar84 + 1;
    }
    if (uVar84 == param_5 - 1) {
      return '\x01';
    }
    lVar82 = (param_2 + 1) - param_6;
    do {
      *(char *)(param_2 + uVar85) = *(char *)(lVar82 + -1 + uVar85) + *(char *)(param_3 + uVar85);
      *(char *)(param_2 + 1 + uVar85) = *(char *)(lVar82 + uVar85) + *(char *)(param_3 + 1 + uVar85)
      ;
      uVar85 = uVar85 + 2;
    } while (param_5 != uVar85);
    return '\x01';
  default:
    uVar86 = '\0';
  }
  return uVar86;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a22e0 (*(byte *)(0x20eba70U))
#define DAT_020a22f0 (*(byte *)(0x20eba80U))
#define DAT_020a35bc (*(uint8_t *)(0x20eda40U))
#define DAT_020a35bd (*(uint8_t *)(0x20eda41U))
#define DAT_020a35be (*(uint8_t *)(0x20eda42U))
#define DAT_020a35bf (*(uint8_t *)(0x20eda43U))
#define DAT_020a35c0 (*(uint8_t *)(0x20eda44U))
#define DAT_020a35c1 (*(uint8_t *)(0x20eda45U))
#define auStack_12d (*(undefined1 (*)[5])(frame + 275))
#define bRam00000000020a22e1 (*(uint8_t *)(0x20eba71U))
#define bRam00000000020a22e2 (*(uint8_t *)(0x20eba72U))
#define bRam00000000020a22e3 (*(uint8_t *)(0x20eba73U))
#define bRam00000000020a22e4 (*(uint8_t *)(0x20eba74U))
#define bRam00000000020a22e5 (*(uint8_t *)(0x20eba75U))
#define bRam00000000020a22e6 (*(uint8_t *)(0x20eba76U))
#define bRam00000000020a22e7 (*(uint8_t *)(0x20eba77U))
#define bRam00000000020a22e8 (*(uint8_t *)(0x20eba78U))
#define bRam00000000020a22e9 (*(uint8_t *)(0x20eba79U))
#define bRam00000000020a22ea (*(uint8_t *)(0x20eba7aU))
#define bRam00000000020a22eb (*(uint8_t *)(0x20eba7bU))
#define bRam00000000020a22ec (*(uint8_t *)(0x20eba7cU))
#define bRam00000000020a22ed (*(uint8_t *)(0x20eba7dU))
#define bRam00000000020a22ee (*(uint8_t *)(0x20eba7eU))
#define bRam00000000020a22ef (*(uint8_t *)(0x20eba7fU))
#define bRam00000000020a22f1 (*(uint8_t *)(0x20eba81U))
#define bRam00000000020a22f2 (*(uint8_t *)(0x20eba82U))
#define bRam00000000020a22f3 (*(uint8_t *)(0x20eba83U))
#define bRam00000000020a22f4 (*(uint8_t *)(0x20eba84U))
#define bRam00000000020a22f5 (*(uint8_t *)(0x20eba85U))
#define bRam00000000020a22f6 (*(uint8_t *)(0x20eba86U))
#define bRam00000000020a22f7 (*(uint8_t *)(0x20eba87U))
#define bRam00000000020a22f8 (*(uint8_t *)(0x20eba88U))
#define bRam00000000020a22f9 (*(uint8_t *)(0x20eba89U))
#define bRam00000000020a22fa (*(uint8_t *)(0x20eba8aU))
#define bRam00000000020a22fb (*(uint8_t *)(0x20eba8bU))
#define bRam00000000020a22fc (*(uint8_t *)(0x20eba8cU))
#define bRam00000000020a22fd (*(uint8_t *)(0x20eba8dU))
#define bRam00000000020a22fe (*(uint8_t *)(0x20eba8eU))
#define bRam00000000020a22ff (*(uint8_t *)(0x20eba8fU))
#define local_128 (*(byte (*)[256])(frame + 280))
#define local_228 (*(char (*)[251])(frame + 24))
uchar recovered_20dbad0(long param_1,undefined1 *param_2)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  ulong uVar65;
  ulong uVar66;
  long lVar67;
  ulong uVar68;
  char cVar69;
  ulong uVar70;
  char *text;
  byte bVar71;
  char *pcVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;

  if (param_2 == (undefined1 *)0x0 || param_1 == 0) {
    return '\0';
  }
  *param_2 = 0;
  recovered_20411d0(param_1,local_228);
  pcVar72 = local_228;
  text = local_228;
  do {
    while( true ) {
      pcVar72 = pcVar72 + 1;
      cVar2 = pcVar72[-1];
      if ((cVar2 != '/') && (cVar2 != '\\')) break;
      text = pcVar72;
    }
  } while (cVar2 != '\0');
  if ((text == (char *)0x0) || (*text == '\0')) {
    return '\0';
  }
  uVar65 = recovered_2002e80(text);
  pcVar72 = &DAT_020a35bc;
  uVar66 = recovered_2002e80(&DAT_020a35bc);
  if (uVar65 < uVar66) {
    return '\0';
  }
  cVar2 = text[uVar65 - uVar66];
  if (cVar2 != '\0') {
    cVar69 = cVar2 + -0x20;
    if (0x19 < (byte)(cVar2 + 0x9fU)) {
      cVar69 = cVar2;
    }
    if (cVar69 != '.') {
      return '\0';
    }
    lVar67 = -uVar66;
    cVar2 = text[lVar67 + uVar65 + 1];
    if (cVar2 == '\0') {
      pcVar72 = &DAT_020a35bd;
    }
    else {
      cVar69 = cVar2 + -0x20;
      if (0x19 < (byte)(cVar2 + 0x9fU)) {
        cVar69 = cVar2;
      }
      if (cVar69 != 'K') {
        return '\0';
      }
      cVar2 = text[lVar67 + uVar65 + 2];
      if (cVar2 == '\0') {
        pcVar72 = &DAT_020a35be;
      }
      else {
        cVar69 = cVar2 + -0x20;
        if (0x19 < (byte)(cVar2 + 0x9fU)) {
          cVar69 = cVar2;
        }
        if (cVar69 != 'E') {
          return '\0';
        }
        cVar2 = text[lVar67 + uVar65 + 3];
        if (cVar2 == '\0') {
          pcVar72 = &DAT_020a35bf;
        }
        else {
          cVar69 = cVar2 + -0x20;
          if (0x19 < (byte)(cVar2 + 0x9fU)) {
            cVar69 = cVar2;
          }
          if (cVar69 != 'X') {
            return '\0';
          }
          cVar2 = text[lVar67 + uVar65 + 4];
          if (cVar2 == '\0') {
            pcVar72 = &DAT_020a35c0;
          }
          else {
            cVar69 = cVar2 + -0x20;
            if (0x19 < (byte)(cVar2 + 0x9fU)) {
              cVar69 = cVar2;
            }
            if (cVar69 != 'T') {
              return '\0';
            }
            if (text[lVar67 + uVar65 + 5] != '\0') {
              return '\0';
            }
            pcVar72 = &DAT_020a35c1;
          }
        }
      }
    }
  }
  if (*pcVar72 != '\0') {
    return '\0';
  }
  uVar65 = recovered_2002e80(text);
  if (uVar65 - 0xf1 < 0xffffffffffffff15) {
    return '\0';
  }
  uVar66 = uVar65 - 5;
  recovered_2001410(local_128,text,uVar66);
  auStack_12d[uVar65] = 0;
  *param_2 = 0x2f;
  bVar64 = bRam00000000020a22ff;
  bVar63 = bRam00000000020a22fe;
  bVar62 = bRam00000000020a22fd;
  bVar61 = bRam00000000020a22fc;
  bVar60 = bRam00000000020a22fb;
  bVar59 = bRam00000000020a22fa;
  bVar58 = bRam00000000020a22f9;
  bVar57 = bRam00000000020a22f8;
  bVar56 = bRam00000000020a22f7;
  bVar55 = bRam00000000020a22f6;
  bVar54 = bRam00000000020a22f5;
  bVar53 = bRam00000000020a22f4;
  bVar52 = bRam00000000020a22f3;
  bVar51 = bRam00000000020a22f2;
  bVar50 = bRam00000000020a22f1;
  bVar49 = DAT_020a22f0;
  bVar48 = bRam00000000020a22ef;
  bVar47 = bRam00000000020a22ee;
  bVar46 = bRam00000000020a22ed;
  bVar45 = bRam00000000020a22ec;
  bVar44 = bRam00000000020a22eb;
  bVar43 = bRam00000000020a22ea;
  bVar42 = bRam00000000020a22e9;
  bVar41 = bRam00000000020a22e8;
  bVar40 = bRam00000000020a22e7;
  bVar39 = bRam00000000020a22e6;
  bVar38 = bRam00000000020a22e5;
  bVar37 = bRam00000000020a22e4;
  bVar36 = bRam00000000020a22e3;
  bVar35 = bRam00000000020a22e2;
  bVar34 = bRam00000000020a22e1;
  bVar71 = DAT_020a22e0;
  if (uVar66 < 0x20) {
    uVar65 = 1;
    uVar68 = 0;
  }
  else {
    uVar68 = uVar66 & 0xffffffffffffffe0;
    uVar65 = uVar68 + 1;
    uVar70 = 0;
    do {
      bVar3 = local_128[uVar70 + 1];
      bVar4 = local_128[uVar70 + 2];
      bVar5 = local_128[uVar70 + 3];
      bVar6 = local_128[uVar70 + 4];
      bVar7 = local_128[uVar70 + 5];
      bVar8 = local_128[uVar70 + 6];
      bVar9 = local_128[uVar70 + 7];
      bVar10 = local_128[uVar70 + 8];
      bVar11 = local_128[uVar70 + 9];
      bVar12 = local_128[uVar70 + 10];
      bVar13 = local_128[uVar70 + 0xb];
      bVar14 = local_128[uVar70 + 0xc];
      bVar15 = local_128[uVar70 + 0xd];
      bVar16 = local_128[uVar70 + 0xe];
      bVar17 = local_128[uVar70 + 0xf];
      bVar18 = local_128[uVar70 + 0x10];
      bVar19 = local_128[uVar70 + 0x11];
      bVar20 = local_128[uVar70 + 0x12];
      bVar21 = local_128[uVar70 + 0x13];
      bVar22 = local_128[uVar70 + 0x14];
      bVar23 = local_128[uVar70 + 0x15];
      bVar24 = local_128[uVar70 + 0x16];
      bVar25 = local_128[uVar70 + 0x17];
      bVar26 = local_128[uVar70 + 0x18];
      bVar27 = local_128[uVar70 + 0x19];
      bVar28 = local_128[uVar70 + 0x1a];
      bVar29 = local_128[uVar70 + 0x1b];
      bVar30 = local_128[uVar70 + 0x1c];
      bVar31 = local_128[uVar70 + 0x1d];
      bVar32 = local_128[uVar70 + 0x1e];
      bVar33 = local_128[uVar70 + 0x1f];
      bVar73 = -(local_128[uVar70] == bVar71);
      bVar74 = -(bVar3 == bVar34);
      bVar75 = -(bVar4 == bVar35);
      bVar76 = -(bVar5 == bVar36);
      bVar77 = -(bVar6 == bVar37);
      bVar78 = -(bVar7 == bVar38);
      bVar79 = -(bVar8 == bVar39);
      bVar80 = -(bVar9 == bVar40);
      bVar81 = -(bVar10 == bVar41);
      bVar82 = -(bVar11 == bVar42);
      bVar83 = -(bVar12 == bVar43);
      bVar84 = -(bVar13 == bVar44);
      bVar85 = -(bVar14 == bVar45);
      bVar86 = -(bVar15 == bVar46);
      bVar87 = -(bVar16 == bVar47);
      bVar88 = -(bVar17 == bVar48);
      bVar89 = -(bVar18 == bVar71);
      bVar90 = -(bVar19 == bVar34);
      bVar91 = -(bVar20 == bVar35);
      bVar92 = -(bVar21 == bVar36);
      bVar93 = -(bVar22 == bVar37);
      bVar94 = -(bVar23 == bVar38);
      bVar95 = -(bVar24 == bVar39);
      bVar96 = -(bVar25 == bVar40);
      bVar97 = -(bVar26 == bVar41);
      bVar98 = -(bVar27 == bVar42);
      bVar99 = -(bVar28 == bVar43);
      bVar100 = -(bVar29 == bVar44);
      bVar101 = -(bVar30 == bVar45);
      bVar102 = -(bVar31 == bVar46);
      bVar103 = -(bVar32 == bVar47);
      bVar104 = -(bVar33 == bVar48);
      pbVar1 = param_2 + uVar70 + 1;
      *pbVar1 = bVar73 & bVar49 | ~bVar73 & local_128[uVar70];
      pbVar1[1] = bVar74 & bVar50 | ~bVar74 & bVar3;
      pbVar1[2] = bVar75 & bVar51 | ~bVar75 & bVar4;
      pbVar1[3] = bVar76 & bVar52 | ~bVar76 & bVar5;
      pbVar1[4] = bVar77 & bVar53 | ~bVar77 & bVar6;
      pbVar1[5] = bVar78 & bVar54 | ~bVar78 & bVar7;
      pbVar1[6] = bVar79 & bVar55 | ~bVar79 & bVar8;
      pbVar1[7] = bVar80 & bVar56 | ~bVar80 & bVar9;
      pbVar1[8] = bVar81 & bVar57 | ~bVar81 & bVar10;
      pbVar1[9] = bVar82 & bVar58 | ~bVar82 & bVar11;
      pbVar1[10] = bVar83 & bVar59 | ~bVar83 & bVar12;
      pbVar1[0xb] = bVar84 & bVar60 | ~bVar84 & bVar13;
      pbVar1[0xc] = bVar85 & bVar61 | ~bVar85 & bVar14;
      pbVar1[0xd] = bVar86 & bVar62 | ~bVar86 & bVar15;
      pbVar1[0xe] = bVar87 & bVar63 | ~bVar87 & bVar16;
      pbVar1[0xf] = bVar88 & bVar64 | ~bVar88 & bVar17;
      pbVar1 = param_2 + uVar70 + 0x11;
      *pbVar1 = bVar89 & bVar49 | ~bVar89 & bVar18;
      pbVar1[1] = bVar90 & bVar50 | ~bVar90 & bVar19;
      pbVar1[2] = bVar91 & bVar51 | ~bVar91 & bVar20;
      pbVar1[3] = bVar92 & bVar52 | ~bVar92 & bVar21;
      pbVar1[4] = bVar93 & bVar53 | ~bVar93 & bVar22;
      pbVar1[5] = bVar94 & bVar54 | ~bVar94 & bVar23;
      pbVar1[6] = bVar95 & bVar55 | ~bVar95 & bVar24;
      pbVar1[7] = bVar96 & bVar56 | ~bVar96 & bVar25;
      pbVar1[8] = bVar97 & bVar57 | ~bVar97 & bVar26;
      pbVar1[9] = bVar98 & bVar58 | ~bVar98 & bVar27;
      pbVar1[10] = bVar99 & bVar59 | ~bVar99 & bVar28;
      pbVar1[0xb] = bVar100 & bVar60 | ~bVar100 & bVar29;
      pbVar1[0xc] = bVar101 & bVar61 | ~bVar101 & bVar30;
      pbVar1[0xd] = bVar102 & bVar62 | ~bVar102 & bVar31;
      pbVar1[0xe] = bVar103 & bVar63 | ~bVar103 & bVar32;
      pbVar1[0xf] = bVar104 & bVar64 | ~bVar104 & bVar33;
      uVar70 = uVar70 + 0x20;
    } while (uVar68 != uVar70);
    if (uVar66 == uVar68) goto LAB_020967b2;
  }
  uVar70 = uVar65;
  do {
    uVar65 = uVar70 + 1;
    bVar71 = local_128[uVar68];
    if (local_128[uVar68] == 0x7e) {
      bVar71 = 0x2f;
    }
    param_2[uVar70] = bVar71;
    uVar68 = uVar68 + 1;
    uVar70 = uVar65;
  } while (uVar66 != uVar68);
LAB_020967b2:
  param_2[uVar65] = 0;
  do {
    if (param_2[uVar65 - 1] != '/') {
      return '\x01';
    }
    param_2[uVar65 - 1] = 0;
    uVar65 = uVar65 - 1;
  } while (1 < uVar65);
  return '\0';
}

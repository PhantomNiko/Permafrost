/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a25de (*(uint8_t *)(0x20ec488U))
#define str_020a25d5 (*(char (*)[1])(0x20ec47fU))
ulonglong recovered_2014090(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  uchar uVar4;
  int iVar5;
  ulonglong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  char *pcVar12;
  char cVar13;
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
  uint128 auVar14;
  uint128 auVar15;
  uint128 auVar16;
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
  uint128 auVar48;

  if (param_2 == (char *)0x0 || param_1 == (char *)0x0) {
    return 0;
  }
  iVar5 = recovered_2002a00(param_1,str_020a25d5,8);
  if (iVar5 != 0) {
    return 0;
  }
  bVar10 = param_1[0xf];
  PF_PART1(auVar48,0) = param_1[8] + *param_1;
  PF_PART1(auVar48,1) = param_1[9] + param_1[1];
  PF_PART1(auVar48,2) = param_1[10] + param_1[2];
  PF_PART1(auVar48,3) = param_1[0xb] + param_1[3];
  PF_PART1(auVar48,4) = param_1[0xc] + param_1[4];
  PF_PART1(auVar48,5) = param_1[0xd] + param_1[5];
  PF_PART1(auVar48,6) = param_1[0xe] + param_1[6];
  PF_PART1(auVar48,7) = bVar10 + param_1[7];
  PF_PART1(auVar48,8) = param_1[8] * '\x02';
  PF_PART1(auVar48,9) = param_1[9] * '\x02';
  PF_PART1(auVar48,10) = param_1[10] * '\x02';
  PF_PART1(auVar48,0xb) = param_1[0xb] * '\x02';
  PF_PART1(auVar48,0xc) = param_1[0xc] * '\x02';
  PF_PART1(auVar48,0xd) = param_1[0xd] * '\x02';
  PF_PART1(auVar48,0xe) = param_1[0xe] * '\x02';
  PF_PART1(auVar48,0xf) = bVar10 * '\x02';
  auVar48 = psadbw((uint128)0x0,auVar48);
  if ((char)(param_1[0x11] + param_1[0x12] + PF_PART1(auVar48,0) + param_1[0x10] + param_1[0x13]) != '\0') {
    return 0;
  }
  if (bVar10 < 2) goto LAB_0200a9e4;
  uVar2 = *(uint *)(param_1 + 0x14);
  if (((ulong)uVar2 < 0x24) || (pcVar12 = *(char **)(param_1 + 0x18), pcVar12 == (char *)0x0))
  goto LAB_0200a9e4;
  uVar7 = (ulong)(uVar2 & 0xffffffe0);
  cVar13 = '\0';
  cVar17 = '\0';
  cVar18 = '\0';
  cVar19 = '\0';
  cVar20 = '\0';
  cVar21 = '\0';
  cVar22 = '\0';
  cVar23 = '\0';
  cVar24 = '\0';
  cVar25 = '\0';
  cVar26 = '\0';
  cVar27 = '\0';
  cVar28 = '\0';
  cVar29 = '\0';
  cVar30 = '\0';
  cVar31 = '\0';
  uVar9 = 0;
  cVar32 = '\0';
  cVar33 = '\0';
  cVar34 = '\0';
  cVar35 = '\0';
  cVar36 = '\0';
  cVar37 = '\0';
  cVar38 = '\0';
  cVar39 = '\0';
  cVar40 = '\0';
  cVar41 = '\0';
  cVar42 = '\0';
  cVar43 = '\0';
  cVar44 = '\0';
  cVar45 = '\0';
  cVar46 = '\0';
  cVar47 = '\0';
  do {
    pcVar1 = param_1 + uVar9;
    cVar13 = cVar13 + *pcVar1;
    cVar17 = cVar17 + pcVar1[1];
    cVar18 = cVar18 + pcVar1[2];
    cVar19 = cVar19 + pcVar1[3];
    cVar20 = cVar20 + pcVar1[4];
    cVar21 = cVar21 + pcVar1[5];
    cVar22 = cVar22 + pcVar1[6];
    cVar23 = cVar23 + pcVar1[7];
    cVar24 = cVar24 + pcVar1[8];
    cVar25 = cVar25 + pcVar1[9];
    cVar26 = cVar26 + pcVar1[10];
    cVar27 = cVar27 + pcVar1[0xb];
    cVar28 = cVar28 + pcVar1[0xc];
    cVar29 = cVar29 + pcVar1[0xd];
    cVar30 = cVar30 + pcVar1[0xe];
    cVar31 = cVar31 + pcVar1[0xf];
    pcVar1 = param_1 + uVar9 + 0x10;
    cVar32 = cVar32 + *pcVar1;
    cVar33 = cVar33 + pcVar1[1];
    cVar34 = cVar34 + pcVar1[2];
    cVar35 = cVar35 + pcVar1[3];
    cVar36 = cVar36 + pcVar1[4];
    cVar37 = cVar37 + pcVar1[5];
    cVar38 = cVar38 + pcVar1[6];
    cVar39 = cVar39 + pcVar1[7];
    cVar40 = cVar40 + pcVar1[8];
    cVar41 = cVar41 + pcVar1[9];
    cVar42 = cVar42 + pcVar1[10];
    cVar43 = cVar43 + pcVar1[0xb];
    cVar44 = cVar44 + pcVar1[0xc];
    cVar45 = cVar45 + pcVar1[0xd];
    cVar46 = cVar46 + pcVar1[0xe];
    cVar47 = cVar47 + pcVar1[0xf];
    uVar9 = uVar9 + 0x20;
  } while (uVar7 != uVar9);
  PF_PART1(auVar14,0) = cVar40 + cVar24 + cVar32 + cVar13;
  PF_PART1(auVar14,1) = cVar41 + cVar25 + cVar33 + cVar17;
  PF_PART1(auVar14,2) = cVar42 + cVar26 + cVar34 + cVar18;
  PF_PART1(auVar14,3) = cVar43 + cVar27 + cVar35 + cVar19;
  PF_PART1(auVar14,4) = cVar44 + cVar28 + cVar36 + cVar20;
  PF_PART1(auVar14,5) = cVar45 + cVar29 + cVar37 + cVar21;
  PF_PART1(auVar14,6) = cVar46 + cVar30 + cVar38 + cVar22;
  PF_PART1(auVar14,7) = cVar47 + cVar31 + cVar39 + cVar23;
  PF_PART1(auVar14,8) = (cVar40 + cVar24) * '\x02';
  PF_PART1(auVar14,9) = (cVar41 + cVar25) * '\x02';
  PF_PART1(auVar14,10) = (cVar42 + cVar26) * '\x02';
  PF_PART1(auVar14,0xb) = (cVar43 + cVar27) * '\x02';
  PF_PART1(auVar14,0xc) = (cVar44 + cVar28) * '\x02';
  PF_PART1(auVar14,0xd) = (cVar45 + cVar29) * '\x02';
  PF_PART1(auVar14,0xe) = (cVar46 + cVar30) * '\x02';
  PF_PART1(auVar14,0xf) = (cVar47 + cVar31) * '\x02';
  auVar48 = psadbw((uint128)0x0,auVar14);
  uVar11 = PF_PART4(auVar48, 0);
  bVar10 = PF_PART1(auVar48,0);
  if ((uVar2 & 0xffffffe0) != uVar2) {
    if ((uVar2 & 0x1c) != 0) {
      uVar8 = uVar2 & 0xfffffffc;
      auVar48 = ZEXT416(uVar11 & 0xff);
      do {
        uVar3 = *(undefined4 *)(param_1 + uVar7);
        PF_PART8(auVar15, 0) =
             CONCAT44(0,CONCAT13(PF_PART1(auVar48,3) + (char)((uint)uVar3 >> 0x18),
                                 CONCAT12(PF_PART1(auVar48,2) + (char)((uint)uVar3 >> 0x10),
                                          CONCAT11(PF_PART1(auVar48,1) + (char)((uint)uVar3 >> 8),
                                                   PF_PART1(auVar48,0) + (char)uVar3))));
        PF_PART1(auVar15,8) = PF_PART1(auVar48,8);
        PF_PART1(auVar15,9) = PF_PART1(auVar48,9);
        PF_PART1(auVar15,10) = PF_PART1(auVar48,10);
        PF_PART1(auVar15,0xb) = PF_PART1(auVar48,0xb);
        PF_PART1(auVar15,0xc) = PF_PART1(auVar48,0xc);
        PF_PART1(auVar15,0xd) = PF_PART1(auVar48,0xd);
        PF_PART1(auVar15,0xe) = PF_PART1(auVar48,0xe);
        PF_PART1(auVar15,0xf) = PF_PART1(auVar48,0xf);
        uVar7 = uVar7 + 4;
        auVar48 = auVar15;
      } while (uVar8 != uVar7);
      PF_PART8(auVar16, 8) = 0;
      PF_PART8(auVar16, 0) = PF_PART8(auVar15, 0);
      auVar48 = psadbw(auVar16,(uint128)0x0);
      uVar11 = PF_PART4(auVar48, 0);
      bVar10 = PF_PART1(auVar48,0);
      uVar7 = (ulong)uVar8;
      if (uVar8 == uVar2) goto LAB_0200a9b1;
    }
    do {
      bVar10 = (char)uVar11 + param_1[uVar7];
      uVar11 = (uint)bVar10;
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
LAB_0200a9b1:
  if (((bVar10 == 0) && (uVar4 = recovered_2014240(pcVar12,&DAT_020a25de), uVar4 != '\0')) &&
     (uVar6 = recovered_2014280((long)pcVar12,'\x01',param_2), uVar6 != 0)) {
    return uVar6;
  }
LAB_0200a9e4:
  pcVar12 = (char *)(ulong)*(uint *)(param_1 + 0x10);
  if (((pcVar12 == (char *)0x0) || (*pcVar12 != 'R')) ||
     ((pcVar12[1] != 'S' || ((pcVar12[2] != 'D' || (pcVar12[3] != 'T')))))) {
    return 0;
  }
  uVar6 = recovered_2014280((long)pcVar12,'\0',param_2);
  return uVar6;
}

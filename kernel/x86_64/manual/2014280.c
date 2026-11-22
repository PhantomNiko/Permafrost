/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_020a15b0 (*(uint128 *)(0x20eaf60U))
#define local_34 (*(uint *)(frame + 28))
#define local_40 (*(char * *)(frame + 16))
ulonglong recovered_2014280(long param_1,char param_2,char *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  char cVar10;
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
  uint128 auVar11;
  uint128 auVar12;
  uint128 auVar13;
  uint128 auVar14;
  uint128 auVar15;
  char cVar31;
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
  uint128 auVar32;

  if (param_1 == 0) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 4);
  if ((ulong)uVar3 < 0x24) {
    return 0;
  }
  uVar4 = (ulong)(uVar3 & 0xffffffe0);
  cVar10 = '\0';
  cVar16 = '\0';
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
  uVar6 = 0;
  cVar31 = '\0';
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
    pcVar1 = (char *)(param_1 + uVar6);
    cVar10 = cVar10 + *pcVar1;
    cVar16 = cVar16 + pcVar1[1];
    cVar17 = cVar17 + pcVar1[2];
    cVar18 = cVar18 + pcVar1[3];
    cVar19 = cVar19 + pcVar1[4];
    cVar20 = cVar20 + pcVar1[5];
    cVar21 = cVar21 + pcVar1[6];
    cVar22 = cVar22 + pcVar1[7];
    cVar23 = cVar23 + pcVar1[8];
    cVar24 = cVar24 + pcVar1[9];
    cVar25 = cVar25 + pcVar1[10];
    cVar26 = cVar26 + pcVar1[0xb];
    cVar27 = cVar27 + pcVar1[0xc];
    cVar28 = cVar28 + pcVar1[0xd];
    cVar29 = cVar29 + pcVar1[0xe];
    cVar30 = cVar30 + pcVar1[0xf];
    pcVar1 = (char *)(param_1 + 0x10 + uVar6);
    cVar31 = cVar31 + *pcVar1;
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
    uVar6 = uVar6 + 0x20;
  } while (uVar4 != uVar6);
  PF_PART1(auVar32,0) = cVar40 + cVar23 + cVar31 + cVar10;
  PF_PART1(auVar32,1) = cVar41 + cVar24 + cVar33 + cVar16;
  PF_PART1(auVar32,2) = cVar42 + cVar25 + cVar34 + cVar17;
  PF_PART1(auVar32,3) = cVar43 + cVar26 + cVar35 + cVar18;
  PF_PART1(auVar32,4) = cVar44 + cVar27 + cVar36 + cVar19;
  PF_PART1(auVar32,5) = cVar45 + cVar28 + cVar37 + cVar20;
  PF_PART1(auVar32,6) = cVar46 + cVar29 + cVar38 + cVar21;
  PF_PART1(auVar32,7) = cVar47 + cVar30 + cVar39 + cVar22;
  PF_PART1(auVar32,8) = (cVar40 + cVar23) * '\x02';
  PF_PART1(auVar32,9) = (cVar41 + cVar24) * '\x02';
  PF_PART1(auVar32,10) = (cVar42 + cVar25) * '\x02';
  PF_PART1(auVar32,0xb) = (cVar43 + cVar26) * '\x02';
  PF_PART1(auVar32,0xc) = (cVar44 + cVar27) * '\x02';
  PF_PART1(auVar32,0xd) = (cVar45 + cVar28) * '\x02';
  PF_PART1(auVar32,0xe) = (cVar46 + cVar29) * '\x02';
  PF_PART1(auVar32,0xf) = (cVar47 + cVar30) * '\x02';
  auVar32 = psadbw((uint128)0x0,auVar32);
  uVar8 = PF_PART4(auVar32, 0);
  bVar7 = PF_PART1(auVar32,0);
  if ((uVar3 & 0xffffffe0) != uVar3) {
    if ((uVar3 & 0x1c) != 0) {
      uVar5 = uVar3 & 0xfffffffc;
      auVar32 = ZEXT416(uVar8 & 0xff);
      do {
        uVar2 = *(undefined4 *)(param_1 + uVar4);
        PF_PART8(auVar11, 0) =
             CONCAT44(0,CONCAT13(PF_PART1(auVar32,3) + (char)((uint)uVar2 >> 0x18),
                                 CONCAT12(PF_PART1(auVar32,2) + (char)((uint)uVar2 >> 0x10),
                                          CONCAT11(PF_PART1(auVar32,1) + (char)((uint)uVar2 >> 8),
                                                   PF_PART1(auVar32,0) + (char)uVar2))));
        PF_PART1(auVar11,8) = PF_PART1(auVar32,8);
        PF_PART1(auVar11,9) = PF_PART1(auVar32,9);
        PF_PART1(auVar11,10) = PF_PART1(auVar32,10);
        PF_PART1(auVar11,0xb) = PF_PART1(auVar32,0xb);
        PF_PART1(auVar11,0xc) = PF_PART1(auVar32,0xc);
        PF_PART1(auVar11,0xd) = PF_PART1(auVar32,0xd);
        PF_PART1(auVar11,0xe) = PF_PART1(auVar32,0xe);
        PF_PART1(auVar11,0xf) = PF_PART1(auVar32,0xf);
        uVar4 = uVar4 + 4;
        auVar32 = auVar11;
      } while (uVar5 != uVar4);
      PF_PART8(auVar12, 8) = 0;
      PF_PART8(auVar12, 0) = PF_PART8(auVar11, 0);
      auVar32 = psadbw(auVar12,(uint128)0x0);
      uVar8 = PF_PART4(auVar32, 0);
      bVar7 = PF_PART1(auVar32,0);
      uVar4 = (ulong)uVar5;
      if (uVar5 == uVar3) goto LAB_0200ab3c;
    }
    do {
      bVar7 = (char)uVar8 + *(char *)(param_1 + uVar4);
      uVar8 = (uint)bVar7;
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
LAB_0200ab3c:
  if ((bVar7 == 0) && (uVar3 = uVar3 - 0x24 >> (param_2 + 2U & 0x1f), uVar3 != 0)) {
    uVar4 = 0;
    do {
      local_40 = (char *)0x0;
      if (param_2 == '\0') {
        local_34 = 0;
        recovered_2001410(&local_34,(void *)(param_1 + 0x24 + uVar4 * 4),4);
        local_40 = (char *)(ulong)local_34;
      }
      else {
        recovered_2001410(&local_40,(void *)((ulong)(uint)((int)uVar4 * 8) + param_1 + 0x24),8);
      }
      if ((local_40 != (char *)0x0) && (param_3 != (char *)0x0)) {
        uVar8 = *(uint *)(local_40 + 4);
        if (((0x23 < uVar8) &&
            (((*local_40 == *param_3 && (local_40[1] == param_3[1])) && (local_40[2] == param_3[2]))
            )) && (local_40[3] == param_3[3])) {
          if (uVar8 < 4) {
            uVar6 = 0;
            uVar5 = 0;
LAB_0200acd0:
            do {
              bVar7 = (char)uVar5 + local_40[uVar6];
              uVar5 = (uint)bVar7;
              uVar6 = uVar6 + 1;
            } while (uVar8 != uVar6);
          }
          else if (uVar8 < 0x20) {
            bVar7 = 0;
            uVar9 = 0;
LAB_0200ac82:
            uVar6 = (ulong)(uVar8 & 0xfffffffc);
            auVar32 = ZEXT116(bVar7);
            do {
              uVar2 = *(undefined4 *)(local_40 + uVar9);
              PF_PART8(auVar14, 0) =
                   CONCAT44(0,CONCAT13(PF_PART1(auVar32,3) + (char)((uint)uVar2 >> 0x18),
                                       CONCAT12(PF_PART1(auVar32,2) + (char)((uint)uVar2 >> 0x10),
                                                CONCAT11(PF_PART1(auVar32,1) + (char)((uint)uVar2 >> 8),
                                                         PF_PART1(auVar32,0) + (char)uVar2))));
              PF_PART1(auVar14,8) = PF_PART1(auVar32,8);
              PF_PART1(auVar14,9) = PF_PART1(auVar32,9);
              PF_PART1(auVar14,10) = PF_PART1(auVar32,10);
              PF_PART1(auVar14,0xb) = PF_PART1(auVar32,0xb);
              PF_PART1(auVar14,0xc) = PF_PART1(auVar32,0xc);
              PF_PART1(auVar14,0xd) = PF_PART1(auVar32,0xd);
              PF_PART1(auVar14,0xe) = PF_PART1(auVar32,0xe);
              PF_PART1(auVar14,0xf) = PF_PART1(auVar32,0xf);
              uVar9 = uVar9 + 4;
              auVar32 = auVar14;
            } while (uVar6 != uVar9);
            PF_PART8(auVar15, 8) = 0;
            PF_PART8(auVar15, 0) = PF_PART8(auVar14, 0);
            auVar32 = psadbw(auVar15,(uint128)0x0);
            uVar5 = PF_PART4(auVar32, 0);
            bVar7 = PF_PART1(auVar32,0);
            if ((uVar8 & 0xfffffffc) != uVar8) goto LAB_0200acd0;
          }
          else {
            uVar6 = (ulong)(uVar8 & 0xffffffe0);
            cVar10 = '\0';
            cVar16 = '\0';
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
            uVar9 = 0;
            cVar31 = '\0';
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
              pcVar1 = local_40 + uVar9;
              cVar10 = cVar10 + *pcVar1;
              cVar16 = cVar16 + pcVar1[1];
              cVar17 = cVar17 + pcVar1[2];
              cVar18 = cVar18 + pcVar1[3];
              cVar19 = cVar19 + pcVar1[4];
              cVar20 = cVar20 + pcVar1[5];
              cVar21 = cVar21 + pcVar1[6];
              cVar22 = cVar22 + pcVar1[7];
              cVar23 = cVar23 + pcVar1[8];
              cVar24 = cVar24 + pcVar1[9];
              cVar25 = cVar25 + pcVar1[10];
              cVar26 = cVar26 + pcVar1[0xb];
              cVar27 = cVar27 + pcVar1[0xc];
              cVar28 = cVar28 + pcVar1[0xd];
              cVar29 = cVar29 + pcVar1[0xe];
              cVar30 = cVar30 + pcVar1[0xf];
              pcVar1 = local_40 + uVar9 + 0x10;
              cVar31 = cVar31 + *pcVar1;
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
            } while (uVar6 != uVar9);
            PF_PART1(auVar13,0) = cVar40 + cVar23 + cVar31 + cVar10;
            PF_PART1(auVar13,1) = cVar41 + cVar24 + cVar33 + cVar16;
            PF_PART1(auVar13,2) = cVar42 + cVar25 + cVar34 + cVar17;
            PF_PART1(auVar13,3) = cVar43 + cVar26 + cVar35 + cVar18;
            PF_PART1(auVar13,4) = cVar44 + cVar27 + cVar36 + cVar19;
            PF_PART1(auVar13,5) = cVar45 + cVar28 + cVar37 + cVar20;
            PF_PART1(auVar13,6) = cVar46 + cVar29 + cVar38 + cVar21;
            PF_PART1(auVar13,7) = cVar47 + cVar30 + cVar39 + cVar22;
            PF_PART1(auVar13,8) = (cVar40 + cVar23) * '\x02';
            PF_PART1(auVar13,9) = (cVar41 + cVar24) * '\x02';
            PF_PART1(auVar13,10) = (cVar42 + cVar25) * '\x02';
            PF_PART1(auVar13,0xb) = (cVar43 + cVar26) * '\x02';
            PF_PART1(auVar13,0xc) = (cVar44 + cVar27) * '\x02';
            PF_PART1(auVar13,0xd) = (cVar45 + cVar28) * '\x02';
            PF_PART1(auVar13,0xe) = (cVar46 + cVar29) * '\x02';
            PF_PART1(auVar13,0xf) = (cVar47 + cVar30) * '\x02';
            auVar32 = psadbw(auVar13,_DAT_020a15b0);
            uVar5 = PF_PART4(auVar32, 0);
            bVar7 = PF_PART1(auVar32,0);
            if ((uVar8 & 0xffffffe0) != uVar8) {
              uVar9 = uVar6;
              if ((uVar8 & 0x1c) == 0) goto LAB_0200acd0;
              goto LAB_0200ac82;
            }
          }
          if (bVar7 == 0) {
            return (ulonglong)local_40;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  return 0;
}

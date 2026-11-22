/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020de168 (*(uint32_t volatile *)(0x20de168U))
#define DAT_021306f8 (*(uint8_t volatile *)(0x21306f8U))
#define DAT_021306fc (*(uint32_t volatile *)(0x21306fcU))
#define DAT_02130700 (*(uint32_t volatile *)(0x2130700U))
#define DAT_02130704 (*(uint32_t volatile *)(0x2130704U))
#define DAT_02130708 (*(uint32_t volatile *)(0x2130708U))
#define DAT_0213070c (*(uint8_t volatile *)(0x213070cU))
#define DAT_02130710 (*(uint8_t volatile *)(0x2130710U))
#define DAT_02130712 (*(uint8_t volatile *)(0x2130712U))
#define DAT_02130714 (*(uint8_t volatile *)(0x2130714U))
#define DAT_02130718 (*(uint8_t volatile *)(0x2130718U))
#define DAT_0213071c (*(uint8_t volatile *)(0x213071cU))
#define DAT_0213071e (*(uint8_t volatile *)(0x213071eU))
#define DAT_02130720 (*(uint32_t volatile *)(0x2130720U))
#define DAT_0214b0e0 (*(uint8_t volatile *)(0x214b0e0U))
#define DAT_0214b0f8 (*(uint32_t volatile *)(0x214b0f8U))
#define DAT_0214b0fc (*(uint32_t volatile *)(0x214b0fcU))
#define DAT_0214b100 (*(uint32_t volatile *)(0x214b100U))
#define DAT_0214b104 (*(uint8_t volatile *)(0x214b104U))
#define DAT_0214b320 (*(uint32_t volatile *)(0x214b320U))
#define DAT_0214b364 (*(uint32_t volatile *)(0x214b364U))
#define DAT_0214bc20 (*(uint32_t volatile *)(0x214bc20U))
#define DAT_0214bc24 (*(uint32_t volatile *)(0x214bc24U))
#define DAT_0214bc28 (*(uint32_t volatile *)(0x214bc28U))
#define DAT_0214bc2c (*(uint32_t volatile *)(0x214bc2cU))
#define UNK_0214b324 (*(uint8_t volatile *)(0x214b324U))
#define uStack_34 (*(uint *)(frame + 28))
#define iStack_38 (*(int *)(frame + 24))
#define uStack_30 (*(ulong *)(frame + 32))


void recovered_2026f10(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  byte bVar8;
  byte bVar9;
  uchar uVar10;
  uchar uVar11;
  int iVar12;
  uint uVar13;
  void *out;
  uchar uVar14;
  undefined3 extraout_var = 0;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  int iVar18;
  ulong uVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  int *piVar25;
  char *text;
  uint incoming_edx;
  int iVar26;
  bool bVar27;

  uVar14 = recovered_2006ec0();
  uVar21 = 0;
  if (CONCAT31(extraout_var,uVar14) < 0x20) {
    uVar21 = CONCAT31(extraout_var,uVar14);
  }
  (&DAT_0214b364)[uVar21 * 0x12] = uVar21;
  pcVar20 = (char *)(&DAT_0214b320)[uVar21 * 0x12];
  if ((pcVar20 != (char *)0x0) && (*pcVar20 == '\x01')) {
    if (pcVar20[2] == '\x01') {
      if (uVar21 != 0) {
LAB_02026f8b:
        recovered_2019450(&UNK_0214b324 + uVar21 * 0x48,1);
        cVar4 = DAT_021306f8;
        if ((cVar4 == '\x01') && (iVar18 = DAT_0214bc2c, iVar18 == 0)) {
          cVar4 = DAT_0214b0e0;
          if ((cVar4 == '\x01') && (cVar4 = DAT_0214b104, cVar4 == '\x01')) {
            iVar5 = DAT_02130700;
            iVar18 = DAT_021306fc;
            iVar6 = DAT_0214b0f8;
            iVar12 = DAT_0214b0fc;
            piVar25 = (int *)DAT_0214b100;
            iVar26 = iVar18;
            if ((piVar25 != (int *)0x0) && (uVar21 = iVar12 * iVar6, uVar21 != 0)) {
              uVar7 = DAT_0213070c;
              bVar8 = DAT_02130710;
              bVar9 = DAT_02130712;
              if (((uint)piVar25 & 3) == 0) {
                iVar2 = (uint)bVar9 * 0x10000 + -0x1000000 +
                        ((uint)bVar8 << 8 | CONCAT11(bVar8,uVar7) & 0xff);
                if (uVar21 < 0x20) {
                  do {
                    *piVar25 = iVar2;
                    piVar25 = piVar25 + 1;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                }
                else {
                  for (; uVar21 != 0; uVar21 = uVar21 - 1) {
                    *piVar25 = iVar2;
                    piVar25 = piVar25 + 1;
                  }
                  iVar26 = DAT_021306fc;
                }
              }
              else {
                puVar24 = (undefined1 *)((int)piVar25 + 3);
                do {
                  puVar24[-3] = uVar7;
                  puVar24[-2] = bVar8;
                  puVar24[-1] = bVar9;
                  *puVar24 = 0xff;
                  puVar24 = puVar24 + 4;
                  uVar21 = uVar21 - 1;
                } while (uVar21 != 0);
              }
            }
            if (iVar26 != 0) {
              iStack_38 = (iVar6 + iVar5 * -8) / 2;
              iVar18 = (iVar12 + iVar18 * -0x10) / 2;
              uVar21 = 0;
              if (iStack_38 < 1) {
                iStack_38 = 0;
              }
              if (iVar18 < 1) {
                iVar18 = 0;
              }
              iVar26 = iVar18;
              do {
                iVar5 = DAT_02130720;
                pcVar20 = (char *)0x0;
                if ((iVar5 != 0) && (iVar6 = DAT_02130700, iVar6 != 0)) {
                  pcVar20 = (char *)(iVar5 + (iVar6 + 1) * uVar21);
                }
                text = &DAT_020c5084;
                if (pcVar20 != (char *)0x0) {
                  text = pcVar20;
                }
                uVar14 = DAT_02130714;
                uVar10 = DAT_02130718;
                uVar11 = DAT_0213071c;
                uVar19 = recovered_2002270(text);
                recovered_204b4f0(iStack_38,iVar26,(int)text,uVar19,uVar14,uVar10,uVar11);
                uVar21 = uVar21 + 1;
                uVar15 = DAT_021306fc;
                iVar26 = iVar26 + 0x10;
              } while (uVar21 < uVar15);
              uVar21 = DAT_02130704;
              if (uVar21 < uVar15) {
                uVar16 = DAT_02130708;
                uVar15 = DAT_02130700;
                if (uVar16 < uVar15) {
                  uVar14 = DAT_02130714;
                  uVar10 = DAT_02130718;
                  uVar11 = DAT_0213071c;
                  recovered_204a600(&DAT_0214b0f8,iStack_38 + uVar16 * 8,
                                    iVar18 + 0xd + uVar21 * 0x10,8,2,uVar14,uVar10,uVar11);
                }
              }
            }
            recovered_2008d90('\0');
            recovered_204a780();
            return;
          }
          recovered_2008d90('\0');
          uVar21 = recovered_2008250();
          uVar21 = uVar21 + (uVar21 == 0);
          uVar15 = recovered_2008290();
          incoming_edx = uVar15 + (uVar15 == 0);
          uVar16 = recovered_204b270(uVar21,incoming_edx);
          if ((char)uVar16 != '\0') {
            out = (void *)DAT_0214bc28;
            if (out != (void *)0x0) {
              iVar26 = DAT_0214bc24;
              iVar18 = DAT_0214bc20;
              recovered_2001e00(out,0x20,iVar26 * iVar18);
            }
            uStack_34 = DAT_021306fc;
            if (uStack_34 != 0) {
              puVar24 = (undefined1 *)DAT_02130720;
              uVar16 = 1;
              uVar22 = DAT_02130700;
              do {
                uVar1 = uVar16 - 1;
                puVar17 = (undefined1 *)0x0;
                if (uVar22 != 0) {
                  puVar17 = puVar24 + (uVar22 + 1) * uVar1;
                }
                puVar23 = puVar24;
                if (puVar24 != (undefined1 *)0x0) {
                  puVar23 = puVar17;
                }
                puVar17 = &DAT_020c5084;
                if (puVar23 != (undefined1 *)0x0) {
                  puVar17 = puVar23;
                }
                iVar18 = DAT_0214bc28;
                if (((iVar18 != 0) && (uVar13 = DAT_0214bc24, uVar1 < uVar13)) &&
                   (uVar13 = DAT_0214bc20, uVar13 != 0 && uVar22 != 0)) {
                  uStack_30 = uVar13;
                  if (uVar22 <= uVar13) {
                    uStack_30 = uVar22;
                  }
                  recovered_2001b70((void *)(iVar18 + uVar13 * uVar1),puVar17,uStack_30);
                  puVar24 = (undefined1 *)DAT_02130720;
                  uStack_34 = DAT_021306fc;
                  uVar22 = DAT_02130700;
                }
              } while ((uVar16 < uVar15) &&
                      (bVar27 = uVar16 < uStack_34, uVar16 = uVar16 + 1, bVar27));
            }
            uVar14 = DAT_0213071e;
            recovered_204b330(uVar14);
            uVar15 = DAT_02130704;
            if ((uVar15 < incoming_edx) && (uVar16 = DAT_02130708, uVar16 < uVar21)) {
              recovered_2008e70(uVar15,uVar16);
              recovered_2008d90('\x01');
            }
          }
        }
        return;
      }
    }
    else {
      pcVar20[5] = '\x01';
      if ((uVar21 == 0) && (1 < *(uint *)(pcVar20 + 0x18))) {
        *(uint *)(pcVar20 + 0x18) = *(uint *)(pcVar20 + 0x18) - 1;
      }
      else {
        uVar3 = DAT_020de168;
        *(undefined4 *)(pcVar20 + 0x18) = uVar3;
        iVar18 = recovered_2019420(pcVar20 + 0x24);
        if (iVar18 == 0) goto LAB_02026f8b;
      }
    }
  }
  return;
}
#undef DAT_020c5084
#undef DAT_020de168
#undef DAT_021306f8
#undef DAT_021306fc
#undef DAT_02130700
#undef DAT_02130704
#undef DAT_02130708
#undef DAT_0213070c
#undef DAT_02130710
#undef DAT_02130712
#undef DAT_02130714
#undef DAT_02130718
#undef DAT_0213071c
#undef DAT_0213071e
#undef DAT_02130720
#undef DAT_0214b0e0
#undef DAT_0214b0f8
#undef DAT_0214b0fc
#undef DAT_0214b100
#undef DAT_0214b104
#undef DAT_0214b320
#undef DAT_0214b364
#undef DAT_0214bc20
#undef DAT_0214bc24
#undef DAT_0214bc28
#undef DAT_0214bc2c
#undef UNK_0214b324
#undef uStack_34
#undef iStack_38
#undef uStack_30

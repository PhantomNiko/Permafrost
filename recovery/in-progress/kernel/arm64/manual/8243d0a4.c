/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e262 (*(uint8_t *)(0x82473a33U))
#define DAT_40494ab8 (*(uint64_t volatile *)(0x8266f188U))
#define DAT_40494ac0 (*(uint64_t volatile *)(0x8266f190U))
#define acStack_159 (*(char (*)[249])(frame + 375))
#define acStack_24a (*(char (*)[241])(frame + 134))
#define in_stack_fffffffffffffd48 (*(char * *)(frame + 24))
#define pvStack_258 (*(void * *)(frame + 120))
#define str_4044ece4 (*(char (*)[1])(0x82473bd8U))
#define uStack_260 (*(ulong *)(frame + 112))
uint128 recovered_8243d0a4(long param_1,long param_2,uint param_3,int param_4,int param_5,uint param_6,
                  long param_7,ulong param_8,char *param_9,uint param_10)

{
  unsigned char frame[752] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  char *format;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulong uVar20;
  char cVar21;
  ulong uVar22;
  long unaff_x30;
  uint128 auVar23;
  char *pcVar24;
  void **ppvVar25;

  uVar11 = 0;
  if (param_1 != 0) {
    if ((param_7 != 0) && (param_10 < 0x21)) {
      uVar13 = (ulong)param_6;
      uVar20 = 0;
      do {
        while( true ) {
          uVar1 = uVar20 + 0x20;
          if (param_8 < uVar1) goto LAB_40427258;
          pcVar24 = (char *)(param_7 + uVar20);
          if (*pcVar24 != -0x7b) break;
          bVar3 = pcVar24[1];
          uVar1 = uVar1 + (ulong)bVar3 * 0x20;
          if ((ulong)bVar3 < 2 || param_8 < uVar1) goto LAB_40427260;
          if (pcVar24[0x20] == -0x40) {
            uVar14 = 0;
            uVar17 = 0;
            uVar15 = 0;
            bVar4 = pcVar24[4];
            uVar16 = (ulong)(byte)pcVar24[0x23];
            uVar2 = *(uint *)(pcVar24 + 0x34);
            bVar5 = pcVar24[0x21];
            uVar22 = *(ulong *)(pcVar24 + 0x38);
            uVar6 = bVar5 >> 1 & 1;
            acStack_159[0] = '\0';
            puVar18 = (undefined1 *)(param_7 + 0x43 + uVar20);
            while( true ) {
              bVar9 = bVar3 - 1 <= uVar17;
              bVar10 = uVar16 <= uVar14;
              if (bVar9 || bVar10) break;
              if (pcVar24[uVar17 * 0x20 + 0x40] == -0x3f) {
                puVar19 = puVar18;
                for (uVar20 = 2; uVar20 < 0x20 && uVar14 < uVar16; uVar20 = uVar20 + 2) {
                  if (0xf0 < uVar15 + 1) goto LAB_404270fc;
                  cVar21 = puVar19[-1];
                  if (0x5e < CONCAT11(*puVar19,cVar21) - 0x20) {
                    cVar21 = '?';
                  }
                  acStack_159[uVar15] = cVar21;
                  uVar14 = uVar14 + 1;
                  puVar19 = puVar19 + 2;
                  uVar15 = uVar15 + 1;
                }
              }
              uVar17 = uVar17 + 1;
              puVar18 = puVar18 + 0x20;
            }
LAB_404270fc:
            if ((uVar14 == uVar16 && (bVar9 || bVar10)) && (acStack_159[uVar15] = '\0', uVar15 != 0)
               ) {
              if ((param_9 == (char *)0x0) || (*param_9 == '\0')) {
                format = &DAT_4044e262;
                pcVar24 = acStack_159;
              }
              else {
                format = str_4044ece4;
                pcVar24 = param_9;
                in_stack_fffffffffffffd48 = acStack_159;
              }
              pf_varargs_404019bc_2
                        (acStack_24a,0xf1,format,(ulonglong)pcVar24,
                         (ulonglong)in_stack_fffffffffffffd48);
              if ((bVar4 >> 4 & 1) == 0) {
                if (uVar22 >> 0x20 == 0) {
                  if (uVar22 == 0) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = 0;
                    if (uVar13 != 0) {
                      uVar12 = (undefined4)(((uVar13 - 1) + uVar22) / uVar13);
                    }
                  }
                  uVar11 = recovered_8243d398((long)acStack_24a,0,(int)uVar22,0,uVar2,uVar12);
                  if ((int)uVar11 != 0) {
                    lVar7 = DAT_40494ab8;
                    lVar8 = DAT_40494ac0;
                    *(uint *)(lVar7 + lVar8 * 0x118 + -0x10) = uVar6;
                    goto LAB_40427250;
                  }
                }
              }
              else {
                uStack_260 = 0;
                pvStack_258 = (void *)0x0;
                uVar11 = recovered_8243d398((long)acStack_24a,0,0,2,uVar2,0);
                if ((int)uVar11 != 0) {
                  lVar7 = DAT_40494ab8;
                  lVar8 = DAT_40494ac0;
                  *(uint *)(lVar7 + lVar8 * 0x118 + -0x10) = uVar6;
                  if ((uVar2 < 2) || (uVar22 == 0)) goto LAB_40427250;
                  ppvVar25 = &pvStack_258;
                  uVar11 = recovered_8243cefc(param_1,param_2,param_3,param_4,param_5,param_6,uVar2,
                                              (uint)((bVar5 & 2) != 0),uVar22,(long *)ppvVar25,
                                              (long *)&uStack_260);
                  if ((int)uVar11 != 0) {
                    in_stack_fffffffffffffd48 =
                         (char *)CONCAT44((int)((ulong)ppvVar25 >> 0x20),param_10 + 1);
                    auVar23 = recovered_8243d0a4(param_1,param_2,param_3,param_4,param_5,param_6,
                                                 (long)pvStack_258,uStack_260,acStack_24a,
                                                 param_10 + 1);
                    recovered_82400748(pvStack_258);
                    if (PF_PART4(auVar23, 0) != 0) goto LAB_40427250;
                  }
                }
              }
LAB_40427260:
              uVar11 = 0;
              goto LAB_40427264;
            }
          }
LAB_40427250:
          uVar20 = uVar1;
        }
        uVar20 = uVar1;
      } while (*pcVar24 != '\0');
LAB_40427258:
      uVar11 = 1;
    }
LAB_40427264:
    param_2 = unaff_x30;
  }
  PF_PART8(auVar23, 8) = param_2;
  PF_PART8(auVar23, 0) = uVar11;
  return auVar23;
}

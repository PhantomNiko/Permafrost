/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044df08 (*(uint8_t *)(0x82473098U))
#define aiStack_8c (*(int (*)[3])(frame + 196))
#define iStack_120 (*(int *)(frame + 48))
#define iStack_124 (*(int *)(frame + 44))
#define iStack_128 (*(int *)(frame + 40))
#define lStack_108 (*(long *)(frame + 72))
#define lStack_b0 (*(long *)(frame + 160))
#define lStack_e8 (*(long *)(frame + 104))
#define lStack_f0 (*(long *)(frame + 96))
#define pbStack_110 (*(byte * *)(frame + 64))
#define plStack_e0 (*(long * *)(frame + 112))
#define ppbStack_c8 (*(byte ** *)(frame + 136))
#define pvStack_138 (*(void * *)(frame + 24))
#define pvStack_a8 (*(void * *)(frame + 168))
#define pvStack_b8 (*(void * *)(frame + 152))
#define uStack_140 (*(ulong *)(frame + 16))
#define uStack_a0 (*(undefined8 *)(frame + 176))
#define uStack_c0 (*(undefined8 *)(frame + 144))
#define uStack_d0 (*(undefined8 *)(frame + 128))
#define uStack_d8 (*(ulong *)(frame + 120))
#define uStack_f8 (*(undefined8 *)(frame + 88))
uint128 recovered_82416f34(double param_1,byte *param_2,byte *param_3,uint param_4,uint param_5,uint param_6
                  )

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  byte bVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  bool bVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  int *piVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  long *plVar29;
  long lVar30;
  long lVar31;
  int iVar32;
  long lVar33;
  undefined8 uVar34;
  long lVar35;
  ulong uVar36;
  long *plVar37;
  int *piVar38;
  void *pvVar39;
  uint uVar40;
  undefined8 unaff_x30;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  float fVar45;
  uint128 auVar46;

  if (param_2 == (byte *)0x0) {
    plVar37 = (long *)0x0;
  }
  else {
    plVar37 = (long *)0x0;
    if ((param_3 != (byte *)0x0) && (*(long *)param_2 != 0)) {
      if (*param_3 == 0) {
        plVar37 = recovered_8240fa98(0x20);
        recovered_82417874(plVar37);
      }
      else {
        uStack_d8 = 0;
        uStack_d0 = 0;
        plStack_e0 = (long *)0x0;
        recovered_824178ac((long *)&plStack_e0);
        pvStack_b8 = (void *)0x0;
        lStack_b0 = 0;
        uStack_c0 = (int *)0x0;
LAB_40411298:
        bVar17 = *param_3;
        if (bVar17 != 0) {
          param_3 = param_3 + 1;
          uVar26 = (uint)bVar17;
          if ((char)bVar17 < '\0') {
            uStack_f8 = CONCAT44(PF_PART4(uStack_f8, 4),0xfffd);
            pbVar18 = param_3;
            if ((uVar26 & 0xe0) == 0xc0) {
              uVar40 = uVar26 & 0x1f;
              uStack_f8 = CONCAT44(PF_PART4(uStack_f8, 4),uVar26) & 0xffffffff0000001f;
              lVar35 = 1;
              lVar30 = lVar35;
joined_r0x40411318:
              for (; lVar35 != 0; lVar35 = lVar35 + -1) {
                if ((*pbVar18 & 0xc0) != 0x80) {
                  pbStack_110 = (byte *)CONCAT44(PF_PART4(pbStack_110, 4),0xfffd);
                  recovered_82415cfc(&uStack_c0,(undefined4 *)&pbStack_110);
                  goto LAB_40411298;
                }
                uVar40 = *pbVar18 & 0x3f | uVar40 << 6;
                PF_PART4(uStack_f8, 4) = (undefined4)(uStack_f8 >> 0x20);
                uStack_f8 = CONCAT44(PF_PART4(uStack_f8, 4),uVar40);
                pbVar18 = pbVar18 + 1;
              }
              recovered_82415c98(&uStack_c0,(undefined4 *)&uStack_f8);
              param_3 = param_3 + lVar30;
            }
            else {
              if ((uVar26 & 0xf0) == 0xe0) {
                uVar40 = uVar26 & 0xf;
                uStack_f8 = CONCAT44(PF_PART4(uStack_f8, 4),uVar26) & 0xffffffff0000000f;
                lVar35 = 2;
                lVar30 = lVar35;
                goto joined_r0x40411318;
              }
              if ((uVar26 & 0xf8) == 0xf0) {
                uVar40 = uVar26 & 7;
                uStack_f8 = CONCAT44(PF_PART4(uStack_f8, 4),uVar26) & 0xffffffff00000007;
                lVar35 = 3;
                lVar30 = lVar35;
                goto joined_r0x40411318;
              }
              pbStack_110 = (byte *)CONCAT44(PF_PART4(pbStack_110, 4),0xfffd);
              recovered_82415cfc(&uStack_c0,(undefined4 *)&pbStack_110);
            }
          }
          else {
            uStack_f8 = CONCAT44(PF_PART4(uStack_f8, 4),uVar26);
            recovered_82415cfc(&uStack_c0,(undefined4 *)&uStack_f8);
          }
          goto LAB_40411298;
        }
        piVar38 = uStack_c0;
        for (lVar35 = (long)pvStack_b8 << 2; lVar35 != 0; lVar35 = lVar35 + -4) {
          iVar27 = *piVar38;
          PF_PART4(uStack_f8, 4) = (undefined4)(uStack_f8 >> 0x20);
          uStack_f8 = CONCAT44(PF_PART4(uStack_f8, 4),iVar27);
          if (iVar27 != 0xd) {
            if (iVar27 == 10) {
              recovered_824178ac((long *)&plStack_e0);
            }
            else {
              recovered_82415c98(plStack_e0 + uStack_d8 * 3 + -3,(undefined4 *)&uStack_f8);
            }
          }
          piVar38 = piVar38 + 1;
        }
        pvStack_b8 = (void *)0x0;
        recovered_8240facc(uStack_c0);
        if (uStack_d8 == 0) {
          recovered_824178ac((long *)&plStack_e0);
        }
        uVar36 = *(ulong *)(param_2 + 0x18);
        plVar37 = plStack_e0;
        for (lVar35 = uStack_d8 * 0x18; lVar35 != 0; lVar35 = lVar35 + -0x18) {
          uVar36 = plVar37[1] + uVar36;
          plVar37 = plVar37 + 3;
        }
        recovered_8241c514((long *)(param_2 + 0x10),uVar36);
        recovered_824166bc((long *)(param_2 + 0x40),uVar36);
        uVar22 = recovered_8241c4f8(*(ulong *)(param_2 + 0x30));
        if (uVar22 < uVar36) {
          recovered_8241c458((long)(param_2 + 0x10),uVar36 << 1);
        }
        lStack_f0 = 0;
        lStack_e8 = 0;
        uStack_f8 = 0;
        recovered_8241790c(&uStack_f8,uStack_d8);
        uVar26 = 0;
        plVar29 = plStack_e0 + uStack_d8 * 3;
        uVar40 = 1;
        for (plVar37 = plStack_e0; plVar37 != plVar29; plVar37 = plVar37 + 3) {
          pbStack_110 = param_2;
          if (*(long **)param_2 == (long *)0x0) {
            pvStack_138 = (void *)0x0;
            uVar36 = 0;
            uStack_140 = 0;
            uVar34 = 0x100000001;
          }
          else {
            fVar45 = *(float *)(param_2 + 8);
            dVar41 = (double)(**(code **)(**(long **)param_2 + 0x20))();
            ppbStack_c8 = &pbStack_110;
            dVar42 = (double)(**(code **)(**(long **)pbStack_110 + 0x28))();
            uVar36 = recovered_8241c354(((double)fVar45 / dVar41) * dVar42,&ppbStack_c8);
            iVar27 = (int)uVar36;
            if (iVar27 < 2) {
              iVar27 = 1;
            }
            dVar42 = (double)(**(code **)(**(long **)pbStack_110 + 0x28))();
            dVar43 = (double)(**(code **)(**(long **)pbStack_110 + 0x30))();
            dVar44 = (double)(**(code **)(**(long **)pbStack_110 + 0x38))();
            uVar23 = recovered_8241c354(((double)fVar45 / dVar41) * (dVar42 + dVar43 + dVar44),
                                        &ppbStack_c8);
            lVar35 = 0;
            uStack_140 = 0;
            pvStack_138 = (void *)0x0;
            uVar36 = 0;
            pvVar39 = (void *)0x0;
            uVar22 = 0;
            iStack_124 = 0;
            iStack_120 = 0;
            iVar32 = 0;
            bVar20 = false;
            iVar21 = (int)uVar23;
            if (iVar21 < 2) {
              iVar21 = 1;
            }
            piVar38 = (int *)*plVar37;
            piVar3 = piVar38 + plVar37[1];
            dVar41 = 0.0;
            iStack_128 = iVar21;
            for (; pbVar18 = pbStack_110, piVar38 != piVar3; piVar38 = piVar38 + 1) {
              aiStack_8c[0] = *piVar38;
              piVar25 = recovered_8241c3a4((long *)(pbStack_110 + 0x10),aiStack_8c);
              if (piVar25 == (int *)(*(long *)(pbVar18 + 0x10) + *(long *)(pbVar18 + 0x18) * 0x38))
              {
                fVar45 = *(float *)(pbVar18 + 8);
                dVar42 = (double)(**(code **)(**(long **)pbVar18 + 0x20))();
                (**(code **)(**(long **)pbVar18 + 0x18))
                          (&uStack_c0,(double)fVar45 / dVar42,*(long **)pbVar18,aiStack_8c[0]);
                piVar25 = recovered_8241c3a4((long *)(pbVar18 + 0x10),aiStack_8c);
                lVar30 = *(long *)(pbVar18 + 0x18);
                if (piVar25 == (int *)(*(long *)(pbVar18 + 0x10) + lVar30 * 0x38)) {
                  if ((*(long *)(pbVar18 + 0x30) == 0) ||
                     ((ulong)(*(long *)(pbVar18 + 0x30) * 3) < lVar30 * 4 + 4U)) {
                    recovered_8241c458((long)(pbVar18 + 0x10),lVar30 * 2 + 2);
                    lVar30 = *(long *)(pbVar18 + 0x18);
                  }
                  if (lVar30 == *(long *)(pbVar18 + 0x20)) {
                    uVar23 = 4;
                    if (lVar30 != 0) {
                      uVar23 = lVar30 << 1;
                    }
                    recovered_8241c514((long *)(pbVar18 + 0x10),uVar23);
                    lVar30 = *(long *)(pbVar18 + 0x18);
                  }
                  piVar25 = (int *)(*(long *)(pbVar18 + 0x10) + lVar30 * 0x38);
                  *piVar25 = aiStack_8c[0];
                  recovered_824189f8((undefined8 *)(piVar25 + 2),&uStack_c0);
                  *(long *)(pbVar18 + 0x18) = *(long *)(pbVar18 + 0x18) + 1;
                  recovered_82418900((long *)(pbVar18 + 0x40),(undefined8 *)&DAT_4044df08);
                  recovered_8241c42c((long *)(pbVar18 + 0x10),*(long *)(pbVar18 + 0x18) + -1);
                  piVar25 = (int *)(*(long *)(pbVar18 + 0x10) + *(long *)(pbVar18 + 0x18) * 0x38 +
                                   -0x38);
                }
                uStack_a0 = 0;
                recovered_8240facc(pvStack_a8);
              }
              dVar42 = recovered_824010dc(dVar41);
              iVar15 = piVar25[2];
              iVar16 = piVar25[3];
              if (uVar36 == uVar22) {
                uVar22 = 4;
                if (uVar36 != 0) {
                  uVar22 = uVar36 << 1;
                }
                if (uVar36 < uVar22) {
                  pvStack_138 = recovered_8240fa98(uVar22 << 4);
                  lVar30 = 0;
                  for (uVar23 = uVar36; uVar23 != 0; uVar23 = uVar23 - 1) {
                    uVar34 = *(undefined8 *)((long)pvVar39 + lVar30);
                    ((undefined8 *)((long)pvStack_138 + lVar30))[1] =
                         ((undefined8 *)((long)pvVar39 + lVar30))[1];
                    *(undefined8 *)((long)pvStack_138 + lVar30) = uVar34;
                    lVar30 = lVar30 + 0x10;
                  }
                  recovered_8240facc(pvVar39);
                  pvVar39 = pvStack_138;
                  uStack_140 = uVar22;
                }
                else {
                  uVar22 = uVar36;
                }
              }
              iVar15 = iVar15 + (int)dVar42;
              iVar16 = iVar27 - iVar16;
              plVar4 = (long *)((long)pvVar39 + uVar36 * 0x10);
              *plVar4 = (long)(piVar25 + 2);
              *(int *)(plVar4 + 1) = iVar15;
              *(int *)((long)plVar4 + 0xc) = iVar16;
              if ((0 < piVar25[4]) && (0 < piVar25[5])) {
                iVar10 = iVar15;
                if (iVar32 <= iVar15) {
                  iVar10 = iVar32;
                }
                iVar11 = iVar16;
                if (iStack_124 <= iVar16) {
                  iVar11 = iStack_124;
                }
                iVar1 = piVar25[4] + iVar15;
                iVar12 = iStack_120;
                if (iStack_120 <= iVar1) {
                  iVar12 = iVar1;
                }
                iVar2 = piVar25[5] + iVar16;
                iVar13 = iStack_128;
                if (iStack_128 <= iVar2) {
                  iVar13 = iVar2;
                }
                iVar32 = iVar15;
                iStack_124 = iVar16;
                iStack_120 = iVar1;
                iStack_128 = iVar2;
                if (bVar20) {
                  iVar32 = iVar10;
                  iStack_124 = iVar11;
                  iStack_120 = iVar12;
                  iStack_128 = iVar13;
                }
                bVar20 = true;
              }
              uVar36 = uVar36 + 1;
              dVar41 = dVar41 + *(double *)(piVar25 + 6);
              lVar35 = lVar35 + 0x10;
            }
            dVar41 = recovered_824010f8(dVar41);
            iVar27 = (int)dVar41;
            if (iVar27 < 2) {
              iVar27 = 1;
            }
            uVar28 = -iVar32 & (-iVar32 >> 0x1f ^ 0xffffffffU);
            uVar6 = -iStack_124 & (-iStack_124 >> 0x1f ^ 0xffffffffU);
            iVar32 = iVar27 + uVar28;
            if ((int)(iVar27 + uVar28) <= (int)(uVar28 + iStack_120)) {
              iVar32 = uVar28 + iStack_120;
            }
            uVar14 = uVar6 + iVar21;
            if ((int)(uVar6 + iVar21) <= (int)(uVar6 + iStack_128)) {
              uVar14 = uVar6 + iStack_128;
            }
            if (uVar14 < 2) {
              uVar14 = 1;
            }
            for (; lVar35 != 0; lVar35 = lVar35 + -0x10) {
              *(uint *)((long)pvVar39 + 8) = *(int *)((long)pvVar39 + 8) + uVar28;
              *(uint *)((long)pvVar39 + 0xc) = *(int *)((long)pvVar39 + 0xc) + uVar6;
              pvVar39 = (void *)((long)pvVar39 + 0x10);
            }
            uVar34 = CONCAT44(uVar14,iVar32);
          }
          if (lStack_f0 == lStack_e8) {
            uVar22 = 4;
            if (lStack_f0 != 0) {
              uVar22 = lStack_f0 << 1;
            }
            recovered_8241790c(&uStack_f8,uVar22);
          }
          puVar5 = (undefined8 *)(uStack_f8 + lStack_f0 * 0x20);
          *puVar5 = uVar34;
          puVar5[1] = pvStack_138;
          puVar5[2] = uVar36;
          puVar5[3] = uStack_140;
          lStack_f0 = lStack_f0 + 1;
          recovered_8240facc((void *)0x0);
          lVar35 = uStack_f8 + lStack_f0 * 0x20;
          uVar28 = *(uint *)(lVar35 + -0x20);
          if ((int)uVar40 <= (int)uVar28) {
            uVar40 = uVar28;
          }
          uVar26 = *(int *)(lVar35 + -0x1c) + uVar26;
        }
        if ((int)uVar26 < 2) {
          uVar26 = 1;
        }
        uStack_c0 = (int *)((ulong)uStack_c0 & 0xffffffffffffff00);
        recovered_824149cc(&pbStack_110);
        iVar27 = 0;
        for (lVar35 = uStack_f8; lVar35 != uStack_f8 + lStack_f0 * 0x20; lVar35 = lVar35 + 0x20) {
          plVar37 = *(long **)(lVar35 + 8);
          plVar29 = plVar37 + *(long *)(lVar35 + 0x10) * 2;
          for (; plVar37 != plVar29; plVar37 = plVar37 + 2) {
            lVar30 = *plVar37;
            if (((lVar30 != 0) && (0 < *(int *)(lVar30 + 8))) &&
               (iVar32 = *(int *)(lVar30 + 0xc), 0 < iVar32)) {
              for (lVar31 = 0; lVar31 < iVar32; lVar31 = lVar31 + 1) {
                uVar28 = iVar27 + (int)lVar31 + *(int *)((long)plVar37 + 0xc);
                if (uVar28 < uVar26) {
                  lVar24 = (ulong)uVar40 * (ulong)uVar28;
                  for (lVar33 = 0; lVar33 < *(int *)(lVar30 + 8); lVar33 = lVar33 + 1) {
                    uVar36 = lVar33 + (ulong)*(uint *)(plVar37 + 1);
                    if ((-1 < (int)uVar36) && ((int)uVar36 < (int)uVar40)) {
                      bVar17 = *(byte *)(*(long *)(lVar30 + 0x18) + lVar31 * *(int *)(lVar30 + 8) +
                                        lVar33);
                      if (bVar17 != 0) {
                        pbStack_110[(uVar36 & 0xffffffff) + lVar24] =
                             bVar17 + (char)(((uint)pbStack_110[(uVar36 & 0xffffffff) + lVar24] *
                                             (bVar17 ^ 0xff)) / 0xff);
                        lVar30 = *plVar37;
                      }
                    }
                  }
                  iVar32 = *(int *)(lVar30 + 0xc);
                }
              }
            }
          }
          iVar27 = *(int *)(lVar35 + 4) + iVar27;
        }
        uVar28 = param_4;
        if (0xfe < param_4) {
          uVar28 = 0xff;
        }
        uVar7 = 0;
        if (-1 < (int)param_4) {
          uVar7 = (char)uVar28;
        }
        uVar28 = param_5;
        if (0xfe < param_5) {
          uVar28 = 0xff;
        }
        uVar8 = 0;
        if (-1 < (int)param_5) {
          uVar8 = (char)uVar28;
        }
        uVar28 = param_6;
        if (0xfe < param_6) {
          uVar28 = 0xff;
        }
        uVar9 = 0;
        if (-1 < (int)param_6) {
          uVar9 = (char)uVar28;
        }
        lVar35 = recovered_8240153c(param_1);
        pvVar39 = recovered_8240fac8((ulong)uVar26 * (ulong)uVar40 * 4);
        uVar28 = (uint)lVar35;
        if (0xfe < (int)uVar28) {
          uVar28 = 0xff;
        }
        puVar19 = (undefined1 *)((long)pvVar39 + 3);
        pbVar18 = pbStack_110;
        for (; lStack_108 != 0; lStack_108 = lStack_108 + -1) {
          bVar17 = *pbVar18;
          puVar19[-3] = uVar7;
          puVar19[-2] = uVar8;
          puVar19[-1] = uVar9;
          *puVar19 = (char)(((uVar28 & ((int)uVar28 >> 0x1f ^ 0xffffffffU)) * (uint)bVar17 & 0xffff)
                           / 0xff);
          puVar19 = puVar19 + 4;
          pbVar18 = pbVar18 + 1;
        }
        recovered_82417874(&uStack_c0);
        uStack_c0 = (int *)CONCAT44(uVar26,uVar40);
        pvStack_b8 = pvVar39;
        plVar37 = recovered_8240fa98(0x20);
        plVar37[1] = (long)pvStack_b8;
        *plVar37 = (long)uStack_c0;
        plVar37[3] = (long)pvStack_a8;
        plVar37[2] = lStack_b0;
        lStack_108 = 0;
        recovered_8240facc(pbStack_110);
        recovered_824179b8(&uStack_f8);
        recovered_8241c5d8((long *)&plStack_e0);
      }
    }
  }
  PF_PART8(auVar46, 8) = unaff_x30;
  PF_PART8(auVar46, 0) = plVar37;
  return auVar46;
}

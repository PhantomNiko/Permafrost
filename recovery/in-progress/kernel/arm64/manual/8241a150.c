/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define auStack_6c (*(uint (*)[3])(frame + 180))
#define pbStack_d8 (*(byte * *)(frame + 72))
#define pbStack_f0 (*(byte * *)(frame + 48))
#define pvStack_100 (*(void * *)(frame + 32))
#define pvStack_108 (*(void * *)(frame + 24))
#define pvStack_80 (*(void * *)(frame + 160))
#define pvStack_88 (*(void * *)(frame + 152))
#define pvStack_a0 (*(void * *)(frame + 128))
#define pvStack_a8 (*(void * *)(frame + 120))
#define pvStack_c0 (*(void * *)(frame + 96))
#define pvStack_d0 (*(void * *)(frame + 80))
#define uStack_78 (*(undefined8 *)(frame + 168))
#define uStack_98 (*(undefined8 *)(frame + 136))
#define uStack_b8 (*(undefined8 *)(frame + 104))
#define uStack_c8 (*(undefined8 *)(frame + 88))
#define uStack_e0 (*(undefined8 *)(frame + 64))
#define uStack_e8 (*(ulong *)(frame + 56))
#define uStack_f8 (*(undefined8 *)(frame + 40))
bool recovered_8241a150(long param_1,long *param_2)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  void *pvVar5;
  bool bVar6;
  byte **ppbVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  void *pvVar13;
  void *pvVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long lVar18;
  void *pvVar19;
  int iVar20;
  ulong uVar21;
  void *pvVar22;
  void *pvVar23;

  pbStack_d8 = (byte *)0x0;
  uStack_c8 = 0;
  pvStack_d0 = (void *)0x0;
  pbStack_f0 = (byte *)0x0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uVar17 = param_2[1];
  if ((1 < uVar17) && (*(char *)*param_2 == -0x80)) {
    bVar4 = 0;
    uVar21 = 0;
    do {
      lVar18 = *param_2;
      do {
        uVar8 = uVar21 + 6;
        if ((uVar17 < uVar8) || (pcVar2 = (char *)(lVar18 + uVar21), *pcVar2 != -0x80)) {
LAB_404144f8:
          if (!((bool)(pvStack_d0 != (void *)0x0 & bVar4) && uStack_e8 != 0)) goto LAB_40414820;
          goto LAB_40414678;
        }
        uVar21 = uVar8 + *(uint *)(pcVar2 + 2);
        if (uVar17 < uVar21) goto LAB_40414820;
        cVar3 = pcVar2[1];
        if (cVar3 == '\x03') goto LAB_404144f8;
        if (cVar3 == '\x02') {
          bVar4 = 1;
          ppbVar7 = &pbStack_f0;
          goto LAB_40414490;
        }
      } while (cVar3 != '\x01');
      ppbVar7 = &pbStack_d8;
LAB_40414490:
      recovered_82414a9c((long *)ppbVar7,(long)(*ppbVar7 + (long)ppbVar7[1]),
                         (undefined1 *)(lVar18 + uVar8),(undefined1 *)(lVar18 + uVar21));
      uVar17 = param_2[1];
    } while( true );
  }
  uVar17 = recovered_8241b024(param_2,0x82473b66U,0);
  if (uVar17 != 0xffffffffffffffff) {
    puVar16 = (undefined1 *)*param_2;
    uVar8 = param_2[1];
    uVar21 = uVar17;
    if (uVar17 <= uVar8) {
      uVar21 = uVar8;
    }
    for (; uVar17 < uVar8; uVar17 = uVar17 + 1) {
      if (puVar16[uVar17] == '\n' || puVar16[uVar17] == '\r') goto LAB_40414520;
    }
    uVar17 = uVar21;
LAB_40414520:
    uVar21 = uVar17;
    if (uVar17 <= uVar8) {
      uVar21 = uVar8;
    }
    for (; uVar17 < uVar8; uVar17 = uVar17 + 1) {
      if (puVar16[uVar17] != '\r' && puVar16[uVar17] != '\n') goto LAB_4041454c;
    }
    uVar17 = uVar21;
LAB_4041454c:
    recovered_824149f8((long *)&pbStack_d8,puVar16,puVar16 + uVar17);
    uVar8 = recovered_8241b024(param_2,0x82473b78U,uVar17);
    uVar21 = param_2[1];
    if (uVar8 != 0xffffffffffffffff) {
      uVar21 = uVar8;
    }
    pvStack_80 = (void *)0x0;
    uStack_78 = 0;
    pvStack_88 = (void *)0x0;
    recovered_8241b0b0((long *)&pvStack_88,uVar21 - uVar17);
    for (; uVar17 < uVar21; uVar17 = uVar17 + 1) {
      bVar4 = *(byte *)(*param_2 + uVar17);
      if (((byte)(bVar4 - 0x30U) < 10) ||
         (bVar4 - 0x41U < 0x26 && (1L << ((ulong)(bVar4 - 0x41U) & 0x3f) & 0x3f0000003fU) != 0)) {
        recovered_8241b128((long *)&pvStack_88,bVar4);
      }
    }
    if (((ulong)pvStack_80 & 1) != 0) {
      pvStack_80 = (void *)((long)pvStack_80 - 1);
      *(undefined1 *)((long)pvStack_88 + (long)pvStack_80) = 0;
    }
    if (pvStack_80 != (void *)0x0) {
      recovered_8241443c((long *)&pbStack_f0,(ulong)pvStack_80 >> 1);
      for (lVar18 = 0; uVar17 = uStack_e8, lVar18 + 1U < pvStack_80; lVar18 = lVar18 + 2) {
        PF_PART3(pvStack_a0, 0) = (uint3)*(ushort *)((long)pvStack_88 + lVar18);
        lVar9 = recovered_824016c8((byte *)&pvStack_a0,(undefined8 *)0x0,0x10);
        pvStack_c0 = (void *)CONCAT71(PF_PART7(pvStack_c0, 1),(char)lVar9);
        recovered_824155d0((long *)&pbStack_f0,(undefined1 *)&pvStack_c0);
      }
      if (pvStack_d0 != (void *)0x0) {
        recovered_8240facc(pvStack_88);
        if (uVar17 == 0) goto LAB_40414820;
LAB_40414678:
        uVar17 = recovered_8241b024((long *)&pbStack_d8,0x82473b84U,0);
        if (uVar17 != 0xffffffffffffffff) {
          pvVar23 = (void *)(uVar17 + 9);
          do {
            if (pvStack_d0 <= pvVar23) goto LAB_40414720;
            pbVar1 = pbStack_d8 + (long)pvVar23;
            pvVar23 = (void *)((long)pvVar23 + 1);
          } while ((*pbVar1 | 0x20) != 0x7b);
          pvStack_c0 = (void *)0x0;
          pvStack_a8 = (void *)0x0;
          pvStack_88 = pvVar23;
          bVar6 = recovered_8241b1e0((long *)&pbStack_d8,(ulong *)&pvStack_88,&pvStack_a0);
          if ((((bVar6) &&
               (bVar6 = recovered_8241b1e0((long *)&pbStack_d8,(ulong *)&pvStack_88,&pvStack_c0),
               bVar6)) &&
              (bVar6 = recovered_8241b1e0((long *)&pbStack_d8,(ulong *)&pvStack_88,&pvStack_108),
              bVar6)) &&
             (bVar6 = recovered_8241b1e0((long *)&pbStack_d8,(ulong *)&pvStack_88,&pvStack_a8),
             bVar6)) {
            pvVar23 = pvStack_a8;
            if (pf_bits_double((uintptr_t)pvStack_a8) <= 0.0) {
              pvVar23 = (void *)0x0;
            }
            *(void **)(param_1 + 0x10) = pvVar23;
            *(double *)(param_1 + 0x18) = -pf_bits_double((uintptr_t)pvStack_c0);
          }
        }
LAB_40414720:
        pvVar23 = (void *)0x0;
        while ((pvVar23 < pvStack_d0 &&
               (uVar17 = recovered_8241b024((long *)&pbStack_d8,0x82473b8eU,(ulong)pvVar23),
               uVar17 != 0xffffffffffffffff))) {
          pvVar23 = (void *)(uVar17 + 3);
          pvStack_c0 = (void *)((ulong)pvStack_c0 & 0xffffffff00000000);
          pvStack_a0 = pvVar23;
          uVar10 = recovered_8241b268((long *)&pbStack_d8,(ulong *)&pvStack_a0,(int *)&pvStack_c0);
          pvVar19 = pvStack_c0;
          if ((int)uVar10 != 0) {
            if ((uint)pvStack_c0 < 0x100) {
              recovered_8241b334((long *)&pbStack_d8,(ulong *)&pvStack_a0);
              if ((pvStack_a0 < pvStack_d0) && (pbStack_d8[(long)pvStack_a0] == 0x2f)) {
                pvVar22 = (void *)((long)pvStack_a0 + 1);
                for (pvVar13 = pvVar22; pvVar13 < pvStack_d0; pvVar13 = (void *)((long)pvVar13 + 1))
                {
                  if (pbStack_d8[(long)pvVar13] < 0x21 &&
                      (1L << ((ulong)pbStack_d8[(long)pvVar13] & 0x3f) & 0x100003e00U) != 0)
                  goto LAB_404147f0;
                }
                pvVar13 = pvStack_d0;
LAB_404147f0:
                if ((long)pvVar13 - (long)pvVar22 != 0) {
                  recovered_8241b3c8((long *)&pvStack_88,(long)(pbStack_d8 + (long)pvVar22),
                                     (long)pvVar13 - (long)pvVar22);
                  recovered_8241b37c((undefined8 *)
                                     (param_1 + 0x28 + ((ulong)pvVar19 & 0xffffffff) * 0x18),
                                     &pvStack_88);
                  recovered_8240facc(pvStack_88);
                  pvVar23 = pvVar13;
                }
              }
            }
          }
        }
        if (uStack_e8 == 0) {
          pvVar23 = (void *)0x0;
          bVar6 = false;
          uStack_f8 = 0;
          pvStack_108 = (void *)0x0;
        }
        else {
          pvStack_80 = (void *)0x0;
          uStack_78 = 0;
          pvStack_88 = (void *)0x0;
          recovered_8241443c((long *)&pvStack_88,uStack_e8);
          iVar20 = 0xd971;
          pbVar1 = pbStack_f0;
          for (uVar17 = uStack_e8; uVar17 != 0; uVar17 = uVar17 - 1) {
            bVar4 = *pbVar1;
            uVar21 = (ulong)pvStack_a0 >> 8;
            pvStack_a0 = (void *)CONCAT71((int7)uVar21,bVar4 ^ (byte)((uint)iVar20 >> 8));
            recovered_82415734((long *)&pvStack_88,(undefined1 *)&pvStack_a0);
            iVar20 = (iVar20 + (uint)bVar4) * 0xce6d + 0x58bf;
            pbVar1 = pbVar1 + 1;
          }
          if (pvStack_80 < (void *)0x5) {
            pvVar19 = (void *)0x0;
            uStack_f8 = 0;
            pvVar22 = (void *)0x0;
          }
          else {
            recovered_8241b530((long *)&pvStack_88,(long)pvStack_88,(long)pvStack_88 + 4);
            uStack_f8 = uStack_78;
            pvVar19 = pvStack_88;
            pvStack_88 = (void *)0x0;
            uStack_78 = 0;
            pvVar22 = pvStack_80;
          }
          pvStack_80 = (void *)0x0;
          pvStack_108 = pvVar19;
          pvStack_100 = pvVar22;
          recovered_8240facc(pvStack_88);
          pvVar23 = pvVar19;
          if (pvVar22 != (void *)0x0) {
            uVar17 = recovered_8241b024((long *)&pvStack_108,0x82473b92U,0);
            if (uVar17 != 0xffffffffffffffff) {
              pvStack_88 = (void *)(uVar17 + 6);
              pvStack_a0 = (void *)((ulong)pvStack_a0 & 0xffffffff00000000);
              uVar10 = recovered_8241b268((long *)&pvStack_108,(ulong *)&pvStack_88,
                                          (int *)&pvStack_a0);
              if ((int)uVar10 != 0) {
                *(undefined4 *)(param_1 + 0x20) = PF_PART4(pvStack_a0, 0);
              }
            }
            pvVar13 = (void *)recovered_8241b024((long *)&pvStack_108,0x82473b99U,0);
            pvVar14 = (void *)recovered_8241b024((long *)&pvStack_108,0x82473ba0U,0);
            if (((pvVar13 != (void *)0xffffffffffffffff && pvVar14 != (void *)0xffffffffffffffff) &&
                pvVar13 <= pvVar14) &&
                ((pvVar13 == (void *)0xffffffffffffffff || pvVar14 == (void *)0xffffffffffffffff) ||
                pvVar14 != pvVar13)) {
              while( true ) {
                pvVar13 = (void *)recovered_8241b024((long *)&pvStack_108,0x82473b8eU,(ulong)pvVar13)
                ;
                pvVar5 = pvStack_100;
                pvVar23 = pvStack_108;
                if (!(pvVar13 != (void *)0xffffffffffffffff && pvVar13 < pvVar14)) break;
                pvVar13 = (void *)((long)pvVar13 + 3);
                pvStack_a8 = (void *)((ulong)pvStack_a8 & 0xffffffff00000000);
                auStack_6c[0] = 0;
                pvStack_c0 = pvVar13;
                uVar10 = recovered_8241b268((long *)&pvStack_108,(ulong *)&pvStack_c0,
                                            (int *)&pvStack_a8);
                if ((((int)uVar10 != 0) &&
                    (uVar10 = recovered_8241b268((long *)&pvStack_108,(ulong *)&pvStack_c0,
                                                 (int *)auStack_6c), (int)uVar10 != 0)) &&
                   (uVar17 = (ulong)auStack_6c[0], -1 < (int)auStack_6c[0])) {
                  recovered_8241b334((long *)&pvStack_108,(ulong *)&pvStack_c0);
                  pvVar5 = pvStack_a8;
                  pvVar23 = (void *)((long)pvStack_c0 + 2);
                  if (((pvVar23 <= pvVar22) && (*(char *)((long)pvVar19 + (long)pvStack_c0) == 'R'))
                     && (((char *)((long)pvVar19 + (long)pvStack_c0))[1] == 'D')) {
                    if ((pvVar23 < pvVar22) && (*(char *)((long)pvVar19 + (long)pvVar23) == ' ')) {
                      pvVar23 = (void *)((long)pvStack_c0 + 3);
                    }
                    pvStack_c0 = pvVar23;
                    pvVar13 = pvStack_c0;
                    if (pvVar22 < pvStack_c0 || (ulong)((long)pvVar22 - (long)pvStack_c0) < uVar17)
                    {
                      bVar6 = false;
                      pvVar23 = pvStack_108;
                      goto LAB_40414be0;
                    }
                    if (-1 < (int)pvStack_a8) {
                      if (*(ulong *)(param_1 + 0x1830) <= ((ulong)pvStack_a8 & 0xffffffff)) {
                        recovered_8241b59c((long *)(param_1 + 0x1828),
                                           ((ulong)pvStack_a8 & 0xffffffff) + 1);
                      }
                      puVar16 = (undefined1 *)((long)pvVar19 + (long)pvVar13);
                      puVar15 = puVar16 + uVar17;
                      plVar11 = recovered_82416740(&pvStack_88,puVar16,puVar15);
                      recovered_8241b648(plVar11,(undefined8 *)(ulong)*(uint *)(param_1 + 0x20),
                                         (uint)puVar15);
                      recovered_82413488((undefined8 *)
                                         (*(long *)(param_1 + 0x1828) +
                                         ((ulong)pvVar5 & 0xffffffff) * 0x18),&pvStack_a0);
                      uStack_98 = 0;
                      recovered_8240facc(pvStack_a0);
                      pvStack_80 = (void *)0x0;
                      recovered_8240facc(pvStack_88);
                    }
                    pvVar13 = (void *)((long)pvVar13 + uVar17);
                  }
                }
              }
              while (pvVar14 < pvVar5) {
                pcVar2 = (char *)((long)pvVar23 + (long)pvVar14);
                pvVar14 = (void *)((long)pvVar14 + 1);
                if (*pcVar2 == '/') {
                  for (pvStack_a8 = pvVar14; pvStack_a8 < pvVar5;
                      pvStack_a8 = (void *)((long)pvStack_a8 + 1)) {
                    if (*(byte *)((long)pvVar23 + (long)pvStack_a8) < 0x30 &&
                        (1L << ((ulong)*(byte *)((long)pvVar23 + (long)pvStack_a8) & 0x3f) &
                        0x800100003e00U) != 0) goto LAB_40414af0;
                  }
                  pvStack_a8 = pvVar5;
LAB_40414af0:
                  if ((long)pvStack_a8 - (long)pvVar14 != 0) {
                    recovered_8241b3c8((long *)&pvStack_88,(long)pvVar23 + (long)pvVar14,
                                       (long)pvStack_a8 - (long)pvVar14);
                    auStack_6c[0] = 0;
                    uVar10 = recovered_8241b268((long *)&pvStack_108,(ulong *)&pvStack_a8,
                                                (int *)auStack_6c);
                    if (((int)uVar10 == 0) ||
                       (uVar17 = (ulong)auStack_6c[0], (int)auStack_6c[0] < 0)) {
                      pvVar14 = pvStack_a8;
                    }
                    else {
                      recovered_8241b334((long *)&pvStack_108,(ulong *)&pvStack_a8);
                      pvVar19 = (void *)((long)pvStack_a8 + 2);
                      pvVar14 = pvStack_a8;
                      if (((pvVar19 <= pvVar5) &&
                          (*(char *)((long)pvVar23 + (long)pvStack_a8) == 'R')) &&
                         (((char *)((long)pvVar23 + (long)pvStack_a8))[1] == 'D')) {
                        pvVar22 = pvVar19;
                        if ((pvVar19 < pvVar5) &&
                           (pvVar22 = (void *)((long)pvStack_a8 + 3),
                           *(char *)((long)pvVar23 + (long)pvVar19) != ' ')) {
                          pvVar22 = pvVar19;
                        }
                        if (pvVar5 < pvVar22 || (ulong)((long)pvVar5 - (long)pvVar22) < uVar17) {
                          recovered_8240facc(pvStack_88);
                          goto LAB_4041495c;
                        }
                        puVar16 = (undefined1 *)((long)pvVar23 + (long)pvVar22) + uVar17;
                        recovered_82416740(&pvStack_a0,(undefined1 *)((long)pvVar23 + (long)pvVar22)
                                           ,puVar16);
                        recovered_8241b648((long *)&pvStack_a0,
                                           (undefined8 *)(ulong)*(uint *)(param_1 + 0x20),
                                           (uint)puVar16);
                        puVar12 = (undefined8 *)
                                  recovered_8241b740((long *)(param_1 + 0x1840),&pvStack_88);
                        recovered_82413488(puVar12,&pvStack_c0);
                        uStack_b8 = 0;
                        recovered_8240facc(pvStack_c0);
                        uStack_98 = 0;
                        recovered_8240facc(pvStack_a0);
                        pvVar14 = (void *)((long)pvVar22 + uVar17);
                      }
                    }
                    recovered_8240facc(pvStack_88);
                  }
                }
              }
              bVar6 = *(long *)(param_1 + 0x1848) != 0;
              goto LAB_40414be0;
            }
          }
LAB_4041495c:
          bVar6 = false;
        }
LAB_40414be0:
        pvStack_100 = (void *)0x0;
        recovered_8240facc(pvVar23);
        goto LAB_40414bec;
      }
    }
    recovered_8240facc(pvStack_88);
  }
LAB_40414820:
  bVar6 = false;
LAB_40414bec:
  uStack_e8 = 0;
  recovered_8240facc(pbStack_f0);
  pvStack_d0 = (void *)0x0;
  recovered_8240facc(pbStack_d8);
  return bVar6;
}

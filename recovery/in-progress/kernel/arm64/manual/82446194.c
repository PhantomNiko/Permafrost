#include "functions.h"
#undef DAT_8249dbfa
#define DAT_8249dbfa (*(uint8_t volatile *)(0x8249dbfaU))
#undef UNK_8249dbfe
#define UNK_8249dbfe (*(uint8_t volatile *)(0x8249dbfeU))
#undef str_8249dbd2
#define str_8249dbd2 (*(char volatile (*)[1])(0x8249dbd2U))
#undef str_8249dbe4
#define str_8249dbe4 (*(char volatile (*)[1])(0x8249dbe4U))
#undef str_8249dbf0
#define str_8249dbf0 (*(char volatile (*)[1])(0x8249dbf0U))
#undef str_8249dc05
#define str_8249dc05 (*(char volatile (*)[1])(0x8249dc05U))
#undef str_8249dc0c
#define str_8249dc0c (*(char volatile (*)[1])(0x8249dc0cU))
#define uStack_f8 (*(undefined8 *)(pf_stack_frame + 40))
#define pbStack_f0 (*(byte * *)(pf_stack_frame + 48))
#define uStack_108 (*(ulong *)(pf_stack_frame + 24))
#define dStack_100 (*(ulong *)(pf_stack_frame + 32))
#define pbStack_d8 (*(byte * *)(pf_stack_frame + 72))
#define uStack_d0 (*(ulong *)(pf_stack_frame + 80))
#define uStack_e8 (*(ulong *)(pf_stack_frame + 56))
#define uStack_e0 (*(undefined8 *)(pf_stack_frame + 64))
#define uStack_b8 (*(undefined8 *)(pf_stack_frame + 104))
#define dStack_a8 (*(ulong *)(pf_stack_frame + 120))
#define uStack_c8 (*(undefined8 *)(pf_stack_frame + 88))
#define dStack_c0 (*(ulong *)(pf_stack_frame + 96))
#define uStack_88 (*(ulong *)(pf_stack_frame + 152))
#define dStack_80 (*(ulong *)(pf_stack_frame + 160))
#define uStack_a0 (*(ulong *)(pf_stack_frame + 128))
#define uStack_98 (*(undefined8 *)(pf_stack_frame + 136))
#define uStack_78 (*(undefined8 *)(pf_stack_frame + 168))
#define auStack_6c (*(uint (*)[27])(pf_stack_frame + 180))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x82446194
 */

bool recovered_82446194(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[320] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  ulong dVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char cVar5;
  byte bVar6;
  ulong dVar7;
  bool bVar8;
  byte **ppbVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  ulong dVar14;
  ulong dVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  ulong dVar20;

  pbStack_d8 = (byte *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  pbStack_f0 = (byte *)0x0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uVar16 = param_2[1];
  if ((1 < uVar16) && (*(char *)*param_2 == -0x80)) {
    bVar6 = 0;
    uVar19 = 0;
    do {
      lVar17 = *param_2;
      do {
        uVar13 = uVar19 + 6;
        if ((uVar16 < uVar13) || (pcVar3 = (char *)(lVar17 + uVar19), *pcVar3 != -0x80)) {
LAB_824462b4:
          if (!((bool)(uStack_d0 != 0 & bVar6) && uStack_e8 != 0)) goto LAB_824465dc;
          goto LAB_82446434;
        }
        uVar19 = uVar13 + *(uint *)(pcVar3 + 2);
        if (uVar16 < uVar19) goto LAB_824465dc;
        cVar5 = pcVar3[1];
        if (cVar5 == '\x03') goto LAB_824462b4;
        if (cVar5 == '\x02') {
          bVar6 = 1;
          ppbVar9 = &pbStack_f0;
          goto LAB_8244624c;
        }
      } while (cVar5 != '\x01');
      ppbVar9 = &pbStack_d8;
LAB_8244624c:
      recovered_824404f0((long *)ppbVar9,(long)(*ppbVar9 + (long)ppbVar9[1]),
                         (undefined1 *)(lVar17 + uVar13),(undefined1 *)(lVar17 + uVar19));
      uVar16 = param_2[1];
    } while( true );
  }
  uVar16 = recovered_82447068(param_2,str_8249dbd2,0);
  if (uVar16 != 0xffffffffffffffff) {
    puVar4 = (undefined1 *)*param_2;
    uVar13 = param_2[1];
    uVar19 = uVar16;
    if (uVar16 <= uVar13) {
      uVar19 = uVar13;
    }
    for (; uVar16 < uVar13; uVar16 = uVar16 + 1) {
      if (puVar4[uVar16] == '\n' || puVar4[uVar16] == '\r') goto LAB_824462dc;
    }
    uVar16 = uVar19;
LAB_824462dc:
    uVar19 = uVar16;
    if (uVar16 <= uVar13) {
      uVar19 = uVar13;
    }
    for (; uVar16 < uVar13; uVar16 = uVar16 + 1) {
      if (puVar4[uVar16] != '\r' && puVar4[uVar16] != '\n') goto LAB_82446308;
    }
    uVar16 = uVar19;
LAB_82446308:
    recovered_8244044c((long *)&pbStack_d8,puVar4,puVar4 + uVar16);
    uVar13 = recovered_82447068(param_2,str_8249dbe4,uVar16);
    uVar19 = param_2[1];
    if (uVar13 != 0xffffffffffffffff) {
      uVar19 = uVar13;
    }
    dStack_80 = 0.0;
    uStack_78 = 0;
    uStack_88 = 0;
    recovered_824470f4((long *)&uStack_88,uVar19 - uVar16);
    for (; uVar16 < uVar19; uVar16 = uVar16 + 1) {
      bVar6 = *(byte *)(*param_2 + uVar16);
      if (((byte)(bVar6 - 0x30U) < 10) ||
         (bVar6 - 0x41U < 0x26 && (1L << ((ulong)(bVar6 - 0x41U) & 0x3f) & 0x3f0000003fU) != 0)) {
        recovered_8244716c((long *)&uStack_88,bVar6);
      }
    }
    if (((ulong)dStack_80 & 1) != 0) {
      dStack_80 = (ulong)((long)dStack_80 - 1);
      *(undefined1 *)(uStack_88 + (long)dStack_80) = 0;
    }
    if (dStack_80 != 0.0) {
      recovered_8243fe90((long *)&pbStack_f0,(ulong)dStack_80 >> 1);
      for (lVar17 = 0; uVar16 = uStack_e8, lVar17 + 1U < (ulong)dStack_80; lVar17 = lVar17 + 2) {
        PF_PART3(uStack_a0, 0) = (uint3)*(ushort *)(uStack_88 + lVar17);
        lVar10 = recovered_82401d50((byte *)&uStack_a0,(undefined8 *)0x0,0x10);
        dStack_c0 = pf_bits_double(CONCAT71(PF_PART7(dStack_c0, 1),(char)lVar10));
        recovered_82441050((long *)&pbStack_f0,(undefined1 *)&dStack_c0);
      }
      if (uStack_d0 != 0) {
        recovered_8243b1f0(uStack_88);
        if (uVar16 == 0) goto LAB_824465dc;
LAB_82446434:
        uVar16 = recovered_82447068((long *)&pbStack_d8,str_8249dbf0,0);
        if (uVar16 != 0xffffffffffffffff) {
          uVar16 = uVar16 + 9;
          do {
            if (uStack_d0 <= uVar16) goto LAB_824464dc;
            pbVar1 = pbStack_d8 + uVar16;
            uVar16 = uVar16 + 1;
          } while ((*pbVar1 | 0x20) != 0x7b);
          dStack_c0 = 0.0;
          dStack_a8 = 0.0;
          uStack_88 = uVar16;
          bVar8 = recovered_82447224((long *)&pbStack_d8,&uStack_88,&uStack_a0);
          if ((((bVar8) &&
               (bVar8 = recovered_82447224((long *)&pbStack_d8,&uStack_88,&dStack_c0), bVar8)) &&
              (bVar8 = recovered_82447224((long *)&pbStack_d8,&uStack_88,&uStack_108), bVar8)) &&
             (bVar8 = recovered_82447224((long *)&pbStack_d8,&uStack_88,&dStack_a8), bVar8)) {
            double metric_ascent = pf_bits_double(dStack_a8);
            if (metric_ascent <= 0.0) metric_ascent = 0.0;
            *(double *)(param_1 + 0x10) = metric_ascent;
            *(double *)(param_1 + 0x18) = -pf_bits_double(dStack_c0);
          }
        }
LAB_824464dc:
        uVar16 = 0;
        while ((uVar16 < uStack_d0 &&
               (uVar16 = recovered_82447068((long *)&pbStack_d8,&DAT_8249dbfa,uVar16),
               uVar16 != 0xffffffffffffffff))) {
          uVar16 = uVar16 + 3;
          dStack_c0 = (ulong)((ulong)dStack_c0 & 0xffffffff00000000);
          uStack_a0 = uVar16;
          uVar11 = recovered_824472ac((long *)&pbStack_d8,&uStack_a0,(int *)&dStack_c0);
          dVar20 = dStack_c0;
          if ((int)uVar11 != 0) {
            if (PF_PART4(dStack_c0, 0) < 0x100) {
              recovered_82447378((long *)&pbStack_d8,&uStack_a0);
              if ((uStack_a0 < uStack_d0) && (pbStack_d8[uStack_a0] == 0x2f)) {
                uVar19 = uStack_a0 + 1;
                for (uVar13 = uVar19; uVar13 < uStack_d0; uVar13 = uVar13 + 1) {
                  if (pbStack_d8[uVar13] < 0x21 &&
                      (1L << ((ulong)pbStack_d8[uVar13] & 0x3f) & 0x100003e00U) != 0)
                  goto LAB_824465ac;
                }
                uVar13 = uStack_d0;
LAB_824465ac:
                if (uVar13 - uVar19 != 0) {
                  recovered_8244740c((long *)&uStack_88,(long)(pbStack_d8 + uVar19),uVar13 - uVar19)
                  ;
                  recovered_824473c0((long *)(param_1 + 0x28 + ((ulong)dVar20 & 0xffffffff) * 0x18),
                                     (long *)&uStack_88);
                  recovered_8243b1f0(uStack_88);
                  uVar16 = uVar13;
                }
              }
            }
          }
        }
        if (uStack_e8 == 0) {
          uVar16 = 0;
          bVar8 = false;
          uStack_f8 = 0;
          uStack_108 = 0;
        }
        else {
          dStack_80 = 0.0;
          uStack_78 = 0;
          uStack_88 = 0;
          recovered_8243fe90((long *)&uStack_88,uStack_e8);
          iVar18 = 0xd971;
          pbVar1 = pbStack_f0;
          for (uVar16 = uStack_e8; uVar16 != 0; uVar16 = uVar16 - 1) {
            bVar6 = *pbVar1;
            uVar19 = uStack_a0 >> 8;
            uStack_a0 = CONCAT71((int7)uVar19,bVar6 ^ (byte)((uint)iVar18 >> 8));
            recovered_824411b4((long *)&uStack_88,(undefined1 *)&uStack_a0);
            iVar18 = (iVar18 + (uint)bVar6) * 0xce6d + 0x58bf;
            pbVar1 = pbVar1 + 1;
          }
          if ((ulong)dStack_80 < 5) {
            uVar19 = 0;
            uStack_f8 = 0;
            dVar20 = 0.0;
          }
          else {
            recovered_82447574((long *)&uStack_88,uStack_88,uStack_88 + 4);
            uStack_f8 = uStack_78;
            uVar19 = uStack_88;
            uStack_88 = 0;
            uStack_78 = 0;
            dVar20 = dStack_80;
          }
          dStack_80 = 0.0;
          uStack_108 = uVar19;
          dStack_100 = dVar20;
          recovered_8243b1f0(uStack_88);
          uVar16 = uVar19;
          if (dVar20 != 0.0) {
            uVar13 = recovered_82447068((long *)&uStack_108,&UNK_8249dbfe,0);
            if (uVar13 != 0xffffffffffffffff) {
              uStack_88 = uVar13 + 6;
              uStack_a0 = uStack_a0 & 0xffffffff00000000;
              uVar11 = recovered_824472ac((long *)&uStack_108,&uStack_88,(int *)&uStack_a0);
              if ((int)uVar11 != 0) {
                *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_a0;
              }
            }
            dVar14 = (ulong)recovered_82447068((long *)&uStack_108,str_8249dc05,0);
            dVar15 = (ulong)recovered_82447068((long *)&uStack_108,str_8249dc0c,0);
            if (((dVar14 != -__builtin_nanf("") && dVar15 != -__builtin_nanf("")) && (ulong)dVar14 <= (ulong)dVar15) &&
                ((dVar14 == -__builtin_nanf("") || dVar15 == -__builtin_nanf("")) || dVar15 != dVar14)) {
              while( true ) {
                dVar14 = (ulong)recovered_82447068((long *)&uStack_108,&DAT_8249dbfa,(ulong)dVar14)
                ;
                dVar2 = dStack_100;
                uVar16 = uStack_108;
                if (!(dVar14 != -__builtin_nanf("") && (ulong)dVar14 < (ulong)dVar15)) break;
                dVar14 = (ulong)((long)dVar14 + 3);
                dStack_a8 = (ulong)((ulong)dStack_a8 & 0xffffffff00000000);
                auStack_6c[0] = 0;
                dStack_c0 = dVar14;
                uVar11 = recovered_824472ac((long *)&uStack_108,(ulong *)&dStack_c0,
                                            (int *)&dStack_a8);
                if ((((int)uVar11 != 0) &&
                    (uVar11 = recovered_824472ac((long *)&uStack_108,(ulong *)&dStack_c0,
                                                 (int *)auStack_6c), (int)uVar11 != 0)) &&
                   (uVar16 = (ulong)auStack_6c[0], -1 < (int)auStack_6c[0])) {
                  recovered_82447378((long *)&uStack_108,(ulong *)&dStack_c0);
                  dVar7 = dStack_a8;
                  dVar2 = (ulong)((long)dStack_c0 + 2);
                  if ((((ulong)dVar2 <= (ulong)dVar20) &&
                      (*(char *)(uVar19 + (long)dStack_c0) == 'R')) &&
                     (((char *)(uVar19 + (long)dStack_c0))[1] == 'D')) {
                    if (((ulong)dVar2 < (ulong)dVar20) && (*(char *)(uVar19 + (long)dVar2) == ' '))
                    {
                      dVar2 = (ulong)((long)dStack_c0 + 3);
                    }
                    dStack_c0 = dVar2;
                    dVar14 = dStack_c0;
                    if ((ulong)dVar20 < (ulong)dStack_c0 ||
                        (ulong)((long)dVar20 - (long)dStack_c0) < uVar16) {
                      bVar8 = false;
                      uVar16 = uStack_108;
                      goto LAB_8244699c;
                    }
                    if (-1 < ((int32_t)PF_PART4(dStack_a8, 0))) {
                      if (*(ulong *)(param_1 + 0x1830) <= ((ulong)dStack_a8 & 0xffffffff)) {
                        recovered_824475e0((long *)(param_1 + 0x1828),
                                           ((ulong)dStack_a8 & 0xffffffff) + 1);
                      }
                      puVar4 = (undefined1 *)(uVar19 + (long)dVar14);
                      plVar12 = recovered_824421d4((long *)&uStack_88,puVar4,puVar4 + uVar16);
                      recovered_8244768c((long *)&uStack_a0,plVar12,*(uint *)(param_1 + 0x20));
                      recovered_8243edf4((long *)(*(long *)(param_1 + 0x1828) +
                                                 ((ulong)dVar7 & 0xffffffff) * 0x18),
                                         (long *)&uStack_a0);
                      uStack_98 = 0;
                      recovered_8243b1f0(uStack_a0);
                      dStack_80 = 0.0;
                      recovered_8243b1f0(uStack_88);
                    }
                    dVar14 = (ulong)((long)dVar14 + uVar16);
                  }
                }
              }
              while ((ulong)dVar15 < (ulong)dVar2) {
                pcVar3 = (char *)(uVar16 + (long)dVar15);
                dVar15 = (ulong)((long)dVar15 + 1);
                if (*pcVar3 == '/') {
                  for (dStack_a8 = dVar15; (ulong)dStack_a8 < (ulong)dVar2;
                      dStack_a8 = (ulong)((long)dStack_a8 + 1)) {
                    if (*(byte *)(uVar16 + (long)dStack_a8) < 0x30 &&
                        (1L << ((ulong)*(byte *)(uVar16 + (long)dStack_a8) & 0x3f) & 0x800100003e00U
                        ) != 0) goto LAB_824468ac;
                  }
                  dStack_a8 = dVar2;
LAB_824468ac:
                  if ((long)dStack_a8 - (long)dVar15 != 0) {
                    recovered_8244740c((long *)&uStack_88,uVar16 + (long)dVar15,
                                       (long)dStack_a8 - (long)dVar15);
                    auStack_6c[0] = 0;
                    uVar11 = recovered_824472ac((long *)&uStack_108,(ulong *)&dStack_a8,
                                                (int *)auStack_6c);
                    if (((int)uVar11 == 0) ||
                       (uVar19 = (ulong)auStack_6c[0], (int)auStack_6c[0] < 0)) {
                      dVar15 = dStack_a8;
                    }
                    else {
                      recovered_82447378((long *)&uStack_108,(ulong *)&dStack_a8);
                      dVar20 = (ulong)((long)dStack_a8 + 2);
                      dVar15 = dStack_a8;
                      if ((((ulong)dVar20 <= (ulong)dVar2) &&
                          (*(char *)(uVar16 + (long)dStack_a8) == 'R')) &&
                         (((char *)(uVar16 + (long)dStack_a8))[1] == 'D')) {
                        dVar14 = dVar20;
                        if (((ulong)dVar20 < (ulong)dVar2) &&
                           (dVar14 = (ulong)((long)dStack_a8 + 3),
                           *(char *)(uVar16 + (long)dVar20) != ' ')) {
                          dVar14 = dVar20;
                        }
                        if ((ulong)dVar2 < (ulong)dVar14 ||
                            (ulong)((long)dVar2 - (long)dVar14) < uVar19) {
                          recovered_8243b1f0(uStack_88);
                          goto LAB_82446718;
                        }
                        recovered_824421d4((long *)&uStack_a0,(undefined1 *)(uVar16 + (long)dVar14),
                                           (undefined1 *)(uVar16 + (long)dVar14) + uVar19);
                        recovered_8244768c((long *)&dStack_c0,&uStack_a0,*(uint *)(param_1 + 0x20));
                        plVar12 = (long *)recovered_82447784((long *)(param_1 + 0x1840),&uStack_88);
                        recovered_8243edf4(plVar12,(long *)&dStack_c0);
                        uStack_b8 = 0;
                        recovered_8243b1f0((long)dStack_c0);
                        uStack_98 = 0;
                        recovered_8243b1f0(uStack_a0);
                        dVar15 = (ulong)((long)dVar14 + uVar19);
                      }
                    }
                    recovered_8243b1f0(uStack_88);
                  }
                }
              }
              bVar8 = *(long *)(param_1 + 0x1848) != 0;
              goto LAB_8244699c;
            }
          }
LAB_82446718:
          bVar8 = false;
        }
LAB_8244699c:
        dStack_100 = 0.0;
        recovered_8243b1f0(uVar16);
        goto LAB_824469a8;
      }
    }
    recovered_8243b1f0(uStack_88);
  }
LAB_824465dc:
  bVar8 = false;
LAB_824469a8:
  uStack_e8 = 0;
  recovered_8243b1f0((long)pbStack_f0);
  uStack_d0 = 0;
  recovered_8243b1f0((long)pbStack_d8);
  return bVar8;
}

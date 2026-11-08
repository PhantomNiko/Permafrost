/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef PTR_DAT_10004030
#define PTR_DAT_10004030 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2314U)))
#undef PTR_str_10001f86_10004008
#define PTR_str_10001f86_10004008 (*(char * *)(((uintptr_t)pf_module_state + 0x22ecU)))
#undef str_10001e2c
#define str_10001e2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x110U)))
#undef str_10001e3f
#define str_10001e3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x123U)))
#undef str_10001ee5
#define str_10001ee5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c9U)))
#undef str_10001f1f
#define str_10001f1f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x203U)))
#undef str_10001f27
#define str_10001f27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20bU)))
#undef str_10001f2f
#define str_10001f2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x213U)))
#define bStack_1668 (*(byte *)(frame + 24))
#define bStack_1667 (*(byte *)(frame + 25))
#define bStack_1666 (*(byte *)(frame + 26))
#define bStack_1665 (*(byte *)(frame + 27))
#define bStack_1664 (*(byte *)(frame + 28))
#define bStack_1663 (*(byte *)(frame + 29))
#define bStack_1662 (*(byte *)(frame + 30))
#define cStack_1661 (*(char *)(frame + 31))
#define cStack_1660 (*(char *)(frame + 32))
#define bStack_165f (*(byte *)(frame + 33))
#define cStack_165e (*(char *)(frame + 34))
#define cStack_165d (*(char *)(frame + 35))
#define cStack_165c (*(char *)(frame + 36))
#define uStack_1658 (*(uint *)(frame + 40))
#define auStack_1650 (*(undefined1 (*)[4])(frame + 48))
#define acStack_164c (*(char (*)[3164])(frame + 52))
#define iStack_9f0 (*(int *)(frame + 3216))
#define uStack_9ec (*(uint *)(frame + 3220))
#define uStack_9e8 (*(uint *)(frame + 3224))
#define iStack_9e4 (*(int *)(frame + 3228))
#define uStack_9e0 (*(uint *)(frame + 3232))
#define iStack_9dc (*(int *)(frame + 3236))
#define uStack_9d8 (*(uint *)(frame + 3240))
#define abStack_9d4 (*(byte (*)[768])(frame + 3244))
#define cStack_6d4 (*(char *)(frame + 4012))
#define bStack_6d3 (*(byte *)(frame + 4013))
#define auStack_6d0 (*(undefined1 (*)[64])(frame + 4016))
#define uStack_690 (*(uint *)(frame + 4080))
#define auStack_688 (*(undefined1 (*)[4])(frame + 4088))
#define iStack_684 (*(int *)(frame + 4092))
#define iStack_680 (*(int *)(frame + 4096))
#define pvStack_658 (*(void * *)(frame + 4136))
#define uStack_338 (*(uint *)(frame + 4936))
#define uStack_334 (*(uint *)(frame + 4940))
#define pvStack_330 (*(void * *)(frame + 4944))
#define abStack_318 (*(byte (*)[4])(frame + 4968))
#define uStack_314 (*(uint *)(frame + 4972))
#define iStack_304 (*(int *)(frame + 4988))
#define uStack_300 (*(uint *)(frame + 4992))
#define acStack_a0 (*(char (*)[32])(frame + 5600))
#define acStack_80 (*(char (*)[32])(frame + 5632))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005f0
 */

int recovered_100005f0(void)

{
  unsigned char frame[5792] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint *puVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  char *pcVar19;
  ulong uVar20;

  pf_app_window_spec(auStack_6d0,(char *)"Install Permafrost",0x280,0x1c8);
  recovered_10000fb0((undefined1 *)&uStack_338,0x20);
  recovered_10000fb0(auStack_688,0x350);
  recovered_10000fb0(auStack_1650,0xf80);
  uStack_9e0 = 0x32;
  uStack_690 = uStack_690 | 1;
  uVar6 = terror_ui_window_open(auStack_688,auStack_6d0);
  if (uVar6 == 0) {
    iVar16 = 0;
  }
  else {
    pvStack_330 = pvStack_658;
    if (pvStack_658 == (void *)0x0) {
      iVar16 = 0;
    }
    else {
      recovered_10000fc8((long)auStack_1650);
      while( true ) {
        memset(abStack_318,0,0x278);
        uVar6 = terror_ui_window_query(auStack_688,abStack_318);
        if (((uVar6 == 0) || (bVar4 = terror_ui_window_info_requests_close(abStack_318), (bVar4 & 1) != 0)) ||
           (uVar6 = terror_ui_window_sync_buffer(auStack_688,abStack_318), uVar6 == 0)) break;
        *(uint64_t *)&uStack_338 = CONCAT44(iStack_680,iStack_684);
        pvStack_330 = pvStack_658;
        if (pvStack_658 == (void *)0x0) break;
        recovered_100013b4(&uStack_338,0,0,iStack_684,iStack_680,0xf4,0xf6,0xf8);
        recovered_100013b4(&uStack_338,0,0,uStack_338,0x32,0x22,0x42,0x62);
        recovered_10001430(&uStack_338,0x1c,0x12,((uintptr_t)pf_module_state + 0x1a8U),2,0xff,0xff,0xff);
        recovered_10001430(&uStack_338,0x1e,0x40,((uintptr_t)pf_module_state + 0x1bbU),1,0x46,0x46,0x46);
        uVar20 = 0;
        pcVar19 = acStack_164c;
        for (lVar17 = 0; lVar17 != 0x9c; lVar17 = lVar17 + 0x1a) {
          if (uVar20 == uStack_9ec) {
            bVar5 = (long)uVar20 < (long)iStack_9f0;
            bVar3 = uStack_9e8 != 0;
            uVar12 = 0xdd;
            if (bVar3) {
              uVar12 = 0xe6;
            }
            uVar13 = 0xec;
            if (bVar3) {
              uVar13 = 0xf0;
            }
            uVar14 = 0xfc;
            if (!bVar5 || bVar3) {
              uVar14 = 0xfa;
            }
            if ((long)iStack_9f0 <= (long)uVar20) {
              uVar12 = 0xfc;
              uVar13 = 0xfc;
              uVar14 = 0xfc;
            }
          }
          else {
            bVar5 = false;
            uVar12 = 0xfc;
            uVar13 = 0xfc;
            uVar14 = 0xfc;
          }
          iVar16 = (int)lVar17;
          recovered_100013b4(&uStack_338,0x1c,iVar16 + 0x52,0x248,0x17,uVar12,uVar13,uVar14);
          uVar6 = 0x34;
          if (!bVar5) {
            uVar6 = 0xc4;
          }
          uVar18 = 0x67;
          if (!bVar5) {
            uVar18 = 0xc4;
          }
          uVar15 = 0x99;
          if (!bVar5) {
            uVar15 = 0xc4;
          }
          recovered_10001580(&uStack_338,0x1c,(ulong)(iVar16 + 0x52),0x248,0x17,(ulong)uVar6,
                             (ulong)uVar18,(ulong)uVar15);
          if ((long)uVar20 < (long)iStack_9f0) {
            iVar16 = iVar16 + 0x5a;
            iVar9 = 0x1e;
            iVar10 = 0x1e;
            iVar11 = 0x1e;
            pcVar8 = pcVar19;
code_r0x100008a4:
            recovered_10001430(&uStack_338,0x24,iVar16,(long)pcVar8,1,iVar9,iVar10,iVar11);
          }
          else if (lVar17 == 0) {
            iVar16 = 0x5a;
            pcVar8 = str_10001ee5;
            iVar9 = 0x78;
            iVar10 = 0x78;
            iVar11 = 0x78;
            goto code_r0x100008a4;
          }
          uVar20 = uVar20 + 1;
          pcVar19 = pcVar19 + 0x84;
        }
        recovered_10001620(&uStack_338,0x1e,0xfa,0x138,((uintptr_t)pf_module_state + 0x1d4U),
                           (long)(&PTR_str_10001f86_10004008)[iStack_9e4],(uint)(uStack_9e8 == 1));
        acStack_80[0] = '\0';
        recovered_10001248(acStack_80,0x18,uStack_9e0 & ((int)uStack_9e0 >> 0x1f ^ 0xffffffffU));
        recovered_10001308(acStack_80,0x18,(char *)((uintptr_t)pf_module_state + 0x1ddU));
        recovered_10001620(&uStack_338,0x184,0xfa,0xe0,((uintptr_t)pf_module_state + 0x1dfU),(long)acStack_80,
                           (uint)(uStack_9e8 == 2));
        recovered_10001620(&uStack_338,0x1e,0x132,0x246,((uintptr_t)pf_module_state + 0x1e8U),
                           (long)(&PTR_DAT_10004030)[iStack_9dc],(uint)(uStack_9e8 == 3));
        acStack_a0[0] = '\0';
        recovered_10001248(acStack_a0,0x20,uStack_9d8);
        recovered_10001620(&uStack_338,0x1e,0x160,0x130,((uintptr_t)pf_module_state + 0x1f7U),(long)acStack_a0,
                           (uint)(uStack_9e8 == 4));
        recovered_10001718(&uStack_338,0x1e,0x184,0x70,0x24,str_10001f1f,0);
        pcVar19 = str_10001f27;
        if (cStack_6d4 == '\0') {
          pcVar19 = str_10001f2f;
        }
        recovered_10001718(&uStack_338,0x1de,0x184,0x86,0x24,pcVar19,(uint)(uStack_9e8 == 5));
        recovered_10001430(&uStack_338,0xa0,0x186,((uintptr_t)pf_module_state + 0x21bU),1,0x5a,0x5a,0x5a);
        recovered_10001430(&uStack_338,0xa0,0x19a,((uintptr_t)pf_module_state + 0x23bU),1,0x5a,0x5a,0x5a);
        recovered_100013b4(&uStack_338,0,0x1ae,uStack_338,0x1a,0xe8,0xec,0xf0);
        recovered_10001430(&uStack_338,0x1e,0x1b6,((uintptr_t)pf_module_state + 0x25eU),1,0x46,0x46,0x46);
        for (lVar17 = 0;
            (bVar4 = abStack_9d4[lVar17], bVar4 != 0 && bVar4 != 10 && (lVar17 != 0x5f));
            lVar17 = lVar17 + 1) {
          abStack_318[lVar17] = bVar4;
        }
        abStack_318[lVar17] = 0;
        recovered_10001430(&uStack_338,0x5a,0x1b6,(long)abStack_318,1,0x28,0x28,0x28);
        terror_ui_window_present(auStack_688,(char *)"Install Permafrost",pvStack_330,uStack_338,uStack_334,
                           uStack_338 << 2,0xf6f6f6);
        terror_ui_keyboard_poll(&bStack_1668);
        if (((bStack_1668 & 1) != 0) || (cStack_165c == '\x01')) {
          puVar2 = &uStack_9ec;
          uVar6 = uStack_9ec;
          if (uStack_9e8 != 0) {
            puVar2 = &uStack_9e8;
            uVar6 = uStack_9e8;
          }
          if (0 < (int)uVar6) {
            *puVar2 = uVar6 - 1;
          }
        }
        if (((bStack_1667 & 1) != 0) || (cStack_165d == '\x01')) {
          if (uStack_9e8 == 0) {
            if (iStack_9f0 <= (int)(uStack_9ec + 1)) goto code_r0x10000bb4;
            uStack_9ec = uStack_9ec + 1;
          }
          else if ((int)uStack_9e8 < 5) {
code_r0x10000bb4:
            uStack_9e8 = uStack_9e8 + 1;
          }
        }
        if (((bStack_1666 & 1) == 0) && (cStack_1661 != '\x01')) goto code_r0x10000c34;
        switch((uintptr_t)(uStack_9e8)) {
        case 1:
          piVar7 = &iStack_9e4;
          iVar16 = 5;
          goto code_r0x10000c08;
        case 2:
          uVar6 = uStack_9e0 - 5;
          bVar5 = 9 < (int)uStack_9e0;
          uStack_9e0 = 5;
          if (bVar5) {
            uStack_9e0 = uVar6;
          }
          break;
        case 3:
          piVar7 = &iStack_9dc;
          iVar16 = 0xf;
code_r0x10000c08:
          recovered_10001854(piVar7,iVar16,-1);
          break;
        case 4:
          bVar5 = 0x7fff < uStack_9d8;
          uVar6 = uStack_9d8 - 0x8000;
          uStack_9d8 = 0;
          if (bVar5) {
            uStack_9d8 = uVar6;
          }
        }
code_r0x10000c34:
        if (((bStack_1665 & 1) == 0) && (cStack_1660 != '\x01')) goto code_r0x10000cb4;
        switch((uintptr_t)(uStack_9e8)) {
        case 1:
          piVar7 = &iStack_9e4;
          iVar16 = 5;
          goto code_r0x10000c80;
        case 2:
          uVar6 = uStack_9e0 + 5;
          bVar5 = (int)uStack_9e0 < 0x60;
          uStack_9e0 = 100;
          if (bVar5) {
            uStack_9e0 = uVar6;
          }
          break;
        case 3:
          piVar7 = &iStack_9dc;
          iVar16 = 0xf;
code_r0x10000c80:
          recovered_10001854(piVar7,iVar16,1);
          break;
        case 4:
          uStack_9d8 = uStack_9d8 + 0x8000;
        }
code_r0x10000cb4:
        if (cStack_165e == '\x01') {
          recovered_10000fc8((long)auStack_1650);
        }
        if ((bStack_1663 & 1) == 0) {
          if (((uStack_1658 | 0x20) == 0x69) && (uStack_9e8 == 5)) goto code_r0x10000cf0;
        }
        else {
          if (uStack_9e8 == 5) {
code_r0x10000cf0:
            recovered_10001884((long)auStack_1650);
            if (((bStack_1663 & 1) == 0) || (uStack_9e8 == 5)) goto code_r0x10000d14;
          }
          uVar6 = 0;
          if ((int)uStack_9e8 < 5) {
            uVar6 = uStack_9e8 + 1;
          }
          uStack_9e8 = uVar6;
        }
code_r0x10000d14:
        memset(abStack_318,0,0x1c);
        uVar6 = terror_ui_window_pointer_state(auStack_688,abStack_318);
        if (uVar6 != 0) {
          if ((abStack_318[0] >> 1 & 1) == 0) {
            bStack_6d3 = 0;
          }
          else {
            bVar4 = (byte)uStack_314 & 1;
            if ((uStack_314 & 1) == 0) {
              bStack_6d3 = bVar4;
            }
            else {
              bVar1 = bStack_6d3 & 1;
              bStack_6d3 = bVar4;
              if (bVar1 == 0) {
                uVar18 = 0x69;
                for (uVar6 = 0; uVar6 < 6 && (int)uVar6 < iStack_9f0; uVar6 = uVar6 + 1) {
                  bVar5 = 0x247 < iStack_304 - 0x1cU;
                  bVar3 = (int)uStack_300 < (int)(uVar18 - 0x17);
                  if (((!bVar5 && !bVar3) && uStack_300 <= uVar18) &&
                      ((bVar5 || bVar3) || uVar18 != uStack_300)) {
                    uStack_9e8 = 0;
                    uStack_9ec = uVar6;
                    goto code_r0x10000e44;
                  }
                  uVar18 = uVar18 + 0x1a;
                }
                uVar6 = iStack_304 - 0x1e;
                uVar18 = uStack_300 - 0xfa;
                if (uVar6 < 0x22 && uVar18 < 0x1a) {
                  uStack_9e8 = 1;
                  piVar7 = &iStack_9e4;
                  iVar16 = 5;
code_r0x10000e30:
                  iVar9 = -1;
                }
                else {
                  if (0x21 < iStack_304 - 0x134U || 0x19 < uVar18) {
                    if (iStack_304 - 0x184U < 0x22 && uVar18 < 0x1a) {
                      uVar6 = uStack_9e0 - 5;
                      bVar5 = 9 < (int)uStack_9e0;
                      uStack_9e0 = 5;
                      if (bVar5) {
                        uStack_9e0 = uVar6;
                      }
                    }
                    else {
                      if (0x21 < iStack_304 - 0x242U || 0x19 < uVar18) {
                        if ((uVar6 < 0x22) && (0x131 < (int)uStack_300)) {
                          if (uStack_300 < 0x14c) {
                            uStack_9e8 = 3;
                            piVar7 = &iStack_9dc;
                            iVar16 = 0xf;
                            goto code_r0x10000e30;
                          }
                        }
                        else if (iStack_304 - 0x242U < 0x22 && uStack_300 - 0x132 < 0x1a) {
                          uStack_9e8 = 3;
                          piVar7 = &iStack_9dc;
                          iVar16 = 0xf;
                          goto code_r0x10000e3c;
                        }
                        if (uVar6 < 0x22 && uStack_300 - 0x160 < 0x1a) {
                          bVar5 = 0x7fff < uStack_9d8;
                          uVar6 = uStack_9d8 - 0x8000;
                          uStack_9d8 = 0;
                          if (bVar5) {
                            uStack_9d8 = uVar6;
                          }
                        }
                        else {
                          if (0x21 < iStack_304 - 300U || 0x19 < uStack_300 - 0x160) {
                            if ((iStack_304 - 0x1deU < 0x86) && (uStack_300 - 0x184 < 0x24)) {
                              uStack_9e8 = 5;
                              recovered_10001884((long)auStack_1650);
                            }
                            else if ((uVar6 < 0x70) && (uStack_300 - 0x184 < 0x24)) {
                              recovered_10000fc8((long)auStack_1650);
                            }
                            goto code_r0x10000e44;
                          }
                          uStack_9d8 = uStack_9d8 + 0x8000;
                        }
                        uStack_9e8 = 4;
                        goto code_r0x10000e44;
                      }
                      uVar6 = uStack_9e0 + 5;
                      bVar5 = (int)uStack_9e0 < 0x60;
                      uStack_9e0 = 100;
                      if (bVar5) {
                        uStack_9e0 = uVar6;
                      }
                    }
                    uStack_9e8 = 2;
                    goto code_r0x10000e44;
                  }
                  uStack_9e8 = 1;
                  piVar7 = &iStack_9e4;
                  iVar16 = 5;
code_r0x10000e3c:
                  iVar9 = 1;
                }
                recovered_10001854(piVar7,iVar16,iVar9);
              }
            }
          }
        }
code_r0x10000e44:
        if ((((bStack_165f & 1) != 0) || ((bStack_1664 & 1) != 0)) || ((bStack_1662 & 1) != 0))
        break;
        bVar5 = recovered_10001368(0x9c);
        if (bVar5) {
          uVar6 = UINT_8201089c;
          if (uVar6 != 0) {
            (*(code *)(ulong)uVar6)();
          }
        }
      }
      iVar16 = 1;
    }
    terror_ui_window_close(auStack_688);
  }
  return iVar16;
}

#undef PTR_DAT_10004030
#undef PTR_str_10001f86_10004008
#undef str_10001e2c
#undef str_10001e3f
#undef str_10001ee5
#undef str_10001f1f
#undef str_10001f27
#undef str_10001f2f
#undef bStack_1668
#undef bStack_1667
#undef bStack_1666
#undef bStack_1665
#undef bStack_1664
#undef bStack_1663
#undef bStack_1662
#undef cStack_1661
#undef cStack_1660
#undef bStack_165f
#undef cStack_165e
#undef cStack_165d
#undef cStack_165c
#undef uStack_1658
#undef auStack_1650
#undef acStack_164c
#undef iStack_9f0
#undef uStack_9ec
#undef uStack_9e8
#undef iStack_9e4
#undef uStack_9e0
#undef iStack_9dc
#undef uStack_9d8
#undef abStack_9d4
#undef cStack_6d4
#undef bStack_6d3
#undef auStack_6d0
#undef uStack_690
#undef auStack_688
#undef iStack_684
#undef iStack_680
#undef pvStack_658
#undef uStack_338
#undef uStack_334
#undef pvStack_330
#undef abStack_318
#undef uStack_314
#undef iStack_304
#undef uStack_300
#undef acStack_a0
#undef acStack_80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fb0
 */

void recovered_10000fb0(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined1 *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


void recovered_10000fc8(uintptr_t state){pf_install_refresh((void *)state);}


#undef UINT_82010898
#define UINT_82010898 (*(uint *)(0x82010898U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011a0
 */

uint recovered_100011a0(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10001368(0x98);
  if ((bVar1) && (uVar2 = UINT_82010898, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100011e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,0x1000);
    return uVar2;
  }
  return 0;
}

#undef UINT_82010898

#undef DAT_10001ec1
#define DAT_10001ec1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011f8
 */

void recovered_100011f8(long param_1,undefined *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined *puVar2;
  ulong uVar3;

  puVar2 = &DAT_10001ec1;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  lVar1 = param_1 + 0xc7c;
  if (lVar1 != 0) {
    uVar3 = 0;
    if (puVar2 != (undefined *)0x0) {
      while( true ) {
        if (puVar2[uVar3] == '\0' || 0x2ff < uVar3 + 1) break;
        *(undefined *)(lVar1 + uVar3) = puVar2[uVar3];
        uVar3 = uVar3 + 1;
      }
    }
    *(undefined1 *)(lVar1 + uVar3) = 0;
  }
  return;
}

#undef DAT_10001ec1

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001214
 */

void recovered_10001214(long param_1,ulong param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_1 != 0) {
    uVar1 = 0;
    if (param_3 != 0) {
      while( true ) {
        if (*(char *)(param_3 + uVar1) == '\0' || param_2 <= uVar1 + 1) break;
        *(char *)(param_1 + uVar1) = *(char *)(param_3 + uVar1);
        uVar1 = uVar1 + 1;
      }
    }
    *(undefined1 *)(param_1 + uVar1) = 0;
  }
  return;
}


#undef DAT_10001ec2
#define DAT_10001ec2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a6U)))
#define local_42 (*(char (*)[18])(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001248
 */

void recovered_10001248(char *param_1,ulong param_2,uint param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;

  if (param_3 != 0) {
    for (uVar2 = 0; (param_3 != 0 && (uVar2 < 0x10)); uVar2 = uVar2 + 1) {
      local_42[uVar2 + 2] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
      param_3 = param_3 / 10;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      local_42[0] = local_42[uVar2 + 1];
      local_42[1] = 0;
      recovered_10001308(param_1,param_2,local_42);
    }
    return;
  }
  if (param_1 != (char *)0x0) {
    lVar4 = -1;
    pcVar3 = param_1;
LAB_10001318:
    if (param_2 + lVar4 == -1) {
      pcVar3 = param_1 + (param_2 - 1);
    }
    else {
      if (*pcVar3 != '\0') goto code_r0x1000132c;
      uVar2 = -lVar4;
      pcVar1 = &DAT_10001ec2;
      while( true ) {
        if (*pcVar1 == '\0' || param_2 <= uVar2) break;
        *pcVar3 = *pcVar1;
        uVar2 = uVar2 + 1;
        pcVar1 = pcVar1 + 1;
        pcVar3 = pcVar3 + 1;
      }
    }
    *pcVar3 = '\0';
  }
  return;
code_r0x1000132c:
  pcVar3 = pcVar3 + 1;
  lVar4 = lVar4 + -1;
  goto LAB_10001318;
}

#undef DAT_10001ec2
#undef local_42

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001308
 */

void recovered_10001308(char *param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;
  ulong uVar3;

  if ((param_1 != (char *)0x0) && (param_3 != (char *)0x0)) {
    lVar2 = -1;
    pcVar1 = param_1;
LAB_10001318:
    if (param_2 + lVar2 == -1) {
      pcVar1 = param_1 + (param_2 - 1);
    }
    else {
      if (*pcVar1 != '\0') goto code_r0x1000132c;
      uVar3 = -lVar2;
      while( true ) {
        if (*param_3 == '\0' || param_2 <= uVar3) break;
        *pcVar1 = *param_3;
        uVar3 = uVar3 + 1;
        param_3 = param_3 + 1;
        pcVar1 = pcVar1 + 1;
      }
    }
    *pcVar1 = '\0';
  }
  return;
code_r0x1000132c:
  pcVar1 = pcVar1 + 1;
  lVar2 = lVar2 + -1;
  goto LAB_10001318;
}


#undef DAT_82010800
#define DAT_82010800 (*(uint8_t *)(0x82010800U))
#undef DAT_82010804
#define DAT_82010804 (*(uint8_t *)(0x82010804U))
#undef DAT_82010808
#define DAT_82010808 (*(uint8_t *)(0x82010808U))
#undef Ram0000000082010800
#define Ram0000000082010800 (*(uint32_t *)(0x82010800U))
#undef Ram0000000082010804
#define Ram0000000082010804 (*(uint32_t *)(0x82010804U))
#undef Ram0000000082010808
#define Ram0000000082010808 (*(uint32_t *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001368
 */

bool recovered_10001368(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000082010800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000082010804, iVar1 != 0)) &&
     (uVar2 = Ram0000000082010808, 0xb < uVar2)) {
    uVar2 = Ram0000000082010808;
    return param_1 + 4U <= uVar2;
  }
  return false;
}

#undef DAT_82010800
#undef DAT_82010804
#undef DAT_82010808
#undef Ram0000000082010800
#undef Ram0000000082010804
#undef Ram0000000082010808

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013b4
 */

void recovered_100013b4(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,
                       undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = param_5 + param_3;
  for (; uVar2 = param_2, (int)param_3 < iVar1; param_3 = param_3 + 1) {
    for (; (int)uVar2 < (int)(param_4 + param_2); uVar2 = uVar2 + 1) {
      recovered_100017ec(param_1,uVar2,param_3,param_6,param_7,param_8);
    }
  }
  return;
}


#define lStack_78 (*(long *)(frame + 24))
#define uStack_6c (*(uint *)(frame + 36))
#define uStack_68 (*(uint *)(frame + 40))
#define uStack_64 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001430
 */

void recovered_10001430(uint *param_1,uint param_2,int param_3,long param_4,undefined8 param_5,
                       int param_6,int param_7,int param_8)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;

  if (param_4 != 0) {
    memset(&lStack_78,0,0x18);
    bVar1 = recovered_10001368(0x178);
    if (bVar1) {
      uVar5 = UINT_82010978;
      if (((uVar5 != 0) &&
          (iVar2 = (*(code *)(ulong)uVar5)
                             (param_4,0xffffffff,param_5,
                              param_6 << 0x18 | param_7 << 0x10 | param_8 << 8 | 0xff,&lStack_78),
          iVar2 != 0)) && (lStack_78 != 0)) {
        for (uVar6 = 0; uVar6 < uStack_68; uVar6 = uVar6 + 1) {
          lVar8 = lStack_78;
          uVar5 = param_2;
          for (uVar7 = 0; uVar7 < uStack_6c; uVar7 = uVar7 + 1) {
            lVar4 = uVar6 * uStack_64;
            if (*(char *)(lVar8 + lVar4 + 3) != '\0') {
              lVar3 = lVar8 + uVar6 * uStack_64;
              recovered_100017ec(param_1,uVar5,(int)uVar6 + param_3,*(undefined1 *)(lVar8 + lVar4),
                                 *(undefined1 *)(lVar3 + 1),*(undefined1 *)(lVar3 + 2));
            }
            lVar8 = lVar8 + 4;
            uVar5 = uVar5 + 1;
          }
        }
        bVar1 = recovered_10001368(0x50);
        if (bVar1) {
          uVar5 = UINT_82010850;
          if (uVar5 != 0) {
            (*(code *)(ulong)uVar5)(lStack_78);
          }
        }
      }
    }
  }
  return;
}

#undef lStack_78
#undef uStack_6c
#undef uStack_68
#undef uStack_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001580
 */

void recovered_10001580(uint *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar1 = (uint)param_3;
  recovered_100013b4(param_1,(uint)param_2,uVar1,(int)param_4,1,(undefined1)param_6,
                     (undefined1)param_7,(undefined1)param_8);
  recovered_100013b4(param_1,(uint)param_2,(uVar1 + (int)param_5) - 1,(int)param_4,1,
                     (undefined1)param_6,(undefined1)param_7,(undefined1)param_8);
  recovered_100013b4(param_1,(uint)param_2,uVar1,1,(int)param_5,(undefined1)param_6,
                     (undefined1)param_7,(undefined1)param_8);
  while (uVar2 = (uint)param_3, uVar3 = ((uint)param_2 + (int)param_4) - 1,
        (int)uVar2 < (int)((int)param_5 + uVar1)) {
    for (; (int)uVar3 < (int)((uint)param_2 + (int)param_4); uVar3 = uVar3 + 1) {
      recovered_100017ec(param_1,uVar3,uVar2,(undefined1)param_6,(undefined1)param_7,
                         (undefined1)param_8);
    }
    param_3 = (ulong)(uVar2 + 1);
  }
  return;
}


#define lStack_78 (*(long *)(frame + 24))
#define uStack_6c (*(uint *)(frame + 36))
#define uStack_68 (*(uint *)(frame + 40))
#define uStack_64 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001620
 */

void recovered_10001620(uint *param_1,undefined8 param_2,ulong param_3,int param_4,long param_5,
                       long param_6,int param_7)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;

  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  recovered_10001430(param_1,uVar3,uVar4 - 0x10,param_5,1,0x46,0x46,0x46);
  recovered_10001718(param_1,param_2,param_3,0x22,0x1a,(char *)((uintptr_t)pf_module_state + 0x266U),0);
  bVar1 = param_7 == 0;
  uVar9 = 0xe1;
  if (bVar1) {
    uVar9 = 0xf7;
  }
  uVar10 = 0xec;
  if (bVar1) {
    uVar10 = 0xf7;
  }
  uVar11 = 0xfa;
  if (bVar1) {
    uVar11 = 0xf7;
  }
  uVar5 = 0x9a;
  if (bVar1) {
    uVar5 = 0x96;
  }
  uVar6 = 0x5f;
  if (bVar1) {
    uVar6 = 0x96;
  }
  uVar7 = 0x24;
  if (bVar1) {
    uVar7 = 0x96;
  }
  recovered_100013b4(param_1,uVar3 + 0x2a,uVar4,param_4 - 0x54U,0x1a,uVar9,uVar10,uVar11);
  recovered_10001580(param_1,(ulong)(uVar3 + 0x2a),param_3,(ulong)(param_4 - 0x54U),0x1a,
                     (ulong)uVar7,(ulong)uVar6,(ulong)uVar5);
  recovered_10001430(param_1,uVar3 + 0x34,uVar4 + 9,param_6,1,0x1e,0x1e,0x1e);
  uVar5 = (uVar3 + param_4) - 0x22;
  recovered_100013b4(param_1,uVar5,uVar4,0x22,0x1a,0xeb,0xeb,0xeb);
  recovered_10001580(param_1,(ulong)uVar5,param_3,0x22,0x1a,0x84,0x84,0x84);
  memset(&lStack_78,0,0x18);
  bVar1 = recovered_10001368(0x178);
  if (bVar1) {
    uVar5 = UINT_82010978;
    if (((uVar5 != 0) &&
        (iVar2 = (*(code *)(ulong)uVar5)(((uintptr_t)pf_module_state + 0x268U),0xffffffff,1,0x141414ff,&lStack_78), iVar2 != 0)
        ) && (lStack_78 != 0)) {
      for (uVar13 = 0; uVar13 < uStack_68; uVar13 = uVar13 + 1) {
        lVar15 = lStack_78;
        uVar5 = (uVar3 + param_4) - 0x18;
        for (uVar14 = 0; uVar14 < uStack_6c; uVar14 = uVar14 + 1) {
          lVar12 = uVar13 * uStack_64;
          if (*(char *)(lVar15 + lVar12 + 3) != '\0') {
            lVar8 = lVar15 + uVar13 * uStack_64;
            recovered_100017ec(param_1,uVar5,(int)uVar13 + uVar4 + 10,
                               *(undefined1 *)(lVar15 + lVar12),*(undefined1 *)(lVar8 + 1),
                               *(undefined1 *)(lVar8 + 2));
          }
          lVar15 = lVar15 + 4;
          uVar5 = uVar5 + 1;
        }
      }
      bVar1 = recovered_10001368(0x50);
      if (bVar1) {
        uVar3 = UINT_82010850;
        if (uVar3 != 0) {
          (*(code *)(ulong)uVar3)(lStack_78);
        }
      }
    }
  }
  return;
}

#undef lStack_78
#undef uStack_6c
#undef uStack_68
#undef uStack_64

#define pvStack_78 (*(void * *)(frame + 24))
#define uStack_6c (*(uint *)(frame + 36))
#define uStack_68 (*(uint *)(frame + 40))
#define uStack_64 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001718
 */

void recovered_10001718(uint *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                       undefined8 param_5,char *param_6,int param_7)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  long lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  void *pvVar13;

  bVar2 = param_7 == 0;
  uVar7 = 0x37;
  if (bVar2) {
    uVar7 = 0xeb;
  }
  uVar8 = 0x69;
  if (bVar2) {
    uVar8 = 0xeb;
  }
  uVar9 = 0x9b;
  if (bVar2) {
    uVar9 = 0xeb;
  }
  uVar3 = 0x14;
  if (bVar2) {
    uVar3 = 0x84;
  }
  uVar4 = 0x4a;
  if (bVar2) {
    uVar4 = 0x84;
  }
  uVar5 = 0x7c;
  if (bVar2) {
    uVar5 = 0x84;
  }
  iVar6 = 0xff;
  if (bVar2) {
    iVar6 = 0x14;
  }
  recovered_100013b4(param_1,(uint)param_2,(uint)param_3,(int)param_4,(int)param_5,uVar7,uVar8,uVar9
                    );
  recovered_10001580(param_1,param_2,param_3,param_4,param_5,(ulong)uVar3,(ulong)uVar4,(ulong)uVar5)
  ;
  if (param_6 != (char *)0x0) {
    memset(&pvStack_78,0,0x18);
    bVar2 = recovered_10001368(0x178);
    if (bVar2) {
      uVar3 = UINT_82010978;
      if (((uVar3 != 0) &&
          (uVar3 = (*(code *)(ulong)uVar3)
                             (param_6,0xffffffff,1,iVar6 << 0x18 | iVar6 << 0x10 | iVar6 << 8 | 0xff
                              ,&pvStack_78), uVar3 != 0)) && (pvStack_78 != (void *)0x0)) {
        for (uVar11 = 0; uVar11 < uStack_68; uVar11 = uVar11 + 1) {
          pvVar13 = pvStack_78;
          uVar3 = (uint)param_2 + 10;
          for (uVar12 = 0; uVar12 < uStack_6c; uVar12 = uVar12 + 1) {
            lVar10 = uVar11 * uStack_64;
            if (*(char *)((long)pvVar13 + lVar10 + 3) != '\0') {
              lVar1 = uVar11 * uStack_64;
              recovered_100017ec(param_1,uVar3,(int)uVar11 + (uint)param_3 + 10,
                                 *(undefined1 *)((long)pvVar13 + lVar10),
                                 *(undefined1 *)((long)pvVar13 + lVar1 + 1),
                                 *(undefined1 *)((long)pvVar13 + lVar1 + 2));
            }
            pvVar13 = (void *)((long)pvVar13 + 4);
            uVar3 = uVar3 + 1;
          }
        }
        bVar2 = recovered_10001368(0x50);
        if (bVar2) {
          uVar3 = UINT_82010850;
          if (uVar3 != 0) {
            (*(code *)(ulong)uVar3)(pvStack_78);
          }
        }
      }
    }
  }
  return;
}

#undef pvStack_78
#undef uStack_6c
#undef uStack_68
#undef uStack_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017ec
 */

void recovered_100017ec(uint *param_1,uint param_2,uint param_3,undefined1 param_4,
                       undefined1 param_5,undefined1 param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if ((((param_1 != (uint *)0x0) && (-1 < (int)(param_3 | param_2))) &&
      (*(long *)(param_1 + 2) != 0)) &&
     (((int)param_2 < (int)*param_1 && ((int)param_3 < (int)param_1[1])))) {
    lVar1 = (ulong)param_2 + (ulong)*param_1 * (ulong)param_3;
    *(undefined1 *)(*(long *)(param_1 + 2) + lVar1 * 4) = param_4;
    *(undefined1 *)(*(long *)(param_1 + 2) + lVar1 * 4 + 1) = param_5;
    *(undefined1 *)(*(long *)(param_1 + 2) + lVar1 * 4 + 2) = param_6;
    *(undefined1 *)(*(long *)(param_1 + 2) + lVar1 * 4 + 3) = 0xff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001854
 */

void recovered_10001854(int *param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 != (int *)0x0) {
    iVar1 = *param_1 + param_3;
    do {
      iVar1 = iVar1 + param_2;
    } while (iVar1 - param_2 < 0);
    do {
      iVar1 = iVar1 - param_2;
    } while (param_2 <= iVar1);
    *param_1 = iVar1;
  }
  return;
}


void recovered_10001884(uintptr_t state){pf_install_run((void *)state);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a98
 */

char * recovered_10001a98(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;

  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    return (char *)0x0;
  }
  pcVar4 = param_1;
  do {
    cVar3 = *pcVar4;
    if (cVar3 == '\n' || cVar3 == '\0') {
      for (pcVar5 = param_1; pcVar5 < pcVar4; pcVar5 = pcVar5 + 1) {
        pcVar6 = param_2;
        pcVar7 = pcVar5;
        do {
          cVar1 = *pcVar6;
          if (cVar1 == '\0') {
            return param_1;
          }
        } while ((pcVar7 < pcVar4) &&
                (cVar2 = *pcVar7, pcVar6 = pcVar6 + 1, pcVar7 = pcVar7 + 1, cVar2 == cVar1));
      }
      if (cVar3 == '\0') {
        return (char *)0x0;
      }
      param_1 = pcVar4 + 1;
    }
    pcVar4 = pcVar4 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b1c
 */

void recovered_10001b1c(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  long lVar2;

  if (param_1 != 0) {
    lVar2 = 0;
    if (param_2 != 0) {
      for (; (bVar1 = *(byte *)(param_2 + lVar2),
             0xd < bVar1 || (1 << (ulong)(bVar1 & 0x1f) & 0x2401U) == 0 && (lVar2 != 0x2ff));
          lVar2 = lVar2 + 1) {
        *(byte *)(param_1 + 0xc7c + lVar2) = bVar1;
      }
    }
    *(undefined1 *)(param_1 + lVar2 + 0xc7c) = 0;
  }
  return;
}


#undef DAT_10001ec1
#define DAT_10001ec1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b6c
 */

byte * recovered_10001b6c(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;

  if ((param_1 == (byte *)0x0) || (bVar1 = *param_1, bVar1 == 0)) {
    return &DAT_10001ec1;
  }
  pbVar2 = param_1;
  pbVar3 = param_1;
  do {
    if ((bVar1 == 10) || (bVar1 == 0)) {
      pbVar4 = pbVar2;
      do {
        if (pbVar4 <= pbVar3) goto LAB_10001bc0;
        pbVar4 = pbVar4 + -1;
      } while (*pbVar4 < 0x21 && (1L << ((ulong)*pbVar4 & 0x3f) & 0x100002200U) != 0);
      param_1 = pbVar3;
LAB_10001bc0:
      if (bVar1 == 0) {
        return param_1;
      }
      pbVar3 = pbVar2 + 1;
    }
    pbVar2 = pbVar2 + 1;
    bVar1 = *pbVar2;
  } while( true );
}

#undef DAT_10001ec1

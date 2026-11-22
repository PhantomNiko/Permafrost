/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c8320 (*(uint8_t *)(0x20c8320U))
#define DAT_020ca47a (*(uint8_t *)(0x20ca47aU))
#define DAT_020ca4fa (*(uint8_t *)(0x20ca4faU))
#define DAT_020ca5fe (*(uint8_t *)(0x20ca5feU))
#define DAT_020de1e0 (*(uint32_t volatile *)(0x20de1e0U))
#define DAT_020de314 (*(uint8_t volatile *)(0x20de314U))
#define DAT_020de318 (*(uint8_t volatile *)(0x20de318U))
#define DAT_021ec4ec (*(uint8_t volatile *)(0x21ec4ecU))
#define DAT_021ed810 (*(uint32_t volatile *)(0x21ed810U))
#define DAT_02238eec (*(uint32_t volatile *)(0x2238eecU))
#define DAT_02238f44 (*(uint8_t volatile *)(0x2238f44U))
#define DAT_0223a930 (*(uint8_t volatile *)(0x223a930U))
#define DAT_0223b71d (*(uint8_t volatile *)(0x223b71dU))
#define DAT_0223b720 (*(uint8_t volatile *)(0x223b720U))
#define DAT_0223b724 (*(uint8_t volatile *)(0x223b724U))
#define DAT_0223b728 (*(uint8_t volatile *)(0x223b728U))
#define PTR_str_020c832c_020d9578 (*(char * *)(0x20d9578U))
#define PTR_str_020c8866_020d9574 (*(char * *)(0x20d9574U))
#define PTR_str_020ca601_020de31c (*(char * volatile *)(0x20de31cU))
#define Ram0223a930 (*(uint32_t volatile *)(0x223a930U))
#define str_020c7c55 (*(char (*)[1])(0x20c7c55U))
#define str_020c8080 (*(char (*)[1])(0x20c8080U))
#define str_020c8090 (*(char (*)[1])(0x20c8090U))
#define str_020c8310 (*(char (*)[1])(0x20c8310U))
#define str_020c8316 (*(char (*)[1])(0x20c8316U))
#define str_020c8325 (*(char (*)[1])(0x20c8325U))
#define str_020c91a2 (*(char (*)[1])(0x20c91a2U))
#define str_020c99a7 (*(char (*)[1])(0x20c99a7U))
#define str_020c99bd (*(char (*)[1])(0x20c99bdU))
#define str_020ca3e7 (*(char (*)[1])(0x20ca3e7U))
#define str_020ca403 (*(char (*)[1])(0x20ca403U))
#define str_020ca41e (*(char (*)[1])(0x20ca41eU))
#define str_020ca436 (*(char (*)[1])(0x20ca436U))
#define str_020ca44d (*(char (*)[1])(0x20ca44dU))
#define str_020ca45e (*(char (*)[1])(0x20ca45eU))
#define str_020ca46e (*(char (*)[1])(0x20ca46eU))
#define str_020ca47d (*(char (*)[1])(0x20ca47dU))
#define str_020ca483 (*(char (*)[1])(0x20ca483U))
#define str_020ca48a (*(char (*)[1])(0x20ca48aU))
#define str_020ca49b (*(char (*)[1])(0x20ca49bU))
#define str_020ca4ae (*(char (*)[1])(0x20ca4aeU))
#define str_020ca4c0 (*(char (*)[1])(0x20ca4c0U))
#define str_020ca4c7 (*(char (*)[1])(0x20ca4c7U))
#define str_020ca4cf (*(char (*)[1])(0x20ca4cfU))
#define str_020ca4dd (*(char (*)[1])(0x20ca4ddU))
#define str_020ca4e7 (*(char (*)[1])(0x20ca4e7U))
#define str_020ca4f3 (*(char (*)[1])(0x20ca4f3U))
#define str_020ca4ff (*(char (*)[1])(0x20ca4ffU))
#define str_020ca507 (*(char (*)[1])(0x20ca507U))
#define str_020ca513 (*(char (*)[1])(0x20ca513U))
#define str_020ca51a (*(char (*)[1])(0x20ca51aU))
#define str_020ca521 (*(char (*)[1])(0x20ca521U))
#define str_020ca529 (*(char (*)[1])(0x20ca529U))
#define str_020ca530 (*(char (*)[1])(0x20ca530U))
#define str_020ca537 (*(char (*)[1])(0x20ca537U))
#define str_020ca53e (*(char (*)[1])(0x20ca53eU))
#define str_020ca546 (*(char (*)[1])(0x20ca546U))
#define str_020ca551 (*(char (*)[1])(0x20ca551U))
#define str_020ca55d (*(char (*)[1])(0x20ca55dU))
#define str_020ca565 (*(char (*)[1])(0x20ca565U))
#define str_020ca56d (*(char (*)[1])(0x20ca56dU))
#define str_020ca576 (*(char (*)[1])(0x20ca576U))
#define str_020ca580 (*(char (*)[1])(0x20ca580U))
#define str_020ca59a (*(char (*)[1])(0x20ca59aU))
#define str_020ca5a8 (*(char (*)[1])(0x20ca5a8U))
#define str_020ca5ae (*(char (*)[1])(0x20ca5aeU))
#define str_020ca5bf (*(char (*)[1])(0x20ca5bfU))
#define str_020ca5c9 (*(char (*)[1])(0x20ca5c9U))
#define str_020ca5d3 (*(char (*)[1])(0x20ca5d3U))
#define str_020ca5dc (*(char (*)[1])(0x20ca5dcU))
#define str_020ca5e5 (*(char (*)[1])(0x20ca5e5U))
#define str_020ca5f2 (*(char (*)[1])(0x20ca5f2U))


undefined4 recovered_20636f0(int in_ECX,int in_EDX,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined **ppuVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *right;
  uint *puVar9;
  undefined3 extraout_var = 0;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  char *pcVar14;

  if (in_ECX == 0) {
    return 0;
  }
  if (param_3 == (uint *)0x0) {
    return 0;
  }
  if (in_EDX == 0) {
    return 0;
  }
  ppuVar1 = *(undefined ***)(in_ECX + 0x19a0);
  if (ppuVar1 == (undefined **)0x0) {
    return 0;
  }
  uVar5 = (uint)*(ushort *)(in_EDX + 6);
  if (uVar5 != 0) {
    if (uVar5 != 0xfff1) {
      if (uVar5 < *(uint *)(in_ECX + 0x18)) {
        puVar12 = ppuVar1[uVar5 * 2 + 0x2f5];
        if ((puVar12 != (undefined *)0x0 || ppuVar1[uVar5 * 2 + 0x2f6] != (undefined *)0x0) ||
           (ppuVar1[uVar5 * 2 + 0x3b5] == (undefined *)0x0 &&
            ppuVar1[uVar5 * 2 + 0x3b6] == (undefined *)0x0)) {
          uVar13 = *(uint *)(in_EDX + 8);
          param_3[1] = (uint)(ppuVar1[uVar5 * 2 + 0x2f6] +
                             (uint)CARRY4((uint)puVar12,*(uint *)(in_EDX + 8)) +
                             *(int *)(in_EDX + 0xc));
          *param_3 = (uint)(puVar12 + uVar13);
          goto LAB_020643ec;
        }
      }
      return 0;
    }
    ppuVar1 = *(undefined ***)(in_EDX + 8);
    param_3[1] = *(uint *)(in_EDX + 0xc);
    *param_3 = (uint)ppuVar1;
    param_3 = (uint *)ppuVar1;
    goto LAB_020643ec;
  }
  if (*(char **)(in_EDX + 0x18) != (char *)0x0) {
    iVar6 = recovered_20022a0(*(char **)(in_EDX + 0x18),str_020c8310);
    if ((iVar6 == 0) && (ppuVar1[7] == (undefined *)0x15)) {
      ppuVar10 = (undefined **)ppuVar1[0x2f3];
      puVar12 = ppuVar1[0x2f4];
      if (ppuVar10 != (undefined **)0x0 || puVar12 != (undefined *)0x0) {
        *param_3 = (uint)ppuVar10;
        param_3[1] = (uint)puVar12;
        param_3 = (uint *)ppuVar10;
        goto LAB_020643ec;
      }
    }
    pcVar14 = *(char **)(in_EDX + 0x18);
    if (pcVar14 != (char *)0x0) {
      iVar6 = -0x13e0;
      do {
        iVar7 = recovered_20022a0(*(char **)(iVar6 + 0x20d9570),pcVar14);
        if (iVar7 == 0) {
          recovered_20668a0();
          puVar12 = *(undefined **)((int)&PTR_str_020c8866_020d9574 + iVar6);
          goto LAB_020638a2;
        }
        iVar6 = iVar6 + 0xc;
      } while (iVar6 != 0);
      iVar6 = recovered_2019320(pcVar14,str_020c8316,9);
      puVar12 = &DAT_02238f44;
      if (((iVar6 == 0) || (iVar6 = recovered_2019320(pcVar14,&DAT_020c8320,4), iVar6 == 0)) ||
         (iVar6 = recovered_2019320(pcVar14,str_020c8325,6), iVar6 == 0)) {
LAB_020638a2:
        *param_3 = (uint)puVar12;
        param_3[1] = 0;
        ppuVar1[0xd] = ppuVar1[0xd] + 1;
        goto LAB_020643ec;
      }
      pcVar14 = *(char **)(in_EDX + 0x18);
      uVar5 = DAT_02238eec;
      if (!(uVar5 == 0 || pcVar14 == (char *)0x0)) {
        uVar13 = 0;
        do {
          if ((((undefined **)(&DAT_021ec4ec + uVar13 * 0x1328) != ppuVar1) &&
              ((&DAT_021ec4ec)[uVar13 * 0x1328] != '\0')) &&
             ((puVar9 = (uint *)(&DAT_021ed810)[uVar13 * 0x4ca], puVar9 != (uint *)0x0 &&
              (uVar2 = *puVar9, uVar2 != 0)))) {
            uVar5 = 0;
            puVar3 = puVar9;
            do {
              iVar6 = recovered_20022a0((char *)((int)puVar9 + puVar3[4] + uVar2 * 0x10 + 8),pcVar14
                                       );
              if (iVar6 == 0) {
                uVar5 = puVar3[2];
                param_3[1] = puVar3[3];
                *param_3 = uVar5;
                ppuVar1[0xd] = ppuVar1[0xd] + 1;
                param_3 = (uint *)ppuVar1;
                goto LAB_020643ec;
              }
              uVar5 = uVar5 + 1;
              puVar3 = puVar3 + 4;
            } while (uVar5 < *puVar9);
            uVar5 = DAT_02238eec;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar5);
        pcVar14 = *(char **)(in_EDX + 0x18);
      }
      iVar6 = *(int *)(in_ECX + 0x19a0);
      if ((pcVar14 == (char *)0x0 || iVar6 == 0) || (*pcVar14 == '\0')) goto LAB_020643d5;
      iVar7 = recovered_2019320(pcVar14,str_020ca5e5,0xc);
      if (iVar7 == 0) {
        right = pcVar14 + 8;
LAB_020639bc:
        if (*right != '\0') {
          puVar9 = param_3;
          if (iVar7 != 0) {
            puVar9 = (uint *)0x0;
          }
          uVar5 = *(uint *)(in_ECX + 0x18);
          if (uVar5 != 0) {
            uVar13 = 0;
            do {
              pcVar14 = *(char **)(in_ECX + 0x1820 + uVar13 * 4);
              if (pcVar14 != (char *)0x0) {
                iVar6 = recovered_20022a0(pcVar14,right);
                if (iVar6 == 0) {
                  if ((-1 < (int)uVar13) &&
                     (ppuVar10 = *(undefined ***)(in_ECX + 0x19a0), ppuVar10 != (undefined **)0x0))
                  {
                    if (puVar9 != (uint *)0x0) {
                      puVar12 = ppuVar10[uVar13 * 2 + 0x2f5];
                      puVar9[1] = (uint)ppuVar10[uVar13 * 2 + 0x2f6];
                      *puVar9 = (uint)puVar12;
                    }
                    if (iVar7 != 0) {
                      puVar12 = ppuVar10[uVar13 * 2 + 0x3b5];
                      puVar11 = ppuVar10[uVar13 * 2 + 0x2f5];
                      param_3[1] = (uint)(ppuVar10[uVar13 * 2 + 0x3b6] +
                                          (int)ppuVar10[uVar13 * 2 + 0x2f6] +
                                         CARRY4((uint)puVar12,(uint)ppuVar10[uVar13 * 2 + 0x2f5]));
                      *param_3 = (uint)(puVar12 + (int)puVar11);
                    }
                    if (!(ppuVar10[uVar13 * 2 + 0x2f5] != (undefined *)0x0 ||
                         ppuVar10[uVar13 * 2 + 0x2f6] != (undefined *)0x0)) goto LAB_020640e9;
                    goto LAB_02064108;
                  }
                  break;
                }
                uVar5 = *(uint *)(in_ECX + 0x18);
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar5);
          }
          goto LAB_020640f9;
        }
      }
      else {
        iVar8 = recovered_2019320(pcVar14,str_020ca5f2,0xb);
        if (iVar8 == 0) {
          right = pcVar14 + 7;
          goto LAB_020639bc;
        }
      }
      iVar7 = recovered_20022a0(pcVar14,str_020ca3e7);
      if (iVar7 == 0) {
        uVar5 = *(uint *)(in_ECX + 0x18);
        if (uVar5 != 0) {
          uVar13 = 0;
          do {
            pcVar14 = *(char **)(in_ECX + 0x1820 + uVar13 * 4);
            if (pcVar14 != (char *)0x0) {
              iVar6 = recovered_20022a0(pcVar14,str_020c8090);
              if (iVar6 == 0) goto LAB_02064069;
              uVar5 = *(uint *)(in_ECX + 0x18);
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar5);
        }
LAB_020640f9:
        uVar5 = 0;
        ppuVar10 = (undefined **)&DAT_0223b71d;
      }
      else {
        iVar7 = recovered_20022a0(pcVar14,str_020ca403);
        if (iVar7 == 0) {
          uVar5 = *(uint *)(in_ECX + 0x18);
          if (uVar5 != 0) {
            uVar13 = 0;
            do {
              pcVar14 = *(char **)(in_ECX + 0x1820 + uVar13 * 4);
              if (pcVar14 != (char *)0x0) {
                iVar6 = recovered_20022a0(pcVar14,str_020c8090);
                if (iVar6 == 0) {
                  if ((-1 < (int)uVar13) &&
                     (ppuVar10 = *(undefined ***)(in_ECX + 0x19a0), ppuVar10 != (undefined **)0x0))
                  {
                    puVar12 = ppuVar10[uVar13 * 2 + 0x3b5] + (int)ppuVar10[uVar13 * 2 + 0x2f5];
                    puVar11 = ppuVar10[uVar13 * 2 + 0x3b6] + (int)ppuVar10[uVar13 * 2 + 0x2f6] +
                              CARRY4((uint)ppuVar10[uVar13 * 2 + 0x3b5],
                                     (uint)ppuVar10[uVar13 * 2 + 0x2f5]);
                    goto LAB_020640d4;
                  }
                  break;
                }
                uVar5 = *(uint *)(in_ECX + 0x18);
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar5);
          }
          goto LAB_020640f9;
        }
        iVar7 = recovered_20022a0(pcVar14,str_020ca41e);
        if (iVar7 == 0) {
          uVar5 = *(uint *)(in_ECX + 0x18);
          if (uVar5 != 0) {
            uVar13 = 0;
            do {
              pcVar14 = *(char **)(in_ECX + 0x1820 + uVar13 * 4);
              if (pcVar14 != (char *)0x0) {
                iVar6 = recovered_20022a0(pcVar14,str_020c8080);
                if (iVar6 == 0) goto LAB_02064069;
                uVar5 = *(uint *)(in_ECX + 0x18);
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar5);
          }
          goto LAB_020640f9;
        }
        iVar7 = recovered_20022a0(pcVar14,str_020ca436);
        if (iVar7 == 0) {
          bVar4 = recovered_2065660(in_ECX,str_020c8080,(undefined4 *)0x0,(int *)param_3);
          ppuVar10 = (undefined **)CONCAT31(extraout_var,bVar4);
          if (bVar4) goto LAB_02064108;
          goto LAB_020640f9;
        }
        iVar7 = recovered_20022a0(pcVar14,str_020ca44d);
        if ((iVar7 == 0) || (iVar7 = recovered_20022a0(pcVar14,str_020ca45e), iVar7 == 0))
        goto LAB_020640f9;
        iVar7 = recovered_20022a0(pcVar14,str_020c7c55);
        if (iVar7 == 0) {
          uVar5 = 0;
          ppuVar10 = (undefined **)&DAT_020de314;
        }
        else {
          iVar7 = recovered_20022a0(pcVar14,str_020ca46e);
          if (iVar7 == 0) {
            uVar5 = 0;
            ppuVar10 = (undefined **)&DAT_0223b720;
          }
          else {
            iVar7 = recovered_20022a0(pcVar14,&DAT_020ca47a);
            if (iVar7 == 0) {
              uVar5 = 0;
              ppuVar10 = (undefined **)&DAT_020de1e0;
            }
            else {
              iVar7 = recovered_20022a0(pcVar14,str_020ca47d);
              if ((iVar7 == 0) || (iVar7 = recovered_20022a0(pcVar14,str_020ca483), iVar7 == 0)) {
                uVar5 = recovered_20081a0();
                Ram0223a930 = uVar5;
                ppuVar10 = (undefined **)&DAT_0223a930;
                uVar5 = 0;
              }
              else {
                iVar7 = recovered_20022a0(pcVar14,str_020ca48a);
                if (iVar7 == 0) {
                  uVar5 = 0;
                  ppuVar10 = (undefined **)&DAT_0223b724;
                }
                else {
                  iVar7 = recovered_20022a0(pcVar14,str_020ca49b);
                  if (iVar7 == 0) {
                    uVar5 = 0;
                    ppuVar10 = (undefined **)&DAT_0223b728;
                  }
                  else {
                    iVar7 = recovered_20022a0(pcVar14,str_020ca4ae);
                    if (iVar7 == 0) {
                      uVar5 = 0;
                      ppuVar10 = (undefined **)&DAT_020de318;
                    }
                    else {
                      iVar7 = recovered_2019320(pcVar14,&DAT_020ca5fe,2);
                      if (iVar7 == 0) {
                        uVar5 = 0;
                        ppuVar10 = &PTR_str_020ca601_020de31c;
                      }
                      else {
                        iVar7 = recovered_20022a0(pcVar14,str_020ca4c0);
                        if (iVar7 == 0) {
                          ppuVar10 = *(undefined ***)(iVar6 + 0x11d4);
                          uVar5 = *(uint *)(iVar6 + 0x11d8);
                        }
                        else {
                          iVar7 = recovered_20022a0(pcVar14,str_020ca4c7);
                          if (iVar7 == 0) {
                            ppuVar10 = *(undefined ***)(iVar6 + 0x126c);
                            uVar5 = *(uint *)(iVar6 + 0x1270);
                          }
                          else {
                            iVar7 = recovered_20022a0(pcVar14,str_020ca4cf);
                            if (iVar7 == 0) {
                              ppuVar10 = *(undefined ***)(iVar6 + 0x1234);
                              uVar5 = *(uint *)(iVar6 + 0x1238);
                            }
                            else {
                              iVar7 = recovered_20022a0(pcVar14,str_020ca4dd);
                              if (iVar7 == 0) {
                                ppuVar10 = *(undefined ***)(iVar6 + 0x127c);
                                uVar5 = *(uint *)(iVar6 + 0x1280);
                              }
                              else {
                                iVar7 = recovered_20022a0(pcVar14,str_020ca4e7);
                                if (iVar7 == 0) {
                                  ppuVar10 = *(undefined ***)(iVar6 + 0x1284);
                                  uVar5 = *(uint *)(iVar6 + 0x1288);
                                }
                                else {
                                  iVar7 = recovered_20022a0(pcVar14,str_020c99bd);
                                  if (iVar7 == 0) {
                                    ppuVar10 = *(undefined ***)(iVar6 + 0x11dc);
                                    uVar5 = *(uint *)(iVar6 + 0x11e0);
                                  }
                                  else {
                                    iVar7 = recovered_20022a0(pcVar14,str_020ca4f3);
                                    if (iVar7 == 0) {
                                      ppuVar10 = *(undefined ***)(iVar6 + 0x1244);
                                      uVar5 = *(uint *)(iVar6 + 0x1248);
                                    }
                                    else {
                                      iVar7 = recovered_20022a0(pcVar14,&DAT_020ca4fa);
                                      if (iVar7 == 0) {
                                        ppuVar10 = *(undefined ***)(iVar6 + 0x124c);
                                        uVar5 = *(uint *)(iVar6 + 0x1250);
                                      }
                                      else {
                                        iVar7 = recovered_20022a0(pcVar14,str_020ca4ff);
                                        if (iVar7 == 0) {
                                          ppuVar10 = *(undefined ***)(iVar6 + 0x1254);
                                          uVar5 = *(uint *)(iVar6 + 0x1258);
                                        }
                                        else {
                                          iVar7 = recovered_20022a0(pcVar14,str_020ca507);
                                          if (iVar7 == 0) {
                                            ppuVar10 = *(undefined ***)(iVar6 + 0x125c);
                                            uVar5 = *(uint *)(iVar6 + 0x1260);
                                          }
                                          else {
                                            iVar7 = recovered_20022a0(pcVar14,str_020ca513);
                                            if (iVar7 == 0) {
                                              ppuVar10 = *(undefined ***)(iVar6 + 0x11e4);
                                              uVar5 = *(uint *)(iVar6 + 0x11e8);
                                            }
                                            else {
                                              iVar7 = recovered_20022a0(pcVar14,str_020ca51a);
                                              if (iVar7 == 0) {
                                                ppuVar10 = *(undefined ***)(iVar6 + 0x11ec);
                                                uVar5 = *(uint *)(iVar6 + 0x11f0);
                                              }
                                              else {
                                                iVar7 = recovered_20022a0(pcVar14,str_020ca521);
                                                if (iVar7 == 0) {
                                                  ppuVar10 = *(undefined ***)(iVar6 + 0x11f4);
                                                  uVar5 = *(uint *)(iVar6 + 0x11f8);
                                                }
                                                else {
                                                  iVar7 = recovered_20022a0(pcVar14,str_020ca529);
                                                  if (iVar7 == 0) {
                                                    ppuVar10 = *(undefined ***)(iVar6 + 0x1264);
                                                    uVar5 = *(uint *)(iVar6 + 0x1268);
                                                  }
                                                  else {
                                                    iVar7 = recovered_20022a0(pcVar14,str_020ca530);
                                                    if (iVar7 == 0) {
                                                      ppuVar10 = *(undefined ***)(iVar6 + 0x11fc);
                                                      uVar5 = *(uint *)(iVar6 + 0x1200);
                                                    }
                                                    else {
                                                      iVar7 = recovered_20022a0(pcVar14,str_020ca537
                                                                               );
                                                      if (iVar7 == 0) {
                                                        ppuVar10 = *(undefined ***)(iVar6 + 0x1204);
                                                        uVar5 = *(uint *)(iVar6 + 0x1208);
                                                      }
                                                      else {
                                                        iVar7 = recovered_20022a0(pcVar14,
                                                  str_020ca53e);
                                                  if (iVar7 == 0) {
                                                    ppuVar10 = *(undefined ***)(iVar6 + 0x120c);
                                                    uVar5 = *(uint *)(iVar6 + 0x1210);
                                                  }
                                                  else {
                                                    iVar7 = recovered_20022a0(pcVar14,str_020ca546);
                                                    if (iVar7 == 0) {
                                                      ppuVar10 = *(undefined ***)(iVar6 + 0x12ac);
                                                      uVar5 = *(uint *)(iVar6 + 0x12b0);
                                                    }
                                                    else {
                                                      iVar7 = recovered_20022a0(pcVar14,str_020ca551
                                                                               );
                                                      if (iVar7 == 0) {
                                                        ppuVar10 = *(undefined ***)(iVar6 + 0x12b4);
                                                        uVar5 = *(uint *)(iVar6 + 0x12b8);
                                                      }
                                                      else {
                                                        iVar7 = recovered_20022a0(pcVar14,
                                                  str_020ca55d);
                                                  if (iVar7 == 0) {
                                                    ppuVar10 = *(undefined ***)(iVar6 + 0x129c);
                                                    uVar5 = *(uint *)(iVar6 + 0x12a0);
                                                  }
                                                  else {
                                                    iVar7 = recovered_20022a0(pcVar14,str_020ca565);
                                                    if (iVar7 == 0) {
                                                      ppuVar10 = *(undefined ***)(iVar6 + 0x12a4);
                                                      uVar5 = *(uint *)(iVar6 + 0x12a8);
                                                    }
                                                    else {
                                                      iVar7 = recovered_20022a0(pcVar14,str_020ca56d
                                                                               );
                                                      if (iVar7 == 0) {
                                                        ppuVar10 = *(undefined ***)(iVar6 + 0x1214);
                                                        uVar5 = *(uint *)(iVar6 + 0x1218);
                                                      }
                                                      else {
                                                        iVar7 = recovered_20022a0(pcVar14,
                                                  str_020ca576);
                                                  if (iVar7 == 0) {
                                                    ppuVar10 = *(undefined ***)(iVar6 + 0x1274);
                                                    uVar5 = *(uint *)(iVar6 + 0x1278);
                                                  }
                                                  else {
                                                    iVar7 = recovered_20022a0(pcVar14,str_020ca580);
                                                    if (iVar7 == 0) {
                                                      ppuVar10 = *(undefined ***)(iVar6 + 0x128c);
                                                      uVar5 = *(uint *)(iVar6 + 0x1290);
                                                    }
                                                    else {
                                                      iVar7 = recovered_20022a0(pcVar14,str_020ca59a
                                                                               );
                                                      if (iVar7 == 0) {
                                                        ppuVar10 = *(undefined ***)(iVar6 + 0x1294);
                                                        uVar5 = *(uint *)(iVar6 + 0x1298);
                                                      }
                                                      else {
                                                        iVar7 = recovered_20022a0(pcVar14,
                                                  str_020ca5a8);
                                                  if (iVar7 == 0) {
                                                    ppuVar10 = *(undefined ***)(iVar6 + 0x121c);
                                                    uVar5 = *(uint *)(iVar6 + 0x1220);
                                                  }
                                                  else {
                                                    iVar7 = recovered_20022a0(pcVar14,str_020ca5ae);
                                                    if (iVar7 == 0) {
                                                      ppuVar10 = *(undefined ***)(iVar6 + 0x1224);
                                                      uVar5 = *(uint *)(iVar6 + 0x1228);
                                                    }
                                                    else {
                                                      iVar7 = recovered_20022a0(pcVar14,str_020ca5bf
                                                                               );
                                                      if (iVar7 == 0) {
                                                        ppuVar10 = *(undefined ***)(iVar6 + 0x12bc);
                                                        uVar5 = *(uint *)(iVar6 + 0x12c0);
                                                      }
                                                      else {
                                                        iVar7 = recovered_20022a0(pcVar14,
                                                  str_020ca5c9);
                                                  if (iVar7 == 0) {
                                                    ppuVar10 = *(undefined ***)(iVar6 + 0x12c4);
                                                    uVar5 = *(uint *)(iVar6 + 0x12c8);
                                                  }
                                                  else {
                                                    iVar7 = recovered_20022a0(pcVar14,str_020ca5d3);
                                                    if (iVar7 == 0) {
                                                      ppuVar10 = *(undefined ***)(iVar6 + 0x12cc);
                                                      uVar5 = *(uint *)(iVar6 + 0x12d0);
                                                    }
                                                    else {
                                                      iVar7 = recovered_20022a0(pcVar14,str_020ca5dc
                                                                               );
                                                      if (iVar7 == 0) {
                                                        ppuVar10 = *(undefined ***)(iVar6 + 0x12d4);
                                                        uVar5 = *(uint *)(iVar6 + 0x12d8);
                                                      }
                                                      else {
                                                        iVar7 = recovered_20022a0(pcVar14,
                                                  str_020c99a7);
                                                  if (iVar7 != 0) {
                                                    iVar7 = recovered_20022a0(pcVar14,str_020c91a2);
                                                    if (iVar7 != 0) {
                                                      uVar5 = 0xffffffff;
                                                      do {
                                                        if (uVar5 == 0x2d) goto LAB_020643d5;
                                                        iVar7 = recovered_20022a0(pcVar14,(&
                                                  PTR_str_020c832c_020d9578)[uVar5]);
                                                  uVar5 = uVar5 + 1;
                                                  } while (iVar7 != 0);
                                                  if (0x2d < uVar5) goto LAB_020643d5;
                                                  }
                                                  ppuVar10 = *(undefined ***)(iVar6 + 0x123c);
                                                  uVar5 = *(uint *)(iVar6 + 0x1240);
                                                  if (ppuVar10 == (undefined **)0x0 && uVar5 == 0)
                                                  goto LAB_020643d5;
                                                  goto LAB_02064100;
                                                  }
                                                  ppuVar10 = *(undefined ***)(iVar6 + 0x122c);
                                                  uVar5 = *(uint *)(iVar6 + 0x1230);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        if (ppuVar10 == (undefined **)0x0 && uVar5 == 0) goto LAB_020643d5;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_02064100:
      *param_3 = (uint)ppuVar10;
      param_3[1] = uVar5;
      goto LAB_02064108;
    }
  }
LAB_020643d5:
  if ((*(byte *)(in_EDX + 4) & 0xf0) != 0x20) {
    ppuVar1[0xe] = ppuVar1[0xe] + 1;
    recovered_20633c0((char *)(ppuVar1 + 0x136),*(char **)(in_EDX + 0x18));
    return 0;
  }
  param_3[1] = 0;
  *param_3 = 0;
  param_3 = (uint *)(undefined **)0x0;
LAB_020643ec:
  return CONCAT31((int3)((uint)param_3 >> 8),1);
LAB_02064069:
  if (((int)uVar13 < 0) ||
     (ppuVar10 = *(undefined ***)(in_ECX + 0x19a0), ppuVar10 == (undefined **)0x0))
  goto LAB_020640f9;
  puVar12 = ppuVar10[uVar13 * 2 + 0x2f5];
  puVar11 = ppuVar10[uVar13 * 2 + 0x2f6];
LAB_020640d4:
  param_3[1] = (uint)puVar11;
  *param_3 = (uint)puVar12;
  if (ppuVar10[uVar13 * 2 + 0x2f5] == (undefined *)0x0 &&
      ppuVar10[uVar13 * 2 + 0x2f6] == (undefined *)0x0) {
LAB_020640e9:
    if (ppuVar10[uVar13 * 2 + 0x3b5] != (undefined *)0x0 ||
        ppuVar10[uVar13 * 2 + 0x3b6] != (undefined *)0x0) goto LAB_020640f9;
  }
LAB_02064108:
  ppuVar1[0xd] = ppuVar1[0xd] + 1;
  param_3 = (uint *)ppuVar10;
  goto LAB_020643ec;
}
#undef DAT_020c8320
#undef DAT_020ca47a
#undef DAT_020ca4fa
#undef DAT_020ca5fe
#undef DAT_020de1e0
#undef DAT_020de314
#undef DAT_020de318
#undef DAT_021ec4ec
#undef DAT_021ed810
#undef DAT_02238eec
#undef DAT_02238f44
#undef DAT_0223a930
#undef DAT_0223b71d
#undef DAT_0223b720
#undef DAT_0223b724
#undef DAT_0223b728
#undef PTR_str_020c832c_020d9578
#undef PTR_str_020c8866_020d9574
#undef PTR_str_020ca601_020de31c
#undef Ram0223a930
#undef str_020c7c55
#undef str_020c8080
#undef str_020c8090
#undef str_020c8310
#undef str_020c8316
#undef str_020c8325
#undef str_020c91a2
#undef str_020c99a7
#undef str_020c99bd
#undef str_020ca3e7
#undef str_020ca403
#undef str_020ca41e
#undef str_020ca436
#undef str_020ca44d
#undef str_020ca45e
#undef str_020ca46e
#undef str_020ca47d
#undef str_020ca483
#undef str_020ca48a
#undef str_020ca49b
#undef str_020ca4ae
#undef str_020ca4c0
#undef str_020ca4c7
#undef str_020ca4cf
#undef str_020ca4dd
#undef str_020ca4e7
#undef str_020ca4f3
#undef str_020ca4ff
#undef str_020ca507
#undef str_020ca513
#undef str_020ca51a
#undef str_020ca521
#undef str_020ca529
#undef str_020ca530
#undef str_020ca537
#undef str_020ca53e
#undef str_020ca546
#undef str_020ca551
#undef str_020ca55d
#undef str_020ca565
#undef str_020ca56d
#undef str_020ca576
#undef str_020ca580
#undef str_020ca59a
#undef str_020ca5a8
#undef str_020ca5ae
#undef str_020ca5bf
#undef str_020ca5c9
#undef str_020ca5d3
#undef str_020ca5dc
#undef str_020ca5e5
#undef str_020ca5f2

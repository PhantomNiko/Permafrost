#include "functions.h"



#undef DAT_00000005
#define DAT_00000005 (*(uint8_t *)(0x5U))
#undef DAT_00000029
#define DAT_00000029 (*(uint8_t *)(0x29U))
#undef DAT_00000035
#define DAT_00000035 (*(uint8_t *)(0x35U))
#undef DAT_404f6cf8
#define DAT_404f6cf8 (*(uint8_t *)(0x404f6cf8U))
#undef DAT_404f6d16
#define DAT_404f6d16 (*(uint8_t *)(0x404f6d16U))
#undef DAT_40500004
#define DAT_40500004 (*(uint32_t volatile *)(0x40500004U))
#undef DAT_4050428c
#define DAT_4050428c (*(uint32_t volatile *)(0x4050428cU))
#undef DAT_40505b06
#define DAT_40505b06 (*(uint8_t volatile *)(0x40505b06U))
#undef DAT_40505b07
#define DAT_40505b07 (*(uint8_t volatile *)(0x40505b07U))
#undef DAT_40505b08
#define DAT_40505b08 (*(uint8_t volatile *)(0x40505b08U))
#undef DAT_40505b09
#define DAT_40505b09 (*(uint8_t volatile *)(0x40505b09U))
#undef DAT_40505b0a
#define DAT_40505b0a (*(uint8_t volatile *)(0x40505b0aU))
#undef DAT_40505b0b
#define DAT_40505b0b (*(uint8_t volatile *)(0x40505b0bU))
#undef DAT_40505b48
#define DAT_40505b48 (*(uint32_t volatile *)(0x40505b48U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#undef EXT_0000001c
#define EXT_0000001c (*(uint8_t *)(0x1cU))
#undef SUB_00002138
#define SUB_00002138 (*(uint8_t *)(0x2138U))
#define auStack_32 (*(undefined1 (*)[12])(frame + 30))
#define local_40 (*(undefined4 *)(frame + 16))
#define local_3c (*(int * *)(frame + 20))
#define local_36 (*(ushort *)(frame + 26))
#define local_34 (*(undefined2 *)(frame + 28))
#define local_26 (*(byte (*)[4])(frame + 42))
#define local_22 (*(undefined1 *)(frame + 46))
#define local_21 (*(undefined1 *)(frame + 47))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x40407e00
 */

uint recovered_40407e00(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  code *pcVar9;
  int *piVar10;
  uint uVar11;
  code *pcVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  int *piVar18;
  bool bVar19;

  piVar8 = (int *)DAT_40500004;
  if (piVar8 != (int *)0x0) {
    iVar4 = *piVar8;
    bVar19 = iVar4 == 0x33454657;
    if (bVar19) {
      iVar4 = piVar8[1];
    }
    if ((bVar19 && iVar4 == 5) && (piVar6 = (int *)piVar8[2], (int *)0x2137 < piVar6)) {
      pcVar9 = (code *)piVar8[0x45];
      if (pcVar9 != (code *)0x0) {
        piVar6 = (int *)piVar8[0x46];
      }
      if (pcVar9 != (code *)0x0 && piVar6 != (int *)0x0) {
        piVar6[1] = 0;
        *piVar6 = 1;
        uVar5 = (*pcVar9)(piVar6);
        uVar5 = uVar5 & 0xffff;
        if (uVar5 != 0) goto LAB_40407e44;
        piVar8 = (int *)DAT_40500004;
        piVar6 = (int *)0x0;
      }
      else {
        iVar4 = 0x1290;
        piVar17 = (int *)0x0;
        while (piVar8 != (int *)0x0) {
          piVar6 = (int *)*piVar8;
          bVar19 = piVar6 != (int *)0x33454657;
          if (!bVar19) {
            piVar6 = (int *)piVar8[1];
          }
          if ((bVar19 || piVar6 != (int *)&DAT_00000005) ||
             (piVar6 = (int *)piVar8[2], piVar6 < &SUB_00002138)) goto LAB_404083dc;
          piVar6 = (int *)piVar8[0x4a2];
          if (piVar6 == (int *)0x0) {
            if (piVar17 != (int *)0x0) goto LAB_404083dc;
            piVar6 = piVar8 + 6;
          }
          else {
            if ((int *)0x7 < piVar6) {
              piVar6 = (int *)&SupervisorCall;
            }
            if (piVar6 <= piVar17) goto LAB_404083dc;
            piVar6 = (int *)((int)piVar8 + iVar4);
          }
          iVar15 = *piVar6;
          if (iVar15 == 0) goto LAB_404083dc;
          piVar6 = (int *)0x0;
          if (*(int *)(iVar15 + 4) != 0) {
            recovered_40401c1c(&local_36,0,4);
            piVar6 = (int *)(**(code **)(iVar15 + 4))(iVar15,&local_36);
            piVar8 = (int *)DAT_40500004;
            if (piVar6 == (int *)0x0) {
              piVar18 = (int *)(uint)local_34;
              uVar11 = (uint)local_36;
              uVar5 = (int)piVar18 - 1;
              if (piVar18 == (int *)0xa) {
                piVar18 = (int *)0xd;
              }
              piVar6 = (int *)0x0;
              if ((uVar5 & 0xffff) < 0x7f) {
                piVar6 = piVar18;
              }
              if ((uVar11 - 0xb & 0xffff) < 0xc) {
                piVar10 = (int *)(uVar11 + 0x30);
              }
              else {
                uVar5 = uVar11 - 1 & 0xffff;
                if ((uVar5 < 0x17) && ((0x4003ffU >> (uVar11 - 1 & 0xff) & 1) != 0)) {
                  piVar10 = (int *)(uint)(byte)(&DAT_404f6d16)[uVar5];
                }
                else {
                  piVar10 = piVar6;
                  switch((uintptr_t)((uint)piVar6 & 0xff)) {
                  case 0:
                    break;
                  default:
                    if (0x19 < ((int)piVar6 - 0x61U & 0xff)) {
                      if (0x19 < ((int)piVar6 - 0x41U & 0xff)) {
                        if (((int)piVar6 - 0x31U & 0xff) < 9) {
                          piVar10 = (int *)((int)piVar6 + -0x2f);
                        }
                        else {
                          piVar10 = (int *)0xb;
                          switch((uintptr_t)((uint)piVar6 & 0xff)) {
                          case 0x22:
                          case 0x27:
                            piVar10 = (int *)0x28;
                            break;
                          default:
                            piVar10 = (int *)0x0;
                            break;
                          case 0x2b:
                          case 0x3d:
                            piVar10 = (int *)0xd;
                            break;
                          case 0x2c:
                          case 0x3c:
                            piVar10 = (int *)0x33;
                            break;
                          case 0x2d:
                          case 0x5f:
                            piVar10 = (int *)&PrefetchAbort;
                            break;
                          case 0x2e:
                          case 0x3e:
                            piVar10 = (int *)0x34;
                            break;
                          case 0x2f:
                          case 0x3f:
                            piVar10 = (int *)&DAT_00000035;
                            break;
                          case 0x30:
                            break;
                          case 0x3a:
                          case 0x3b:
                            piVar10 = (int *)0x27;
                            break;
                          case 0x5b:
                          case 0x7b:
                            piVar10 = (int *)0x1a;
                            break;
                          case 0x5c:
                          case 0x7c:
                            piVar10 = (int *)0x2b;
                            break;
                          case 0x5d:
                          case 0x7d:
                            piVar10 = (int *)0x1b;
                            break;
                          case 0x60:
                          case 0x7e:
                            piVar10 = (int *)&DAT_00000029;
                          }
                        }
                        break;
                      }
                      piVar18 = (int *)((uint)piVar6 | 0x20);
                    }
                    piVar10 = (int *)(uint)*(byte *)(((uint)piVar18 & 0xff) + 0x404f6c9b);
                    break;
                  case 8:
                    piVar10 = (int *)0xe;
                    break;
                  case 9:
                    piVar10 = (int *)0xf;
                    break;
                  case 10:
                  case 0xd:
                    piVar10 = (int *)&FIQ;
                    break;
                  case 0x1b:
                    piVar10 = (int *)0x1;
                    break;
                  case 0x20:
                    piVar10 = (int *)0x39;
                  }
                }
              }
              if ((((uint)piVar10 ^ 1 | (uint)piVar6) & 0xff) == 0) {
                piVar6 = (int *)0x1b;
              }
              if ((((uint)piVar6 | (uint)piVar10) & 0xff) != 0) {
                uVar5 = (uint)piVar6 & 0xff;
                uVar11 = (int)piVar10 << 8;
                piVar6 = (int *)(uVar5 | uVar11);
                if (uVar5 != 0 || (uVar11 & 0xffff) != 0) {
                  uVar5 = uVar5 | uVar11 & 0xffff;
                  goto LAB_40407e44;
                }
              }
            }
          }
          piVar17 = (int *)((int)piVar17 + 1);
          iVar4 = iVar4 + 4;
          if (piVar17 == (int *)&SupervisorCall) goto LAB_404083dc;
        }
        piVar8 = (int *)0x0;
LAB_404083dc:
        piVar17 = (int *)0x0;
        while (piVar8 != (int *)0x0) {
          piVar6 = (int *)*piVar8;
          bVar19 = piVar6 != (int *)0x33454657;
          if (!bVar19) {
            piVar6 = (int *)piVar8[1];
          }
          if ((bVar19 || piVar6 != (int *)&DAT_00000005) ||
             (piVar6 = (int *)piVar8[2], piVar6 < &SUB_00002138)) break;
          piVar6 = (int *)piVar8[0x52a];
          if ((int *)0x7 < piVar6) {
            piVar6 = (int *)&SupervisorCall;
          }
          if (piVar6 <= piVar17) break;
          piVar6 = piVar8 + (int)piVar17;
          iVar4 = piVar6[0x52c];
          if (iVar4 == 0) break;
          piVar18 = (int *)(uint)*(byte *)((int)piVar8 + (int)piVar17 + 0x1518);
          cVar1 = *(char *)((int)piVar8 + (int)piVar17 + 0x1510);
          uVar3 = *(ushort *)((int)piVar8 + (int)piVar17 * 2 + 0x1520);
          local_40 = 0;
          piVar6 = *(int **)(iVar4 + 0xc);
          if (cVar1 != '\0' && *(int **)(iVar4 + 0xc) != (int *)0x0) {
            recovered_40401c1c(&local_36,0,0x10);
            local_3c = (int *)&SupervisorCall;
            if (&SupervisorCall < piVar18) {
              local_3c = piVar18;
            }
            if (((int)piVar18 - 0x11U & 0xff) < 0xf0) {
              local_3c = (int *)&DataAbort;
            }
            piVar6 = (int *)(**(code **)(iVar4 + 0xc))(iVar4,cVar1,&local_36,&local_3c,1,&local_40);
            piVar8 = (int *)DAT_40500004;
            if (((piVar6 == (int *)0x0) && (piVar6 = local_3c, &SupervisorCall <= local_3c)) &&
               (uVar11 = (uint)uVar3 & (uint)(&SupervisorCall < local_3c),
               (int *)(uVar11 | 8) <= local_3c)) {
              bVar2 = auStack_32[uVar11 - 4];
              local_26[0] = auStack_32[uVar11 - 2];
              iVar4 = (int)piVar17 * 6;
              local_26[2] = auStack_32[uVar11];
              local_26[3] = auStack_32[uVar11 + 1];
              local_21 = auStack_32[uVar11 + 3];
              local_26[1] = auStack_32[uVar11 - 1];
              local_22 = auStack_32[uVar11 + 2];
              iVar15 = 0;
              do {
                uVar5 = (uint)local_26[-iVar15];
                if (3 < uVar5) {
                  uVar13 = (uint)(byte)(&DAT_40505b06)[iVar4];
                  bVar19 = uVar13 != uVar5;
                  if (bVar19) {
                    uVar13 = (uint)(byte)(&DAT_40505b07)[iVar4];
                  }
                  if (bVar19 && uVar13 != uVar5) {
                    uVar13 = (uint)(byte)(&DAT_40505b08)[iVar4];
                    bVar19 = uVar13 != uVar5;
                    if (bVar19) {
                      uVar13 = (uint)(byte)(&DAT_40505b09)[iVar4];
                    }
                    if (bVar19 && uVar13 != uVar5) {
                      uVar13 = (uint)(byte)(&DAT_40505b0a)[iVar4];
                      bVar19 = uVar13 != uVar5;
                      if (bVar19) {
                        uVar13 = (uint)(byte)(&DAT_40505b0b)[iVar4];
                      }
                      if (bVar19 && uVar13 != uVar5) {
                        if ((uVar5 - 4 & 0xff) < 0x1a) {
                          iVar15 = 0x41;
                          if ((bVar2 & 0x22) == 0) {
                            iVar15 = 0x61;
                          }
                          uVar14 = (uVar5 - 4) + iVar15;
                          uVar13 = (uint)(byte)(&DAT_404f6cf8)[uVar5];
                        }
                        else {
                          uVar16 = uVar5 - 0x1e & 0xff;
                          if (uVar16 < 10) {
                            iVar15 = 0x404e465d;
                            if ((bVar2 & 0x22) == 0) {
                              iVar15 = 0x404e4652;
                            }
                            uVar13 = uVar5 - 0x1c;
                            uVar14 = (uint)*(byte *)(uVar5 + iVar15 + -0x1e);
                            if (uVar16 == 9) {
                              uVar13 = 0xb;
                            }
                          }
                          else {
                            switch((uintptr_t)(uVar5)) {
                            case 0x28:
                              uVar14 = 0xd;
                              uVar13 = 0x1c;
                              break;
                            case 0x29:
                              uVar14 = 0x1b;
                              uVar13 = 1;
                              break;
                            case 0x2a:
                              uVar14 = 8;
                              uVar13 = 0xe;
                              break;
                            case 0x2b:
                              uVar14 = 9;
                              uVar13 = 0xf;
                              break;
                            case 0x2c:
                              uVar14 = 0x20;
                              uVar13 = 0x39;
                              break;
                            case 0x2d:
                              uVar14 = 0x5f;
                              if ((bVar2 & 0x22) == 0) {
                                uVar14 = 0x2d;
                              }
                              uVar13 = 0xc;
                              break;
                            case 0x2e:
                              uVar14 = 0x2b;
                              if ((bVar2 & 0x22) == 0) {
                                uVar14 = 0x3d;
                              }
                              uVar13 = 0xd;
                              break;
                            case 0x2f:
                              uVar14 = 0x7b;
                              if ((bVar2 & 0x22) == 0) {
                                uVar14 = 0x5b;
                              }
                              uVar13 = 0x1a;
                              break;
                            case 0x30:
                              uVar14 = 0x7d;
                              if ((bVar2 & 0x22) == 0) {
                                uVar14 = 0x5d;
                              }
                              uVar13 = 0x1b;
                              break;
                            case 0x31:
                              uVar14 = 0x7c;
                              if ((bVar2 & 0x22) == 0) {
                                uVar14 = 0x5c;
                              }
                              uVar13 = 0x2b;
                              break;
                            default:
                              goto switchD_4040864c_caseD_32;
                            case 0x33:
                              uVar14 = 0x3a;
                              if ((bVar2 & 0x22) == 0) {
                                uVar14 = 0x3b;
                              }
                              uVar13 = 0x27;
                              break;
                            case 0x34:
                              uVar14 = 0x22;
                              if ((bVar2 & 0x22) == 0) {
                                uVar14 = 0x27;
                              }
                              uVar13 = 0x28;
                              break;
                            case 0x35:
                              uVar14 = 0x7e;
                              if ((bVar2 & 0x22) == 0) {
                                uVar14 = 0x60;
                              }
                              uVar13 = 0x29;
                              break;
                            case 0x36:
                              uVar14 = 0x3c;
                              if ((bVar2 & 0x22) == 0) {
                                uVar14 = 0x2c;
                              }
                              uVar13 = 0x33;
                              break;
                            case 0x37:
                              uVar14 = 0x3e;
                              if ((bVar2 & 0x22) == 0) {
                                uVar14 = 0x2e;
                              }
                              uVar13 = 0x34;
                              break;
                            case 0x38:
                              uVar14 = 0x3f;
                              if ((bVar2 & 0x22) == 0) {
                                uVar14 = 0x2f;
                              }
                              uVar13 = 0x35;
                              break;
                            case 0x3a:
                              uVar14 = 0;
                              uVar13 = 0x3b;
                              break;
                            case 0x3b:
                              uVar14 = 0;
                              uVar13 = 0x3c;
                              break;
                            case 0x3c:
                              uVar14 = 0;
                              uVar13 = 0x3d;
                              break;
                            case 0x3d:
                              uVar14 = 0;
                              uVar13 = 0x3e;
                              break;
                            case 0x3e:
                              uVar14 = 0;
                              uVar13 = 0x3f;
                              break;
                            case 0x3f:
                              uVar14 = 0;
                              uVar13 = 0x40;
                              break;
                            case 0x40:
                              uVar14 = 0;
                              uVar13 = 0x41;
                              break;
                            case 0x41:
                              uVar14 = 0;
                              uVar13 = 0x42;
                              break;
                            case 0x42:
                              uVar14 = 0;
                              uVar13 = 0x43;
                              break;
                            case 0x43:
                              uVar14 = 0;
                              uVar13 = 0x44;
                              break;
                            case 0x44:
                              uVar14 = 0;
                              uVar13 = 0x57;
                              break;
                            case 0x45:
                              uVar14 = 0;
                              uVar13 = 0x58;
                              break;
                            case 0x49:
                              uVar14 = 0;
                              uVar13 = 0x49;
                              break;
                            case 0x4a:
                              uVar14 = 0;
                              uVar13 = 0x47;
                              break;
                            case 0x4b:
                              uVar14 = 0;
                              uVar13 = 0x51;
                              break;
                            case 0x4c:
                              uVar14 = 0;
                              uVar13 = 0x53;
                              break;
                            case 0x4d:
                              uVar14 = 0;
                              uVar13 = 0x4f;
                              break;
                            case 0x4e:
                              uVar14 = 0;
                              uVar13 = 0x52;
                              break;
                            case 0x4f:
                              uVar14 = 0;
                              uVar13 = 0x4d;
                              break;
                            case 0x50:
                              uVar14 = 0;
                              uVar13 = 0x4b;
                              break;
                            case 0x51:
                              uVar14 = 0;
                              uVar13 = 0x50;
                              break;
                            case 0x52:
                              uVar14 = 0;
                              uVar13 = 0x48;
                            }
                          }
                        }
                        uVar5 = uVar14 & 0xff | (uVar13 & 0xff) << 8;
                        if ((bVar2 & 0x22) != 0) {
                          uVar5 = uVar5 | 0x10000;
                        }
                        if ((bVar2 & 0x11) != 0) {
                          uVar5 = uVar5 | 0x20000;
                        }
                        if ((bVar2 & 0x88) != 0) {
                          uVar5 = uVar5 | 0x40000;
                        }
                        goto LAB_4040870c;
                      }
                    }
                  }
                }
switchD_4040864c_caseD_32:
                bVar19 = iVar15 != -5;
                iVar15 = iVar15 + -1;
              } while (bVar19);
              uVar5 = 0;
LAB_4040870c:
              if ((uVar5 == 0) && ((uint)bVar2 != (uint)*(byte *)((int)piVar17 + 0x40505afe))) {
                uVar13 = bVar2 & 0x22;
                if ((bVar2 & 0x22) != 0) {
                  uVar13 = 1;
                }
                uVar5 = uVar13 << 0x10 | 0x20000;
                if ((bVar2 & 0x11) == 0) {
                  uVar5 = uVar13 << 0x10;
                }
                if ((bVar2 & 0x88) != 0) {
                  uVar5 = uVar5 | 0x40000;
                }
                uVar5 = uVar5 | 0x80000000;
              }
              (&DAT_40505b0a)[iVar4] = auStack_32[uVar11 + 2];
              (&DAT_40505b09)[iVar4] = local_26[3];
              *(byte *)((int)piVar17 + 0x40505afe) = bVar2;
              (&DAT_40505b0b)[iVar4] = local_21;
              (&DAT_40505b07)[iVar4] = local_26[1];
              (&DAT_40505b06)[iVar4] = local_26[0];
              (&DAT_40505b08)[iVar4] = local_26[2];
              piVar6 = (int *)0x0;
              if (uVar5 != 0) goto LAB_40407e44;
            }
          }
          piVar17 = (int *)((int)piVar17 + 1);
          if (piVar17 == (int *)&SupervisorCall) break;
        }
      }
      pcVar9 = (code *)piVar8[8];
      if (pcVar9 == (code *)0x0) {
        piVar6 = (int *)piVar8[0x45];
      }
      if (pcVar9 != (code *)0x0 || piVar6 != (int *)0x0) {
        iVar4 = *piVar8;
        bVar19 = iVar4 == 0x33454657;
        if (bVar19) {
          iVar4 = piVar8[1];
        }
        if ((!bVar19 || iVar4 != 5) || ((undefined1 *)piVar8[2] < &SUB_00002138)) {
          recovered_40400030();
          uVar5 = 0;
          goto LAB_40407e44;
        }
        iVar15 = DAT_40505b48;
        iVar4 = DAT_4050428c;
        pcVar12 = (code *)piVar8[0x45];
        puVar7 = (undefined4 *)(iVar4 + (iVar15 + 100U) / 0xd6a1);
        DAT_4050428c = puVar7;
        DAT_40505b48 = (iVar15 + 100U) % 0xd6a1;
        if (pcVar12 != (code *)0x0) {
          puVar7 = (undefined4 *)piVar8[0x46];
        }
        if (pcVar12 != (code *)0x0 && puVar7 != (undefined4 *)0x0) {
          puVar7[1] = 0;
          *puVar7 = 4;
          puVar7[7] = 100;
          (*pcVar12)(puVar7);
          uVar5 = 0;
          goto LAB_40407e44;
        }
        uVar5 = 0;
        if (pcVar9 == (code *)0x0) goto LAB_40407e44;
        (*pcVar9)(100);
      }
      uVar5 = 0;
      goto LAB_40407e44;
    }
  }
  uVar5 = recovered_40400030();
LAB_40407e44:
  return uVar5;
}

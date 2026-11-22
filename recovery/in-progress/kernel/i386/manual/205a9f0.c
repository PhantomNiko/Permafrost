/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020d9d48 (*(uint32_t volatile *)(0x20d9d48U))
#define DAT_020d9d4c (*(uint32_t volatile *)(0x20d9d4cU))
#define DAT_020d9d65 (*(uint8_t volatile *)(0x20d9d65U))
#define DAT_020d9d6a (*(uint8_t volatile *)(0x20d9d6aU))
#define DAT_020d9d6c (*(uint32_t volatile *)(0x20d9d6cU))
#define DAT_020d9d70 (*(uint32_t volatile *)(0x20d9d70U))
#define DAT_020d9f05 (*(uint8_t volatile *)(0x20d9f05U))
#define DAT_020d9ff6 (*(uint8_t volatile *)(0x20d9ff6U))
#define DAT_021483b8 (*(uint8_t volatile *)(0x21483b8U))
#define DAT_0214bc2c (*(uint32_t volatile *)(0x214bc2cU))
#define DAT_0215bc58 (*(uint32_t volatile *)(0x215bc58U))
#define DAT_0215bc5c (*(uint32_t volatile *)(0x215bc5cU))
#define DAT_021e00d0 (*(uint8_t volatile *)(0x21e00d0U))
#define DAT_021e00dc (*(uint8_t volatile *)(0x21e00dcU))
#define DAT_021e00e8 (*(uint8_t volatile *)(0x21e00e8U))
#define DAT_021e00f4 (*(uint8_t volatile *)(0x21e00f4U))
#define DAT_021e0100 (*(uint8_t volatile *)(0x21e0100U))
#define DAT_021e010c (*(uint8_t volatile *)(0x21e010cU))
#define DAT_021e0118 (*(uint8_t volatile *)(0x21e0118U))
#define DAT_021e0124 (*(uint8_t volatile *)(0x21e0124U))
#define DAT_021e0130 (*(uint8_t volatile *)(0x21e0130U))
#define DAT_021e013c (*(uint8_t volatile *)(0x21e013cU))
#define DAT_021e0148 (*(uint8_t volatile *)(0x21e0148U))
#define DAT_021e0154 (*(uint8_t volatile *)(0x21e0154U))
#define DAT_021e0160 (*(uint8_t volatile *)(0x21e0160U))
#define DAT_021e016c (*(uint8_t volatile *)(0x21e016cU))
#define DAT_021e0178 (*(uint8_t volatile *)(0x21e0178U))
#define DAT_021e0184 (*(uint8_t volatile *)(0x21e0184U))
#define DAT_021e0190 (*(uint8_t volatile *)(0x21e0190U))
#define DAT_021e019c (*(uint8_t volatile *)(0x21e019cU))
#define DAT_021e01a8 (*(uint8_t volatile *)(0x21e01a8U))
#define DAT_021e01b4 (*(uint8_t volatile *)(0x21e01b4U))
#define DAT_021e01c0 (*(uint8_t volatile *)(0x21e01c0U))
#define DAT_021e01cc (*(uint8_t volatile *)(0x21e01ccU))
#define DAT_021e01d8 (*(uint8_t volatile *)(0x21e01d8U))
#define DAT_021e01e4 (*(uint8_t volatile *)(0x21e01e4U))
#define DAT_021e01f0 (*(uint8_t volatile *)(0x21e01f0U))
#define DAT_021e01fc (*(uint8_t volatile *)(0x21e01fcU))
#define DAT_021e0208 (*(uint8_t volatile *)(0x21e0208U))
#define DAT_021e0214 (*(uint8_t volatile *)(0x21e0214U))
#define DAT_021e0220 (*(uint8_t volatile *)(0x21e0220U))
#define DAT_021e022c (*(uint8_t volatile *)(0x21e022cU))
#define DAT_021e0238 (*(uint8_t volatile *)(0x21e0238U))
#define DAT_021e0244 (*(uint8_t volatile *)(0x21e0244U))
#define DAT_021e025c (*(uint8_t volatile *)(0x21e025cU))
#define DAT_021ec4dc (*(uint32_t volatile *)(0x21ec4dcU))
#define DAT_021ec4e0 (*(uint32_t volatile *)(0x21ec4e0U))
#define Ram020d9d6a (*(uint16_t volatile *)(0x20d9d6aU))


void recovered_205a9f0(void *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  uint incoming_edx;
  int iVar7;
  int *data;
  char *pcVar8;

  if (in_ECX == (void *)0x0) {
    return;
  }
  if ((*(char *)((int)in_ECX + 4) != '\x01') || (iVar5 = *(int *)((int)in_ECX + 0x10), iVar5 == 0))
  goto LAB_0205ae33;
  iVar7 = 0x10;
  pcVar8 = &DAT_021483b8;
  do {
    if ((*pcVar8 == '\x01') && (*(int *)(pcVar8 + 8) == iVar5)) {
      recovered_2001710(*(void **)(pcVar8 + 0xc));
      recovered_2001e00(pcVar8,0,0x294);
    }
    pcVar8 = pcVar8 + 0x294;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar5 = *(int *)((int)in_ECX + 0x10);
  if (iVar5 == 0) goto LAB_0205ae33;
  while( true ) {
    iVar7 = __atomic_exchange_n(&(DAT_0215bc58),1,__ATOMIC_SEQ_CST);
    if (iVar7 == 0) break;
    do {
      iVar7 = DAT_0215bc58;
    } while (iVar7 != 0);
  }
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  piVar1 = (int *)DAT_0215bc5c;
  while (data = piVar1, data != (int *)0x0) {
    piVar1 = (int *)data[1];
    if ((data[2] == iVar5) && (data[3] == 0x574d414c)) {
      if (*data == 0) {
        piVar3 = (int *)DAT_0215bc5c;
        if (piVar3 == data) {
          puVar6 = &DAT_0215bc5c;
          goto LAB_0205aaf0;
        }
      }
      else {
        puVar6 = (undefined4 *)(*data + 4);
LAB_0205aaf0:
        *puVar6 = piVar1;
      }
      if (piVar1 != (int *)0x0) {
        *piVar1 = *data;
      }
      *data = 0;
      data[1] = 0;
      data[3] = 0;
      recovered_2001710(data);
    }
  }
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  DAT_0215bc58 = 0;
  iVar5 = *(int *)((int)in_ECX + 0x10);
  if (iVar5 == 0) goto LAB_0205ae33;
  uVar2 = *(undefined4 *)((int)in_ECX + 0x14);
  iVar7 = -0xc280;
  do {
    if ((*(char *)((int)&DAT_021ec4dc + iVar7) == '\x01') &&
       (*(int *)((int)&DAT_021ec4e0 + iVar7) == iVar5)) {
      iVar7 = 0x20;
      pcVar8 = &DAT_021e00d0;
      goto LAB_0205ab76;
    }
    iVar7 = iVar7 + 0x614;
  } while (iVar7 != 0);
  goto LAB_0205ada6;
  while( true ) {
    pcVar8 = pcVar8 + 0xc;
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) break;
LAB_0205ab76:
    if ((*pcVar8 == '\x01') && (*(int *)(pcVar8 + 4) == iVar5)) goto LAB_0205ada3;
  }
  pcVar8 = &DAT_021e00d0;
  cVar4 = DAT_021e00d0;
  if (cVar4 == '\x01') {
    pcVar8 = &DAT_021e00dc;
    cVar4 = DAT_021e00dc;
    if (cVar4 == '\x01') {
      pcVar8 = &DAT_021e00e8;
      cVar4 = DAT_021e00e8;
      if (cVar4 == '\x01') {
        pcVar8 = &DAT_021e00f4;
        cVar4 = DAT_021e00f4;
        if (cVar4 == '\x01') {
          pcVar8 = &DAT_021e0100;
          cVar4 = DAT_021e0100;
          if (cVar4 == '\x01') {
            pcVar8 = &DAT_021e010c;
            cVar4 = DAT_021e010c;
            if (cVar4 == '\x01') {
              pcVar8 = &DAT_021e0118;
              cVar4 = DAT_021e0118;
              if (cVar4 == '\x01') {
                pcVar8 = &DAT_021e0124;
                cVar4 = DAT_021e0124;
                if (cVar4 == '\x01') {
                  pcVar8 = &DAT_021e0130;
                  cVar4 = DAT_021e0130;
                  if (cVar4 == '\x01') {
                    pcVar8 = &DAT_021e013c;
                    cVar4 = DAT_021e013c;
                    if (cVar4 == '\x01') {
                      pcVar8 = &DAT_021e0148;
                      cVar4 = DAT_021e0148;
                      if (cVar4 == '\x01') {
                        pcVar8 = &DAT_021e0154;
                        cVar4 = DAT_021e0154;
                        if (cVar4 == '\x01') {
                          pcVar8 = &DAT_021e0160;
                          cVar4 = DAT_021e0160;
                          if (cVar4 == '\x01') {
                            pcVar8 = &DAT_021e016c;
                            cVar4 = DAT_021e016c;
                            if (cVar4 == '\x01') {
                              pcVar8 = &DAT_021e0178;
                              cVar4 = DAT_021e0178;
                              if (cVar4 == '\x01') {
                                pcVar8 = &DAT_021e0184;
                                cVar4 = DAT_021e0184;
                                if (cVar4 == '\x01') {
                                  pcVar8 = &DAT_021e0190;
                                  cVar4 = DAT_021e0190;
                                  if (cVar4 == '\x01') {
                                    pcVar8 = &DAT_021e019c;
                                    cVar4 = DAT_021e019c;
                                    if (cVar4 == '\x01') {
                                      pcVar8 = &DAT_021e01a8;
                                      cVar4 = DAT_021e01a8;
                                      if (cVar4 == '\x01') {
                                        pcVar8 = &DAT_021e01b4;
                                        cVar4 = DAT_021e01b4;
                                        if (cVar4 == '\x01') {
                                          pcVar8 = &DAT_021e01c0;
                                          cVar4 = DAT_021e01c0;
                                          if (cVar4 == '\x01') {
                                            pcVar8 = &DAT_021e01cc;
                                            cVar4 = DAT_021e01cc;
                                            if (cVar4 == '\x01') {
                                              pcVar8 = &DAT_021e01d8;
                                              cVar4 = DAT_021e01d8;
                                              if (cVar4 == '\x01') {
                                                pcVar8 = &DAT_021e01e4;
                                                cVar4 = DAT_021e01e4;
                                                if (cVar4 == '\x01') {
                                                  pcVar8 = &DAT_021e01f0;
                                                  cVar4 = DAT_021e01f0;
                                                  if (cVar4 == '\x01') {
                                                    pcVar8 = &DAT_021e01fc;
                                                    cVar4 = DAT_021e01fc;
                                                    if (cVar4 == '\x01') {
                                                      pcVar8 = &DAT_021e0208;
                                                      cVar4 = DAT_021e0208;
                                                      if (cVar4 == '\x01') {
                                                        pcVar8 = &DAT_021e0214;
                                                        cVar4 = DAT_021e0214;
                                                        if (cVar4 == '\x01') {
                                                          pcVar8 = &DAT_021e0220;
                                                          cVar4 = DAT_021e0220;
                                                          if (cVar4 == '\x01') {
                                                            pcVar8 = &DAT_021e022c;
                                                            cVar4 = DAT_021e022c;
                                                            if (cVar4 == '\x01') {
                                                              pcVar8 = &DAT_021e0238;
                                                              cVar4 = DAT_021e0238;
                                                              if (cVar4 == '\x01') {
                                                                pcVar8 = &DAT_021e0244;
                                                                cVar4 = DAT_021e0244;
                                                                if (cVar4 != '\0')
                                                                goto LAB_0205ada6;
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
  *pcVar8 = '\x01';
  *(int *)(pcVar8 + 4) = iVar5;
LAB_0205ada3:
  *(undefined4 *)(pcVar8 + 8) = uVar2;
LAB_0205ada6:
  iVar7 = 0x20;
  pcVar8 = &DAT_021e025c;
  do {
    if ((*pcVar8 == '\x01') && (*(int *)(pcVar8 + 4) == iVar5)) {
      recovered_2001e00(pcVar8,0,0x614);
      break;
    }
    pcVar8 = pcVar8 + 0x614;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = DAT_020d9d48;
  if (iVar7 == iVar5) {
    DAT_020d9d48 = 0;
    DAT_020d9d65 = 0;
    DAT_020d9d4c = 0;
    DAT_020d9d6c = 0;
    Ram020d9d6a = 0;
    DAT_020d9d70 = 0;
    DAT_020d9f05 = 0;
    DAT_020d9ff6 = 0;
  }
LAB_0205ae33:
  if ((*(int *)((int)in_ECX + 0x10) != 0) &&
     (iVar5 = DAT_0214bc2c, iVar5 == *(int *)((int)in_ECX + 0x10))) {
    DAT_0214bc2c = 0;
  }
  pcVar8 = *(char **)((int)in_ECX + 0x74);
  while( true ) {
    iVar5 = __atomic_exchange_n(&(DAT_0215bc58),1,__ATOMIC_SEQ_CST);
    if (iVar5 == 0) break;
    do {
      iVar5 = DAT_0215bc58;
    } while (iVar5 != 0);
  }
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  recovered_2001710(*(void **)((int)in_ECX + 100));
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  DAT_0215bc58 = 0;
  recovered_2001e00(in_ECX,0,0xb8);
  if (((pcVar8 == (char *)0x0) || (*pcVar8 != '\x01')) ||
     ((*(int *)(pcVar8 + 0x20) != 0 &&
      (iVar5 = *(int *)(pcVar8 + 0x20) + -1, *(int *)(pcVar8 + 0x20) = iVar5, iVar5 != 0)))) {
    return;
  }
  recovered_2058e30(pcVar8,incoming_edx);
  return;
}
#undef DAT_020d9d48
#undef DAT_020d9d4c
#undef DAT_020d9d65
#undef DAT_020d9d6a
#undef DAT_020d9d6c
#undef DAT_020d9d70
#undef DAT_020d9f05
#undef DAT_020d9ff6
#undef DAT_021483b8
#undef DAT_0214bc2c
#undef DAT_0215bc58
#undef DAT_0215bc5c
#undef DAT_021e00d0
#undef DAT_021e00dc
#undef DAT_021e00e8
#undef DAT_021e00f4
#undef DAT_021e0100
#undef DAT_021e010c
#undef DAT_021e0118
#undef DAT_021e0124
#undef DAT_021e0130
#undef DAT_021e013c
#undef DAT_021e0148
#undef DAT_021e0154
#undef DAT_021e0160
#undef DAT_021e016c
#undef DAT_021e0178
#undef DAT_021e0184
#undef DAT_021e0190
#undef DAT_021e019c
#undef DAT_021e01a8
#undef DAT_021e01b4
#undef DAT_021e01c0
#undef DAT_021e01cc
#undef DAT_021e01d8
#undef DAT_021e01e4
#undef DAT_021e01f0
#undef DAT_021e01fc
#undef DAT_021e0208
#undef DAT_021e0214
#undef DAT_021e0220
#undef DAT_021e022c
#undef DAT_021e0238
#undef DAT_021e0244
#undef DAT_021e025c
#undef DAT_021ec4dc
#undef DAT_021ec4e0
#undef Ram020d9d6a

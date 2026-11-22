/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define DAT_02091012 (*(uint8_t *)(0x20ce5e8U))
#define buffer (*(void * *)(frame + 20))
#define local_14 (*(void * *)(frame + 76))
#define local_18 (*(uint *)(frame + 72))
#define local_1c (*(int *)(frame + 68))
#define local_20 (*(char * *)(frame + 64))
#define local_24 (*(undefined2 * *)(frame + 60))
#define local_28 (*(undefined4 *)(frame + 56))
#define local_29 (*(undefined1 *)(frame + 55))
#define local_2a (*(undefined1 *)(frame + 54))
#define local_2b (*(undefined1 *)(frame + 53))
#define local_2c (*(undefined1 *)(frame + 52))
#define local_30 (*(ulong *)(frame + 48))
#define local_34 (*(int *)(frame + 44))
#define local_38 (*(uint *)(frame + 40))
#define local_3c (*(ulong *)(frame + 36))
undefined4 recovered_20bec40(undefined2 *incoming_ecx,int incoming_edx)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint extraout_EDX_01 = 0;
  uint extraout_EDX_02 = 0;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined2 *puVar10;
  uint size;
  bool bVar11;

  if (incoming_edx == 0 || incoming_ecx == (undefined2 *)0x0) {
    return 0;
  }
  pvVar2 = recovered_2001860((void *)0x0,0x20);
  if (pvVar2 == (void *)0x0) {
    buffer = (void *)0x0;
    goto LAB_02088883;
  }
  local_18 = 0x20;
  local_14 = pvVar2;
  recovered_2001b70(pvVar2,&DAT_02091012,4);
  buffer = local_14;
  local_1c = 4;
  *(undefined1 *)((int)pvVar2 + 4) = 0;
  local_24 = incoming_ecx;
  if (*(int *)(incoming_ecx + 0x10) == 0) {
    local_30 = CONCAT22(PF_PART2(local_30, 2),*incoming_ecx);
    if (local_18 < 7) {
      uVar8 = 0x20;
      if (local_18 != 0) {
        uVar8 = local_18;
      }
      uVar7 = local_18;
      if (uVar8 < 7) {
        do {
          uVar8 = uVar7 * 2;
          bVar11 = uVar7 < 4;
          uVar7 = uVar8;
        } while (bVar11);
      }
      pvVar2 = recovered_2001860(local_14,uVar8);
      if (pvVar2 == (void *)0x0) goto LAB_0208887d;
      local_18 = uVar8;
      local_14 = pvVar2;
    }
    recovered_2001b70((void *)((int)local_14 + 4),&local_30,2);
    *(undefined1 *)((int)local_14 + local_1c + 2) = 0;
    local_30 = *(ulong *)(incoming_ecx + 2);
    uVar8 = local_1c + 7;
    if (local_18 < uVar8) {
      uVar7 = 0x20;
      if (local_18 != 0) {
        uVar7 = local_18;
      }
      for (; uVar7 < uVar8; uVar7 = uVar7 * 2) {
        if ((int)uVar7 < 0) {
          uVar7 = uVar8;
          break;
        }
      }
      local_1c = local_1c + 2;
      pvVar2 = recovered_2001860(local_14,uVar7);
      if (pvVar2 == (void *)0x0) goto LAB_0208887d;
      local_18 = uVar7;
      local_14 = pvVar2;
    }
    else {
      local_1c = local_1c + 2;
    }
    recovered_2001b70((void *)((int)local_14 + local_1c),&local_30,4);
    *(undefined1 *)((int)local_14 + local_1c + 4) = 0;
    local_30 = *(ulong *)(incoming_ecx + 8);
    uVar8 = local_1c + 9;
    if (local_18 < uVar8) {
      uVar7 = 0x20;
      if (local_18 != 0) {
        uVar7 = local_18;
      }
      for (; uVar7 < uVar8; uVar7 = uVar7 * 2) {
        if ((int)uVar7 < 0) {
          uVar7 = uVar8;
          break;
        }
      }
      local_34 = incoming_edx;
      local_1c = local_1c + 4;
      pvVar2 = recovered_2001860(local_14,uVar7);
      if (pvVar2 == (void *)0x0) goto LAB_0208887d;
      local_18 = uVar7;
      local_14 = pvVar2;
    }
    else {
      local_34 = incoming_edx;
      local_1c = local_1c + 4;
    }
    recovered_2001b70((void *)((int)local_14 + local_1c),&local_30,4);
    iVar5 = local_1c + 4;
    *(undefined1 *)((int)local_14 + local_1c + 4) = 0;
    local_1c = iVar5;
    if (*(int *)(incoming_ecx + 2) != 0) {
      uVar8 = 0;
      do {
        pcVar6 = *(char **)(*(int *)(incoming_ecx + 6) + uVar8 * 4);
        local_20 = &DAT_0208e2dc;
        if (pcVar6 != (char *)0x0) {
          local_20 = pcVar6;
        }
        uVar3 = recovered_2002270(local_20);
        uVar7 = local_1c + 5;
        local_30 = uVar3;
        if (local_18 < uVar7) {
          uVar9 = 0x20;
          if (local_18 != 0) {
            uVar9 = local_18;
          }
          for (; uVar9 < uVar7; uVar9 = uVar9 * 2) {
            if ((int)uVar9 < 0) {
              uVar9 = uVar7;
              break;
            }
          }
          pvVar2 = recovered_2001860(local_14,uVar9);
          if (pvVar2 == (void *)0x0) goto LAB_0208887d;
          incoming_ecx = local_24;
          local_18 = uVar9;
          local_14 = pvVar2;
        }
        recovered_2001b70((void *)((int)local_14 + local_1c),&local_30,4);
        iVar5 = local_1c + 4;
        *(undefined1 *)((int)local_14 + local_1c + 4) = 0;
        uVar7 = uVar3 + 1 + iVar5;
        local_1c = iVar5;
        uVar9 = local_18;
        pvVar2 = local_14;
        if (local_18 < uVar7) {
          uVar9 = 0x20;
          if (local_18 != 0) {
            uVar9 = local_18;
          }
          for (; uVar9 < uVar7; uVar9 = uVar9 * 2) {
            if ((int)uVar9 < 0) {
              uVar9 = uVar7;
              break;
            }
          }
          pvVar2 = recovered_2001860(local_14,uVar9);
          incoming_ecx = local_24;
          if (pvVar2 == (void *)0x0) goto LAB_0208887d;
        }
        local_14 = pvVar2;
        local_18 = uVar9;
        if (uVar3 != 0) {
          recovered_2001b70((void *)((int)local_14 + local_1c),local_20,uVar3);
        }
        local_1c = local_1c + uVar3;
        *(undefined1 *)((int)local_14 + local_1c) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(incoming_ecx + 2));
    }
    iVar5 = local_34;
    if (*(int *)(incoming_ecx + 8) != 0) {
      uVar8 = 0;
      do {
        iVar1 = *(int *)(incoming_ecx + 0xc);
        local_30 = (ulong)*(byte *)(iVar1 + uVar8 * 0xc);
        local_2c = *(undefined1 *)(iVar1 + 4 + uVar8 * 0xc);
        local_2b = *(undefined1 *)(iVar1 + 5 + uVar8 * 0xc);
        local_2a = *(undefined1 *)(iVar1 + 6 + uVar8 * 0xc);
        local_29 = *(undefined1 *)(iVar1 + 7 + uVar8 * 0xc);
        local_28 = CONCAT13(*(undefined1 *)(iVar1 + 0xb + uVar8 * 0xc),
                            CONCAT12(*(undefined1 *)(iVar1 + 10 + uVar8 * 0xc),
                                     CONCAT11(*(undefined1 *)(iVar1 + 9 + uVar8 * 0xc),
                                              *(undefined1 *)(iVar1 + 8 + uVar8 * 0xc))));
        uVar7 = local_1c + 0xd;
        if (local_18 < uVar7) {
          uVar9 = 0x20;
          if (local_18 != 0) {
            uVar9 = local_18;
          }
          for (; uVar9 < uVar7; uVar9 = uVar9 * 2) {
            if ((int)uVar9 < 0) {
              uVar9 = uVar7;
              break;
            }
          }
          pvVar2 = recovered_2001860(local_14,uVar9);
          if (pvVar2 == (void *)0x0) goto LAB_0208887d;
          incoming_ecx = local_24;
          local_18 = uVar9;
          local_14 = pvVar2;
        }
        recovered_2001b70((void *)((int)local_14 + local_1c),&local_30,0xc);
        iVar1 = local_1c + 0xc;
        *(undefined1 *)((int)local_14 + local_1c + 0xc) = 0;
        uVar8 = uVar8 + 1;
        local_1c = iVar1;
      } while (uVar8 < *(uint *)(incoming_ecx + 8));
    }
    goto LAB_02088861;
  }
  local_30 = CONCAT22(PF_PART2(local_30, 2),6);
  if (local_18 < 7) {
    uVar8 = 0x20;
    if (local_18 != 0) {
      uVar8 = local_18;
    }
    uVar7 = local_18;
    if (uVar8 < 7) {
      do {
        uVar8 = uVar7 * 2;
        bVar11 = uVar7 < 4;
        uVar7 = uVar8;
      } while (bVar11);
    }
    pvVar2 = recovered_2001860(local_14,uVar8);
    if (pvVar2 == (void *)0x0) goto LAB_02088883;
    local_18 = uVar8;
    local_14 = pvVar2;
  }
  recovered_2001b70((void *)((int)local_14 + 4),&local_30,2);
  *(undefined1 *)((int)local_14 + local_1c + 2) = 0;
  local_20 = &DAT_0208e2dc;
  pcVar6 = &DAT_0208e2dc;
  if (*(char **)(local_24 + 0x14) != (char *)0x0) {
    pcVar6 = *(char **)(local_24 + 0x14);
  }
  if (*(char **)(local_24 + 0x16) != (char *)0x0) {
    local_20 = *(char **)(local_24 + 0x16);
  }
  local_34 = incoming_edx;
  local_1c = local_1c + 2;
  local_30 = recovered_2002270(pcVar6);
  uVar8 = local_1c + 5;
  if (local_18 < uVar8) {
    uVar7 = 0x20;
    if (local_18 != 0) {
      uVar7 = local_18;
    }
    for (; uVar7 < uVar8; uVar7 = uVar7 * 2) {
      if ((int)uVar7 < 0) {
        uVar7 = uVar8;
        break;
      }
    }
    pvVar2 = recovered_2001860(local_14,uVar7);
    if (pvVar2 != (void *)0x0) {
      local_18 = uVar7;
      local_14 = pvVar2;
      goto LAB_02088215;
    }
  }
  else {
LAB_02088215:
    recovered_2001b70((void *)((int)local_14 + local_1c),&local_30,4);
    *(undefined1 *)((int)local_14 + local_1c + 4) = 0;
    local_1c = local_1c + 4;
    uVar3 = recovered_2002270(pcVar6);
    uVar8 = uVar3 + 1 + local_1c;
    uVar7 = local_18;
    pvVar2 = local_14;
    if (local_18 < uVar8) {
      uVar7 = 0x20;
      if (local_18 != 0) {
        uVar7 = local_18;
      }
      for (; uVar7 < uVar8; uVar7 = uVar7 * 2) {
        if ((int)uVar7 < 0) {
          uVar7 = uVar8;
          break;
        }
      }
      pvVar2 = recovered_2001860(local_14,uVar7);
      if (pvVar2 == (void *)0x0) goto LAB_0208887d;
    }
    local_14 = pvVar2;
    local_18 = uVar7;
    if (uVar3 != 0) {
      recovered_2001b70((void *)((int)local_14 + local_1c),pcVar6,uVar3);
    }
    local_1c = local_1c + uVar3;
    *(undefined1 *)((int)local_14 + local_1c) = 0;
    uVar3 = recovered_2002270(local_20);
    uVar4 = recovered_20bf8f0(&local_1c,uVar3);
    if ((((char)uVar4 != '\0') &&
        (uVar4 = recovered_2086400(&local_1c,local_20), (char)uVar4 != '\0')) &&
       (uVar4 = recovered_20bf8f0(&local_1c,*(uint *)(local_24 + 0x10)), (char)uVar4 != '\0')) {
      if (*(int *)(local_24 + 0x10) != 0) {
        uVar8 = 0;
        puVar10 = local_24;
        do {
          pcVar6 = *(char **)(*(int *)(puVar10 + 0xe) + uVar8 * 4);
          local_20 = &DAT_0208e2dc;
          if (pcVar6 != (char *)0x0) {
            local_20 = pcVar6;
          }
          uVar3 = recovered_2002270(local_20);
          uVar4 = recovered_20bf8f0(&local_1c,uVar3);
          if (((char)uVar4 == '\0') ||
             (uVar4 = recovered_20864b0(&local_1c,local_20,uVar3), (char)uVar4 == '\0'))
          goto LAB_0208887d;
          uVar4 = recovered_20bf8f0(&local_1c,uVar8 + 1);
          if (((char)uVar4 == '\0') ||
             (uVar4 = recovered_207a500(local_20,&local_30), (char)uVar4 == '\0'))
          goto LAB_0208887d;
          local_38 = uVar8 + 1;
          uVar4 = recovered_20bf8f0(&local_1c,local_30);
          uVar8 = extraout_EDX;
          if ((char)uVar4 == '\0') {
LAB_02088875:
            recovered_207a960(&local_30,uVar8);
            goto LAB_0208887d;
          }
          puVar10 = local_24;
          if (local_30 != 0) {
            uVar7 = 0;
            do {
              pcVar6 = *(char **)(local_28 + uVar7 * 4);
              local_20 = &DAT_0208e2dc;
              if (pcVar6 != (char *)0x0) {
                local_20 = pcVar6;
              }
              uVar3 = recovered_2002270(local_20);
              uVar8 = local_1c + 5;
              local_3c = uVar3;
              if (local_18 < uVar8) {
                uVar9 = 0x20;
                if (local_18 != 0) {
                  uVar9 = local_18;
                }
                for (; uVar9 < uVar8; uVar9 = uVar9 * 2) {
                  if ((int)uVar9 < 0) {
                    uVar9 = uVar8;
                    break;
                  }
                }
                pvVar2 = recovered_2001860(local_14,uVar9);
                uVar8 = extraout_EDX_01;
                if (pvVar2 == (void *)0x0) goto LAB_02088875;
                puVar10 = local_24;
                local_18 = uVar9;
                local_14 = pvVar2;
              }
              recovered_2001b70((void *)((int)local_14 + local_1c),&local_3c,4);
              iVar5 = local_1c + 4;
              *(undefined1 *)((int)local_14 + local_1c + 4) = 0;
              uVar9 = uVar3 + 1 + iVar5;
              local_1c = iVar5;
              uVar8 = local_18;
              size = local_18;
              pvVar2 = local_14;
              if (local_18 < uVar9) {
                size = 0x20;
                if (local_18 != 0) {
                  size = local_18;
                }
                for (; size < uVar9; size = size * 2) {
                  if ((int)size < 0) {
                    size = uVar9;
                    break;
                  }
                }
                pvVar2 = recovered_2001860(local_14,size);
                uVar8 = extraout_EDX_02;
                puVar10 = local_24;
                if (pvVar2 == (void *)0x0) goto LAB_02088875;
              }
              local_14 = pvVar2;
              local_18 = size;
              if (uVar3 != 0) {
                recovered_2001b70((void *)((int)local_14 + local_1c),local_20,uVar3);
                uVar8 = extraout_EDX_00;
              }
              local_1c = local_1c + uVar3;
              *(undefined1 *)((int)local_14 + local_1c) = 0;
              uVar7 = uVar7 + 1;
            } while (uVar7 < local_30);
          }
          recovered_207a960(&local_30,uVar8);
          uVar8 = local_38;
        } while (local_38 < *(uint *)(puVar10 + 0x10));
      }
      iVar5 = local_34;
LAB_02088861:
      uVar4 = recovered_2028050(iVar5,local_14,local_1c);
      recovered_2001710(local_14);
      return uVar4;
    }
  }
LAB_0208887d:
  buffer = local_14;
LAB_02088883:
  recovered_2001710(buffer);
  return 0;
}

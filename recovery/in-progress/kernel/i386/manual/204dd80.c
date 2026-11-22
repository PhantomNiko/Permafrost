/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_00000004 (*(uint8_t *)(0x4U))
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#define DAT_02130728 (*(uint32_t volatile *)(0x2130728U))
#define DAT_0213073c (*(uint8_t volatile *)(0x213073cU))
#define DAT_02130740 (*(uint32_t volatile *)(0x2130740U))
#define DAT_02130744 (*(uint32_t volatile *)(0x2130744U))
#define DAT_02130748 (*(uint32_t volatile *)(0x2130748U))
#define DAT_0213074c (*(uint32_t volatile *)(0x213074cU))
#define DAT_02130758 (*(uint32_t volatile *)(0x2130758U))
#define DAT_0213075c (*(uint32_t volatile *)(0x213075cU))
#define DAT_02130790 (*(uint32_t volatile *)(0x2130790U))
#define DAT_02130794 (*(uint32_t volatile *)(0x2130794U))
#define DAT_02130798 (*(uint32_t volatile *)(0x2130798U))
#define DAT_0213079c (*(uint32_t volatile *)(0x213079cU))
#define DAT_021307a0 (*(uint32_t volatile *)(0x21307a0U))
#define DAT_021307a4 (*(uint32_t volatile *)(0x21307a4U))
#define DAT_021307a8 (*(uint32_t volatile *)(0x21307a8U))
#define DAT_021307ac (*(uint32_t volatile *)(0x21307acU))
#define DAT_021307b0 (*(uint32_t volatile *)(0x21307b0U))
#define DAT_021307dc (*(uint8_t volatile *)(0x21307dcU))
#define local_14 (*(byte * *)(frame + 332))
#define local_149 (*(undefined1 *)(frame + 23))
#define local_148 (*(undefined4 *)(frame + 24))
#define local_57 (*(undefined2 (*)[5])(frame + 265))
#define local_4c (*(uint *)(frame + 276))
#define local_48 (*(int *)(frame + 280))
#define local_44 (*(void * *)(frame + 284))
#define local_40 (*(byte * *)(frame + 288))
#define local_3c (*(int *)(frame + 292))
#define local_38 (*(void * *)(frame + 296))
#define local_34 (*(uint * *)(frame + 300))
#define local_30 (*(uint * *)(frame + 304))
#define local_2c (*(byte * *)(frame + 308))
#define local_28 (*(uint * *)(frame + 312))
#define local_24 (*(uint * *)(frame + 316))
#define local_20 (*(void * *)(frame + 320))
#define local_1c (*(uint * *)(frame + 324))
#define local_18 (*(byte * *)(frame + 328))


byte * recovered_204dd80(int in_ECX)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  uchar *puVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uchar uVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  uchar uVar12;
  uint *puVar13;
  uint uVar14;
  char cVar15;
  void *pvVar16;
  uint *puVar17;
  uchar *puVar18;
  uchar *puVar19;
  void *pvVar20;
  int iVar21;
  uint *puVar22;
  byte *pbVar23;
  void *pvVar24;
  void *pvVar25;
  undefined1 *puVar26;
  bool bVar27;
  bool bVar28;

  local_28 = (uint *)0x0;
  local_34 = (uint *)0x0;
  cVar15 = DAT_021307dc;
  if (cVar15 != '\x01') {
    return (byte *)0x0;
  }
  iVar21 = DAT_0213075c;
  if (2 < iVar21 - 3U) {
    return (byte *)0x0;
  }
  bVar3 = PF_PART1(DAT_02130758, 0);
  if ((bVar3 & 1) != 0) {
    return (byte *)0x0;
  }
  iVar21 = DAT_02130740;
  if (iVar21 != 0x200) {
    return (byte *)0x0;
  }
  iVar21 = DAT_02130744;
  if (iVar21 == 0) {
    return (byte *)0x0;
  }
  iVar21 = DAT_02130748;
  if (iVar21 == 0) {
    return (byte *)0x0;
  }
  iVar21 = DAT_02130794;
  if (iVar21 == 0) {
    return (byte *)0x0;
  }
  iVar21 = DAT_02130798;
  if (iVar21 == 0) {
    return (byte *)0x0;
  }
  iVar5 = DAT_021307a4;
  if (iVar5 == 0) {
    return (byte *)0x0;
  }
  uVar9 = DAT_021307a8;
  if (uVar9 < (uint)(iVar21 * 0x200)) {
    return (byte *)0x0;
  }
  iVar21 = DAT_021307ac;
  if (iVar21 == 0) {
    return (byte *)0x0;
  }
  iVar21 = DAT_021307b0;
  if (iVar21 == 0) {
    return (byte *)0x0;
  }
  uVar9 = recovered_2051190((uint *)&local_28,(uint *)&local_34);
  if (((char)uVar9 == '\0') ||
     (uVar9 = recovered_20514b0((int)local_28,(uint)local_34), (char)uVar9 == '\0')) {
LAB_0204e867:
    local_14 = (byte *)0x0;
    goto LAB_0204e86e;
  }
  if (local_34 != (uint *)0x0) {
    local_48 = in_ECX;
    puVar13 = (uint *)0x0;
    puVar17 = local_28;
    do {
      local_30 = (uint *)((int)puVar13 * 0x20c);
      local_1c = puVar13;
      if ((uchar)(puVar17 + 0x82)[(int)puVar13 * 0x83] == '\x01') {
        uVar9 = (uint)(puVar13 != (uint *)0x0) * 2 + 1;
        if ((uint *)0x1 < local_34) {
          pbVar23 = (byte *)((int)local_34 + -1);
          puVar19 = (uchar *)((int)puVar17 + 0x415);
          do {
            if (*(uint **)(puVar19 + -0x209) == puVar13) {
              local_18 = pbVar23;
              iVar21 = 1;
              if (*puVar19 == '\x01') {
                uVar10 = recovered_2002270((char *)(puVar19 + -0x201));
                puVar13 = local_1c;
                if (uVar10 != 0) {
                  iVar21 = (uVar10 + 0xc) / 0xd + 1;
                }
              }
              uVar9 = uVar9 + iVar21;
              pbVar23 = local_18;
            }
            puVar19 = puVar19 + 0x20c;
            pbVar23 = pbVar23 + -1;
          } while (pbVar23 != (byte *)0x0);
          puVar17 = local_28;
        }
      }
      else {
        uVar9 = 0;
      }
      *(uint *)((int)(puVar17 + 0x81) + (int)local_30) = uVar9;
      if (*(uchar *)((int)(puVar17 + 0x82) + (int)local_30) == '\x01') {
        puVar19 = (uchar *)((int)puVar17 + (int)local_30);
        if (puVar13 == (uint *)0x0) {
          pvVar24 = (void *)DAT_021307a0;
          local_24 = (uint *)0x5;
          iVar21 = DAT_0213075c;
          if (iVar21 == 5) goto LAB_0204dfc0;
          puVar19[0x1f8] = '\0';
          puVar19[0x1f9] = '\0';
          puVar19[0x1fa] = '\0';
          puVar19[0x1fb] = '\0';
          puVar19[0x1fc] = '\0';
          puVar19[0x1fd] = '\0';
          puVar19[0x1fe] = '\0';
          puVar19[0x1ff] = '\0';
          uVar2 = DAT_0213079c;
          if (uVar2 < uVar9) goto LAB_0204e867;
        }
        else {
          uVar2 = *(uint *)(puVar19 + 4);
          pvVar24 = (void *)0x0;
          if ((uVar2 != 0xffffffff) && (uVar14 = DAT_02130728, uVar2 < uVar14)) {
            iVar21 = DAT_02130724;
            pvVar24 = *(void **)(iVar21 + 0x104 + uVar2 * 0x110);
          }
          local_24 = (uint *)DAT_0213075c;
LAB_0204dfc0:
          uVar2 = DAT_02130748;
          uVar9 = (uVar2 - 1) + uVar9 * 0x20;
          local_18 = (byte *)0x1;
          if (uVar2 <= uVar9) {
            local_18 = (byte *)(uVar9 / uVar2);
          }
          local_20 = pvVar24;
          if (local_1c == (uint *)0x0) {
            pbVar23 = (byte *)DAT_021307a0;
            local_14 = (byte *)0x0;
            if (pbVar23 < (byte *)0x2) goto LAB_0204e86e;
            pvVar24 = (void *)DAT_021307ac;
            local_2c = (byte *)((int)pvVar24 + 2);
            if (local_2c <= pbVar23) goto LAB_0204e86e;
LAB_0204e063:
            pbVar11 = (byte *)recovered_20519d0((uint)pbVar23);
            uVar9 = (int)local_18 - (int)pbVar11;
            if (pbVar11 <= local_18 && uVar9 != 0) {
              if (pbVar11 != (byte *)0x0) {
                local_148 = 0;
                bVar3 = DAT_021307dc;
                local_4c = uVar9;
                if (((uchar *)((int)local_24 + -3) < (uchar *)0x3 & bVar3) == 1) {
                  iVar6 = DAT_02130798;
                  local_14 = (byte *)DAT_02130740;
                  uVar2 = DAT_02130758;
                  iVar21 = DAT_02130744;
                  iVar5 = DAT_02130794;
                  local_3c = DAT_021307a4;
                  if ((local_3c != 0 && iVar6 != 0) &&
                      ((iVar5 != 0 && iVar21 != 0) &&
                      (local_14 == (byte *)0x200 && (uVar2 & 1) == 0))) {
                    uVar2 = DAT_021307a8;
                    if ((uint)((int)local_14 * iVar6) <= uVar2) {
                      if (pvVar24 != (void *)0x0) {
                        iVar21 = DAT_021307b0;
                        if (iVar21 != 0) {
                          pvVar16 = (void *)0x1;
                          local_14 = pbVar23;
                          while( true ) {
                            if (local_24 == (uint *)0x5) {
                              pbVar11 = (byte *)(*(uint *)(local_3c + (int)local_14 * 4) & 0xfffffff
                                                );
                            }
                            else if (local_24 == (uint *)&DAT_00000004) {
                              pbVar11 = (byte *)(uint)*(ushort *)(local_3c + (int)local_14 * 2);
                            }
                            else {
                              iVar21 = ((uint)local_14 >> 1) + local_3c;
                              local_44 = pvVar16;
                              if (((uint)local_14 & 1) == 0) {
                                pbVar11 = (byte *)((local_14[iVar21 + 1] & 0xf) << 8 |
                                                  (uint)local_14[iVar21]);
                              }
                              else {
                                pbVar11 = (byte *)((uint)local_14[iVar21 + 1] << 4 |
                                                  (uint)(local_14[iVar21] >> 4));
                              }
                            }
                            local_38 = pvVar24;
                            if (pbVar11 == (byte *)0x0) break;
                            if (local_24 == (uint *)0x5) {
                              bVar27 = pbVar11 < (byte *)0xffffff7;
                              bVar28 = pbVar11 == (byte *)0xffffff7;
LAB_0204e1b2:
                              if (!bVar27 && !bVar28) break;
                            }
                            else {
                              if (local_24 == (uint *)&DAT_00000004) {
                                bVar27 = pbVar11 < (byte *)0xfff7;
                                bVar28 = pbVar11 == (byte *)0xfff7;
                                goto LAB_0204e1b2;
                              }
                              if ((byte *)0xff7 < pbVar11) break;
                            }
                            if ((pbVar11 == (byte *)0x1) || (local_2c <= pbVar11))
                            goto LAB_0204e23b;
                            bVar27 = pvVar24 <= pvVar16;
                            pvVar16 = (void *)((int)pvVar16 + 1);
                            local_14 = pbVar11;
                            if (bVar27) goto LAB_0204e23b;
                          }
                          uVar9 = recovered_204d6c0(uVar9,&local_148);
                          if ((local_148 != 0 & (byte)uVar9) == 1) {
                            recovered_2050860((uint)local_14,local_148);
                            pbVar11 = local_18;
                            goto LAB_0204e22d;
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_0204e23b:
              if (local_1c != (uint *)0x0) {
                recovered_204dbc0((uint)pbVar23);
                goto LAB_0204de86;
              }
              goto LAB_0204e867;
            }
LAB_0204e22d:
            *(byte **)(puVar19 + 0x1f8) = pbVar23;
            local_18 = pbVar11;
          }
          else {
            uVar9 = *(uint *)(puVar19 + 4);
            if ((uVar9 != 0xffffffff) && (uVar2 = DAT_02130728, uVar9 < uVar2)) {
              iVar21 = DAT_02130724;
              pbVar23 = *(byte **)(iVar21 + 0x104 + uVar9 * 0x110);
              pvVar24 = (void *)DAT_021307ac;
              local_2c = (byte *)((int)pvVar24 + 2);
              if (pbVar23 < local_2c && (byte *)0x1 < pbVar23) goto LAB_0204e063;
            }
LAB_0204de86:
            uVar9 = recovered_204d6c0((uint)local_18,(uint *)(puVar19 + 0x1f8));
            if ((char)uVar9 == '\0') goto LAB_0204e867;
          }
          *(byte **)(puVar19 + 0x1fc) = local_18;
          puVar13 = local_1c;
          pvVar24 = local_20;
        }
        ((uchar *)((int)local_28 + 0x20a))[(int)local_30] =
             *(void **)((int)(local_28 + 0x7e) + (int)local_30) != pvVar24;
        puVar17 = local_28;
      }
      puVar13 = (uint *)((int)puVar13 + 1);
    } while (puVar13 < local_34);
    puVar13 = local_34;
    if ((uint *)0x1 < local_34) {
      puVar17 = (uint *)0x1;
      iVar21 = 0;
      puVar22 = local_28;
      do {
        if (*(uchar *)((int)puVar22 + iVar21 + 0x414) == '\0') {
          uVar9 = *(uint *)((int)puVar22 + iVar21 + 0x210);
          local_14 = (byte *)0x0;
          if (uVar9 == 0xffffffff) goto LAB_0204e86e;
          uVar2 = DAT_02130728;
          if (uVar2 <= uVar9) goto LAB_0204e86e;
          local_18 = (byte *)DAT_02130724;
          pbVar23 = (byte *)(uVar9 * 0x110);
          uVar9 = *(uint *)(local_18 + 0xf8 + (int)pbVar23);
          if (uVar9 == 0) {
LAB_0204e268:
            uVar14 = 0;
            pvVar24 = (void *)0x0;
          }
          else {
            local_1c = puVar22;
            uVar2 = DAT_02130748;
            if ((uVar2 == 0) || (local_14 = pbVar23, -uVar2 < uVar9)) goto LAB_0204e268;
            local_30 = puVar17;
            if (CARRY4(uVar9 - 1,uVar2)) goto LAB_0204e268;
            local_18 = local_18 + (int)pbVar23;
            uVar14 = *(uint *)(local_18 + 0x104);
            local_20 = (void *)(((uVar9 - 1) + uVar2) / uVar2);
            pvVar16 = (void *)recovered_20519d0(uVar14);
            pbVar23 = local_18;
            pvVar24 = local_20;
            if (((uVar14 < 2) || (iVar5 = DAT_021307ac, iVar5 + 2U <= uVar14)) ||
               (pvVar16 < local_20)) {
              if ((local_18[0x10c] != 1) || (*(int *)(local_18 + 0xf4) == 0)) goto LAB_0204e867;
              local_1c = (uint *)(local_18 + 0x104);
              uVar9 = recovered_204d6c0((uint)local_20,local_1c);
              if ((char)uVar9 == '\0') goto LAB_0204e867;
              *(void **)(pbVar23 + 0x108) = pvVar24;
              uVar9 = recovered_204d8e0(*(uint *)(pbVar23 + 0x104),*(void **)(pbVar23 + 0xf4),
                                        *(uint *)(pbVar23 + 0xf8),(uint)pvVar24);
              if ((char)uVar9 == '\0') goto LAB_0204e867;
              uVar14 = *local_1c;
              puVar22 = local_28;
              puVar13 = local_34;
            }
            else {
              puVar22 = local_1c;
            }
            pvVar24 = local_20;
            puVar17 = local_30;
          }
          *(uint *)((int)puVar22 + iVar21 + 0x404) = uVar14;
          *(void **)((int)puVar22 + iVar21 + 0x408) = pvVar24;
        }
        puVar17 = (uint *)((int)puVar17 + 1);
        iVar21 = iVar21 + 0x20c;
      } while (puVar17 < puVar13);
    }
    if (puVar13 != (uint *)0x0) {
      local_38 = (void *)(local_48 + -1);
      puVar17 = (uint *)0x0;
LAB_0204e412:
      if ((uchar)(local_28 + 0x82)[(int)puVar17 * 0x83] == '\x01') {
        local_24 = puVar17;
        local_2c = (byte *)((int)puVar17 * 0x20c);
        if (local_48 != 0) {
          puVar17 = local_28 + (int)puVar17 * 0x83;
          if (*(uchar *)((int)puVar17 + 0x20a) == '\0') {
            pvVar24 = local_38;
            pvVar16 = local_38;
            do {
              cVar15 = *(char *)((int)pvVar24 + 1);
              pvVar24 = (void *)((int)pvVar24 + 1);
              pvVar16 = (void *)((int)pvVar16 + 1);
            } while (cVar15 == '/');
            pvVar25 = (void *)0x0;
            pvVar20 = pvVar24;
            do {
              if (cVar15 == '/') {
                pvVar25 = pvVar20;
              }
              else if (cVar15 == '\0') goto code_r0x0204e68d;
              cVar15 = *(char *)((int)pvVar20 + 1);
              pvVar20 = (void *)((int)pvVar20 + 1);
            } while( true );
          }
        }
        goto LAB_0204e441;
      }
      goto LAB_0204e406;
    }
  }
LAB_0204e8de:
  local_14 = (byte *)recovered_204e8f0();
LAB_0204e86e:
  recovered_2001710(local_28);
  return local_14;
code_r0x0204e68d:
  if (pvVar25 == (void *)0x0) {
    local_148 = local_148 & 0xffffff00;
  }
  else {
    uVar10 = (int)pvVar25 - (int)pvVar16;
    if (0xef < uVar10) {
      uVar10 = 0xf0;
    }
    recovered_2001b70(&local_148,pvVar24,uVar10);
    *(undefined1 *)((int)&local_148 + uVar10) = 0;
  }
  puVar19 = (uchar *)((int)puVar17 + 0xf9);
  uVar8 = *(uchar *)((int)puVar17 + 0xf9);
  while (uVar8 == '/') {
    puVar1 = puVar19 + 1;
    puVar19 = puVar19 + 1;
    uVar8 = *puVar1;
  }
  puVar26 = &local_149;
  puVar1 = (uchar *)((int)&local_148 + 1);
  do {
    puVar18 = puVar1;
    uVar12 = puVar26[1];
    puVar26 = puVar26 + 1;
    puVar1 = puVar18 + 1;
  } while (uVar12 == '/');
  puVar17 = local_24;
  if (uVar8 == '\0') {
LAB_0204e843:
    if (uVar12 == '\0') {
      puVar13 = local_34;
LAB_0204e441:
      puVar17 = local_24;
      puVar22 = local_28;
      local_40 = (byte *)0x0;
      local_1c = (uint *)DAT_0213075c;
      iVar21 = DAT_0213079c;
      uVar9 = DAT_02130740;
      local_18 = (byte *)0x0;
      if (uVar9 != 0 && iVar21 != 0) {
        local_18 = (byte *)(((uVar9 - 1) + iVar21 * 0x20) / uVar9);
      }
      if (((local_28 == (uint *)0x0) || (puVar13 <= local_24)) ||
         (*(byte *)((int)(local_28 + 0x82) + (int)local_2c) != 1)) goto LAB_0204e867;
      local_2c = local_2c + (int)local_28;
      local_3c = CONCAT31(PF_PART3(local_3c, 1),local_24 != (uint *)0x0 || local_1c == (uint *)0x5);
      if (local_24 != (uint *)0x0 || local_1c == (uint *)0x5) {
        if (((*(int *)(local_2c + 0x1fc) == 0) || (*(uint *)(local_2c + 0x1f8) < 2)) ||
           (iVar21 = DAT_021307ac, iVar21 + 2U <= *(uint *)(local_2c + 0x1f8))) goto LAB_0204e867;
        iVar21 = DAT_02130748;
        local_18 = (byte *)(*(int *)(local_2c + 0x1fc) * iVar21);
      }
      else {
        local_18 = (byte *)((int)local_18 * uVar9);
      }
      if ((local_18 == (byte *)0x0) ||
         (pvVar24 = recovered_2001650((ulong)local_18), pvVar24 == (void *)0x0)) goto LAB_0204e867;
      local_20 = pvVar24;
      recovered_2001e00(pvVar24,0,(ulong)local_18);
      if (puVar17 == (uint *)0x0) {
        pbVar23 = (byte *)0x0;
      }
      else {
        recovered_2001e00(&local_148,0x20,0xb);
        local_148 = CONCAT31(PF_PART3(local_148, 1),0x2e);
        recovered_2001e00(local_57,0x20,0xb);
        pvVar24 = local_20;
        local_57[0] = 0x2e2e;
        if (local_18 < (byte *)0x20) {
LAB_0204e859:
          recovered_2001710(local_20);
          goto LAB_0204e867;
        }
        local_1c = (uint *)CONCAT31(PF_PART3(local_1c, 1),local_1c == (uint *)0x5);
        local_30 = *(uint **)(local_2c + 0x1f8);
        recovered_2001e00(local_20,0,0x20);
        recovered_2001b70(pvVar24,&local_148,0xb);
        *(undefined1 *)((int)pvVar24 + 0xb) = 0x10;
        *(char *)((int)pvVar24 + 0x14) = (char)((uint)local_30 >> 0x10);
        *(char *)((int)pvVar24 + 0x15) = (char)((uint)local_30 >> 0x18);
        *(char *)((int)pvVar24 + 0x1a) = (char)local_30;
        *(char *)((int)pvVar24 + 0x1b) = (char)((uint)local_30 >> 8);
        *(undefined4 *)((int)pvVar24 + 0x1c) = 0;
        puVar17 = (uint *)0x0;
        if ((0 < *(int *)local_2c | (byte)local_1c) == 1) {
          puVar17 = (uint *)puVar22[*(int *)local_2c * 0x83 + 0x7e];
        }
        if (local_18 < (byte *)0x40) goto LAB_0204e859;
        pvVar24 = (void *)((int)local_20 + 0x20);
        local_1c = puVar17;
        recovered_2001e00(pvVar24,0,0x20);
        puVar17 = local_24;
        recovered_2001b70(pvVar24,local_57,0xb);
        *(undefined1 *)((int)local_20 + 0x2b) = 0x10;
        *(char *)((int)local_20 + 0x34) = (char)((uint)local_1c >> 0x10);
        *(char *)((int)local_20 + 0x35) = (char)((uint)local_1c >> 0x18);
        *(char *)((int)local_20 + 0x3a) = (char)local_1c;
        *(char *)((int)local_20 + 0x3b) = (char)((uint)local_1c >> 8);
        *(undefined4 *)((int)local_20 + 0x3c) = 0;
        local_40 = (byte *)0x40;
        pbVar23 = (byte *)0x40;
      }
      if ((uint *)0x1 < puVar13) {
        puVar19 = (uchar *)((int)puVar13 + -1);
        pbVar23 = (byte *)((int)puVar22 + 0x415);
        do {
          puVar13 = local_24;
          if (*(uint **)(pbVar23 + -0x209) == puVar17) {
            uVar9 = 0;
            if (pbVar23[-1] == 0) {
              uVar9 = *(uint *)(pbVar23 + -0x205);
              if ((uVar9 == 0xffffffff) || (uVar2 = DAT_02130728, uVar2 <= uVar9))
              goto LAB_0204e859;
              iVar21 = DAT_02130724;
              uVar9 = *(uint *)(iVar21 + 0xf8 + uVar9 * 0x110);
            }
            local_1c = (uint *)(pbVar23 + -0x201);
            local_30 = (uint *)(pbVar23 + -0x1f);
            local_14 = (byte *)(uint)*pbVar23;
            uVar9 = recovered_2051fb0((int)local_20,(uint)local_18,(int *)&local_40,(int)local_1c,
                                      (uchar *)local_30,*pbVar23,
                                      (pbVar23[-9] & 1 | (pbVar23[-1] ^ 1) << 4) + 0x10,
                                      *(uint *)(pbVar23 + -0x11),uVar9);
            puVar17 = puVar13;
            if ((char)uVar9 == '\0') goto LAB_0204e859;
          }
          pbVar23 = pbVar23 + 0x20c;
          puVar19 = puVar19 + -1;
        } while (puVar19 != (uchar *)0x0);
        pbVar23 = local_40;
      }
      pvVar24 = local_20;
      if (pbVar23 < local_18) {
        *(byte *)((int)local_20 + (int)pbVar23) = 0;
      }
      if ((char)local_3c == '\0') {
        bVar3 = DAT_0213073c;
        iVar5 = DAT_02130790;
        uVar4 = DAT_0213074c;
        uVar4 = DAT_0213074c;
        iVar21 = DAT_0213074c;
        iVar7 = DAT_02130798;
        iVar6 = DAT_02130794;
        uVar9 = recovered_2050b00((uint)bVar3,iVar7 * iVar6 + iVar5 + iVar21,(int)local_20,
                                  (uint)local_18);
        cVar15 = (char)uVar9;
      }
      else {
        uVar9 = recovered_204d8e0(*(uint *)(local_2c + 0x1f8),local_20,(uint)local_18,
                                  *(uint *)(local_2c + 0x1fc));
        cVar15 = (char)uVar9;
      }
      recovered_2001710(pvVar24);
      if (cVar15 == '\0') goto LAB_0204e867;
    }
  }
  else {
    while (uVar12 != '\0') {
      puVar19 = puVar19 + 1;
      if ((byte)(uVar8 + 0x9f) < 0x1a) {
        uVar8 = uVar8 + 0xe0;
      }
      if ((byte)(uVar12 + 0x9f) < 0x1a) {
        uVar12 = uVar12 + 0xe0;
      }
      if (uVar8 != uVar12) break;
      uVar8 = *puVar19;
      uVar12 = *puVar18;
      if (uVar8 == '\0') goto LAB_0204e843;
      puVar18 = puVar18 + 1;
    }
  }
LAB_0204e406:
  puVar17 = (uint *)((int)puVar17 + 1);
  puVar13 = local_34;
  if (local_34 <= puVar17) goto LAB_0204e88a;
  goto LAB_0204e412;
LAB_0204e88a:
  if ((uint *)0x1 < local_34) {
    iVar21 = DAT_02130724;
    uVar9 = DAT_02130728;
    puVar19 = (uchar *)((int)local_34 + -1);
    puVar13 = local_28 + 0x102;
    do {
      uVar2 = puVar13[-0x7e];
      if ((uVar2 != 0xffffffff) && (uVar2 < uVar9)) {
        *(uint *)(iVar21 + 0x104 + uVar2 * 0x110) = puVar13[-1];
        *(uint *)(iVar21 + 0x108 + uVar2 * 0x110) = *puVar13;
        uVar9 = DAT_02130728;
      }
      puVar13 = puVar13 + 0x83;
      puVar19 = puVar19 + -1;
    } while (puVar19 != (uchar *)0x0);
  }
  goto LAB_0204e8de;
}
#undef DAT_00000004
#undef DAT_02130724
#undef DAT_02130728
#undef DAT_0213073c
#undef DAT_02130740
#undef DAT_02130744
#undef DAT_02130748
#undef DAT_0213074c
#undef DAT_02130758
#undef DAT_0213075c
#undef DAT_02130790
#undef DAT_02130794
#undef DAT_02130798
#undef DAT_0213079c
#undef DAT_021307a0
#undef DAT_021307a4
#undef DAT_021307a8
#undef DAT_021307ac
#undef DAT_021307b0
#undef DAT_021307dc
#undef local_14
#undef local_149
#undef local_148
#undef local_57
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

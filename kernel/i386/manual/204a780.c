/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020de158 (*(uint32_t volatile *)(0x20de158U))
#define DAT_0214b0f8 (*(uint32_t volatile *)(0x214b0f8U))
#define DAT_0214b0fc (*(uint32_t volatile *)(0x214b0fcU))
#define DAT_0214b100 (*(uint32_t volatile *)(0x214b100U))
#define DAT_0214b104 (*(uint8_t volatile *)(0x214b104U))
#define DAT_0214bc30 (*(uint32_t volatile *)(0x214bc30U))
#define DAT_0214bc34 (*(uint32_t volatile *)(0x214bc34U))
#define DAT_0214bc38 (*(uint8_t volatile *)(0x214bc38U))
#define DAT_0214bc3c (*(uint32_t volatile *)(0x214bc3cU))
#define DAT_0223dafd (*(uint8_t volatile *)(0x223dafdU))
#define DAT_0223db04 (*(uint32_t volatile *)(0x223db04U))
#define PTR_str_020c5884_020de16c (*(char * volatile *)(0x20de16cU))
#define PTR_str_020c5884_020de170 (*(char * volatile *)(0x20de170U))
#define str_020c5884 (*(char (*)[1])(0x20c5884U))
#define str_020c588b (*(char (*)[1])(0x20c588bU))
#define str_020c5894 (*(char (*)[1])(0x20c5894U))
#define str_020c589c (*(char (*)[1])(0x20c589cU))
#define str_020c58ab (*(char (*)[1])(0x20c58abU))
#define local_30 (*(uint *)(frame + 144))
#define local_2c (*(uint *)(frame + 148))
#define local_28 (*(uint *)(frame + 152))
#define local_24 (*(uint *)(frame + 156))
#define local_20 (*(uint *)(frame + 160))
#define local_1c (*(uint *)(frame + 164))
#define local_18 (*(uint * *)(frame + 168))
#define local_14 (*(uint * *)(frame + 172))
#define local_a4 (*(uint (*)[8])(frame + 28))
#define local_84 (*(uint *)(frame + 60))
#define local_80 (*(uint *)(frame + 64))
#define local_7c (*(uint *)(frame + 68))
#define local_78 (*(uint *)(frame + 72))
#define local_74 (*(uint *)(frame + 76))
#define local_70 (*(uint *)(frame + 80))
#define local_6c (*(uint *)(frame + 84))
#define local_68 (*(uint *)(frame + 88))
#define local_64 (*(int *)(frame + 92))
#define local_60 (*(uint *)(frame + 96))
#define local_5c (*(uint *)(frame + 100))
#define local_58 (*(uint *)(frame + 104))
#define local_54 (*(uint *)(frame + 108))
#define local_50 (*(uint *)(frame + 112))
#define local_4c (*(uint *)(frame + 116))
#define local_48 (*(uint *)(frame + 120))
#define local_44 (*(uint *)(frame + 124))
#define local_40 (*(uint *)(frame + 128))
#define local_3c (*(int *)(frame + 132))
#define local_38 (*(uint *)(frame + 136))
#define local_34 (*(uint * *)(frame + 140))


void recovered_204a780(void)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 *puVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  ulonglong uVar21;

  cVar3 = DAT_0214b104;
  if (cVar3 != '\x01') {
    return;
  }
  iVar13 = DAT_0214b100;
  if (iVar13 == 0) {
    return;
  }
  uVar7 = recovered_2042790();
  if ((char)uVar7 == '\0') {
    return;
  }
  iVar13 = DAT_0214b0f8;
  if (iVar13 == 0) {
    return;
  }
  iVar13 = DAT_0214b0fc;
  if (iVar13 == 0) {
    return;
  }
  local_34 = recovered_2012220();
  local_34 = (uint *)*local_34;
  puVar8 = recovered_2012220();
  uVar7 = puVar8[3];
  puVar8 = recovered_2012220();
  uVar14 = puVar8[4];
  puVar8 = recovered_2012220();
  local_78 = puVar8[2];
  puVar8 = recovered_2012220();
  local_74 = puVar8[5];
  local_14 = (uint *)DAT_0214b0fc;
  uVar17 = DAT_0214b0f8;
  uVar21 = recovered_20012c0((uint)(ZEXT48(local_14) * (ulonglong)uVar7),
                             (uint)(ZEXT48(local_14) * (ulonglong)uVar7 >> 0x20),uVar17,0);
  local_2c = (uint)uVar21;
  local_20 = uVar7;
  local_1c = uVar14;
  if (uVar14 < local_2c) {
    uVar21 = recovered_20012c0((uint)((ulonglong)uVar17 * (ulonglong)uVar14),
                               (uint)((ulonglong)uVar17 * (ulonglong)uVar14 >> 0x20),(uint)local_14,
                               0);
    uVar7 = (uint)uVar21;
    local_2c = uVar14;
  }
  if (uVar7 == 0) {
    return;
  }
  if (local_2c == 0) {
    return;
  }
  local_74 = local_74 + 7;
  local_44 = local_74 >> 3;
  local_38 = local_20 - uVar7;
  local_4c = local_1c - local_2c;
  if ((((uVar7 == uVar17) && (local_38 < 2)) && (local_4c < 2)) &&
     ((local_14 == (uint *)local_1c && (uVar17 == local_20 && (uint *)local_2c == local_14) &&
      (bVar5 = recovered_204b770(local_44), bVar5)))) {
    recovered_204b7e0(&DAT_0214b0f8,local_34,local_78);
    recovered_2042f50(0,0,local_20,local_1c);
    return;
  }
  local_38 = local_38 >> 1;
  local_4c = local_4c >> 1;
  local_48 = uVar7;
  puVar8 = recovered_2012220();
  uVar7 = puVar8[3];
  puVar8 = recovered_2012220();
  lVar2 = (ulonglong)(puVar8[5] + 7 >> 3) * (ulonglong)uVar7;
  iVar13 = (int)((ulonglong)lVar2 >> 0x20);
  puVar8 = recovered_2012220();
  uVar7 = puVar8[2];
  puVar8 = recovered_2012220();
  if (lVar2 != 0) {
    uVar14 = (uint)((ulonglong)uVar7 * (ulonglong)puVar8[4] >> 0x20);
    local_14 = (uint *)((ulonglong)uVar7 * (ulonglong)puVar8[4]);
    puVar9 = recovered_2012220();
    puVar8 = local_14;
    if (((iVar13 == 0 && (uint)(puVar9[2] < (uint)lVar2) <= (uint)-iVar13) &&
        (uVar14 == 0 && (local_14 == (uint *)0x0) <= uVar14)) && (local_14 != (uint *)0x0)) {
      puVar10 = (undefined1 *)DAT_0214bc30;
      if ((puVar10 == (undefined1 *)0x0) || (uVar7 = DAT_0214bc34, (uint *)uVar7 != local_14)) {
        recovered_2001710(puVar10);
        puVar10 = recovered_2001650((ulong)puVar8);
        DAT_0214bc30 = puVar10;
        puVar9 = (uint *)0;
        if (puVar10 != (undefined1 *)0x0) {
          puVar9 = puVar8;
        }
        DAT_0214bc34 = puVar9;
        if (puVar10 == (undefined1 *)0x0) goto LAB_0204acb7;
      }
      recovered_204bb00(puVar10,(uint)puVar8);
      local_38 = local_38 * local_44;
      uVar17 = 0;
      local_80 = local_44 ^ 2;
      local_7c = local_44 ^ 4;
      uVar14 = 0;
      uVar7 = 0;
      do {
        uVar1 = DAT_0214bc30;
        uVar1 = DAT_0214bc30;
        iVar13 = DAT_0214bc30;
        local_60 = (uVar17 + local_4c) * local_78 + iVar13 + local_38;
        local_64 = CONCAT31(PF_PART3(local_64, 1),(local_60 & 3) == 0 && local_7c == 0);
        local_24 = CONCAT31(PF_PART3(local_24, 1),(local_60 & 1) == 0 && local_80 == 0);
        uVar16 = DAT_0214b0f8;
        local_18 = (uint *)0x0;
        uVar19 = 0;
        uVar15 = 0;
        local_68 = uVar7;
        local_5c = uVar14;
        local_34 = (uint *)uVar17;
        do {
          iVar13 = DAT_0214b100;
          iVar11 = uVar16 * local_68 + uVar15;
          uVar7 = (uint)*(byte *)(iVar13 + iVar11 * 4);
          uVar14 = (uint)*(byte *)(iVar13 + 1 + iVar11 * 4);
          bVar6 = *(byte *)(iVar13 + 2 + iVar11 * 4);
          iVar13 = DAT_020de158;
          if (iVar13 == 8) {
            local_70 = 0x80;
            local_30 = 3;
            local_3c = 0x82;
            local_6c = 7;
            local_14 = (uint *)0x7;
            local_50 = 0x82;
LAB_0204aaee:
            iVar13 = uVar7 * local_6c;
            iVar11 = uVar14 * (int)local_14;
            iVar18 = bVar6 * local_30;
            uVar7 = ((iVar13 + local_3c) -
                    (iVar13 + 0x7f + ((iVar13 + 0x7fU) / 0xff) * -0xff & 0xffff)) / local_6c;
            bVar6 = (byte)(((iVar18 + local_70) -
                           (iVar18 + 0x7f + ((iVar18 + 0x7fU) / 0xff) * -0xff & 0xffff)) / local_30)
            ;
            uVar17 = ((iVar11 + local_50) -
                     (iVar11 + 0x7f + ((iVar11 + 0x7fU) / 0xff) * -0xff & 0xffff)) / (uint)local_14;
            local_54 = uVar14;
            local_40 = uVar7;
          }
          else {
            if (iVar13 == 0x10) {
              local_50 = 0x9e;
              local_14 = (uint *)0x3f;
LAB_0204aab0:
              local_3c = 0x8e;
              local_6c = 0x1f;
              local_30 = 0x1f;
              local_70 = 0x8e;
              goto LAB_0204aaee;
            }
            if (iVar13 == 0xf) {
              local_14 = (uint *)0x1f;
              local_50 = 0x8e;
              goto LAB_0204aab0;
            }
            uVar17 = uVar14;
          }
          local_58 = uVar15;
          local_28 = uVar19;
          uVar7 = recovered_204bbf0(uVar7 & 0xff,uVar17 & 0xff,bVar6);
          if ((char)local_64 == '\0') {
            if ((char)local_24 == '\0') {
              if (7 < local_74) {
                local_14 = (uint *)((int)local_18 * local_44 + local_60);
                bVar6 = 0;
                iVar13 = 0;
                uVar14 = local_44;
                do {
                  *(char *)((int)local_14 + iVar13) = (char)(uVar7 >> (bVar6 & 0x1f));
                  iVar13 = iVar13 + 1;
                  bVar6 = bVar6 + 8;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
            }
            else {
              *(short *)(local_60 + (int)local_18 * 2) = (short)uVar7;
            }
          }
          else {
            *(uint *)(local_60 + (int)local_18 * 4) = uVar7;
          }
          uVar16 = DAT_0214b0f8;
          uVar15 = local_58;
          if (uVar16 == 0) {
            uVar19 = local_28;
          }
          else {
            uVar19 = local_28 + uVar16;
            uVar7 = local_58;
            if (uVar19 < local_48) {
            }
            else {
              do {
                uVar15 = uVar7 + 1;
                if (uVar16 <= uVar7 + 1) {
                  uVar15 = uVar7;
                }
                uVar19 = uVar19 - local_48;
                uVar7 = uVar15;
              } while (local_48 <= uVar19);
            }
          }
          local_18 = (uint *)((int)local_18 + 1);
        } while (local_18 != (uint *)local_48);
        uVar17 = DAT_0214b0fc;
        uVar7 = local_68;
        if (uVar17 == 0) {
          uVar14 = local_5c;
        }
        else {
          uVar14 = local_5c + uVar17;
          uVar16 = local_68;
          if (uVar14 < local_2c) {
          }
          else {
            do {
              uVar7 = uVar16 + 1;
              if (uVar17 <= uVar16 + 1) {
                uVar7 = uVar16;
              }
              uVar14 = uVar14 - local_2c;
              uVar16 = uVar7;
            } while (local_2c <= uVar14);
          }
        }
        uVar17 = (int)local_34 + 1;
        if (local_2c <= uVar17) {
          local_14 = recovered_2012220();
          puVar8 = recovered_2012220();
          iVar13 = DAT_0214bc30;
          if (((((iVar13 != 0) && (local_44 = *local_14, local_44 != 0)) && (7 < puVar8[5] + 7)) &&
              ((puVar8 = (uint *)((puVar8[5] + 7 >> 3) * local_14[3]), puVar8 != (uint *)0x0 &&
               (puVar8 <= local_14[2])))) && (local_14[4] != 0)) {
            local_28 = (uint)puVar8 >> 1;
            local_58 = (uint)puVar8 >> 2;
            local_48 = (uint)puVar8 >> 3;
            uVar7 = 0;
            local_18 = puVar8;
            do {
              iVar13 = DAT_0214bc30;
              if (iVar13 != 0) {
                uVar14 = local_14[2];
                cVar3 = DAT_0214bc38;
                if (cVar3 == '\0') {
                  recovered_2001e00(local_a4,0,0x24);
                  DAT_0214bc3c = 0;
                  PTR_str_020c5884_020de16c = str_020c5884;
                  PTR_str_020c5884_020de170 = str_020c5884;
                  bVar6 = recovered_20124e0(local_a4);
                  if (bVar6 != 0) {
                    DAT_0214bc3c = local_a4[0];
                    pcVar12 = str_020c588b;
                    if (((short)local_a4[0] < 0) || (pcVar12 = str_020c5894, 0xf < local_84)) {
                      PTR_str_020c5884_020de16c = pcVar12;
                    }
                    pcVar12 = str_020c589c;
                    if (((~local_a4[0] & 0x400040) == 0) ||
                       (pcVar12 = str_020c58ab, (local_a4[0] & 4) != 0)) {
                      PTR_str_020c5884_020de170 = pcVar12;
                    }
                  }
                  DAT_0214bc38 = 1;
                  puVar8 = local_18;
                }
                puVar10 = (undefined1 *)(iVar13 + uVar14 * uVar7);
                puVar20 = (undefined1 *)(uVar14 * uVar7 + local_44);
                if ((puVar8 < 0x80) || (uVar14 = DAT_0214bc3c, (uVar14 & 0x8000) == 0)) {
                  uVar14 = (uint)puVar8 | (uint)puVar20 | (uint)puVar10;
                  if ((uVar14 & 7) == 0) {
                    if (7 < puVar8) {
                      uVar14 = 0;
                      do {
                        uVar1 = *(undefined4 *)(puVar10 + uVar14 * 8);
                        *(undefined4 *)(puVar20 + uVar14 * 8 + 4) =
                             *(undefined4 *)(puVar10 + uVar14 * 8 + 4);
                        *(undefined4 *)(puVar20 + uVar14 * 8) = uVar1;
                        uVar14 = uVar14 + 1;
                        puVar8 = local_18;
                      } while (local_48 != uVar14);
                    }
                  }
                  else if ((uVar14 & 3) == 0) {
                    if (3 < puVar8) {
                      uVar14 = 0;
                      do {
                        *(undefined4 *)(puVar20 + uVar14 * 4) =
                             *(undefined4 *)(puVar10 + uVar14 * 4);
                        uVar14 = uVar14 + 1;
                      } while (local_58 != uVar14);
                    }
                  }
                  else if ((uVar14 & 1) == 0) {
                    if (1 < puVar8) {
                      uVar14 = 0;
                      do {
                        *(undefined2 *)(puVar20 + uVar14 * 2) =
                             *(undefined2 *)(puVar10 + uVar14 * 2);
                        uVar14 = uVar14 + 1;
                      } while (local_28 != uVar14);
                    }
                  }
                  else {
                    uVar14 = 0;
                    do {
                      puVar20[uVar14] = puVar10[uVar14];
                      uVar14 = uVar14 + 1;
                    } while (puVar8 != (uint *)uVar14);
                  }
                }
                else {
                  for (uVar14 = (uint)puVar8; uVar14 != 0; uVar14 = uVar14 - 1) {
                    *puVar20 = *puVar10;
                    puVar10 = puVar10 + 1;
                    puVar20 = puVar20 + 1;
                  }
                }
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < local_14[4]);
          }
          if (local_1c == 0 || local_20 == 0) {
            return;
          }
          pcVar4 = (code *)DAT_0223db04;
          bVar6 = DAT_0223dafd;
          if ((pcVar4 != (code *)0x0 & bVar6) == 1) {
            (*pcVar4)(0,0,local_20,local_1c);
          }
          recovered_2005a90(0,0,local_20,local_1c);
          return;
        }
      } while( true );
    }
  }
LAB_0204acb7:
  if (local_1c != 0) {
    local_70 = local_38 + local_48;
    local_50 = local_2c + local_4c;
    uVar17 = 0;
    uVar7 = 0;
    local_24 = 0;
    uVar14 = local_48;
    do {
      local_5c = uVar7;
      if (local_20 != 0) {
        uVar7 = 0;
        local_18 = local_34;
        uVar16 = 0;
        local_14 = (uint *)0x0;
        local_40 = uVar17;
        do {
          local_58 = uVar7;
          if ((((uVar7 < local_38) || (local_70 <= uVar7)) || (local_40 < local_4c)) ||
             (local_50 <= local_40)) {
            uVar7 = 0;
          }
          else {
            iVar11 = DAT_0214b100;
            iVar13 = DAT_0214b0f8;
            iVar13 = iVar13 * local_24 + (int)local_14;
            local_54 = (uint)*(byte *)(iVar11 + iVar13 * 4);
            uVar7 = (uint)*(byte *)(iVar11 + 1 + iVar13 * 4);
            bVar6 = *(byte *)(iVar11 + 2 + iVar13 * 4);
            iVar13 = DAT_020de158;
            if (iVar13 == 8) {
              local_3c = 0x80;
              local_28 = 3;
              local_64 = 0x82;
              local_68 = 7;
              local_60 = 7;
              local_6c = 0x82;
LAB_0204ae25:
              iVar11 = local_54 * local_68;
              iVar13 = uVar7 * local_60;
              iVar18 = bVar6 * local_28;
              local_30 = iVar18 + 0x7f + ((iVar18 + 0x7fU) / 0xff) * -0xff;
              uVar7 = ((iVar13 + local_6c) -
                      (iVar13 + 0x7f + ((iVar13 + 0x7fU) / 0xff) * -0xff & 0xffff)) / local_60;
              bVar6 = (byte)(((iVar18 + local_3c) - (local_30 & 0xffff)) / local_28);
              uVar17 = ((iVar11 + local_64) -
                       (iVar11 + 0x7f + ((iVar11 + 0x7fU) / 0xff) * -0xff & 0xffff)) / local_68;
              uVar14 = local_48;
            }
            else {
              if (iVar13 == 0x10) {
                local_6c = 0x9e;
                local_60 = 0x3f;
LAB_0204adef:
                local_64 = 0x8e;
                local_68 = 0x1f;
                local_28 = 0x1f;
                local_3c = 0x8e;
                goto LAB_0204ae25;
              }
              if (iVar13 == 0xf) {
                local_60 = 0x1f;
                local_6c = 0x8e;
                goto LAB_0204adef;
              }
              uVar17 = local_54;
              local_30 = uVar7;
            }
            uVar7 = recovered_204bbf0(uVar17 & 0xff,uVar7 & 0xff,bVar6);
            uVar17 = DAT_0214b0f8;
            if (uVar17 == 0) {
            }
            else {
              uVar16 = uVar16 + uVar17;
              if (uVar14 <= uVar16) {
                do {
                  uVar15 = (int)local_14 + 1U;
                  if (uVar17 <= (int)local_14 + 1U) {
                    uVar15 = (uint)local_14;
                  }
                  local_14 = (uint *)uVar15;
                  uVar16 = uVar16 - uVar14;
                } while (uVar14 <= uVar16);
              }
            }
          }
          if (7 < local_74) {
            bVar6 = 0;
            puVar8 = local_18;
            uVar14 = local_44;
            do {
              *(char *)puVar8 = (char)(uVar7 >> (bVar6 & 0x1f));
              puVar8 = (uint *)((int)puVar8 + 1);
              bVar6 = bVar6 + 8;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          uVar7 = local_58 + 1;
          local_18 = (uint *)((int)local_18 + local_44);
          uVar14 = local_48;
          uVar17 = local_40;
        } while (uVar7 != local_20);
      }
      uVar7 = local_5c;
      if (local_4c <= uVar17) {
        if (((uVar17 < local_50) && (uVar16 = DAT_0214b0fc, uVar16 != 0)) &&
           (uVar7 = local_5c + uVar16, local_2c <= uVar7)) {
          do {
            uVar15 = local_24 + 1;
            if (uVar16 <= local_24 + 1) {
              uVar15 = local_24;
            }
            local_24 = uVar15;
            uVar7 = uVar7 - local_2c;
            local_14 = (uint *)uVar16;
          } while (local_2c <= uVar7);
        }
        else {
        }
      }
      uVar17 = uVar17 + 1;
      local_34 = (uint *)((int)local_34 + local_78);
    } while (uVar17 != local_1c);
    if (local_20 != 0) {
      pcVar4 = (code *)DAT_0223db04;
      bVar6 = DAT_0223dafd;
      if ((pcVar4 != (code *)0x0 & bVar6) == 1) {
        (*pcVar4)(0,0,local_20,local_1c);
      }
      recovered_2005a90(0,0,local_20,local_1c);
    }
  }
  return;
}
#undef DAT_020de158
#undef DAT_0214b0f8
#undef DAT_0214b0fc
#undef DAT_0214b100
#undef DAT_0214b104
#undef DAT_0214bc30
#undef DAT_0214bc34
#undef DAT_0214bc38
#undef DAT_0214bc3c
#undef DAT_0223dafd
#undef DAT_0223db04
#undef PTR_str_020c5884_020de16c
#undef PTR_str_020c5884_020de170
#undef str_020c5884
#undef str_020c588b
#undef str_020c5894
#undef str_020c589c
#undef str_020c58ab
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_a4
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

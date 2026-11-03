#include "functions.h"
#undef DAT_0003f254
#define DAT_0003f254 (*(uint8_t *)(0x3f254U))
#undef DAT_0003f336
#define DAT_0003f336 (*(uint8_t *)(0x3f336U))
#undef DAT_0003f8ac
#define DAT_0003f8ac (*(uint8_t *)(0x3f8acU))
#undef DAT_0003f8b1
#define DAT_0003f8b1 (*(uint8_t *)(0x3f8b1U))
#undef DAT_00044df0
#define DAT_00044df0 (*(uint8_t *)(0x44df0U))
#undef DAT_00044ee4
#define DAT_00044ee4 (*(uint32_t *)(0x44ee4U))
#undef DAT_00044ee8
#define DAT_00044ee8 (*(uint32_t *)(0x44ee8U))
#undef DAT_00044eec
#define DAT_00044eec (*(uint32_t *)(0x44eecU))
#undef DAT_00054df0
#define DAT_00054df0 (*(byte * *)(0x54df0U))
#undef DAT_00054df4
#define DAT_00054df4 (*(byte *)(0x54df4U))
#undef DAT_00054df8
#define DAT_00054df8 (*(uint *)(0x54df8U))
#undef DAT_00054dfc
#define DAT_00054dfc (*(char * *)(0x54dfcU))
#undef DAT_00054e00
#define DAT_00054e00 (*(char * *)(0x54e00U))
#undef DAT_00054e04
#define DAT_00054e04 (*(int *)(0x54e04U))
#undef DAT_00054e08
#define DAT_00054e08 (*(char * *)(0x54e08U))
#undef DAT_00054e10
#define DAT_00054e10 (*(char * *)(0x54e10U))
#undef DAT_00054e14
#define DAT_00054e14 (*(uint *)(0x54e14U))
#undef DAT_00054e18
#define DAT_00054e18 (*(uint *)(0x54e18U))
#undef DAT_00054e1c
#define DAT_00054e1c (*(int *)(0x54e1cU))
#undef DAT_00054e20
#define DAT_00054e20 (*(uint *)(0x54e20U))
#undef DAT_00054e28
#define DAT_00054e28 (*(char *)(0x54e28U))
#undef str_0003f208
#define str_0003f208 (*(char (*)[1])(0x3f208U))
#undef str_0003f894
#define str_0003f894 (*(char (*)[1])(0x3f894U))
#undef str_0003f89d
#define str_0003f89d (*(char (*)[1])(0x3f89dU))
#undef str_0003f8a6
#define str_0003f8a6 (*(char (*)[1])(0x3f8a6U))
#define local_668 (*(uint (*)[256])(frame + 268304))
#define local_268 (*(char * (*)[61])(frame + 269328))
#define local_174 (*(undefined1 (*)[8])(frame + 269572))
#define local_16c (*(undefined4 *)(frame + 269580))
#define local_168 (*(uint *)(frame + 269584))
#define local_164 (*(char * *)(frame + 269588))
#define local_160 (*(int *)(frame + 269592))
#define local_15c (*(char * *)(frame + 269596))
#define local_158 (*(char * *)(frame + 269600))
#define local_154 (*(uint *)(frame + 269604))
#define local_150 (*(char * *)(frame + 269608))
#define local_14c (*(byte * *)(frame + 269612))
#define local_148 (*(byte * *)(frame + 269616))
#define local_144 (*(char * *)(frame + 269620))
#define local_80 (*(byte * (*)[4])(frame + 269816))
#define local_70 (*(uint *)(frame + 269832))
#define local_6c (*(char * *)(frame + 269836))
#define local_68 (*(uint *)(frame + 269840))
#define local_64 (*(uint *)(frame + 269844))
#define local_60 (*(char * *)(frame + 269848))
#define local_5c (*(int *)(frame + 269852))
#define local_58 (*(byte * (*)[2])(frame + 269856))
#define local_50 (*(byte (*)[4])(frame + 269864))
#define local_4c (*(char * *)(frame + 269868))
#define local_48 (*(char * *)(frame + 269872))
#define local_44 (*(byte * *)(frame + 269876))
#define local_40 (*(char * *)(frame + 269880))
#define local_3c (*(byte * *)(frame + 269884))
#define local_38 (*(uint *)(frame + 269888))
#define local_34 (*(char * *)(frame + 269892))
#define local_30 (*(byte * *)(frame + 269896))
#define local_2c (*(char * *)(frame + 269900))
#define local_28 (*(char * *)(frame + 269904))
#define local_24 (*(byte * *)(frame + 269908))
#define local_20 (*(byte * *)(frame + 269912))
#define local_1c (*(char * *)(frame + 269916))
#define local_18 (*(byte * *)(frame + 269920))
#define local_14 (*(byte * *)(frame + 269924))
#define abStack_41e68 (*(byte (*)[490])(frame + 16))
#define auStack_41c7e (*(undefined1 (*)[14])(frame + 506))
#define auStack_41c70 (*(uint (*)[4])(frame + 520))
#define acStack_41c60 (*(char (*)[12])(frame + 536))
#define auStack_41c54 (*(undefined1 (*)[512])(frame + 548))
#define cStack_41a54 (*(char *)(frame + 1060))
#define abStack_41a53 (*(byte (*)[267243])(frame + 1061))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22486
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_22486(void)

{
  unsigned char frame[269976];

  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  byte bVar9;
  undefined2 uVar10;
  int *piVar11;
  uint uVar12;
  byte bVar13;
  byte *pbVar14;
  char *pcVar15;
  uint uVar16;
  byte *pbVar17;
  undefined1 *puVar18;
  char *pcVar19;
  byte *pbVar20;
  int iVar21;
  bool bVar22;

  if (DAT_00054e10 == (char *)0x1) {
    if (DAT_00054dfc != (char *)0x0 && (DAT_00054df8 != 0 && DAT_00054e28 == '\x01')) {
      local_40 = DAT_00054dfc;
      local_28 = DAT_00054e00;
      local_1c = DAT_00054e08;
      local_30 = (byte *)((int)DAT_00054df0 * 0x100);
      local_38 = DAT_00054df8;
      local_34 = (char *)((uint)local_30 % DAT_00054df8);
      local_14 = (byte *)0x0;
      local_20 = (byte *)DAT_00054df8;
      local_2c = (char *)(((int)local_30 + DAT_00054df8) - (int)local_34);
      piVar11 = &DAT_00044ee8;
      local_24 = DAT_00054df0;
      pbVar20 = DAT_00054df0;
      while (bVar22 = pbVar20 != (byte *)0x0, pbVar20 = pbVar20 + -1, bVar22) {
        local_14 = local_14 + (uint)(DAT_00054e00 + *piVar11 + -1) / (uint)DAT_00054e00;
        piVar11 = piVar11 + 0x40;
      }
      local_18 = (byte *)0x2;
      piVar11 = &DAT_00044ee8;
      for (pbVar20 = (byte *)0x0; local_24 != pbVar20; pbVar20 = pbVar20 + 1) {
        iVar8 = *piVar11;
        if (iVar8 == 0) {
          local_668[(int)pbVar20] = 0;
LAB_00022890:
          pbVar14 = abStack_41e68 + (int)pbVar20 * 4;
          pbVar14[0] = 0;
          pbVar14[1] = 0;
          pbVar14[2] = 0;
          pbVar14[3] = 0;
        }
        else {
          uVar5 = (uint)(DAT_00054e00 + iVar8 + -1) / (uint)local_28;
          local_668[(int)pbVar20] = uVar5;
          if (DAT_00054e00 + iVar8 + -1 < local_28) goto LAB_00022890;
          *(byte **)(abStack_41e68 + (int)pbVar20 * 4) = local_18;
          local_18 = (byte *)((int)local_18 + uVar5);
        }
        piVar11 = piVar11 + 0x40;
      }
      pbVar20 = (byte *)local_2c;
      if (local_34 == (char *)0x0) {
        pbVar20 = local_30;
      }
      local_30 = (byte *)((uint)pbVar20 / local_38);
      if ((byte *)((int)local_18 + -2) <= local_14) {
        uVar5 = (int)local_14 * 4 + 8;
        uVar12 = uVar5 % local_38;
        uVar16 = ((int)local_20 + (int)local_14 * 4 + 8) - uVar12;
        if (uVar12 == 0) {
          uVar16 = uVar5;
        }
        pcVar6 = (char *)(uVar16 / local_38);
        local_18 = (byte *)(pcVar6 + (int)local_30 + 1);
        pcVar15 = (char *)(local_18 + (int)local_40 * (int)local_14);
        if ((local_1c == (char *)0x0) || (pcVar15 <= local_1c)) {
          local_20 = (byte *)((int)local_20 * (int)pcVar15);
          pcVar7 = recovered_20df4((uint)local_20);
          if (pcVar7 != (char *)0x0) {
            local_2c = pcVar6 + 1;
            local_34 = pcVar6;
            recovered_20fa9((int)pcVar7,0,(int)local_20);
            recovered_20fa9((int)local_174,0,0x44);
            recovered_20f42((int)local_174,0x3f248,8);
            local_16c = 1;
            local_168 = local_38;
            local_164 = local_40;
            local_160 = 1;
            local_15c = local_34;
            local_158 = local_2c;
            local_154 = (uint)local_30;
            local_150 = (char *)local_18;
            local_14c = local_14;
            local_144 = pcVar15;
            if (local_1c != (char *)0x0) {
              local_144 = local_1c;
            }
            local_148 = local_24;
            recovered_20f42((int)pcVar7,(int)local_174,0x44);
            iVar8 = local_160 * local_38;
            pcVar6 = pcVar7 + iVar8;
            pcVar6[0] = -1;
            pcVar6[1] = -1;
            pcVar6[2] = -1;
            pcVar6[3] = -1;
            pcVar6 = pcVar7 + iVar8 + 4;
            pcVar6[0] = -1;
            pcVar6[1] = -1;
            pcVar6[2] = -1;
            pcVar6[3] = -1;
            local_1c = pcVar7;
            local_18 = (byte *)(pcVar7 + iVar8);
            for (pbVar20 = (byte *)0x0; pbVar20 != local_24; pbVar20 = pbVar20 + 1) {
              uVar5 = local_668[(int)pbVar20];
              for (uVar16 = 1; uVar16 - uVar5 != 1; uVar16 = uVar16 + 1) {
                iVar21 = *(int *)(abStack_41e68 + (int)pbVar20 * 4) + uVar16;
                if (uVar16 == uVar5) {
                  iVar21 = -1;
                }
                *(int *)(pcVar7 + iVar8 +
                        (*(int *)(abStack_41e68 + (int)pbVar20 * 4) + uVar16) * 4 + -4) = iVar21;
              }
            }
            local_30 = (byte *)(pcVar7 + (int)local_158 * local_38);
            iVar8 = 0;
            pbVar20 = (byte *)0x0;
            while (pbVar14 = local_30, local_24 != pbVar20) {
              local_14 = local_30 + iVar8;
              local_18 = pbVar20;
              recovered_20fa9((int)local_14,0,0x100);
              recovered_219e1((char *)local_14,0xf0,&DAT_0003f336,&DAT_00044df0 + iVar8);
              *(undefined4 *)(pbVar14 + iVar8 + 0xf0) =
                   *(undefined4 *)(abStack_41e68 + (int)local_18 * 4);
              *(undefined4 *)(pbVar14 + iVar8 + 0xf4) = *(undefined4 *)((int)&DAT_00044ee8 + iVar8);
              *(undefined4 *)(pbVar14 + iVar8 + 0xf8) = *(undefined4 *)((int)&DAT_00044eec + iVar8);
              iVar8 = iVar8 + 0x100;
              pbVar20 = local_18 + 1;
            }
            local_30 = (byte *)(local_1c + (int)local_150 * local_38);
            pbVar20 = (byte *)0x0;
            pcVar6 = local_28;
            while (pbVar20 != local_24) {
              local_14 = pbVar20;
              if (((&DAT_00044ee4)[(int)pbVar20 * 0x40] != 0) &&
                 ((&DAT_00044ee8)[(int)pbVar20 * 0x40] != 0)) {
                uVar5 = 0;
                local_18 = (byte *)-local_668[(int)pbVar20];
                for (iVar8 = -2; local_18 + iVar8 != (byte *)0xfffffffe; iVar8 = iVar8 + 1) {
                  pcVar15 = (char *)((&DAT_00044ee8)[(int)pbVar20 * 0x40] - uVar5);
                  if ((uint)(&DAT_00044ee8)[(int)pbVar20 * 0x40] < uVar5) {
                    pcVar15 = (char *)0x0;
                  }
                  if (pcVar6 <= pcVar15) {
                    pcVar15 = pcVar6;
                  }
                  if (pcVar15 != (char *)0x0) {
                    recovered_20f42((int)(local_30 +
                                         (*(int *)(abStack_41e68 + (int)local_14 * 4) + iVar8) *
                                         (int)pcVar6),uVar5 + (&DAT_00044ee4)[(int)pbVar20 * 0x40],
                                    (int)pcVar15);
                    pcVar6 = local_28;
                  }
                  uVar5 = uVar5 + (int)pcVar6;
                }
              }
              pbVar20 = local_14 + 1;
            }
LAB_000236ca:
            pcVar6 = local_1c;
            bVar22 = recovered_27eaa((uint)DAT_00054df4,DAT_00054e04,(int)local_1c,(uint)local_20);
            recovered_20dfd((int)pcVar6);
            return bVar22;
          }
        }
      }
    }
  }
  else if (DAT_00054e28 == '\x01') {
    local_28 = DAT_00054e10;
    local_34 = DAT_00054dfc;
    local_40 = DAT_00054e00;
    local_2c = (char *)DAT_00054e14;
    local_38 = DAT_00054e18;
    local_30 = (byte *)DAT_00054e1c;
    if ((DAT_00054e1c != 0 &&
         ((DAT_00054e18 != 0 && (DAT_00054e14 != 0 && DAT_00054e00 != (char *)0x0)) &&
         ((DAT_00054dfc != (char *)0x0 && DAT_00054df8 == 0x200) &&
         (char *)0xfffffffc < DAT_00054e10 + -5))) && (DAT_00054e08 != (char *)0x0)) {
      local_64 = DAT_00054e20;
      local_60 = (char *)0;
      if (DAT_00054e10 != (char *)0x4) {
        local_60 = (char *)(DAT_00054e20 * 0x20 + 0x1ff >> 9);
      }
      local_4c = (char *)(DAT_00054e1c * DAT_00054e18 + DAT_00054e14);
      local_48 = (char *)((int)local_4c + (int)local_60);
      pcVar6 = DAT_00054e08 + -(int)local_48;
      if ((local_48 <= DAT_00054e08 && pcVar6 != (char *)0x0) &&
         (local_70 = (uint)pcVar6 / (uint)DAT_00054dfc, DAT_00054dfc <= pcVar6)) {
        local_6c = DAT_00054e08;
        local_5c = (uint)(DAT_00054e10 == (char *)0x4) * 2;
        recovered_20fa9((int)abStack_41e68,0,0x41800);
        abStack_41e68[0] = 0xff;
        abStack_41e68[1] = 0xff;
        abStack_41e68[2] = 0xff;
        abStack_41e68[3] = 0xff;
        abStack_41e68[4] = 0xff;
        abStack_41e68[5] = 0xff;
        abStack_41e68[6] = 0xff;
        abStack_41e68[7] = 0xff;
        acStack_41c60[0] = '\x01';
        auStack_41c70[2] = 2;
        local_80[0] = (byte *)0x1;
        local_1c = &DAT_00044df0;
        pbVar20 = (byte *)0x0;
        while (pbVar20 < DAT_00054df0) {
          PF_PART1(local_668[0], 0) = '\0';
          if ((&DAT_00044df0)[(int)pbVar20 * 0x100] == '\0') {
            return false;
          }
          local_20 = &DAT_00044df0 + (int)pbVar20 * 0x100;
          iVar8 = 0;
          local_44 = (byte *)((&DAT_00044eec)[(int)pbVar20 * 0x40] & 2);
          pbVar14 = (byte *)0x0;
          local_3c = pbVar20;
          do {
            pcVar6 = local_1c;
            for (uVar5 = 0; (local_1c[uVar5 + iVar8] != '\0' && (local_1c[uVar5 + iVar8] != '/'));
                uVar5 = uVar5 + 1) {
            }
            if (uVar5 == 0) {
              return false;
            }
            if (0xf0 < uVar5) {
              return false;
            }
            local_14 = (byte *)iVar8;
            recovered_20f42((int)local_174,(int)(local_20 + iVar8),uVar5);
            local_174[uVar5] = 0;
            local_18 = (byte *)CONCAT31(PF_PART3(local_18, 1),pcVar6[uVar5 + iVar8]);
            if ((char)local_668[0] == '\0') {
              recovered_219e1((char *)local_268,0xf1,&DAT_0003f336,local_174);
            }
            else {
              recovered_219e1((char *)local_268,0xf1,str_0003f8a6,local_668,local_174);
            }
            if ((char)local_268[0] == '\0') {
              return false;
            }
            if (((char)local_18 == '\0') && (local_44 == (byte *)0x0)) {
              uVar4 = recovered_281fa((int *)abStack_41e68,(uint *)local_80,(int)pbVar14,
                                      (int)local_174,(int)local_268,(int)local_3c,'\0',
                                      *(uint *)(local_20 + 0xfc) & 0xfffffffd,(uint *)0x0);
              if ((char)uVar4 == '\0') {
                return false;
              }
              break;
            }
            local_58[0] = (byte *)0xffffffff;
            uVar16 = 2;
            pbVar20 = (byte *)0xffffffff;
            if ((char)local_18 == '\0') {
              uVar16 = *(uint *)(local_20 + 0xfc) | 2;
              pbVar20 = local_3c;
            }
            local_24 = pbVar14;
            uVar4 = recovered_281fa((int *)abStack_41e68,(uint *)local_80,(int)pbVar14,
                                    (int)local_174,(int)local_268,(int)pbVar20,'\x01',uVar16,
                                    (uint *)local_58);
            pbVar14 = local_58[0];
            if ((char)uVar4 == '\0') {
              return false;
            }
            recovered_219e1((char *)local_668,0xf1,&DAT_0003f336,local_268);
            iVar8 = (int)local_14 + uVar5 + 1;
          } while ((char)local_18 != '\0');
          local_1c = local_1c + 0x100;
          pbVar20 = local_3c + 1;
        }
        local_44 = auStack_41c54;
        local_14 = (byte *)0x1;
        local_18 = local_80[0];
LAB_00022b63:
        if (local_14 < local_18) {
          local_20 = abStack_41e68 + (int)local_14 * 0x20c;
          local_24 = abStack_41e68 + (int)local_14 * 0x20c + 8;
          local_1c = (char *)0x0;
LAB_00022b8c:
          if (local_1c == (char *)0xf4240) {
            return false;
          }
          if ((local_1c == (char *)0x0) && (bVar9 = *local_24, bVar9 != 0)) {
            pbVar14 = (byte *)0x0;
            pbVar20 = local_24;
            do {
              if (bVar9 == 0x2e) {
                pbVar14 = pbVar20;
              }
              else if (bVar9 == 0) goto LAB_00022d9b;
              bVar9 = pbVar20[1];
              pbVar20 = pbVar20 + 1;
            } while( true );
          }
          goto LAB_00022b9f;
        }
        local_1c = local_40 + -1;
        local_44 = local_18 + -1;
        local_20 = (byte *)0x2;
        pcVar6 = local_28;
        for (local_14 = (byte *)0x0; pcVar15 = local_6c, local_14 != local_18;
            local_14 = local_14 + 1) {
          if (acStack_41c60[(int)local_14 * 0x20c] == '\x01') {
            local_24 = abStack_41e68 + (int)local_14 * 0x20c;
            uVar5 = (uint)(local_14 != (byte *)0x0) * 2 + 1;
            pbVar20 = abStack_41a53;
            pbVar14 = local_14;
            pbVar17 = local_44;
            while (bVar22 = pbVar17 != (byte *)0x0, pbVar17 = pbVar17 + -1, bVar22) {
              if (*(byte **)(pbVar20 + -0x209) == pbVar14) {
                iVar8 = 1;
                if (*pbVar20 == 1) {
                  uVar16 = recovered_284ca((int)(pbVar20 + -0x201));
                  iVar8 = uVar16 + 1;
                  pbVar14 = local_14;
                  pcVar6 = local_28;
                }
                uVar5 = uVar5 + iVar8;
              }
              pbVar20 = pbVar20 + 0x20c;
            }
            *(uint *)(local_24 + 0x204) = uVar5;
            if (pbVar14 == (byte *)0x0) {
              if (pcVar6 == (char *)0x4) {
                uVar16 = (uint)(local_1c + uVar5 * 0x20) / (uint)local_40;
                if (local_1c + uVar5 * 0x20 < local_40) {
                  uVar16 = 1;
                }
                *(uint *)(local_24 + 0x1fc) = uVar16;
                local_24[0x1f8] = 2;
                local_24[0x1f9] = 0;
                local_24[0x1fa] = 0;
                local_24[0x1fb] = 0;
                local_20 = (byte *)(uVar16 + 2);
                pcVar6 = local_28;
              }
              else {
                if (local_64 < uVar5) {
                  return false;
                }
                local_24[0x1fc] = 0;
                local_24[0x1fd] = 0;
                local_24[0x1fe] = 0;
                local_24[0x1ff] = 0;
                local_24[0x1f8] = 0;
                local_24[0x1f9] = 0;
                local_24[0x1fa] = 0;
                local_24[0x1fb] = 0;
                local_14 = (byte *)0x0;
              }
            }
            else {
              uVar16 = (uint)(local_1c + uVar5 * 0x20) / (uint)local_40;
              if (local_1c + uVar5 * 0x20 < local_40) {
                uVar16 = 1;
              }
              *(uint *)(local_24 + 0x1fc) = uVar16;
              *(byte **)(local_24 + 0x1f8) = local_20;
              local_20 = (byte *)((int)local_20 + uVar16);
              pcVar6 = local_28;
            }
          }
        }
        local_14 = DAT_00054df0;
        pcVar6 = &cStack_41a54;
        for (pbVar20 = (byte *)0x1; pbVar20 < local_18; pbVar20 = pbVar20 + 1) {
          if (*pcVar6 == '\0') {
            pbVar14 = *(byte **)(pcVar6 + -0x204);
            if (pbVar14 == (byte *)0xffffffff) {
              return false;
            }
            if (DAT_00054df0 <= pbVar14) {
              return false;
            }
            iVar8 = (&DAT_00044ee8)[(int)pbVar14 * 0x40];
            if (iVar8 == 0) {
              pcVar6[-0xffffffff0000000c] = '\0';
              pcVar6[-0xffffffff0000000b] = '\0';
              pcVar6[-0xffffffff0000000a] = '\0';
              pcVar6[-0xffffffff00000009] = '\0';
            }
            else {
              uVar5 = (uint)(local_1c + iVar8) / (uint)local_40;
              *(uint *)(pcVar6 + -0xc) = uVar5;
              if (local_40 <= local_1c + iVar8) {
                *(byte **)(pcVar6 + -0x10) = local_20;
                local_20 = (byte *)((int)local_20 + uVar5);
                goto LAB_00023073;
              }
            }
            pcVar6[-0xffffffff00000010] = '\0';
            pcVar6[-0xffffffff0000000f] = '\0';
            pcVar6[-0xffffffff0000000e] = '\0';
            pcVar6[-0xffffffff0000000d] = '\0';
          }
LAB_00023073:
          pcVar6 = pcVar6 + 0x20c;
        }
        uVar5 = (int)local_20 - 2;
        if (local_20 < 2) {
          uVar5 = 0;
        }
        if (local_70 < uVar5) {
          return false;
        }
        local_20 = (byte *)((int)(local_48 + uVar5 * (int)local_34) * 0x200);
        pcVar6 = recovered_20df4((uint)local_20);
        pcVar7 = local_28;
        if (pcVar6 == (char *)0x0) {
          return false;
        }
        local_1c = pcVar6;
        recovered_20fa9((int)pcVar6,0,(int)local_20);
        pcVar6[0] = -0x15;
        pcVar6[1] = '<';
        pcVar6[2] = -0x70;
        recovered_20f42((int)(pcVar6 + 3),0x3f875,8);
        pcVar1 = local_2c;
        pcVar6[0x1c] = '\0';
        pcVar6[0x1d] = '\0';
        pcVar6[0x1e] = '\0';
        pcVar6[0x1f] = '\0';
        pcVar19 = (char *)0x0;
        if (pcVar15 < (char *)0x10000) {
          pcVar19 = pcVar15;
        }
        pcVar6[0xb] = '\0';
        pcVar6[0xc] = '\x02';
        pcVar6[0xd] = (char)local_34;
        if (pcVar15 < (char *)0x10000) {
          pcVar15 = (char *)0x0;
        }
        local_24 = (byte *)((uint)pcVar15 >> 0x10);
        local_14 = (byte *)((uint)pcVar15 >> 0x18);
        pcVar6[0xe] = (char)local_2c;
        pcVar6[0xf] = (char)((uint)local_2c >> 8);
        bVar22 = pcVar7 != (char *)0x4;
        uVar10 = (undefined2)local_64;
        if (!bVar22) {
          uVar10 = 0;
        }
        pcVar6[0x10] = (char)local_38;
        pcVar6[0x11] = (char)uVar10;
        pcVar6[0x12] = (char)((ushort)uVar10 >> 8);
        pcVar6[0x13] = (char)pcVar19;
        pcVar6[0x14] = (char)((uint)pcVar19 >> 8);
        pbVar20 = local_30;
        if (!bVar22) {
          pbVar20 = (byte *)0x0;
        }
        pcVar6[0x15] = -8;
        pcVar6[0x16] = (char)pbVar20;
        pcVar6[0x17] = (char)((uint)pbVar20 >> 8);
        pcVar6[0x18] = '?';
        pcVar6[0x19] = '\0';
        pcVar6[0x1a] = -1;
        pcVar6[0x1b] = '\0';
        pcVar6[0x20] = (char)pcVar15;
        pcVar6[0x21] = (char)((uint)pcVar15 >> 8);
        pcVar6[0x22] = (char)((uint)pcVar15 >> 0x10);
        pcVar6[0x23] = (char)((uint)pcVar15 >> 0x18);
        if (bVar22) {
          pcVar6[0x24] = -0x80;
          pcVar6[0x26] = ')';
          pcVar6[0x27] = 'S';
          pcVar6[0x28] = 'F';
          pcVar6[0x29] = 'M';
          pcVar6[0x2a] = 'W';
          recovered_20f42((int)(pcVar6 + 0x2b),0x3f87e,0xb);
          pcVar6 = pcVar6 + 0x36;
          pcVar15 = str_0003f89d;
          if (DAT_00054e10 == (char *)0x2) {
            pcVar15 = str_0003f894;
          }
          iVar8 = 8;
LAB_000232a3:
          recovered_20f42((int)pcVar6,(int)pcVar15,iVar8);
        }
        else {
          pcVar6[0x24] = (char)local_30;
          pcVar6[0x25] = (char)((uint)local_30 >> 8);
          pcVar6[0x26] = (char)((uint)local_30 >> 0x10);
          pcVar6[0x27] = (char)((uint)local_30 >> 0x18);
          pcVar6[0x28] = '\0';
          pcVar6[0x29] = '\0';
          pcVar6[0x2a] = '\0';
          pcVar6[0x2b] = '\0';
          pcVar6[0x2c] = '\x02';
          pcVar6[0x2d] = '\0';
          pcVar6[0x2e] = '\0';
          pcVar6[0x2f] = '\0';
          pcVar6[0x30] = '\x01';
          pcVar6[0x31] = '\0';
          cVar3 = '\0';
          if (6 < local_2c) {
            cVar3 = '\x06';
          }
          pcVar6[0x32] = cVar3;
          pcVar6[0x33] = '\0';
          pcVar6[0x40] = -0x80;
          pcVar6[0x42] = ')';
          pcVar6[0x43] = 'S';
          pcVar6[0x44] = 'F';
          pcVar6[0x45] = 'M';
          pcVar6[0x46] = 'W';
          recovered_20f42((int)(pcVar6 + 0x47),0x3f87e,0xb);
          recovered_20f42((int)(pcVar6 + 0x52),0x3f88b,8);
          if ((1 < pcVar1) && (0x3ff < local_20)) {
            local_1c[1000] = -1;
            local_1c[0x3e9] = -1;
            local_1c[0x3ea] = -1;
            local_1c[0x3eb] = -1;
            local_1c[0x3ec] = -1;
            local_1c[0x3ed] = -1;
            local_1c[0x3ee] = -1;
            local_1c[0x3ef] = -1;
            builtin_strncpy(local_1c + 0x200,"RRaA",4);
            local_1c[0x3e4] = 'r';
            local_1c[0x3e5] = 'r';
            local_1c[0x3e6] = 'A';
            local_1c[999] = 'a';
            local_1c[0x3fe] = 'U';
            local_1c[0x3ff] = -0x56;
            if ((6 < local_2c) && (0xdff < local_20)) {
              pcVar6 = local_1c + 0xc00;
              iVar8 = 0x200;
              pcVar15 = local_1c;
              goto LAB_000232a3;
            }
          }
        }
        pcVar15 = local_2c;
        local_1c[0x1fe] = 'U';
        pcVar6 = DAT_00054e10;
        local_1c[0x1ff] = -0x56;
        local_14 = (byte *)(local_1c + (int)local_2c * 0x200);
        (local_1c + (int)local_2c * 0x200)[0] = -8;
        (local_1c + (int)local_2c * 0x200)[1] = -1;
        local_2c = (char *)((int)local_2c * 0x200);
        local_1c[((int)pcVar15 * 0x100 + 1) * 2] = -1;
        if (pcVar6 == (char *)0x3) {
          local_14[3] = 0xff;
        }
        else if (pcVar6 != (char *)0x2) {
          local_14[3] = 0xf;
          local_14[4] = 0xff;
          local_14[5] = 0xff;
          local_14[6] = 0xff;
          local_14[7] = 0xf;
          for (uVar5 = 1; uVar5 - 1 < auStack_41c70[1]; uVar5 = uVar5 + 1) {
            if (uVar5 == auStack_41c70[1]) {
              uVar16 = 0;
              if (DAT_00054e10 + -2 < (char *)0x3) {
                uVar16 = *(uint *)(str_0003f208 + (int)DAT_00054e10 * 4 + 8);
              }
            }
            else {
              uVar16 = local_5c + uVar5;
            }
            recovered_27f60((int)local_14,(int)DAT_00054e10,(local_5c + uVar5) - 1,uVar16);
          }
        }
        pbVar20 = (byte *)0x1;
        while (pbVar20 < local_18) {
          local_24 = pbVar20;
          for (uVar5 = 1; uVar5 - 1 < auStack_41c70[(int)pbVar20 * 0x83 + 1]; uVar5 = uVar5 + 1) {
            if (uVar5 == auStack_41c70[(int)pbVar20 * 0x83 + 1]) {
              uVar16 = 0;
              if (DAT_00054e10 + -2 < (char *)0x3) {
                uVar16 = *(uint *)(str_0003f208 + (int)DAT_00054e10 * 4 + 8);
              }
            }
            else {
              uVar16 = uVar5 + auStack_41c70[(int)pbVar20 * 0x83];
            }
            recovered_27f60((int)local_14,(int)DAT_00054e10,
                            (auStack_41c70[(int)pbVar20 * 0x83] + uVar5) - 1,uVar16);
          }
          pbVar20 = local_24 + 1;
        }
        local_30 = (byte *)((int)local_30 * 0x200);
        pbVar20 = local_30 + (int)local_2c + (int)local_1c;
        for (uVar5 = 1; pbVar14 = local_30, uVar5 < local_38; uVar5 = uVar5 + 1) {
          recovered_20f42((int)pbVar20,(int)local_14,(int)local_30);
          pbVar20 = pbVar20 + (int)pbVar14;
        }
        local_4c = local_1c + (int)local_4c * 0x200;
        local_60 = (char *)((int)local_60 << 9);
        local_48 = local_1c + (int)local_48 * 0x200;
        pcVar6 = local_28;
        for (pbVar20 = (byte *)0x0; pbVar20 != local_18; pbVar20 = pbVar20 + 1) {
          local_268[0] = (char *)0x0;
          if (acStack_41c60[(int)pbVar20 * 0x20c] == '\x01') {
            local_14 = pbVar20;
            local_2c = local_60;
            local_34 = local_4c;
            if (pcVar6 == (char *)0x4 || pbVar20 != (byte *)0x0) {
              local_34 = local_48 + (auStack_41c70[(int)pbVar20 * 0x83] - 2) * (int)local_40;
              local_2c = (char *)(auStack_41c70[(int)pbVar20 * 0x83 + 1] * (int)local_40);
              if (pbVar20 != (byte *)0x0) {
                recovered_27ff5((int)local_668,0x3f252);
                recovered_27ff5((int)local_174,0x3f348);
                uVar4 = recovered_2802a((int)local_34,(uint)local_2c,(int *)local_268,0x3f252,
                                        (int)local_668,'\0',0x10,auStack_41c70[(int)pbVar20 * 0x83],
                                        0);
                if ((char)uVar4 == '\0') {
                  return false;
                }
                uVar5 = 0;
                if (local_28 == (char *)0x4 || 0 < *(int *)(abStack_41e68 + (int)pbVar20 * 0x20c)) {
                  uVar5 = auStack_41c70[*(int *)(abStack_41e68 + (int)pbVar20 * 0x20c) * 0x83];
                }
                uVar4 = recovered_2802a((int)local_34,(uint)local_2c,(int *)local_268,0x3f348,
                                        (int)local_174,'\0',0x10,uVar5,0);
                if ((char)uVar4 == '\0') {
                  return false;
                }
              }
            }
            pbVar20 = abStack_41a53;
            for (pbVar14 = (byte *)0x1; pbVar14 < local_18; pbVar14 = pbVar14 + 1) {
              if (*(byte **)(pbVar20 + -0x209) == local_14) {
                uVar4 = 0;
                if (pbVar20[-1] == 0) {
                  pbVar17 = *(byte **)(pbVar20 + -0x205);
                  if (pbVar17 == (byte *)0xffffffff) {
                    return false;
                  }
                  if (DAT_00054df0 <= pbVar17) {
                    return false;
                  }
                  uVar4 = (&DAT_00044ee8)[(int)pbVar17 * 0x40];
                }
                local_24 = pbVar20 + -0x201;
                local_30 = pbVar20 + -0x1f;
                local_38 = (uint)*pbVar20;
                uVar4 = recovered_2802a((int)local_34,(uint)local_2c,(int *)local_268,
                                        (int)(pbVar20 + -0x201),(int)(pbVar20 + -0x1f),*pbVar20,
                                        (pbVar20[-9] & 1 | (pbVar20[-1] ^ 1) << 4) + 0x10,
                                        *(undefined4 *)(pbVar20 + -0x11),uVar4);
                if ((char)uVar4 == '\0') {
                  return false;
                }
              }
              pbVar20 = pbVar20 + 0x20c;
            }
            pcVar6 = local_28;
            pbVar20 = local_14;
            if (local_268[0] < local_2c) {
              local_34[(int)local_268[0]] = '\0';
            }
          }
        }
        pbVar20 = (byte *)0x1;
        while (pbVar20 < local_18) {
          local_24 = pbVar20;
          iVar8 = (int)pbVar20 * 0x20c;
          if (acStack_41c60[iVar8] == '\0') {
            local_14 = abStack_41e68 + iVar8;
            uVar5 = auStack_41c70[(int)pbVar20 * 0x83 + 1];
            if (uVar5 != 0) {
              pbVar20 = *(byte **)(abStack_41e68 + iVar8 + 4);
              if (pbVar20 == (byte *)0xffffffff) {
                return false;
              }
              if (DAT_00054df0 <= pbVar20) {
                return false;
              }
              uVar16 = 0;
              local_28 = &DAT_00044df0 + (int)pbVar20 * 0x100;
              for (iVar8 = -2; pcVar6 = local_40, iVar8 + 2U < uVar5; iVar8 = iVar8 + 1) {
                pcVar15 = (char *)(*(uint *)(local_28 + 0xf8) - uVar16);
                if (*(uint *)(local_28 + 0xf8) < uVar16) {
                  pcVar15 = (char *)0x0;
                }
                if (local_40 <= pcVar15) {
                  pcVar15 = local_40;
                }
                if (pcVar15 != (char *)0x0) {
                  recovered_20f42((int)(local_48 +
                                       (*(int *)(local_14 + 0x1f8) + iVar8) * (int)local_40),
                                  uVar16 + *(int *)(local_28 + 0xf4),(int)pcVar15);
                  uVar5 = *(uint *)(local_14 + 0x1fc);
                }
                uVar16 = uVar16 + (int)pcVar6;
              }
            }
          }
          pbVar20 = local_24 + 1;
        }
        goto LAB_000236ca;
      }
    }
  }
  return false;
LAB_00022d9b:
  if (pbVar14 == (byte *)0x0) {
    uVar5 = 0;
    pbVar20 = (byte *)recovered_20ff4((int)local_24);
  }
  else {
    pbVar20 = pbVar14 + -(int)local_24;
    if ((pbVar20 == (byte *)0x0) || (pbVar14[1] == 0)) goto LAB_00022b9f;
    uVar5 = recovered_20ff4((int)(pbVar14 + 1));
  }
  local_68 = uVar5;
  local_3c = pbVar20;
  if (3 < uVar5 || pbVar20 + -9 < (byte *)0xfffffff8) {
LAB_00022b9f:
    pbVar20 = local_24;
    pbVar17 = (byte *)0x0;
    pbVar14 = local_24;
    do {
      if (*pbVar14 == 0x2e) {
        pbVar17 = pbVar14;
      }
      else if (*pbVar14 == 0) goto LAB_00022bb9;
      pbVar14 = pbVar14 + 1;
    } while( true );
  }
  recovered_20fa9((int)local_58,0x20,0xb);
  for (pbVar20 = (byte *)0x0; local_3c != pbVar20; pbVar20 = pbVar20 + 1) {
    bVar9 = local_44[(int)pbVar20];
    bVar13 = bVar9 - 0x20;
    if (0x19 < (byte)(bVar9 + 0x9f)) {
      bVar13 = bVar9;
    }
    uVar4 = recovered_2847c(bVar13);
    if ((char)uVar4 == '\0') goto LAB_00022b9f;
    *(byte *)((int)local_58 + (int)pbVar20) = bVar13;
  }
  for (uVar5 = 0; local_68 != uVar5; uVar5 = uVar5 + 1) {
    bVar9 = pbVar14[uVar5 + 1];
    bVar13 = bVar9 - 0x20;
    if (0x19 < (byte)(bVar9 + 0x9f)) {
      bVar13 = bVar9;
    }
    uVar4 = recovered_2847c(bVar13);
    if ((char)uVar4 == '\0') goto LAB_00022b9f;
    local_50[uVar5] = bVar13;
  }
  goto LAB_00022d4f;
LAB_00022bb9:
  if (pbVar17 == (byte *)0x0) {
    local_3c = (byte *)0x0;
    iVar8 = recovered_20ff4((int)local_24);
  }
  else {
    iVar8 = (int)pbVar17 - (int)local_24;
    local_3c = (byte *)recovered_20ff4((int)(pbVar17 + 1));
  }
  recovered_283ea((int)pbVar20,iVar8,(int)local_668);
  pbVar20 = pbVar17 + 1;
  if (pbVar17 == (byte *)0x0) {
    pbVar20 = &DAT_0003f254;
  }
  recovered_283ea((int)pbVar20,(int)local_3c,(int)local_174);
  if ((char)local_668[0] == '\0') {
    recovered_219e1((char *)local_668,0xf1,&DAT_0003f8ac);
  }
  recovered_219e1((char *)local_80,0x10,&DAT_0003f8b1,
                  (int)local_1c + (uint)(local_1c == (char *)0x0));
  uVar5 = recovered_20ff4((int)local_80);
  uVar16 = -(uVar5 - 8);
  if (7 < uVar5) {
    uVar16 = 1;
  }
  uVar12 = recovered_20ff4((int)local_668);
  if (uVar12 < uVar16) {
    uVar16 = recovered_20ff4((int)local_668);
  }
  iVar8 = uVar16 + (uVar16 == 0);
  recovered_20fa9((int)local_58,0x20,0xb);
  recovered_20f42((int)local_58,(int)local_668,iVar8);
  uVar16 = 8U - iVar8;
  if (uVar5 < 8U - iVar8) {
    uVar16 = uVar5;
  }
  recovered_20f42((int)local_58 + iVar8,(int)local_80,uVar16);
  uVar5 = recovered_20ff4((int)local_174);
  iVar8 = 3;
  if (uVar5 < 4) {
    iVar8 = recovered_20ff4((int)local_174);
  }
  recovered_20f42((int)local_50,(int)local_174,iVar8);
LAB_00022d4f:
  iVar8 = *(int *)local_20;
  pbVar17 = (byte *)0x0;
  puVar18 = auStack_41c7e;
  pbVar20 = local_18;
  pbVar14 = local_14;
  while( true ) {
    pbVar2 = local_20;
    if (pbVar20 == pbVar17) {
      pbVar20 = local_20 + 0x1ea;
      recovered_20f42((int)pbVar20,(int)local_58,0xb);
      recovered_28347((int)pbVar20,(int)local_268);
      iVar8 = recovered_2100f((int)local_268,(int)local_24);
      pbVar2[0x209] = iVar8 != 0;
      local_14 = local_14 + 1;
      local_44 = local_44 + 0x20c;
      goto LAB_00022b63;
    }
    if (((pbVar14 != pbVar17) && (*(int *)(puVar18 + -0x1ea) == iVar8)) &&
       (iVar21 = recovered_20fc5((int)puVar18,(int)local_58,0xb), pbVar20 = local_18,
       pbVar14 = local_14, iVar21 == 0)) break;
    pbVar17 = pbVar17 + 1;
    puVar18 = puVar18 + 0x20c;
  }
  local_1c = (char *)((int)local_1c + 1);
  goto LAB_00022b8c;
}

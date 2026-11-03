#include "functions.h"
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
#undef DAT_00042730
#define DAT_00042730 (*(uint8_t *)(0x42730U))
#undef DAT_00042cce
#define DAT_00042cce (*(uint8_t *)(0x42cceU))
#undef DAT_00042cd3
#define DAT_00042cd3 (*(uint8_t *)(0x42cd3U))
#undef DAT_00047dfc
#define DAT_00047dfc (*(byte * *)(0x47dfcU))
#undef DAT_00047e00
#define DAT_00047e00 (*(byte * *)(0x47e00U))
#undef DAT_00047e14
#define DAT_00047e14 (*(byte *)(0x47e14U))
#undef DAT_00047e18
#define DAT_00047e18 (*(byte * *)(0x47e18U))
#undef DAT_00047e1c
#define DAT_00047e1c (*(byte * *)(0x47e1cU))
#undef DAT_00047e20
#define DAT_00047e20 (*(byte * *)(0x47e20U))
#undef DAT_00047e24
#define DAT_00047e24 (*(int *)(0x47e24U))
#undef DAT_00047e28
#define DAT_00047e28 (*(byte * *)(0x47e28U))
#undef DAT_00047e34
#define DAT_00047e34 (*(byte * *)(0x47e34U))
#undef DAT_00047e68
#define DAT_00047e68 (*(uint *)(0x47e68U))
#undef DAT_00047e6c
#define DAT_00047e6c (*(byte * *)(0x47e6cU))
#undef DAT_00047e70
#define DAT_00047e70 (*(int *)(0x47e70U))
#undef DAT_00047e74
#define DAT_00047e74 (*(byte * *)(0x47e74U))
#undef DAT_00047e7c
#define DAT_00047e7c (*(char *)(0x47e7cU))
#undef str_000425c0
#define str_000425c0 (*(char (*)[1])(0x425c0U))
#undef str_00042cb6
#define str_00042cb6 (*(char (*)[1])(0x42cb6U))
#undef str_00042cbf
#define str_00042cbf (*(char (*)[1])(0x42cbfU))
#undef str_00042cc8
#define str_00042cc8 (*(char (*)[1])(0x42cc8U))
#define abStack_41b58 (*(byte (*)[12])(frame + 16))
#define pbStack_41b4c (*(byte * *)(frame + 28))
#define pbStack_41b48 (*(byte * *)(frame + 32))
#define iStack_41b44 (*(int *)(frame + 36))
#define pbStack_41b40 (*(byte * *)(frame + 40))
#define pbStack_41b3c (*(byte * *)(frame + 44))
#define pbStack_41b38 (*(byte * *)(frame + 48))
#define pbStack_41b34 (*(byte * *)(frame + 52))
#define pbStack_41b30 (*(byte * *)(frame + 56))
#define pbStack_41b2c (*(byte * *)(frame + 60))
#define pbStack_41b28 (*(byte * *)(frame + 64))
#define auStack_4196e (*(undefined1 (*)[14])(frame + 506))
#define auStack_41960 (*(uint (*)[4])(frame + 520))
#define acStack_41950 (*(char (*)[12])(frame + 536))
#define auStack_41944 (*(undefined1 (*)[512])(frame + 548))
#define cStack_41744 (*(char *)(frame + 1060))
#define abStack_41743 (*(byte (*)[267245])(frame + 1061))
#define local_356 (*(undefined1 (*)[241])(frame + 268306))
#define local_265 (*(char (*)[241])(frame + 268547))
#define local_174 (*(byte * (*)[61])(frame + 268788))
#define local_80 (*(byte * (*)[4])(frame + 269032))
#define local_70 (*(uint *)(frame + 269048))
#define local_6c (*(byte * *)(frame + 269052))
#define local_68 (*(byte * *)(frame + 269056))
#define local_64 (*(int *)(frame + 269060))
#define local_60 (*(uint (*)[2])(frame + 269064))
#define local_58 (*(byte (*)[4])(frame + 269072))
#define local_54 (*(byte * *)(frame + 269076))
#define local_50 (*(byte * *)(frame + 269080))
#define local_4c (*(byte * *)(frame + 269084))
#define local_48 (*(byte * *)(frame + 269088))
#define local_44 (*(byte * *)(frame + 269092))
#define local_40 (*(byte * *)(frame + 269096))
#define local_3c (*(byte * *)(frame + 269100))
#define local_38 (*(byte * *)(frame + 269104))
#define local_34 (*(byte * *)(frame + 269108))
#define local_30 (*(byte * *)(frame + 269112))
#define local_2c (*(byte * *)(frame + 269116))
#define local_28 (*(byte * *)(frame + 269120))
#define local_24 (*(byte * *)(frame + 269124))
#define local_20 (*(byte * *)(frame + 269128))
#define local_1c (*(byte * *)(frame + 269132))
#define local_18 (*(byte * *)(frame + 269136))
#define local_14 (*(byte * *)(frame + 269140))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22ff4
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_22ff4(void)

{
  unsigned char frame[269192];

  byte *pbVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  byte bVar8;
  undefined2 uVar9;
  byte *pbVar10;
  byte bVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  undefined1 *puVar15;
  uint uVar16;
  byte *pbVar17;
  char *pcVar18;
  bool bVar19;

  if (DAT_00047e34 == (byte *)0x2) {
    local_18 = DAT_00047e1c;
    if (DAT_00047e1c == (byte *)0x0 || (DAT_00047e18 == (byte *)0x0 || DAT_00047e7c != '\x01')) {
      return false;
    }
    local_24 = DAT_00047e28;
    if (DAT_00047e28 < (byte *)0x2 || (byte *)0xffff < DAT_00047e00) {
      return false;
    }
    local_20 = DAT_00047e18;
    local_44 = (byte *)((int)DAT_00047e00 << 8);
    local_38 = DAT_00047e00;
    local_2c = DAT_00047e20;
    if (DAT_00047e00 == (byte *)0x0) {
      local_14 = (byte *)0x0;
      pbVar12 = (byte *)0x0;
      local_40 = (byte *)0x0;
    }
    else {
      uVar4 = (int)DAT_00047e00 * 4;
      pbVar10 = recovered_20df4(uVar4);
      pbVar12 = recovered_20df4(uVar4);
      if (pbVar10 == (byte *)0x0 || pbVar12 == (byte *)0x0) {
        recovered_20dfd((int)pbVar10);
        goto LAB_00023a0a;
      }
      local_40 = (byte *)((uint)(local_44 + (int)local_2c + -1) / (uint)local_2c);
      local_14 = pbVar10;
    }
    pbVar13 = DAT_00047dfc + 0xf8;
    local_3c = local_40;
    for (pbVar10 = (byte *)0x0; local_38 != pbVar10; pbVar10 = pbVar10 + 1) {
      if (*(int *)pbVar13 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)(local_2c + *(int *)pbVar13 + -1) / (uint)local_2c;
      }
      *(uint *)(pbVar12 + (int)pbVar10 * 4) = uVar4;
      local_3c = local_3c + uVar4;
      pbVar13 = pbVar13 + 0x108;
    }
    pbVar13 = local_24 + -1;
    iVar5 = 0x41;
    pbVar10 = (byte *)((uint)pbVar13 / (uint)local_18);
    do {
      local_28 = pbVar10;
      iVar5 = iVar5 + -1;
      pbVar6 = local_20;
      local_1c = pbVar12;
      if (iVar5 == 0) break;
      pbVar10 = (byte *)((int)local_28 * 4 + 8);
      uVar4 = (uint)pbVar10 % (uint)local_20;
      pbVar3 = local_20 + (((int)local_28 * 4 + 8) - uVar4);
      if (uVar4 == 0) {
        pbVar3 = pbVar10;
      }
      if (local_24 <= (byte *)((uint)pbVar3 / (uint)local_20 + 1)) goto LAB_00023a01;
      pbVar10 = (byte *)(((int)pbVar13 - (uint)pbVar3 / (uint)local_20) / (uint)local_18);
    } while (pbVar10 != local_28);
    if (local_3c <= local_28) {
      pbVar10 = (byte *)((int)local_28 * 4 + 8);
      pbVar17 = (byte *)0x0;
      uVar4 = (uint)pbVar10 % (uint)local_20;
      pbVar3 = local_20 + (((int)local_28 * 4 + 8) - uVar4);
      if (uVar4 == 0) {
        pbVar3 = pbVar10;
      }
      pbVar3 = (byte *)((uint)pbVar3 / (uint)local_20);
      pbVar13 = local_28;
      if (pbVar3 + (int)local_18 * (int)local_28 + 1 <= local_24) {
        local_48 = pbVar3 + 1;
        pbVar10 = local_40 + 2;
        for (; local_38 != pbVar17; pbVar17 = pbVar17 + 1) {
          pbVar1 = pbVar10 + *(int *)(pbVar12 + (int)pbVar17 * 4);
          if (*(int *)(pbVar12 + (int)pbVar17 * 4) == 0) {
            pbVar10 = (byte *)0x0;
          }
          *(byte **)(local_14 + (int)pbVar17 * 4) = pbVar10;
          pbVar10 = pbVar1;
        }
        bVar19 = local_40 != (byte *)0x0;
        local_50 = pbVar3;
        if (((byte *)0x1 < pbVar10) && (pbVar10 + -2 <= local_28)) {
          pbVar10 = (byte *)((int)local_24 * (int)local_20);
          pbVar12 = recovered_20df4((uint)pbVar10);
          pbVar13 = local_28;
          pbVar6 = local_20;
          if (pbVar12 != (byte *)0x0) {
            local_4c = (byte *)((uint)bVar19 * 2);
            local_34 = pbVar10;
            recovered_20fa9((int)pbVar12,0,(int)pbVar10);
            pbVar13 = local_20;
            pbVar10 = pbVar12 + (int)local_20;
            pbVar10[0] = 0xff;
            pbVar10[1] = 0xff;
            pbVar10[2] = 0xff;
            pbVar10[3] = 0xff;
            pbVar10 = pbVar12 + 4 + (int)local_20;
            pbVar10[0] = 0xff;
            pbVar10[1] = 0xff;
            pbVar10[2] = 0xff;
            pbVar10[3] = 0xff;
            for (pbVar10 = (byte *)0x0; local_40 != pbVar10; pbVar10 = pbVar10 + 1) {
              pbVar6 = pbVar10 + 3;
              if (pbVar10 + 1 == local_40) {
                pbVar6 = (byte *)0xffffffff;
              }
              *(byte **)(local_20 + (int)pbVar12 + (int)pbVar10 * 4 + 8) = pbVar6;
            }
            for (pbVar10 = (byte *)0x0; pbVar10 != local_38; pbVar10 = pbVar10 + 1) {
              for (uVar4 = 1; uVar4 - 1 < *(uint *)(local_1c + (int)pbVar10 * 4); uVar4 = uVar4 + 1)
              {
                iVar5 = *(int *)(local_14 + (int)pbVar10 * 4) + uVar4;
                if (uVar4 == *(uint *)(local_1c + (int)pbVar10 * 4)) {
                  iVar5 = -1;
                }
                *(int *)(local_20 + (int)pbVar12 +
                        (*(int *)(local_14 + (int)pbVar10 * 4) + uVar4) * 4 + -4) = iVar5;
              }
            }
            local_3c = pbVar12;
            local_30 = pbVar12;
            recovered_20fa9((int)abStack_41b58,0,0x44);
            recovered_20f42((int)abStack_41b58,0x42600,8);
            pbVar12 = local_38;
            abStack_41b58[8] = 1;
            abStack_41b58[9] = 0;
            abStack_41b58[10] = 0;
            abStack_41b58[0xb] = 0;
            pbStack_41b4c = pbVar13;
            pbStack_41b48 = local_18;
            iStack_41b44 = 1;
            pbStack_41b40 = local_50;
            pbStack_41b3c = local_48;
            pbStack_41b38 = local_28;
            pbStack_41b34 = local_4c;
            pbStack_41b30 = local_44;
            pbStack_41b2c = local_38;
            pbStack_41b28 = local_24;
            recovered_20f42((int)local_30,(int)abStack_41b58,0x44);
            local_20 = (byte *)((int)pbVar13 * (int)local_48);
            if (pbVar12 != (byte *)0x0) {
              uVar4 = (int)local_40 * (int)local_2c;
              pbVar10 = recovered_20df4(uVar4);
              if (pbVar10 == (byte *)0x0) {
                recovered_20dfd((int)local_30);
                pbVar13 = local_28;
                pbVar6 = local_20;
                goto LAB_00023a01;
              }
              recovered_20fa9((int)pbVar10,0,uVar4);
              iVar5 = 0;
              local_18 = local_14;
              local_24 = pbVar10;
              while (bVar19 = pbVar12 != (byte *)0x0, pbVar12 = pbVar12 + -1, bVar19) {
                recovered_219e1((char *)pbVar10,0xf0,&DAT_00042730,DAT_00047dfc + iVar5);
                *(undefined4 *)(pbVar10 + 0xf0) = *(undefined4 *)local_18;
                pbVar13 = DAT_00047dfc;
                *(undefined4 *)(pbVar10 + 0xf4) = *(undefined4 *)(DAT_00047dfc + iVar5 + 0xf8);
                *(undefined4 *)(pbVar10 + 0xf8) = *(undefined4 *)(pbVar13 + iVar5 + 0xfc);
                iVar5 = iVar5 + 0x108;
                local_18 = local_18 + 4;
                pbVar10 = pbVar10 + 0x100;
              }
              local_18 = local_20 + (int)local_3c;
              iVar5 = 0;
              pbVar12 = local_24;
              while( true ) {
                pbVar10 = local_2c;
                if (local_40 == (byte *)0x0) break;
                local_40 = local_40 + -1;
                recovered_20f42((int)(local_18 + iVar5 * (int)local_2c),(int)pbVar12,(int)local_2c);
                iVar5 = iVar5 + 1;
                pbVar12 = pbVar12 + (int)pbVar10;
              }
              recovered_20dfd((int)local_24);
              pbVar12 = local_38;
            }
            local_3c = local_3c + (int)local_20;
            pbVar13 = (byte *)0x0;
            pbVar10 = local_1c;
            while (pbVar13 != pbVar12) {
              pbVar6 = (byte *)0x0;
              local_24 = (byte *)((int)pbVar13 * 0x108);
              local_18 = pbVar13;
              for (pbVar12 = (byte *)0xfffffffe; pbVar13 = local_2c,
                  pbVar12 + 2 < *(byte **)(pbVar10 + (int)local_18 * 4); pbVar12 = pbVar12 + 1) {
                pbVar3 = *(byte **)(DAT_00047dfc + 0xf8 + (int)local_24) + -(int)pbVar6;
                if (*(byte **)(DAT_00047dfc + 0xf8 + (int)local_24) < pbVar6) {
                  pbVar3 = (byte *)0x0;
                }
                if (local_2c <= pbVar3) {
                  pbVar3 = local_2c;
                }
                if (pbVar3 != (byte *)0x0) {
                  local_28 = pbVar12;
                  local_20 = pbVar6;
                  recovered_20f42((int)(local_3c +
                                       (int)(pbVar12 + *(int *)(local_14 + (int)local_18 * 4)) *
                                       (int)local_2c),
                                  (int)(pbVar6 + *(int *)(DAT_00047dfc + 0xf4 + (int)local_24)),
                                  (int)pbVar3);
                  pbVar10 = local_1c;
                }
                pbVar6 = pbVar6 + (int)pbVar13;
              }
              pbVar12 = local_38;
              pbVar13 = local_18 + 1;
            }
            recovered_20dfd((int)local_14);
LAB_00023917:
            recovered_20dfd((int)pbVar10);
LAB_0002391f:
            pbVar12 = local_30;
            bVar19 = recovered_29fa0((uint)DAT_00047e14,DAT_00047e24,(int)local_30,(uint)local_34);
            recovered_20dfd((int)pbVar12);
            return bVar19;
          }
        }
      }
    }
  }
  else {
    if (DAT_00047e34 != (byte *)0x1) {
      if (DAT_00047e7c != '\x01') {
        return false;
      }
      local_2c = DAT_00047e34;
      local_38 = DAT_00047e1c;
      local_40 = DAT_00047e20;
      local_28 = (byte *)DAT_00047e68;
      local_20 = DAT_00047e6c;
      local_24 = (byte *)DAT_00047e70;
      if (DAT_00047e70 == 0 ||
          ((DAT_00047e6c == (byte *)0x0 || (DAT_00047e68 == 0 || DAT_00047e20 == (byte *)0x0)) ||
          ((DAT_00047e1c == (byte *)0x0 || DAT_00047e18 != (byte *)0x200) ||
          DAT_00047e34 + -6 < (byte *)0xfffffffd))) {
        return false;
      }
      if (DAT_00047e28 == (byte *)0x0) {
        return false;
      }
      local_50 = DAT_00047e74;
      local_68 = (byte *)0;
      if (DAT_00047e34 != (byte *)0x5) {
        local_68 = (byte *)((int)DAT_00047e74 * 0x20 + 0x1ffU >> 9);
      }
      local_54 = (byte *)(DAT_00047e70 * (int)DAT_00047e6c + DAT_00047e68);
      local_48 = (byte *)((int)local_54 + (int)local_68);
      pbVar12 = DAT_00047e28 + -(int)local_48;
      if (DAT_00047e28 < local_48 || pbVar12 == (byte *)0x0) {
        return false;
      }
      local_4c = (byte *)0x0;
      local_70 = (uint)pbVar12 / (uint)DAT_00047e1c;
      if (pbVar12 < DAT_00047e1c) {
        return false;
      }
      local_6c = DAT_00047e28;
      local_64 = (uint)(DAT_00047e34 == (byte *)0x5) * 2;
      recovered_20fa9((int)abStack_41b58,0,0x41800);
      abStack_41b58[0] = 0xff;
      abStack_41b58[1] = 0xff;
      abStack_41b58[2] = 0xff;
      abStack_41b58[3] = 0xff;
      abStack_41b58[4] = 0xff;
      abStack_41b58[5] = 0xff;
      abStack_41b58[6] = 0xff;
      abStack_41b58[7] = 0xff;
      acStack_41950[0] = '\x01';
      auStack_41960[2] = 2;
      local_80[0] = (byte *)0x1;
      pbVar12 = (byte *)0x0;
      while (pbVar12 < DAT_00047e00) {
        local_44 = DAT_00047dfc + (int)pbVar12 * 0x108;
        if (DAT_00047dfc == (byte *)0x0) {
          local_34 = (byte *)0x0;
        }
        else {
          uVar4 = CONCAT31((int3)((uint)DAT_00047dfc >> 8),local_44[0xfc]) & 0xffffff02;
          local_34 = (byte *)CONCAT31((int3)(uVar4 >> 8),(byte)uVar4 >> 1);
        }
        local_265[0] = '\0';
        if (*local_44 == 0) {
          return false;
        }
        local_3c = DAT_00047dfc + (int)local_4c;
        iVar5 = 0;
        local_14 = (byte *)0x0;
        local_30 = pbVar12;
        do {
          pbVar10 = local_3c;
          pbVar12 = local_44;
          for (uVar4 = 0; (local_3c[uVar4 + iVar5] != 0 && (local_3c[uVar4 + iVar5] != 0x2f));
              uVar4 = uVar4 + 1) {
          }
          if (uVar4 == 0) {
            return false;
          }
          if (0xf0 < uVar4) {
            return false;
          }
          local_18 = (byte *)iVar5;
          recovered_20f42((int)local_356,(int)(local_44 + iVar5),uVar4);
          local_356[uVar4] = 0;
          local_1c = (byte *)CONCAT31(PF_PART3(local_1c, 1),pbVar10[uVar4 + iVar5]);
          if (local_265[0] == '\0') {
            recovered_219e1((char *)local_174,0xf1,&DAT_00042730,local_356);
          }
          else {
            recovered_219e1((char *)local_174,0xf1,str_00042cc8,local_265,local_356);
          }
          if ((char)local_174[0] == '\0') {
            return false;
          }
          if ((char)local_1c == '\0' && ((uint)local_34 & 1) == 0) {
            uVar2 = recovered_2a64a((int *)abStack_41b58,(uint *)local_80,(int)local_14,
                                    (int)local_356,(int)local_174,(int)local_30,'\0',
                                    *(uint *)(pbVar12 + 0xfc) & 0xfffffffd,(uint *)0x0);
            if ((char)uVar2 == '\0') {
              return false;
            }
            break;
          }
          local_60[0] = 0xffffffff;
          uVar16 = 2;
          pbVar10 = (byte *)0xffffffff;
          if ((char)local_1c == '\0') {
            uVar16 = *(uint *)(pbVar12 + 0xfc) | 2;
            pbVar10 = local_30;
          }
          uVar2 = recovered_2a64a((int *)abStack_41b58,(uint *)local_80,(int)local_14,(int)local_356
                                  ,(int)local_174,(int)pbVar10,'\x01',uVar16,local_60);
          if ((char)uVar2 == '\0') {
            return false;
          }
          local_14 = (byte *)local_60[0];
          recovered_219e1(local_265,0xf1,&DAT_00042730,local_174);
          iVar5 = (int)local_18 + uVar4 + 1;
        } while ((char)local_1c != '\0');
        local_4c = local_4c + 0x108;
        pbVar12 = local_30 + 1;
      }
      local_44 = auStack_41944;
      local_14 = (byte *)0x1;
      local_1c = local_80[0];
LAB_00023c93:
      if (local_14 < local_1c) {
        local_3c = abStack_41b58 + (int)local_14 * 0x20c;
        local_18 = abStack_41b58 + (int)local_14 * 0x20c + 8;
        local_34 = (byte *)0x0;
LAB_00023cc1:
        if (local_34 == (byte *)0xf4240) {
          return false;
        }
        if (local_34 == (byte *)0x0) {
          bVar8 = *local_18;
          if (bVar8 != 0) {
            pbVar10 = (byte *)0x0;
            pbVar12 = local_18;
            do {
              if (bVar8 == 0x2e) {
                pbVar10 = pbVar12;
              }
              else if (bVar8 == 0) goto LAB_00023ece;
              bVar8 = pbVar12[1];
              pbVar12 = pbVar12 + 1;
            } while( true );
          }
        }
        goto LAB_00023cd4;
      }
      local_3c = local_40 + -1;
      local_44 = local_1c + -1;
      local_34 = (byte *)0x2;
      pbVar12 = (byte *)0x0;
      pbVar10 = local_2c;
      while (pbVar13 = local_6c, pbVar12 != local_1c) {
        local_14 = pbVar12;
        if (acStack_41950[(int)pbVar12 * 0x20c] == '\x01') {
          local_18 = abStack_41b58 + (int)pbVar12 * 0x20c;
          pbVar6 = (byte *)((uint)(pbVar12 != (byte *)0x0) * 2 + 1);
          pbVar13 = abStack_41743;
          pbVar3 = local_44;
          while (bVar19 = pbVar3 != (byte *)0x0, pbVar3 = pbVar3 + -1, bVar19) {
            if (*(byte **)(pbVar13 + -0x209) == pbVar12) {
              iVar5 = 1;
              if (*pbVar13 == 1) {
                uVar4 = recovered_2a91a((int)(pbVar13 + -0x201));
                iVar5 = uVar4 + 1;
                pbVar12 = local_14;
                pbVar10 = local_2c;
              }
              pbVar6 = pbVar6 + iVar5;
            }
            pbVar13 = pbVar13 + 0x20c;
          }
          *(byte **)(local_18 + 0x204) = pbVar6;
          if (pbVar12 == (byte *)0x0) {
            if (pbVar10 == (byte *)0x5) {
              uVar4 = (uint)(local_3c + (int)pbVar6 * 0x20) / (uint)local_40;
              if (local_3c + (int)pbVar6 * 0x20 < local_40) {
                uVar4 = 1;
              }
              *(uint *)(local_18 + 0x1fc) = uVar4;
              local_18[0x1f8] = 2;
              local_18[0x1f9] = 0;
              local_18[0x1fa] = 0;
              local_18[0x1fb] = 0;
              local_34 = (byte *)(uVar4 + 2);
              pbVar10 = local_2c;
            }
            else {
              if (local_50 < pbVar6) {
                return false;
              }
              local_18[0x1fc] = 0;
              local_18[0x1fd] = 0;
              local_18[0x1fe] = 0;
              local_18[0x1ff] = 0;
              local_18[0x1f8] = 0;
              local_18[0x1f9] = 0;
              local_18[0x1fa] = 0;
              local_18[0x1fb] = 0;
            }
          }
          else {
            uVar4 = (uint)(local_3c + (int)pbVar6 * 0x20) / (uint)local_40;
            if (local_3c + (int)pbVar6 * 0x20 < local_40) {
              uVar4 = 1;
            }
            *(uint *)(local_18 + 0x1fc) = uVar4;
            *(byte **)(local_18 + 0x1f8) = local_34;
            local_34 = (byte *)((int)local_34 + uVar4);
            pbVar10 = local_2c;
          }
        }
        pbVar12 = local_14 + 1;
      }
      local_14 = DAT_00047e00;
      local_18 = DAT_00047dfc;
      pcVar18 = &cStack_41744;
      for (pbVar12 = (byte *)0x1; pbVar12 < local_1c; pbVar12 = pbVar12 + 1) {
        if (*pcVar18 == '\0') {
          pbVar10 = *(byte **)(pcVar18 + -0x204);
          if (pbVar10 == (byte *)0xffffffff) {
            return false;
          }
          if (DAT_00047e00 <= pbVar10) {
            return false;
          }
          iVar5 = *(int *)(DAT_00047dfc + (int)pbVar10 * 0x108 + 0xf8);
          if (iVar5 == 0) {
            pcVar18[-0xffffffff0000000c] = '\0';
            pcVar18[-0xffffffff0000000b] = '\0';
            pcVar18[-0xffffffff0000000a] = '\0';
            pcVar18[-0xffffffff00000009] = '\0';
          }
          else {
            uVar4 = (uint)(local_3c + iVar5) / (uint)local_40;
            *(uint *)(pcVar18 + -0xc) = uVar4;
            if (local_40 <= local_3c + iVar5) {
              *(byte **)(pcVar18 + -0x10) = local_34;
              local_34 = (byte *)((int)local_34 + uVar4);
              goto LAB_000241b6;
            }
          }
          pcVar18[-0xffffffff00000010] = '\0';
          pcVar18[-0xffffffff0000000f] = '\0';
          pcVar18[-0xffffffff0000000e] = '\0';
          pcVar18[-0xffffffff0000000d] = '\0';
        }
LAB_000241b6:
        pcVar18 = pcVar18 + 0x20c;
      }
      uVar4 = (int)local_34 - 2;
      if (local_34 < 2) {
        uVar4 = 0;
      }
      if (local_70 < uVar4) {
        return false;
      }
      local_34 = (byte *)((int)(local_48 + uVar4 * (int)local_38) * 0x200);
      pbVar10 = recovered_20df4((uint)local_34);
      pbVar12 = local_2c;
      if (pbVar10 == (byte *)0x0) {
        return false;
      }
      local_30 = pbVar10;
      recovered_20fa9((int)pbVar10,0,(int)local_34);
      pbVar10[0] = 0xeb;
      pbVar10[1] = 0x3c;
      pbVar10[2] = 0x90;
      recovered_20f42((int)(pbVar10 + 3),0x42c97,8);
      pbVar3 = local_28;
      pbVar6 = local_30;
      pbVar10[0x1c] = 0;
      pbVar10[0x1d] = 0;
      pbVar10[0x1e] = 0;
      pbVar10[0x1f] = 0;
      pbVar17 = (byte *)0x0;
      if (pbVar13 < (byte *)0x10000) {
        pbVar17 = pbVar13;
      }
      pbVar10[0xb] = 0;
      pbVar10[0xc] = 2;
      pbVar10[0xd] = (byte)local_38;
      if (pbVar13 < (byte *)0x10000) {
        pbVar13 = (byte *)0x0;
      }
      local_18 = (byte *)((uint)pbVar13 >> 0x10);
      local_14 = (byte *)((uint)pbVar13 >> 0x18);
      pbVar10[0xe] = (byte)local_28;
      pbVar10[0xf] = (byte)((uint)local_28 >> 8);
      bVar19 = pbVar12 != (byte *)0x5;
      uVar9 = SUB42(local_50,0);
      if (!bVar19) {
        uVar9 = 0;
      }
      pbVar10[0x10] = (byte)local_20;
      pbVar10[0x11] = (byte)uVar9;
      pbVar10[0x12] = (byte)((ushort)uVar9 >> 8);
      pbVar10[0x13] = (byte)pbVar17;
      pbVar10[0x14] = (byte)((uint)pbVar17 >> 8);
      pbVar12 = local_24;
      if (!bVar19) {
        pbVar12 = (byte *)0x0;
      }
      pbVar10[0x15] = 0xf8;
      pbVar10[0x16] = (byte)pbVar12;
      pbVar10[0x17] = (byte)((uint)pbVar12 >> 8);
      pbVar10[0x18] = 0x3f;
      pbVar10[0x19] = 0;
      pbVar10[0x1a] = 0xff;
      pbVar10[0x1b] = 0;
      pbVar10[0x20] = (byte)pbVar13;
      pbVar10[0x21] = (byte)((uint)pbVar13 >> 8);
      pbVar10[0x22] = (byte)((uint)pbVar13 >> 0x10);
      pbVar10[0x23] = (byte)((uint)pbVar13 >> 0x18);
      if (bVar19) {
        local_30[0x24] = 0x80;
        local_30[0x26] = 0x29;
        local_30[0x27] = 0x53;
        local_30[0x28] = 0x46;
        local_30[0x29] = 0x4d;
        local_30[0x2a] = 0x57;
        recovered_20f42((int)(local_30 + 0x2b),0x42ca0,0xb);
        pbVar6 = pbVar6 + 0x36;
        pcVar18 = str_00042cbf;
        if (DAT_00047e34 == (byte *)0x3) {
          pcVar18 = str_00042cb6;
        }
        iVar5 = 8;
LAB_000243ec:
        recovered_20f42((int)pbVar6,(int)pcVar18,iVar5);
      }
      else {
        local_30[0x24] = (byte)local_24;
        local_30[0x25] = (byte)((uint)local_24 >> 8);
        local_30[0x26] = (byte)((uint)local_24 >> 0x10);
        local_30[0x27] = (byte)((uint)local_24 >> 0x18);
        local_30[0x28] = 0;
        local_30[0x29] = 0;
        local_30[0x2a] = 0;
        local_30[0x2b] = 0;
        local_30[0x2c] = 2;
        local_30[0x2d] = 0;
        local_30[0x2e] = 0;
        local_30[0x2f] = 0;
        local_30[0x30] = 1;
        local_30[0x31] = 0;
        bVar8 = 0;
        if (6 < local_28) {
          bVar8 = 6;
        }
        local_30[0x32] = bVar8;
        local_30[0x33] = 0;
        local_30[0x40] = 0x80;
        local_30[0x42] = 0x29;
        local_30[0x43] = 0x53;
        local_30[0x44] = 0x46;
        local_30[0x45] = 0x4d;
        local_30[0x46] = 0x57;
        recovered_20f42((int)(local_30 + 0x47),0x42ca0,0xb);
        recovered_20f42((int)(pbVar6 + 0x52),0x42cad,8);
        if ((1 < pbVar3) && ((byte *)0x3ff < local_34)) {
          local_30[1000] = 0xff;
          local_30[0x3e9] = 0xff;
          local_30[0x3ea] = 0xff;
          local_30[0x3eb] = 0xff;
          local_30[0x3ec] = 0xff;
          local_30[0x3ed] = 0xff;
          local_30[0x3ee] = 0xff;
          local_30[0x3ef] = 0xff;
          local_30[0x200] = 0x52;
          local_30[0x201] = 0x52;
          local_30[0x202] = 0x61;
          local_30[0x203] = 0x41;
          local_30[0x3e4] = 0x72;
          local_30[0x3e5] = 0x72;
          local_30[0x3e6] = 0x41;
          local_30[999] = 0x61;
          local_30[0x3fe] = 0x55;
          local_30[0x3ff] = 0xaa;
          if ((6 < local_28) && ((byte *)0xdff < local_34)) {
            pbVar6 = local_30 + 0xc00;
            iVar5 = 0x200;
            pcVar18 = (char *)local_30;
            goto LAB_000243ec;
          }
        }
      }
      local_30[0x1fe] = 0x55;
      pbVar12 = DAT_00047e34;
      local_30[0x1ff] = 0xaa;
      local_28 = (byte *)((int)local_28 * 0x200);
      local_14 = local_30 + (int)local_28;
      (local_30 + (int)local_28)[0] = 0xf8;
      (local_30 + (int)local_28)[1] = 0xff;
      (local_30 + 2)[(int)local_28] = 0xff;
      if (pbVar12 == (byte *)0x4) {
        local_14[3] = 0xff;
      }
      else if (pbVar12 != (byte *)0x3) {
        local_14[3] = 0xf;
        local_14[4] = 0xff;
        local_14[5] = 0xff;
        local_14[6] = 0xff;
        local_14[7] = 0xf;
        for (uVar4 = 1; uVar4 - 1 < auStack_41960[1]; uVar4 = uVar4 + 1) {
          if (uVar4 == auStack_41960[1]) {
            uVar16 = 0;
            if (DAT_00047e34 + -3 < (byte *)0x3) {
              uVar16 = *(uint *)(str_000425c0 + (int)DAT_00047e34 * 4 + 4);
            }
          }
          else {
            uVar16 = local_64 + uVar4;
          }
          recovered_2a3b0((int)local_14,(int)DAT_00047e34,(local_64 + uVar4) - 1,uVar16);
        }
      }
      pbVar12 = (byte *)0x1;
      while (pbVar12 < local_1c) {
        local_18 = pbVar12;
        for (uVar4 = 1; uVar4 - 1 < auStack_41960[(int)pbVar12 * 0x83 + 1]; uVar4 = uVar4 + 1) {
          if (uVar4 == auStack_41960[(int)pbVar12 * 0x83 + 1]) {
            uVar16 = 0;
            if (DAT_00047e34 + -3 < (byte *)0x3) {
              uVar16 = *(uint *)(str_000425c0 + (int)DAT_00047e34 * 4 + 4);
            }
          }
          else {
            uVar16 = uVar4 + auStack_41960[(int)pbVar12 * 0x83];
          }
          recovered_2a3b0((int)local_14,(int)DAT_00047e34,
                          (auStack_41960[(int)pbVar12 * 0x83] + uVar4) - 1,uVar16);
        }
        pbVar12 = local_18 + 1;
      }
      local_24 = (byte *)((int)local_24 * 0x200);
      pbVar12 = local_28 + (int)local_24 + (int)local_30;
      for (pbVar10 = (byte *)0x1; pbVar13 = local_24, pbVar10 < local_20; pbVar10 = pbVar10 + 1) {
        recovered_20f42((int)pbVar12,(int)local_14,(int)local_24);
        pbVar12 = pbVar12 + (int)pbVar13;
      }
      local_54 = local_30 + (int)local_54 * 0x200;
      local_68 = (byte *)((int)local_68 << 9);
      local_48 = local_30 + (int)local_48 * 0x200;
      pbVar12 = local_1c;
      for (pbVar10 = (byte *)0x0; pbVar10 != pbVar12; pbVar10 = pbVar10 + 1) {
        local_174[0] = (byte *)0x0;
        if (acStack_41950[(int)pbVar10 * 0x20c] == '\x01') {
          local_20 = local_68;
          local_28 = local_54;
          local_38 = pbVar10;
          if (local_2c == (byte *)0x5 || pbVar10 != (byte *)0x0) {
            local_28 = local_48 + (auStack_41960[(int)pbVar10 * 0x83] - 2) * (int)local_40;
            local_20 = (byte *)(auStack_41960[(int)pbVar10 * 0x83 + 1] * (int)local_40);
            if (pbVar10 != (byte *)0x0) {
              recovered_2a445((int)local_265,0x42612);
              recovered_2a445((int)local_356,0x42c6c);
              uVar2 = recovered_2a47a((int)local_28,(uint)local_20,(int *)local_174,0x42612,
                                      (int)local_265,'\0',0x10,auStack_41960[(int)pbVar10 * 0x83],0)
              ;
              if ((char)uVar2 == '\0') {
                return false;
              }
              uVar4 = 0;
              if (local_2c == (byte *)0x5 || 0 < *(int *)(abStack_41b58 + (int)pbVar10 * 0x20c)) {
                uVar4 = auStack_41960[*(int *)(abStack_41b58 + (int)pbVar10 * 0x20c) * 0x83];
              }
              uVar2 = recovered_2a47a((int)local_28,(uint)local_20,(int *)local_174,0x42c6c,
                                      (int)local_356,'\0',0x10,uVar4,0);
              if ((char)uVar2 == '\0') {
                return false;
              }
            }
          }
          pbVar12 = abStack_41743;
          pbVar10 = local_38;
          for (pbVar13 = (byte *)0x1; pbVar13 < local_1c; pbVar13 = pbVar13 + 1) {
            if (*(byte **)(pbVar12 + -0x209) == pbVar10) {
              uVar2 = 0;
              if (pbVar12[-1] == 0) {
                pbVar10 = *(byte **)(pbVar12 + -0x205);
                if (pbVar10 == (byte *)0xffffffff) {
                  return false;
                }
                if (DAT_00047e00 <= pbVar10) {
                  return false;
                }
                uVar2 = *(undefined4 *)(DAT_00047dfc + (int)pbVar10 * 0x108 + 0xf8);
              }
              local_14 = pbVar12 + -0x201;
              local_18 = pbVar12 + -0x1f;
              local_24 = (byte *)(uint)*pbVar12;
              uVar2 = recovered_2a47a((int)local_28,(uint)local_20,(int *)local_174,(int)local_14,
                                      (int)local_18,*pbVar12,
                                      (pbVar12[-9] & 1 | (pbVar12[-1] ^ 1) << 4) + 0x10,
                                      *(undefined4 *)(pbVar12 + -0x11),uVar2);
              pbVar10 = local_38;
              if ((char)uVar2 == '\0') {
                return false;
              }
            }
            pbVar12 = pbVar12 + 0x20c;
          }
          pbVar12 = local_1c;
          if (local_174[0] < local_20) {
            local_28[(int)local_174[0]] = 0;
          }
        }
      }
      pbVar12 = (byte *)0x1;
      while (pbVar12 < local_1c) {
        iVar5 = (int)pbVar12 * 0x20c;
        local_18 = pbVar12;
        if (acStack_41950[iVar5] == '\0') {
          local_14 = abStack_41b58 + iVar5;
          uVar4 = auStack_41960[(int)pbVar12 * 0x83 + 1];
          if (uVar4 != 0) {
            pbVar12 = *(byte **)(abStack_41b58 + iVar5 + 4);
            if (pbVar12 == (byte *)0xffffffff) {
              return false;
            }
            if (DAT_00047e00 <= pbVar12) {
              return false;
            }
            local_2c = DAT_00047dfc + (int)pbVar12 * 0x108;
            pbVar12 = (byte *)0x0;
            for (iVar5 = -2; pbVar10 = local_40, iVar5 + 2U < uVar4; iVar5 = iVar5 + 1) {
              pbVar13 = *(byte **)(local_2c + 0xf8) + -(int)pbVar12;
              if (*(byte **)(local_2c + 0xf8) < pbVar12) {
                pbVar13 = (byte *)0x0;
              }
              if (local_40 <= pbVar13) {
                pbVar13 = local_40;
              }
              if (pbVar13 != (byte *)0x0) {
                recovered_20f42((int)(local_48 +
                                     (*(int *)(local_14 + 0x1f8) + iVar5) * (int)local_40),
                                (int)(pbVar12 + *(int *)(local_2c + 0xf4)),(int)pbVar13);
                uVar4 = *(uint *)(local_14 + 0x1fc);
              }
              pbVar12 = pbVar12 + (int)pbVar10;
            }
          }
        }
        pbVar12 = local_18 + 1;
      }
      goto LAB_0002391f;
    }
    if (DAT_00047e1c == (byte *)0x0 || (DAT_00047e18 == (byte *)0x0 || DAT_00047e7c != '\x01')) {
      return false;
    }
    local_3c = DAT_00047e1c;
    local_18 = (byte *)0x0;
    local_24 = DAT_00047e00;
    local_40 = DAT_00047e28;
    local_14 = (byte *)((int)DAT_00047e00 * 0x100);
    local_38 = DAT_00047e18;
    local_20 = (byte *)((uint)local_14 % (uint)DAT_00047e18);
    local_34 = DAT_00047e18;
    local_2c = DAT_00047e20;
    pbVar6 = DAT_00047e20 + -1;
    local_1c = DAT_00047dfc;
    pbVar12 = DAT_00047dfc + 0xf8;
    pbVar10 = DAT_00047e00;
    while (bVar19 = pbVar10 != (byte *)0x0, pbVar10 = pbVar10 + -1, bVar19) {
      local_18 = local_18 + (uint)(pbVar6 + *(int *)pbVar12) / (uint)DAT_00047e20;
      pbVar12 = pbVar12 + 0x108;
    }
    local_44 = DAT_00047e18 + (int)local_14 + -(int)local_20;
    if (local_20 == (byte *)0x0) {
      local_44 = local_14;
    }
    pbVar13 = (byte *)0x0;
    local_44 = (byte *)((uint)local_44 / (uint)DAT_00047e18);
    pbVar12 = (byte *)0x0;
    pbVar10 = (byte *)0x0;
    if (DAT_00047e00 != (byte *)0x0) {
      uVar4 = (int)DAT_00047e00 * 4;
      pbVar10 = recovered_20df4(uVar4);
      pbVar12 = recovered_20df4(uVar4);
      if (pbVar12 == (byte *)0x0 || pbVar10 == (byte *)0x0) {
        recovered_20dfd((int)pbVar10);
        goto LAB_00023a0a;
      }
    }
    pbVar3 = DAT_00047dfc + 0xf8;
    local_28 = (byte *)0x2;
    for (; local_24 != pbVar13; pbVar13 = pbVar13 + 1) {
      iVar5 = *(int *)pbVar3;
      if (iVar5 == 0) {
        pbVar17 = pbVar12 + (int)pbVar13 * 4;
        pbVar17[0] = 0;
        pbVar17[1] = 0;
        pbVar17[2] = 0;
        pbVar17[3] = 0;
LAB_0002354c:
        pbVar17 = pbVar10 + (int)pbVar13 * 4;
        pbVar17[0] = 0;
        pbVar17[1] = 0;
        pbVar17[2] = 0;
        pbVar17[3] = 0;
      }
      else {
        uVar4 = (uint)(pbVar6 + iVar5) / (uint)local_2c;
        *(uint *)(pbVar12 + (int)pbVar13 * 4) = uVar4;
        if (pbVar6 + iVar5 < local_2c) goto LAB_0002354c;
        *(byte **)(pbVar10 + (int)pbVar13 * 4) = local_28;
        local_28 = local_28 + uVar4;
      }
      pbVar3 = pbVar3 + 0x108;
    }
    if (local_18 < local_28 + -2) {
      return false;
    }
    pbVar13 = (byte *)((int)local_18 * 4 + 8);
    uVar4 = (uint)pbVar13 % (uint)local_38;
    local_20 = local_34 + (((int)local_18 * 4 + 8) - uVar4);
    if (uVar4 == 0) {
      local_20 = pbVar13;
    }
    local_20 = (byte *)((uint)local_20 / (uint)local_38);
    pbVar3 = local_20 + (int)local_44 + 1 + (int)local_3c * (int)local_18;
    local_1c = pbVar12;
    local_14 = pbVar10;
    if (local_40 != (byte *)0x0) {
      pbVar13 = local_28;
      if (local_40 < pbVar3) goto LAB_00023a01;
    }
    pbVar10 = (byte *)((int)local_34 * (int)pbVar3);
    local_28 = local_20 + (int)local_44 + 1;
    pbVar12 = recovered_20df4((uint)pbVar10);
    pbVar13 = local_28;
    pbVar6 = local_20;
    if (pbVar12 != (byte *)0x0) {
      local_30 = local_20 + 1;
      local_34 = pbVar10;
      recovered_20fa9((int)pbVar12,0,(int)pbVar10);
      recovered_20fa9((int)abStack_41b58,0,0x44);
      recovered_20f42((int)abStack_41b58,0x42608,8);
      abStack_41b58[8] = 1;
      abStack_41b58[9] = 0;
      abStack_41b58[10] = 0;
      abStack_41b58[0xb] = 0;
      pbStack_41b4c = local_38;
      pbStack_41b48 = local_3c;
      iStack_41b44 = 1;
      pbStack_41b40 = local_20;
      pbStack_41b3c = local_30;
      pbStack_41b38 = local_44;
      pbStack_41b34 = local_28;
      pbStack_41b30 = local_18;
      pbStack_41b28 = pbVar3;
      if (local_40 != (byte *)0x0) {
        pbStack_41b28 = local_40;
      }
      pbStack_41b2c = local_24;
      recovered_20f42((int)pbVar12,(int)abStack_41b58,0x44);
      iVar5 = iStack_41b44 * (int)local_38;
      pbVar10 = pbVar12 + iVar5;
      pbVar10[0] = 0xff;
      pbVar10[1] = 0xff;
      pbVar10[2] = 0xff;
      pbVar10[3] = 0xff;
      pbVar10 = pbVar12 + iVar5 + 4;
      pbVar10[0] = 0xff;
      pbVar10[1] = 0xff;
      pbVar10[2] = 0xff;
      pbVar10[3] = 0xff;
      for (pbVar10 = (byte *)0x0; pbVar10 != local_24; pbVar10 = pbVar10 + 1) {
        for (uVar4 = 1; uVar4 - 1 < *(uint *)(local_1c + (int)pbVar10 * 4); uVar4 = uVar4 + 1) {
          iVar14 = *(int *)(local_14 + (int)pbVar10 * 4) + uVar4;
          if (uVar4 == *(uint *)(local_1c + (int)pbVar10 * 4)) {
            iVar14 = -1;
          }
          *(int *)(pbVar12 + (*(int *)(local_14 + (int)pbVar10 * 4) + uVar4) * 4 + iVar5 + -4) =
               iVar14;
        }
      }
      pbVar13 = pbVar12 + (int)pbStack_41b3c * (int)local_38;
      iVar5 = 0;
      local_30 = pbVar12;
      for (pbVar10 = (byte *)0x0; local_24 != pbVar10; pbVar10 = pbVar10 + 1) {
        recovered_20fa9((int)pbVar13,0,0x100);
        recovered_219e1((char *)pbVar13,0xf0,&DAT_00042730,DAT_00047dfc + iVar5);
        *(undefined4 *)(pbVar13 + 0xf0) = *(undefined4 *)(local_14 + (int)pbVar10 * 4);
        pbVar12 = DAT_00047dfc;
        *(undefined4 *)(pbVar13 + 0xf4) = *(undefined4 *)(DAT_00047dfc + iVar5 + 0xf8);
        *(undefined4 *)(pbVar13 + 0xf8) = *(undefined4 *)(pbVar12 + iVar5 + 0xfc);
        iVar5 = iVar5 + 0x108;
        pbVar13 = pbVar13 + 0x100;
      }
      local_28 = local_30 + (int)pbStack_41b34 * (int)local_38;
      for (pbVar12 = (byte *)0x0; pbVar12 != local_24; pbVar12 = pbVar12 + 1) {
        local_18 = (byte *)((int)pbVar12 * 0x108);
        if ((*(int *)(DAT_00047dfc + 0xf4 + (int)local_18) != 0) &&
           (*(int *)(DAT_00047dfc + (int)local_18 + 0xf8) != 0)) {
          pbVar10 = (byte *)0x0;
          local_20 = pbVar12;
          for (iVar5 = -2; pbVar13 = local_20, iVar5 + 2U < *(uint *)(local_1c + (int)pbVar12 * 4);
              iVar5 = iVar5 + 1) {
            pbVar6 = *(byte **)(DAT_00047dfc + 0xf8 + (int)local_18) + -(int)pbVar10;
            if (*(byte **)(DAT_00047dfc + 0xf8 + (int)local_18) < pbVar10) {
              pbVar6 = (byte *)0x0;
            }
            if (local_2c <= pbVar6) {
              pbVar6 = local_2c;
            }
            if (pbVar6 != (byte *)0x0) {
              recovered_20f42((int)(local_28 +
                                   (*(int *)(local_14 + (int)pbVar12 * 4) + iVar5) * (int)local_2c),
                              (int)(pbVar10 + *(int *)(DAT_00047dfc + 0xf4 + (int)local_18)),
                              (int)pbVar6);
              pbVar12 = pbVar13;
            }
            pbVar10 = pbVar10 + (int)local_2c;
          }
        }
      }
      recovered_20dfd((int)local_14);
      pbVar10 = local_1c;
      goto LAB_00023917;
    }
  }
LAB_00023a01:
  local_20 = pbVar6;
  local_28 = pbVar13;
  recovered_20dfd((int)local_14);
  pbVar12 = local_1c;
LAB_00023a0a:
  recovered_20dfd((int)pbVar12);
  return false;
LAB_00023ece:
  if (pbVar10 == (byte *)0x0) {
    pbVar12 = (byte *)0x0;
    pbVar13 = (byte *)recovered_20ff4((int)local_18);
  }
  else {
    pbVar13 = pbVar10 + -(int)local_18;
    if ((pbVar13 == (byte *)0x0) || (pbVar10[1] == 0)) goto LAB_00023cd4;
    pbVar12 = (byte *)recovered_20ff4((int)(pbVar10 + 1));
  }
  local_4c = pbVar12;
  if ((byte *)0x3 < pbVar12 || pbVar13 + -9 < (byte *)0xfffffff8) {
LAB_00023cd4:
    pbVar12 = local_18;
    pbVar13 = (byte *)0x0;
    pbVar10 = local_18;
    do {
      if (*pbVar10 == 0x2e) {
        pbVar13 = pbVar10;
      }
      else if (*pbVar10 == 0) goto LAB_00023cee;
      pbVar10 = pbVar10 + 1;
    } while( true );
  }
  local_30 = pbVar13;
  recovered_20fa9((int)local_60,0x20,0xb);
  pbVar12 = local_30;
  for (pbVar13 = (byte *)0x0; pbVar12 != pbVar13; pbVar13 = pbVar13 + 1) {
    bVar8 = local_44[(int)pbVar13];
    bVar11 = bVar8 - 0x20;
    if (0x19 < (byte)(bVar8 + 0x9f)) {
      bVar11 = bVar8;
    }
    uVar2 = recovered_2a8cc(bVar11);
    pbVar12 = local_30;
    if ((char)uVar2 == '\0') goto LAB_00023cd4;
    *(byte *)((int)local_60 + (int)pbVar13) = bVar11;
  }
  for (pbVar12 = (byte *)0x0; local_4c != pbVar12; pbVar12 = pbVar12 + 1) {
    bVar8 = (pbVar10 + 1)[(int)pbVar12];
    bVar11 = bVar8 - 0x20;
    if (0x19 < (byte)(bVar8 + 0x9f)) {
      bVar11 = bVar8;
    }
    uVar2 = recovered_2a8cc(bVar11);
    if ((char)uVar2 == '\0') goto LAB_00023cd4;
    local_58[(int)pbVar12] = bVar11;
  }
  goto LAB_00023e82;
LAB_00023cee:
  if (pbVar13 == (byte *)0x0) {
    local_30 = (byte *)0x0;
    iVar5 = recovered_20ff4((int)local_18);
  }
  else {
    iVar5 = (int)pbVar13 - (int)local_18;
    local_30 = (byte *)recovered_20ff4((int)(pbVar13 + 1));
  }
  recovered_2a83a((int)pbVar12,iVar5,(int)local_265);
  pbVar12 = pbVar13 + 1;
  if (pbVar13 == (byte *)0x0) {
    pbVar12 = &DAT_00042614;
  }
  recovered_2a83a((int)pbVar12,(int)local_30,(int)local_356);
  if (local_265[0] == '\0') {
    recovered_219e1(local_265,0xf1,&DAT_00042cce);
  }
  recovered_219e1((char *)local_80,0x10,&DAT_00042cd3,
                  (int)local_34 + (uint)(local_34 == (byte *)0x0));
  uVar4 = recovered_20ff4((int)local_80);
  uVar16 = -(uVar4 - 8);
  if (7 < uVar4) {
    uVar16 = 1;
  }
  uVar7 = recovered_20ff4((int)local_265);
  if (uVar7 < uVar16) {
    uVar16 = recovered_20ff4((int)local_265);
  }
  iVar5 = uVar16 + (uVar16 == 0);
  recovered_20fa9((int)local_60,0x20,0xb);
  recovered_20f42((int)local_60,(int)local_265,iVar5);
  uVar16 = 8U - iVar5;
  if (uVar4 < 8U - iVar5) {
    uVar16 = uVar4;
  }
  recovered_20f42((int)local_60 + iVar5,(int)local_80,uVar16);
  uVar4 = recovered_20ff4((int)local_356);
  iVar5 = 3;
  if (uVar4 < 4) {
    iVar5 = recovered_20ff4((int)local_356);
  }
  recovered_20f42((int)local_58,(int)local_356,iVar5);
LAB_00023e82:
  iVar5 = *(int *)local_3c;
  pbVar13 = (byte *)0x0;
  puVar15 = auStack_4196e;
  pbVar12 = local_14;
  pbVar10 = local_1c;
  do {
    pbVar6 = local_3c;
    if (pbVar10 == pbVar13) {
      pbVar12 = local_3c + 0x1ea;
      recovered_20f42((int)pbVar12,(int)local_60,0xb);
      recovered_2a797((int)pbVar12,(int)local_174);
      iVar5 = recovered_2100f((int)local_174,(int)local_18);
      pbVar6[0x209] = iVar5 != 0;
      local_14 = local_14 + 1;
      local_44 = local_44 + 0x20c;
      goto LAB_00023c93;
    }
    if (pbVar12 != pbVar13) {
      if (*(int *)(puVar15 + -0x1ea) == iVar5) {
        iVar14 = recovered_20fc5((int)puVar15,(int)local_60,0xb);
        pbVar12 = local_14;
        pbVar10 = local_1c;
        if (iVar14 == 0) break;
      }
    }
    pbVar13 = pbVar13 + 1;
    puVar15 = puVar15 + 0x20c;
  } while( true );
  local_34 = (byte *)((int)local_34 + 1);
  goto LAB_00023cc1;
}

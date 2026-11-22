/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020de15c (*(uint8_t volatile *)(0x20de15cU))
#define DAT_020de15d (*(uint8_t volatile *)(0x20de15dU))
#define DAT_020de15e (*(uint8_t volatile *)(0x20de15eU))
#define DAT_020de174 (*(uint8_t volatile *)(0x20de174U))
#define DAT_021306f8 (*(uint8_t volatile *)(0x21306f8U))
#define DAT_021408e9 (*(uint8_t volatile *)(0x21408e9U))
#define DAT_0214b0e0 (*(uint8_t volatile *)(0x214b0e0U))
#define DAT_02153c40 (*(uint8_t volatile *)(0x2153c40U))
#define DAT_0215bc60 (*(uint8_t volatile *)(0x215bc60U))
#define DAT_0215bc61 (*(uint8_t volatile *)(0x215bc61U))
#define DAT_0215bc62 (*(uint8_t volatile *)(0x215bc62U))
#define str_020ceb2a (*(char (*)[1])(0x20ceb2aU))
#define str_020cebff (*(char (*)[1])(0x20cebffU))
#define str_020cec19 (*(char (*)[1])(0x20cec19U))
#define str_020cec4c (*(char (*)[1])(0x20cec4cU))
#define str_020cec55 (*(char (*)[1])(0x20cec55U))
#define str_020cec66 (*(char (*)[1])(0x20cec66U))
#define local_64 (*(uint *)(frame + 108))
#define local_60 (*(uint *)(frame + 112))
#define local_5c (*(uint *)(frame + 116))
#define local_58 (*(uint *)(frame + 120))
#define local_54 (*(uint *)(frame + 124))
#define local_50 (*(uint *)(frame + 128))
#define local_4c (*(uint *)(frame + 132))
#define local_48 (*(uint *)(frame + 136))
#define local_44 (*(uint *)(frame + 140))
#define local_40 (*(uint *)(frame + 144))
#define local_3c (*(uint *)(frame + 148))
#define local_38 (*(undefined4 *)(frame + 152))
#define local_34 (*(undefined4 *)(frame + 156))
#define local_30 (*(undefined4 *)(frame + 160))
#define local_2c (*(undefined4 *)(frame + 164))
#define local_28 (*(undefined4 *)(frame + 168))
#define local_24 (*(undefined4 *)(frame + 172))
#define local_20 (*(undefined4 *)(frame + 176))
#define local_1c (*(undefined1 * *)(frame + 180))
#define local_18 (*(uint *)(frame + 184))
#define local_12 (*(byte *)(frame + 190))
#define local_11 (*(byte *)(frame + 191))
#define format (*(char * *)(frame + 28))
#define in_stack_ffffff50 (*(uint * *)(frame + 32))


uint recovered_208eac0(int *in_ECX,uint *in_EDX,int param_3,uint param_4,uint *param_5)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uchar uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *incoming_ecx;
  byte bVar9;
  uchar in_CL;
  undefined1 *puVar10;
  uint incoming_edx;
  uint extraout_EDX = 0;
  uint incoming_edx_00;
  uint extraout_EDX_00 = 0;
  uint extraout_EDX_01 = 0;
  uint incoming_edx_01;
  uint extraout_EDX_02 = 0;
  uint extraout_EDX_03 = 0;
  uint incoming_edx_02;
  uint extraout_EDX_04 = 0;
  uint extraout_EDX_05 = 0;
  uint incoming_edx_03;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;

  local_64 = 1000;
  if (param_4 < 2) {
    if (param_4 == 1) {
      in_stack_ffffff50 = &local_64;
      uVar5 = recovered_208fff0(in_ECX,(char *)in_EDX,param_3,1,0,(int *)in_stack_ffffff50);
      if ((char)uVar5 == '\0') {
        return 0;
      }
    }
    local_5c = recovered_20116b0();
    puVar6 = recovered_2012220();
    local_58 = *puVar6;
    local_54 = puVar6[1];
    puVar6 = recovered_2012220();
    local_50 = puVar6[2];
    puVar6 = recovered_2012220();
    uVar5 = puVar6[3];
    puVar6 = recovered_2012220();
    uVar8 = puVar6[4];
    puVar6 = recovered_2012220();
    local_4c = puVar6[5];
    recovered_2012220();
    recovered_2012220();
    recovered_2012220();
    recovered_2012220();
    recovered_2012220();
    recovered_2012220();
    if (uVar8 == 0 ||
        ((uVar5 == 0 || local_50 == 0) || (local_58 == 0 && local_54 == 0 || local_5c == 0))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      if ((local_4c - 0xf < 0x12) && ((0x20203U >> (local_4c - 0xf & 0x1f) & 1) != 0)) {
        puVar6 = recovered_2012220();
        if ((*puVar6 != 0 || puVar6[1] != 0) &&
           (((puVar6 = recovered_2012220(), puVar6[2] != 0 &&
             (puVar6 = recovered_2012220(), puVar6[3] != 0)) &&
            (puVar6 = recovered_2012220(), puVar6[4] != 0)))) {
          puVar6 = recovered_2012220();
          if ((puVar6[5] - 0xf < 0x12) && ((0x20203U >> (puVar6[5] - 0xf & 0x1f) & 1) != 0)) {
            puVar6 = recovered_2012220();
            uVar5 = *puVar6;
            puVar6 = recovered_2012220();
            uVar8 = puVar6[3];
            puVar6 = recovered_2012220();
            uVar14 = puVar6[4];
            puVar6 = recovered_2012220();
            uVar11 = puVar6[2];
            puVar6 = recovered_2012220();
            local_44 = 1;
            if (2 < uVar14) {
              local_44 = uVar14 / 3;
            }
            if (uVar14 != 0) {
              uVar2 = puVar6[5];
              local_48 = uVar2 + 7 >> 3;
              uVar3 = local_44 * 2;
              local_18 = 0;
              do {
                if (uVar8 == 0) {
                  local_18 = local_18 + 1;
                }
                else {
                  local_1c = (undefined1 *)(local_18 * uVar11 + uVar5);
                  uVar1 = local_18 + 8;
                  bVar15 = local_18 < uVar3;
                  local_11 = !bVar15 && local_44 <= local_18;
                  local_12 = bVar15 && local_44 <= local_18;
                  local_60 = local_18 + 1;
                  uVar12 = 0;
                  do {
                    bVar15 = (local_60 + uVar12 == uVar8 || (uVar12 == local_18 || uVar14 <= uVar1))
                             || (uVar8 <= uVar12 + 8 || (uVar12 < 8 || local_18 < 8));
                    uVar7 = recovered_204bbf0((uint)(byte)-(local_18 < local_44 || bVar15),
                                              (uint)(byte)-(bVar15 | local_12 & 1),
                                              -(bVar15 | local_11 & 1));
                    if (7 < uVar2 + 7) {
                      bVar9 = 0;
                      puVar10 = local_1c;
                      uVar13 = local_48;
                      do {
                        *puVar10 = (char)(uVar7 >> (bVar9 & 0x1f));
                        puVar10 = puVar10 + 1;
                        bVar9 = bVar9 + 8;
                        uVar13 = uVar13 - 1;
                      } while (uVar13 != 0);
                    }
                    uVar12 = uVar12 + 1;
                    local_1c = local_1c + local_48;
                  } while (uVar12 != uVar8);
                  local_18 = local_60;
                }
              } while (local_18 != uVar14);
            }
          }
        }
        uVar8 = local_64;
        do {
          uVar5 = 1;
          if (uVar8 == 0) break;
          uVar14 = uVar8;
          if (999 < uVar8) {
            uVar14 = 1000;
          }
          uVar4 = recovered_200afa0(uVar14 * 1000);
          if (uVar4 == '\0') {
            uVar14 = 0;
            do {
              local_40 = 0;
              uVar11 = 0;
              do {
                local_40 = local_40 ^ uVar11;
                uVar11 = uVar11 + 1;
              } while (uVar11 != 6000);
              uVar14 = uVar14 + 1;
            } while (uVar14 != uVar8);
          }
          else {
            uVar8 = uVar8 - uVar14;
          }
        } while (uVar4 != '\0');
      }
    }
    uVar8 = recovered_2008f70();
    DAT_0214b0e0 = 0;
    DAT_021306f8 = 0;
    DAT_021408e9 = 0;
    DAT_020de15c = 0x4c;
    DAT_020de15d = 0x91;
    DAT_020de15e = 0xc4;
    DAT_0215bc60 = 0;
    DAT_0215bc61 = 0;
    DAT_0215bc62 = 0;
    DAT_020de174 = 0x30;
    recovered_209f910();
    DAT_02153c40 = 0;
    recovered_2043440();
    recovered_2027720(in_CL);
    if ((param_5 != (uint *)0x0) &&
       (incoming_ecx = recovered_2001650(0x10), incoming_ecx != (undefined4 *)0x0)) {
      *incoming_ecx = 1;
      incoming_ecx[1] = 0;
      incoming_ecx[2] = 0;
      incoming_ecx[3] = 0;
      local_1c = (undefined1 *)uVar8;
      recovered_2043a90(param_5,incoming_edx);
      local_3c = (uint)(local_5c != 0);
      *param_5 = 8;
      param_5[7] = (uint)incoming_ecx;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_40 = 5;
      local_38 = 0x3f800000;
      if (local_5c == 0) {
        local_38 = 0;
      }
      puVar6 = (uint *)recovered_209b1b0((int)incoming_ecx,str_020cec4c,'\x01');
      uVar8 = extraout_EDX;
      if (puVar6 != (uint *)0x0) {
        uVar8 = recovered_207e1d0(puVar6,&local_40);
        local_48 = CONCAT31(PF_PART3(local_48, 1),(char)uVar8);
        recovered_2043a90(&local_40,incoming_edx_00);
        puVar10 = local_1c;
        if ((char)local_48 == '\0') {
          return 0;
        }
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        local_40 = 5;
        local_38 = 0x3f800000;
        if ((char)uVar5 == '\0') {
          local_38 = 0;
        }
        uVar8 = extraout_EDX_00;
        local_3c = uVar5;
        if (((*param_5 == 8) && (param_5[7] != 0)) &&
           (puVar6 = (uint *)recovered_209b1b0(param_5[7],str_020cec55,'\x01'),
           uVar8 = extraout_EDX_01, puVar6 != (uint *)0x0)) {
          uVar5 = recovered_207e1d0(puVar6,&local_40);
          recovered_2043a90(&local_40,incoming_edx_01);
          if ((char)uVar5 == '\0') {
            return 0;
          }
          local_3c = (uint)(puVar10 != (undefined1 *)0x0);
          local_34 = 0;
          local_30 = 0;
          local_2c = 0;
          local_28 = 0;
          local_24 = 0;
          local_20 = 0;
          local_40 = 5;
          local_38 = 0x3f800000;
          if (puVar10 == (undefined1 *)0x0) {
            local_38 = 0;
          }
          uVar8 = extraout_EDX_02;
          if (((*param_5 == 8) && (param_5[7] != 0)) &&
             (puVar6 = (uint *)recovered_209b1b0(param_5[7],str_020cec66,'\x01'),
             uVar8 = extraout_EDX_03, puVar6 != (uint *)0x0)) {
            uVar5 = recovered_207e1d0(puVar6,&local_40);
            recovered_2043a90(&local_40,incoming_edx_02);
            if ((char)uVar5 == '\0') {
              return 0;
            }
            local_38 = 0;
            local_34 = 0;
            local_30 = 0;
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
            local_20 = 0;
            local_40 = 6;
            local_3c = local_58;
            uVar8 = extraout_EDX_04;
            if (((*param_5 == 8) && (param_5[7] != 0)) &&
               (puVar6 = (uint *)recovered_209b1b0(param_5[7],str_020ceb2a,'\x01'),
               uVar8 = extraout_EDX_05, puVar6 != (uint *)0x0)) {
              uVar5 = recovered_207e1d0(puVar6,&local_40);
              recovered_2043a90(&local_40,incoming_edx_03);
              if ((char)uVar5 == '\0') {
                return 0;
              }
              uVar5 = recovered_209fae0((int *)param_5,0x20ceb3e);
              if ((char)uVar5 == '\0') {
                return 0;
              }
              uVar5 = recovered_209fae0((int *)param_5,0x20ceb56);
              if ((char)uVar5 == '\0') {
                return 0;
              }
              uVar5 = recovered_209fae0((int *)param_5,0x20ceb67);
              if ((char)uVar5 == '\0') {
                return 0;
              }
              uVar5 = recovered_209fae0((int *)param_5,0x20ceb78);
              if ((char)uVar5 == '\0') {
                return 0;
              }
              uVar5 = recovered_209fae0((int *)param_5,0x20ceb8a);
              if ((char)uVar5 == '\0') {
                return 0;
              }
              uVar5 = recovered_209fae0((int *)param_5,0x20ceb99);
              if ((char)uVar5 == '\0') {
                return 0;
              }
              uVar5 = recovered_209fae0((int *)param_5,0x20ceba1);
              if ((char)uVar5 == '\0') {
                return 0;
              }
              uVar5 = recovered_209fae0((int *)param_5,0x20cebaa);
              if ((char)uVar5 == '\0') {
                return 0;
              }
              uVar5 = recovered_209fae0((int *)param_5,0x20cebb4);
              if ((char)uVar5 == '\0') {
                return 0;
              }
              uVar5 = recovered_209fae0((int *)param_5,0x20cebbf);
              if ((char)uVar5 == '\0') {
                return 0;
              }
              uVar5 = recovered_209fae0((int *)param_5,0x20cebc8);
              return uVar5;
            }
          }
        }
      }
      recovered_2043a90(&local_40,uVar8);
      return 0;
    }
    format = str_020cec19;
  }
  else {
    format = str_020cebff;
    in_stack_ffffff50 = in_EDX;
  }
  pf_varargs_207a2e0__4_(in_ECX,(char *)in_EDX,format,(uint)in_stack_ffffff50);
  return 0;
}
#undef DAT_020de15c
#undef DAT_020de15d
#undef DAT_020de15e
#undef DAT_020de174
#undef DAT_021306f8
#undef DAT_021408e9
#undef DAT_0214b0e0
#undef DAT_02153c40
#undef DAT_0215bc60
#undef DAT_0215bc61
#undef DAT_0215bc62
#undef str_020ceb2a
#undef str_020cebff
#undef str_020cec19
#undef str_020cec4c
#undef str_020cec55
#undef str_020cec66
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
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_12
#undef local_11
#undef format
#undef in_stack_ffffff50

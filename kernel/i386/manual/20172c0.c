#include "functions.h"
#undef DAT_02104660
#define DAT_02104660 (*(uint32_t volatile *)(0x2104660U))
#undef DAT_02104668
#define DAT_02104668 (*(uint32_t volatile *)(0x2104668U))
#undef DAT_0212d640
#define DAT_0212d640 (*(uint8_t volatile *)(0x212d640U))
#undef DAT_0212d641
#define DAT_0212d641 (*(uint8_t volatile *)(0x212d641U))
#undef DAT_0212d642
#define DAT_0212d642 (*(uint8_t volatile *)(0x212d642U))
#undef DAT_0212d643
#define DAT_0212d643 (*(uint8_t volatile *)(0x212d643U))
#undef DAT_0212d650
#define DAT_0212d650 (*(uint8_t volatile *)(0x212d650U))
#undef DAT_0212e000
#define DAT_0212e000 (*(uint8_t volatile *)(0x212e000U))
#undef DAT_02130000
#define DAT_02130000 (*(uint8_t volatile *)(0x2130000U))
#undef DAT_02130001
#define DAT_02130001 (*(uint8_t volatile *)(0x2130001U))
#undef DAT_02130002
#define DAT_02130002 (*(uint8_t volatile *)(0x2130002U))
#undef DAT_02130003
#define DAT_02130003 (*(uint8_t volatile *)(0x2130003U))
#undef DAT_02130010
#define DAT_02130010 (*(uint8_t volatile *)(0x2130010U))
#undef DAT_02130011
#define DAT_02130011 (*(uint8_t volatile *)(0x2130011U))
#undef DAT_02130012
#define DAT_02130012 (*(uint8_t volatile *)(0x2130012U))
#undef DAT_02130013
#define DAT_02130013 (*(uint8_t volatile *)(0x2130013U))
#undef DAT_02130014
#define DAT_02130014 (*(uint8_t volatile *)(0x2130014U))
#undef DAT_02130015
#define DAT_02130015 (*(uint8_t volatile *)(0x2130015U))
#undef DAT_02130016
#define DAT_02130016 (*(uint8_t volatile *)(0x2130016U))
#undef DAT_02130017
#define DAT_02130017 (*(uint8_t volatile *)(0x2130017U))
#define local_44 (*(uint *)(frame + 204))
#define local_40 (*(int *)(frame + 208))
#define local_3c (*(uint *)(frame + 212))
#define local_38 (*(uint *)(frame + 216))
#define local_34 (*(uint *)(frame + 220))
#define local_30 (*(uint *)(frame + 224))
#define local_2c (*(uint *)(frame + 228))
#define local_28 (*(uint *)(frame + 232))
#define local_24 (*(uint *)(frame + 236))
#define local_20 (*(uint *)(frame + 240))
#define local_1c (*(uint *)(frame + 244))
#define local_18 (*(uint *)(frame + 248))
#define local_11 (*(undefined1 *)(frame + 255))
#define local_f4 (*(uint (*)[40])(frame + 28))
#define local_54 (*(uint (*)[4])(frame + 188))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20172c0
 */

undefined4
recovered_20172c0(uint in_ECX_00,uint in_EDX,char param_3,byte param_4,undefined1 param_5,
                 undefined1 param_6,undefined2 param_7,undefined2 param_8,char param_9,
                 undefined1 *param_10,ushort param_11)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  char cVar7;
  int iVar6;
  short sVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined *pointer;
  undefined1 *out;
  undefined1 *puVar13;

  local_2c = in_EDX;
  recovered_2001e00(local_f4,0,0xa0);
  if ((in_ECX_00 != 0 && param_11 < 0x101) && (param_10 != (undefined1 *)0x0 || param_11 == 0)) {
    local_18 = 0;
    local_1c = 0;
    local_20 = (uint)param_11;
    uVar3 = recovered_20091e0(0x212f000,0x1000,&local_1c);
    uVar4 = local_1c;
    if (((byte)uVar3 & local_18 == 0) != 0) {
      local_18 = 0;
      local_1c = 0;
      uVar3 = recovered_20091e0(0x2130000,0x10,&local_1c);
      if ((local_18 == 0 & (byte)uVar3) == 1) {
        local_54[3] = local_18;
        local_54[2] = local_1c;
        local_18 = 0;
        local_1c = 0;
        uVar3 = recovered_20091e0(0x2130010,8,&local_1c);
        if (((byte)uVar3 & local_18 == 0) != 0) {
          local_44 = uVar4;
          local_34 = (uint)param_4 << 0x1a | 0x18800000;
          local_24 = local_1c;
          iVar11 = -0xa0;
          pointer = &DAT_0212d640;
          local_30 = in_ECX_00;
          do {
            local_18 = 0;
            local_1c = 0;
            uVar4 = recovered_20091e0((uint)pointer,0x10,&local_1c);
            if ((char)uVar4 == '\0') {
              return 0;
            }
            if (local_18 != 0) {
              return 0;
            }
            *(uint *)((int)local_54 + iVar11) = local_1c;
            pointer = pointer + 0x10;
            iVar11 = iVar11 + 4;
          } while (iVar11 != 0);
          if ((short)local_20 == 0) {
            local_38 = 0;
          }
          else {
            local_18 = 0;
            local_1c = 0;
            uVar4 = recovered_20091e0(0x212e000,0x100,&local_1c);
            if ((local_18 == 0 & (byte)uVar4) != 1) {
              return 0;
            }
            local_38 = local_1c;
          }
          uVar4 = local_20;
          sVar8 = (short)local_20;
          cVar7 = '\b';
          if (param_4 == 0) {
            cVar7 = '@';
          }
          if (0xbf < (byte)(param_3 + 0xbfU)) {
            cVar7 = param_3;
          }
          local_28 = CONCAT31(PF_PART3(local_28, 1),cVar7);
          DAT_02130010 = param_5;
          DAT_02130011 = param_6;
          DAT_02130012 = (char)param_7;
          DAT_02130013 = (char)((ushort)param_7 >> 8);
          DAT_02130014 = (char)param_8;
          DAT_02130015 = (char)((ushort)param_8 >> 8);
          DAT_02130016 = (char)local_20;
          DAT_02130017 = (char)(local_20 >> 8);
          if (sVar8 != 0 && param_9 == '\0') {
            recovered_2001b70(&DAT_0212e000,param_10,local_20);
          }
          recovered_2001e00(&DAT_02130000,0,0x10);
          recovered_2001e00(&DAT_0212d640,0,0x280);
          uVar12 = local_34;
          local_40 = (local_2c & 0x7f) * 0x100;
          local_2c = local_2c & 0xffffff7f;
          recovered_2017800(&DAT_0212d640,local_f4[1],local_34,local_40 + 0xe0002d,local_24);
          uVar3 = local_54[2];
          if (sVar8 == 0) {
            DAT_0212d640 = (char)local_f4[1];
            DAT_0212d641 = (char)(local_f4[1] >> 8);
            DAT_0212d642 = (char)(local_f4[1] >> 0x10);
            out = &DAT_0212d650;
            puVar5 = &DAT_0212d643;
          }
          else {
            local_11 = 0x69;
            if (param_9 == '\0') {
              local_11 = 0xe1;
            }
            local_3c = local_28 & 0xff;
            bVar2 = (byte)(uVar12 >> 0x18) | 0x20;
            local_54[1] = (uint)bVar2;
            uVar9 = 1;
            uVar12 = 0;
            uVar1 = 0xffffff68;
            out = &DAT_0212d650;
            do {
              puVar13 = out;
              local_24 = uVar1;
              local_28 = uVar12;
              if (local_24 == 0) {
                return 0;
              }
              local_54[0] = uVar4;
              if (local_3c <= uVar4) {
                local_54[0] = local_3c;
              }
              uVar10 = *(undefined4 *)((int)local_54 + local_24);
              *puVar13 = (char)uVar10;
              puVar13[1] = (char)((uint)uVar10 >> 8);
              puVar13[2] = (char)((uint)uVar10 >> 0x10);
              puVar13[3] = (char)((uint)uVar10 >> 0x18);
              iVar6 = local_54[0] * 0x200000 + -0x200000;
              puVar13[4] = 0;
              puVar13[5] = 0;
              puVar13[6] = 0x80;
              puVar13[7] = bVar2;
              puVar13[8] = local_11;
              puVar13[9] = (char)local_2c;
              puVar13[10] = (byte)((uVar9 << 0x13) >> 0x10) | (byte)((uint)iVar6 >> 0x10);
              iVar11 = local_38 + local_28;
              puVar13[0xb] = (char)((uint)iVar6 >> 0x18);
              puVar13[0xc] = (char)iVar11;
              puVar13[0xd] = (char)((uint)iVar11 >> 8);
              puVar13[0xe] = (char)((uint)iVar11 >> 0x10);
              puVar13[0xf] = (char)((uint)iVar11 >> 0x18);
              uVar9 = uVar9 ^ 1;
              out = puVar13 + 0x10;
              uVar4 = uVar4 - local_54[0];
              uVar12 = local_28 + local_54[0];
              uVar1 = local_24 + 4;
            } while (uVar4 != 0);
            puVar5 = puVar13 + 3;
            local_f4[1] = *(uint *)((int)local_54 + local_24);
            *puVar13 = (char)local_f4[1];
            puVar13[1] = (char)(local_f4[1] >> 8);
            puVar13[2] = (char)(local_f4[1] >> 0x10);
          }
          *puVar5 = (char)(local_f4[1] >> 0x18);
          iVar11 = 0xe1;
          if (param_9 == '\0') {
            iVar11 = 0x69;
          }
          recovered_2017800(out,1,local_34,local_40 + -0x180000 + iVar11,0);
          recovered_2017860(local_f4[0]);
          local_54[3] = local_54[3] | uVar3;
          if (local_54[3] != 0) {
            iVar11 = -0x1000;
            do {
              (&DAT_02130000)[iVar11] = (byte)uVar3 | 2;
              (&DAT_02130001)[iVar11] = (char)(uVar3 >> 8);
              (&DAT_02130002)[iVar11] = (char)(uVar3 >> 0x10);
              (&DAT_02130003)[iVar11] = (char)(uVar3 >> 0x18);
              iVar11 = iVar11 + 4;
            } while (iVar11 != 0);
            if (0xffff0000 < local_30 - 0x10000) {
              sVar8 = (short)local_30;
              if ((local_30 < 0xfffe) && (out(sVar8 + 2,0xffff), 0xffff0008 < local_30 - 0xfff8)) {
                out(sVar8 + 8,local_44);
              }
              out(sVar8,0xc1);
            }
            uVar4 = recovered_20178e0(out);
            uVar3 = (uint)(byte)out[6] << 0x10;
            uVar12 = (uint)(byte)out[7] << 0x18 | uVar3 | (uint)*(ushort *)(out + 4);
            DAT_02104668 = uVar12;
            if ((char)uVar4 == '\0') {
              DAT_02104660 = uVar12;
            }
            else {
              if ((out[6] & 0x76) == 0) {
                uVar10 = CONCAT31((int3)(uVar3 >> 8),1);
                if ((short)local_20 == 0) {
                  return uVar10;
                }
                if (param_10 == (undefined1 *)0x0) {
                  return uVar10;
                }
                if (param_10 == &DAT_0212e000) {
                  return uVar10;
                }
                if (param_9 == '\0') {
                  return uVar10;
                }
                recovered_2001b70(param_10,&DAT_0212e000,local_20);
                return uVar10;
              }
              DAT_02104668 = *(undefined4 *)(out + 4);
              DAT_02104660 = *(undefined4 *)(out + 4);
            }
          }
        }
      }
    }
  }
  return 0;
}

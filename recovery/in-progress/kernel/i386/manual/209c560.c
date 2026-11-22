/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define str_020d3f4d (*(char (*)[1])(0x20d3f4dU))
#define local_58 (*(uint *)(frame + 24))
#define local_54 (*(uint *)(frame + 28))
#define local_50 (*(uint *)(frame + 32))
#define local_4c (*(uint *)(frame + 36))
#define local_48 (*(uint *)(frame + 40))
#define local_44 (*(uint *)(frame + 44))
#define local_40 (*(undefined4 *)(frame + 48))
#define local_3c (*(uint *)(frame + 52))
#define local_38 (*(uint *)(frame + 56))
#define local_34 (*(undefined8 *)(frame + 60))
#define local_2c (*(int *)(frame + 68))
#define local_28 (*(uint *)(frame + 72))
#define local_24 (*(uint *)(frame + 76))
#define local_20 (*(uint *)(frame + 80))
#define local_1c (*(uint *)(frame + 84))
#define local_18 (*(uint *)(frame + 88))
#define local_14 (*(uint *)(frame + 92))


void recovered_209c560(uint in_ECX,uint in_EDX,char *param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;

  if (param_3 != (char *)0x0) {
    recovered_2001e00(&local_58,0,0x20);
    uVar9 = recovered_20012c0(in_ECX,in_EDX,0x15180,0);
    uVar2 = (uint)uVar9;
    local_38 = in_ECX + uVar2 * -0x15180;
    local_2c = -0x7b1;
    local_28 = 0x7b1;
    iVar5 = -0x7b2;
    uVar6 = 0x7b2;
    uVar10 = uVar9;
    do {
      uVar3 = uVar10;
      uVar7 = uVar6;
      uVar8 = (uint)(uVar3 >> 0x20);
      local_24 = (uint)uVar3;
      uVar4 = 0x16d;
      if ((uVar7 & 3) == 0) {
        uVar4 = ((uVar7 / 400) * 400 + iVar5 == 0 || (uVar7 / 100) * 100 + iVar5 != 0) + 0x16d;
      }
      local_2c = local_2c + -1;
      local_28 = local_28 + 1;
      iVar5 = iVar5 + -1;
      uVar6 = uVar7 + 1;
      uVar10 = CONCAT44(uVar8 - (local_24 < uVar4),local_24 - uVar4);
    } while ((local_24 < uVar4) <= uVar8);
    local_58 = -local_2c;
    local_54 = 1;
    local_14 = local_24;
    if ((local_24 < 0x1f) <= uVar8) {
      local_14 = (uint)(uVar3 - 0x1f);
      uVar8 = (uint)(uVar3 - 0x1f >> 0x20);
      uVar6 = ((uVar7 & 3) != 0 ||
              (local_28 / 400) * -400 != local_2c && (local_28 / 100) * -100 == local_2c) ^ 0x1d;
      uVar4 = local_14 - uVar6;
      uVar6 = (uint)(local_14 < uVar6);
      uVar7 = uVar8 - uVar6;
      local_54 = 2;
      if (uVar6 <= uVar8) {
        if (uVar7 < (uVar4 < 0x1f)) {
          local_54 = 3;
          local_14 = uVar4;
        }
        else {
          local_14 = uVar4 - 0x1f;
          local_54 = 4;
          if ((uint)(local_14 < 0x1e) <= (uVar7 - 1) + (uint)(0x1e < uVar4)) {
            local_14 = uVar4 - 0x3d;
            local_54 = 5;
            if ((uint)(local_14 < 0x1f) <= (uVar7 - 1) + (uint)(0x3c < uVar4)) {
              local_14 = uVar4 - 0x5c;
              local_54 = 6;
              if ((uint)(local_14 < 0x1e) <= (uVar7 - 1) + (uint)(0x5b < uVar4)) {
                local_14 = uVar4 - 0x7a;
                local_54 = 7;
                if ((uint)(local_14 < 0x1f) <= (uVar7 - 1) + (uint)(0x79 < uVar4)) {
                  local_14 = uVar4 - 0x99;
                  local_54 = 8;
                  if ((uint)(local_14 < 0x1f) <= (uVar7 - 1) + (uint)(0x98 < uVar4)) {
                    local_14 = uVar4 - 0xb8;
                    local_54 = 9;
                    if ((uint)(local_14 < 0x1e) <= (uVar7 - 1) + (uint)(0xb7 < uVar4)) {
                      local_14 = uVar4 - 0xd6;
                      local_54 = 10;
                      if ((uint)(local_14 < 0x1f) <= (uVar7 - 1) + (uint)(0xd5 < uVar4)) {
                        local_14 = uVar4 - 0xf5;
                        local_54 = 0xb;
                        if ((uint)(local_14 < 0x1e) <= (uVar7 - 1) + (uint)(0xf4 < uVar4)) {
                          local_14 = uVar4 - 0x113;
                          bVar1 = (uVar7 - 1) + (uint)(0x112 < uVar4) < (uint)(local_14 < 0x1f);
                          local_54 = 0xd - bVar1;
                          if (!bVar1) {
                            local_14 = uVar4 - 0x132;
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
    uVar4 = (local_38 / 0x3c) % 0x3c;
    uVar8 = local_38 % 0x3c;
    uVar7 = local_14 + 1;
    local_4c = local_38 / 0xe10;
    PF_PART4(local_34, 4) = (int)(uVar9 >> 0x20);
    uVar6 = PF_PART4(local_34, 4) + (uint)(0xfffffffb < uVar2);
    local_50 = uVar7;
    local_48 = uVar4;
    local_44 = uVar8;
    local_34 = uVar9;
    local_20 = local_54;
    local_1c = local_58;
    local_18 = local_4c;
    uVar10 = recovered_20013a0(uVar2 + 4,uVar6,7,0);
    local_40 = (undefined4)uVar10;
    local_3c = local_24;
    pf_varargs_20044f0__4__4__4__4__4__4_
              (param_3,0x20,str_020d3f4d,local_1c,local_20,uVar7,local_18,uVar4,uVar8);
  }
  return;
}
#undef str_020d3f4d
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
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

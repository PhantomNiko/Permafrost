/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1570 (*(uint32_t *)(0x20eaf50U))
#define DAT_020addf4 (*(uint32_t volatile *)(0x2106c14U))
#define DAT_020cf458 (*(uint8_t volatile *)(0x216a9b5U))
#define DAT_020d5918 (*(uint8_t volatile *)(0x21765a0U))
#define DAT_020d5928 (*(uint32_t volatile *)(0x21765e0U))
#define DAT_020d592c (*(uint32_t volatile *)(0x21765e4U))
#define local_30 (*(undefined8 *)(frame + 64))
#define local_40 (*(undefined8 *)(frame + 48))
#define local_50 (*(undefined8 *)(frame + 32))
#define local_58 (*(undefined4 *)(frame + 24))
#define local_5c (*(uint *)(frame + 20))
#define local_60 (*(undefined4 *)(frame + 16))
#define uStack_28 (*(undefined8 *)(frame + 72))
#define uStack_38 (*(undefined8 *)(frame + 56))
#define uStack_48 (*(undefined8 *)(frame + 40))
uchar recovered_20b1ab0(int *param_1)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  ulonglong uVar7;

  if (param_1 == (int *)0x0) {
    return '\0';
  }
  puVar4 = recovered_2000ad0(0x20);
  if (puVar4 == (undefined4 *)0x0) {
    return '\0';
  }
  *puVar4 = 1;
  *(undefined8 *)(puVar4 + 2) = 0;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  recovered_205ec00((undefined8 *)param_1);
  *param_1 = 8;
  *(undefined4 **)(param_1 + 0xc) = puVar4;
  bVar2 = DAT_020d5918;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_60 = 5;
  local_5c = (uint)bVar2;
  if (local_5c == 0) {
    local_58 = 0;
  }
  else {
    local_58 = DAT_020a1570;
  }
  puVar5 = (undefined8 *)recovered_20bf690((long)puVar4,0x20f5f72U,'\x01');
  if (puVar5 != (undefined8 *)0x0) {
    uVar3 = recovered_20a0670(puVar5,(undefined8 *)&local_60);
    recovered_205ec00((undefined8 *)&local_60);
    if ((char)uVar3 == '\0') {
      return '\0';
    }
    bVar2 = DAT_020cf458;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_60 = 5;
    local_5c = (uint)bVar2;
    if (local_5c == 0) {
      local_58 = 0;
    }
    else {
      local_58 = DAT_020a1570;
    }
    if (((*param_1 == 8) && (*(long *)(param_1 + 0xc) != 0)) &&
       (puVar5 = (undefined8 *)recovered_20bf690(*(long *)(param_1 + 0xc),0x20f5f82U,'\x01'),
       puVar5 != (undefined8 *)0x0)) {
      uVar3 = recovered_20a0670(puVar5,(undefined8 *)&local_60);
      recovered_205ec00((undefined8 *)&local_60);
      if ((char)uVar3 == '\0') {
        return '\0';
      }
      puVar6 = (uint *)recovered_20135a0();
      local_5c = *puVar6;
      local_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
      uStack_28 = 0;
      local_60 = 6;
      if (((*param_1 == 8) && (*(long *)(param_1 + 0xc) != 0)) &&
         (puVar5 = (undefined8 *)recovered_20bf690(*(long *)(param_1 + 0xc),0x20f5f92U,'\x01'),
         puVar5 != (undefined8 *)0x0)) {
        uVar3 = recovered_20a0670(puVar5,(undefined8 *)&local_60);
        recovered_205ec00((undefined8 *)&local_60);
        if ((char)uVar3 == '\0') {
          return '\0';
        }
        uVar7 = recovered_20135a0();
        local_5c = *(uint *)(uVar7 + 4);
        local_58 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
        uStack_28 = 0;
        local_60 = 6;
        if (((*param_1 == 8) && (*(long *)(param_1 + 0xc) != 0)) &&
           (puVar5 = (undefined8 *)recovered_20bf690(*(long *)(param_1 + 0xc),0x20f5fa6U,'\x01'),
           puVar5 != (undefined8 *)0x0)) {
          uVar3 = recovered_20a0670(puVar5,(undefined8 *)&local_60);
          recovered_205ec00((undefined8 *)&local_60);
          if ((char)uVar3 == '\0') {
            return '\0';
          }
          uVar7 = recovered_20135a0();
          local_5c = *(uint *)(uVar7 + 8);
          local_58 = 0;
          local_50 = 0;
          uStack_48 = 0;
          local_40 = 0;
          uStack_38 = 0;
          local_30 = 0;
          uStack_28 = 0;
          local_60 = 6;
          if (((*param_1 == 8) && (*(long *)(param_1 + 0xc) != 0)) &&
             (puVar5 = (undefined8 *)recovered_20bf690(*(long *)(param_1 + 0xc),0x20f5fbeU,'\x01'),
             puVar5 != (undefined8 *)0x0)) {
            uVar3 = recovered_20a0670(puVar5,(undefined8 *)&local_60);
            recovered_205ec00((undefined8 *)&local_60);
            if ((char)uVar3 == '\0') {
              return '\0';
            }
            uVar7 = recovered_20135a0();
            uVar3 = recovered_20c48f0(param_1,0x20f5fcfU,*(undefined4 *)(uVar7 + 0xc));
            if ((char)uVar3 == '\0') {
              return '\0';
            }
            uVar7 = recovered_20135a0();
            uVar3 = recovered_20c48f0(param_1,0x20f5fe0U,*(undefined4 *)(uVar7 + 0x10));
            if ((char)uVar3 == '\0') {
              return '\0';
            }
            uVar7 = recovered_20135a0();
            uVar3 = recovered_20c48f0(param_1,0x20f5ff2U,*(undefined4 *)(uVar7 + 0x14));
            if ((char)uVar3 == '\0') {
              return '\0';
            }
            uVar7 = recovered_20135a0();
            uVar3 = recovered_20c48f0(param_1,0x20f6001U,*(undefined4 *)(uVar7 + 0x18));
            if ((char)uVar3 == '\0') {
              return '\0';
            }
            uVar7 = recovered_20135a0();
            uVar3 = recovered_20c48f0(param_1,0x20f6009U,*(undefined4 *)(uVar7 + 0x1c));
            if ((char)uVar3 == '\0') {
              return '\0';
            }
            uVar7 = recovered_20135a0();
            uVar3 = recovered_20c48f0(param_1,0x20f6012U,*(undefined4 *)(uVar7 + 0x20));
            if ((char)uVar3 == '\0') {
              return '\0';
            }
            uVar7 = recovered_20135a0();
            uVar3 = recovered_20c48f0(param_1,0x20f601cU,*(undefined4 *)(uVar7 + 0x24));
            if ((char)uVar3 == '\0') {
              return '\0';
            }
            uVar7 = recovered_20135a0();
            uVar3 = recovered_20c48f0(param_1,0x20f6027U,*(undefined4 *)(uVar7 + 0x28));
            if ((char)uVar3 == '\0') {
              return '\0';
            }
            uVar7 = recovered_20135a0();
            uVar3 = recovered_20c48f0(param_1,0x20f6030U,*(undefined4 *)(uVar7 + 0x2c));
            if ((char)uVar3 == '\0') {
              return '\0';
            }
            uVar1 = DAT_020d5928;
            uVar3 = recovered_20c48f0(param_1,0x20f603aU,uVar1);
            if ((char)uVar3 == '\0') {
              return '\0';
            }
            uVar1 = DAT_020d592c;
            uVar3 = recovered_20c48f0(param_1,0x20f6047U,uVar1);
            if ((char)uVar3 == '\0') {
              return '\0';
            }
            uVar1 = DAT_020addf4;
            uVar3 = recovered_20c48f0(param_1,0x20f6055U,uVar1);
            return (uchar)uVar3;
          }
        }
      }
    }
  }
  recovered_205ec00((undefined8 *)&local_60);
  return '\0';
}

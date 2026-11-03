#include "functions.h"
#undef DAT_00044df0
#define DAT_00044df0 (*(uint8_t *)(0x44df0U))
#undef DAT_00044ee8
#define DAT_00044ee8 (*(uint32_t *)(0x44ee8U))
#undef DAT_00044eec
#define DAT_00044eec (*(uint32_t *)(0x44eecU))
#undef DAT_00054df0
#define DAT_00054df0 (*(uint *)(0x54df0U))
#undef DAT_00054df4
#define DAT_00054df4 (*(uint8_t *)(0x54df4U))
#undef DAT_00054df8
#define DAT_00054df8 (*(int *)(0x54df8U))
#undef DAT_00054dfc
#define DAT_00054dfc (*(int *)(0x54dfcU))
#undef DAT_00054e00
#define DAT_00054e00 (*(uint *)(0x54e00U))
#undef DAT_00054e04
#define DAT_00054e04 (*(uint32_t *)(0x54e04U))
#undef DAT_00054e08
#define DAT_00054e08 (*(uint *)(0x54e08U))
#undef DAT_00054e0c
#define DAT_00054e0c (*(uint *)(0x54e0cU))
#undef DAT_00054e10
#define DAT_00054e10 (*(uint32_t *)(0x54e10U))
#undef DAT_00054e14
#define DAT_00054e14 (*(uint32_t *)(0x54e14U))
#undef DAT_00054e18
#define DAT_00054e18 (*(uint32_t *)(0x54e18U))
#undef DAT_00054e1c
#define DAT_00054e1c (*(uint32_t *)(0x54e1cU))
#undef DAT_00054e20
#define DAT_00054e20 (*(uint32_t *)(0x54e20U))
#undef DAT_00054e24
#define DAT_00054e24 (*(uint8_t *)(0x54e24U))
#undef DAT_00054e28
#define DAT_00054e28 (*(uint8_t *)(0x54e28U))
#undef _DAT_00054e24
#define _DAT_00054e24 (*(uint32_t *)(0x54e24U))
#define local_28 (*(uint *)(frame + 353))
#define local_24 (*(void * *)(frame + 357))
#define local_20 (*(undefined4 *)(frame + 361))
#define local_1c (*(void * *)(frame + 365))
#define local_18 (*(undefined1 * *)(frame + 369))
#define local_14 (*(uint *)(frame + 373))
#define local_179 (*(char (*)[240])(frame + 16))
#define local_89 (*(undefined1 *)(frame + 256))
#define local_88 (*(undefined1 (*)[8])(frame + 257))
#define local_80 (*(int *)(frame + 265))
#define local_7c (*(int *)(frame + 269))
#define local_78 (*(int *)(frame + 273))
#define local_74 (*(int *)(frame + 277))
#define local_6c (*(int *)(frame + 285))
#define local_64 (*(int *)(frame + 293))
#define local_60 (*(int *)(frame + 297))
#define local_5c (*(uint *)(frame + 301))
#define local_58 (*(uint *)(frame + 305))
#define local_44 (*(uint *)(frame + 325))
#define local_40 (*(void * *)(frame + 329))
#define local_3c (*(uint *)(frame + 333))
#define local_38 (*(void * *)(frame + 337))
#define local_34 (*(uint *)(frame + 341))
#define local_30 (*(uint *)(frame + 345))
#define local_2c (*(void * *)(frame + 349))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29807
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_29807(uint param_1,undefined4 param_2,uint param_3)

{
  unsigned char frame[425];

  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 extraout_EAX = 0;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  
  recovered_29b0f();
  uVar2 = recovered_29b1d(param_1,param_2,(int)local_88,0x44);
  if ((((char)uVar2 != '\0') &&
      (iVar3 = recovered_20fc5((int)local_88,0x3f248,8),
      (local_78 != 0 && local_7c != 0) && (local_80 == 1 && iVar3 == 0))) &&
     ((uVar4 = local_78 * local_60 + local_64, param_3 == 0 || (uVar4 <= param_3)))) {
    if (local_58 <= uVar4) {
      local_58 = uVar4;
    }
    local_30 = param_3;
    if (local_58 < param_3) {
      local_30 = local_58;
    }
    local_34 = param_3;
    if (param_3 == 0) {
      local_30 = local_58;
      local_34 = local_58;
    }
    uVar4 = local_7c * uVar4;
    local_20 = param_2;
    pvVar5 = recovered_20df4(uVar4);
    if (pvVar5 != (void *)0x0) {
      uVar2 = recovered_29b1d(param_1 & 0xff,local_20,(int)pvVar5,uVar4);
      if ((char)uVar2 == '\0') {
        recovered_20dfd((int)pvVar5);
      }
      else {
        local_14 = local_78 * local_7c;
        local_24 = (void *)(local_74 * local_7c + (int)pvVar5);
        local_38 = (void *)(local_6c * local_7c + (int)pvVar5);
        local_2c = (void *)(local_7c * local_64 + (int)pvVar5);
        uVar4 = 0;
        local_28 = param_1;
        local_1c = pvVar5;
        while( true ) {
          if (local_5c <= uVar4) {
            recovered_20dfd((int)pvVar5);
            DAT_00054df4 = (undefined1)param_1;
            DAT_00054df8 = local_7c;
            DAT_00054dfc = local_78;
            DAT_00054e00 = local_14;
            DAT_00054e04 = local_20;
            DAT_00054e08 = local_30;
            DAT_00054e0c = local_34;
            DAT_00054e10 = 1;
            DAT_00054e14 = 0;
            DAT_00054e18 = 0;
            DAT_00054e1c = 0;
            DAT_00054e20 = 0;
            _DAT_00054e24 = 0;
            DAT_00054e28 = 1;
            recovered_29baa();
            recovered_26b37();
            return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
          }
          if (0xff < DAT_00054df0) break;
          pvVar7 = (void *)(uVar4 * 0x100 + (int)local_38);
          local_3c = uVar4;
          recovered_20f42((int)local_179,(int)pvVar7,0xf0);
          uVar4 = DAT_00054df0;
          local_89 = 0;
          if (local_179[0] != '\0') {
            puVar1 = &DAT_00044df0 + DAT_00054df0 * 0x100;
            recovered_20fa9((int)puVar1,0,0x100);
            recovered_26d9b((int)local_179,puVar1);
            uVar8 = *(uint *)((int)pvVar7 + 0xf4);
            (&DAT_00044ee8)[uVar4 * 0x40] = uVar8;
            (&DAT_00044eec)[uVar4 * 0x40] = *(undefined4 *)((int)pvVar7 + 0xf8);
            local_18 = puVar1;
            if (uVar8 != 0) {
              pvVar5 = recovered_20df4(uVar8);
              *(void **)(local_18 + 0xf4) = pvVar5;
              if (pvVar5 != (void *)0x0) {
                uVar4 = *(uint *)((int)pvVar7 + 0xf0);
                uVar8 = *(uint *)(local_18 + 0xf8);
                uVar6 = 0;
                do {
                  local_40 = (void *)((uVar4 - 2) * local_14 + (int)local_2c);
                  local_44 = uVar4;
                  do {
                    puVar1 = local_18;
                    uVar4 = uVar8 - uVar6;
                    if (uVar8 < uVar6 || uVar4 == 0) goto LAB_00029a48;
                    if ((local_44 < 2) || (local_60 + 2U <= local_44)) goto LAB_00029a67;
                    if (local_14 <= uVar4) {
                      uVar4 = local_14;
                    }
                    recovered_20f42(*(int *)(local_18 + 0xf4) + uVar6,(int)local_40,uVar4);
                    uVar6 = uVar6 + uVar4;
                    uVar8 = *(uint *)(puVar1 + 0xf8);
                  } while (uVar8 <= uVar6);
                  uVar4 = *(uint *)((int)local_24 + local_44 * 4);
                } while (1 < uVar4 + 1);
              }
LAB_00029a67:
              pvVar5 = local_1c;
              break;
            }
LAB_00029a48:
            DAT_00054df0 = DAT_00054df0 + 1;
            param_1 = local_28;
            pvVar5 = local_1c;
          }
          uVar4 = local_3c + 1;
        }
        recovered_20dfd((int)pvVar5);
        recovered_29b0f();
      }
    }
  }
  return 0;
}


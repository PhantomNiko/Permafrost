#include "functions.h"
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
#undef DAT_00047e14
#define DAT_00047e14 (*(uint8_t *)(0x47e14U))
#undef DAT_00047e18
#define DAT_00047e18 (*(uint *)(0x47e18U))
#undef DAT_00047e1c
#define DAT_00047e1c (*(uint *)(0x47e1cU))
#undef DAT_00047e20
#define DAT_00047e20 (*(uint *)(0x47e20U))
#undef DAT_00047e24
#define DAT_00047e24 (*(uint32_t *)(0x47e24U))
#undef DAT_00047e28
#define DAT_00047e28 (*(uint *)(0x47e28U))
#undef DAT_00047e2c
#define DAT_00047e2c (*(uint *)(0x47e2cU))
#undef DAT_00047e30
#define DAT_00047e30 (*(uint32_t *)(0x47e30U))
#undef DAT_00047e34
#define DAT_00047e34 (*(int *)(0x47e34U))
#undef DAT_00047e68
#define DAT_00047e68 (*(uint *)(0x47e68U))
#undef DAT_00047e6c
#define DAT_00047e6c (*(uint *)(0x47e6cU))
#undef DAT_00047e70
#define DAT_00047e70 (*(uint *)(0x47e70U))
#undef DAT_00047e74
#define DAT_00047e74 (*(uint *)(0x47e74U))
#undef DAT_00047e78
#define DAT_00047e78 (*(uint8_t *)(0x47e78U))
#undef DAT_00047e7c
#define DAT_00047e7c (*(uint8_t *)(0x47e7cU))
#undef DAT_0004b4a1
#define DAT_0004b4a1 (*(uint8_t *)(0x4b4a1U))
#undef _DAT_00047e78
#define _DAT_00047e78 (*(uint *)(0x47e78U))
#define local_250 (*(undefined1 (*)[512])(frame + 44))
#define local_50 (*(uint *)(frame + 556))
#define local_4c (*(uint *)(frame + 560))
#define local_48 (*(uint *)(frame + 564))
#define local_44 (*(uint *)(frame + 568))
#define local_40 (*(uint *)(frame + 572))
#define local_3c (*(void * *)(frame + 576))
#define local_38 (*(uint *)(frame + 580))
#define local_34 (*(uint *)(frame + 584))
#define local_30 (*(uint *)(frame + 588))
#define local_2c (*(uint *)(frame + 592))
#define local_28 (*(int *)(frame + 596))
#define local_24 (*(void * *)(frame + 600))
#define local_20 (*(uint *)(frame + 604))
#define local_1c (*(void * *)(frame + 608))
#define local_18 (*(uint *)(frame + 612))
#define local_14 (*(int *)(frame + 616))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3fcab
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_3fcab(int param_1,int param_2)

{
  unsigned char frame[668];

  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;

  if (param_2 - 1U < 2) {
    uVar1 = recovered_24819((uint)*(byte *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                            *(void **)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    if ((char)uVar1 != '\0') {
      uVar4 = (uint)(DAT_00047e34 == param_2);
      goto LAB_0003ffb4;
    }
  }
  else {
    local_18 = 0;
    local_20 = 0;
    local_38 = 0;
    local_48 = 0;
    local_34 = 0;
    local_44 = 0;
    local_40 = 0;
    local_4c = 0;
    local_30 = 0;
    recovered_2a945();
    uVar1 = recovered_2a1fc((uint)*(byte *)(param_1 + 4),*(undefined4 *)(param_1 + 8),(int)local_250
                            ,0x200);
    if ((char)uVar1 != '\0') {
      iVar2 = recovered_2c8cc((int)local_250,*(uint *)(param_1 + 0xc),&local_18,&local_20,&local_38,
                              &local_48,&local_34,&local_44,&local_40,&local_4c,&local_30);
      uVar4 = 0;
      if (iVar2 != param_2 || iVar2 == 0) goto LAB_0003ffb4;
      if (local_18 != 0 && local_44 != 0) {
        uVar4 = ((local_44 * 0x20 + local_18) - 1) / local_18;
      }
      local_14 = local_38 + *(int *)(param_1 + 8);
      local_28 = local_48 * local_34;
      local_2c = local_18 * local_20;
      local_1c = recovered_20df4(local_34 * local_18);
      if (local_1c == (void *)0x0) goto LAB_0003ffb2;
      uVar1 = recovered_2a1fc((uint)*(byte *)(param_1 + 4),local_38 + *(int *)(param_1 + 8),
                              (int)local_1c,local_18 * local_34);
      pvVar3 = local_1c;
      if ((char)uVar1 == '\0') {
LAB_0003ffa7:
        pvVar3 = local_1c;
      }
      else {
        iVar2 = local_14 + local_28;
        local_28 = iVar2 + uVar4;
        if (param_2 != 5) {
          local_14 = iVar2;
          local_24 = recovered_20df4(local_18 * uVar4);
          if (local_24 != (void *)0x0) {
            uVar1 = recovered_2a1fc((uint)*(byte *)(param_1 + 4),local_14,(int)local_24,
                                    local_18 * uVar4);
            pvVar3 = local_1c;
            if ((char)uVar1 != '\0') {
              uVar4 = recovered_40103(param_1,param_2,(int)local_1c,local_30,local_28,local_20,
                                      local_2c,(int)local_24,uVar4 * local_18,&DAT_00042614);
              local_14 = CONCAT31(PF_PART3(local_14, 1),(char)uVar4);
              pvVar5 = local_24;
              goto LAB_0003fefa;
            }
            recovered_20dfd((int)local_24);
          }
          goto LAB_0003ffa7;
        }
        local_3c = (void *)0x0;
        local_50 = 0;
        uVar1 = recovered_3ffe8(param_1,5,(int)local_1c,local_30,local_28,local_20,local_2c,local_40
                                ,&local_3c,(int *)&local_50);
        if ((char)uVar1 != '\0') {
          uVar4 = recovered_40103(param_1,5,(int)pvVar3,local_30,local_28,local_20,local_2c,
                                  (int)local_3c,local_50,&DAT_00042614);
          local_14 = CONCAT31(PF_PART3(local_14, 1),(char)uVar4);
          pvVar5 = local_3c;
LAB_0003fefa:
          recovered_20dfd((int)pvVar5);
          if ((char)local_14 != '\0') {
            recovered_20dfd((int)pvVar3);
            DAT_00047e14 = *(undefined1 *)(param_1 + 4);
            DAT_00047e18 = local_18;
            DAT_00047e1c = local_20;
            DAT_00047e20 = local_2c;
            DAT_00047e24 = *(undefined4 *)(param_1 + 8);
            DAT_00047e28 = local_4c;
            DAT_00047e2c = local_4c;
            DAT_00047e30 = *(undefined4 *)(param_1 + 0x10);
            DAT_00047e68 = local_38;
            DAT_00047e6c = local_48;
            DAT_00047e70 = local_34;
            DAT_00047e74 = local_44;
            _DAT_00047e78 = local_40;
            DAT_00047e7c = 1;
            DAT_00047e34 = param_2;
            recovered_28614();
            DAT_0004b4a1 = 0;
            recovered_25089();
            recovered_282ee();
            uVar4 = 1;
            goto LAB_0003ffb4;
          }
          recovered_20dfd((int)pvVar3);
          recovered_2a945();
          goto LAB_0003ffb2;
        }
      }
      recovered_20dfd((int)pvVar3);
    }
  }
LAB_0003ffb2:
  uVar4 = 0;
LAB_0003ffb4:
  return SUB41(uVar4,0);
}

#include "functions.h"
#undef DAT_0003f254
#define DAT_0003f254 (*(uint8_t *)(0x3f254U))
#undef DAT_00054df4
#define DAT_00054df4 (*(uint8_t *)(0x54df4U))
#undef DAT_00054df8
#define DAT_00054df8 (*(uint *)(0x54df8U))
#undef DAT_00054dfc
#define DAT_00054dfc (*(uint *)(0x54dfcU))
#undef DAT_00054e00
#define DAT_00054e00 (*(int *)(0x54e00U))
#undef DAT_00054e04
#define DAT_00054e04 (*(uint32_t *)(0x54e04U))
#undef DAT_00054e08
#define DAT_00054e08 (*(uint *)(0x54e08U))
#undef DAT_00054e0c
#define DAT_00054e0c (*(uint *)(0x54e0cU))
#undef DAT_00054e10
#define DAT_00054e10 (*(int *)(0x54e10U))
#undef DAT_00054e14
#define DAT_00054e14 (*(uint *)(0x54e14U))
#undef DAT_00054e18
#define DAT_00054e18 (*(uint *)(0x54e18U))
#undef DAT_00054e1c
#define DAT_00054e1c (*(uint *)(0x54e1cU))
#undef DAT_00054e20
#define DAT_00054e20 (*(uint *)(0x54e20U))
#undef DAT_00054e24
#define DAT_00054e24 (*(uint8_t *)(0x54e24U))
#undef DAT_00054e28
#define DAT_00054e28 (*(uint8_t *)(0x54e28U))
#undef _DAT_00054e24
#define _DAT_00054e24 (*(uint *)(0x54e24U))
#define local_250 (*(undefined1 (*)[512])(frame + 44))
#define local_50 (*(uint *)(frame + 556))
#define pvVar5 (*(void * *)(frame + 16))
#define local_4c (*(uint *)(frame + 560))
#define local_48 (*(uint *)(frame + 564))
#define local_44 (*(uint *)(frame + 568))
#define local_40 (*(uint *)(frame + 572))
#define local_3c (*(void * *)(frame + 576))
#define local_38 (*(uint *)(frame + 580))
#define local_34 (*(uint *)(frame + 584))
#define local_30 (*(uint *)(frame + 588))
#define local_2c (*(int *)(frame + 592))
#define local_28 (*(int *)(frame + 596))
#define local_24 (*(void * *)(frame + 600))
#define local_20 (*(uint *)(frame + 604))
#define local_1c (*(void * *)(frame + 608))
#define local_18 (*(uint *)(frame + 612))
#define local_14 (*(int *)(frame + 616))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3d40c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_3d40c(int param_1,int param_2)

{
  unsigned char frame[668];

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  
  if (param_2 == 1) {
    uVar1 = recovered_29807((uint)*(byte *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                            *(uint *)(param_1 + 0xc));
    return uVar1;
  }
  local_18 = 0;
  local_20 = 0;
  local_38 = 0;
  local_48 = 0;
  local_34 = 0;
  local_44 = 0;
  local_40 = 0;
  local_4c = 0;
  local_30 = 0;
  recovered_29b0f();
  uVar1 = recovered_29b1d((uint)*(byte *)(param_1 + 4),*(undefined4 *)(param_1 + 8),(int)local_250,
                          0x200);
  if ((char)uVar1 == '\0') {
    return 0;
  }
  iVar2 = recovered_2a226((int)local_250,*(uint *)(param_1 + 0xc),&local_18,&local_20,&local_38,
                          &local_48,&local_34,&local_44,&local_40,&local_4c,&local_30);
  uVar3 = 0;
  if (iVar2 != param_2 || iVar2 == 0) {
    return 0;
  }
  if (local_18 != 0 && local_44 != 0) {
    uVar3 = ((local_44 * 0x20 + local_18) - 1) / local_18;
  }
  local_14 = local_38 + *(int *)(param_1 + 8);
  local_28 = local_48 * local_34;
  local_2c = local_18 * local_20;
  local_1c = recovered_20df4(local_34 * local_18);
  if (local_1c == (void *)0x0) {
    return 0;
  }
  uVar1 = recovered_29b1d((uint)*(byte *)(param_1 + 4),local_38 + *(int *)(param_1 + 8),
                          (int)local_1c,local_18 * local_34);
  pvVar4 = local_1c;
  if ((char)uVar1 != '\0') {
    iVar2 = local_14 + local_28;
    local_28 = iVar2 + uVar3;
    if (param_2 == 4) {
      local_3c = (void *)0x0;
      local_50 = 0;
      uVar1 = recovered_3d721(param_1,4,(int)local_1c,local_30,local_28,local_20,local_2c,local_40,
                              &local_3c,(int *)&local_50);
      if ((char)uVar1 != '\0') {
        uVar3 = recovered_3d83c(param_1,4,(int)pvVar4,local_30,local_28,local_20,local_2c,
                                (int)local_3c,local_50,&DAT_0003f254);
        local_14 = CONCAT31(PF_PART3(local_14, 1),(char)uVar3);
        pvVar5 = local_3c;
LAB_0003d647:
        recovered_20dfd((int)pvVar5);
        if ((char)local_14 == '\0') {
          recovered_20dfd((int)pvVar4);
          recovered_29b0f();
          return 0;
        }
        recovered_20dfd((int)pvVar4);
        DAT_00054df4 = *(undefined1 *)(param_1 + 4);
        DAT_00054df8 = local_18;
        DAT_00054dfc = local_20;
        DAT_00054e00 = local_2c;
        DAT_00054e04 = *(undefined4 *)(param_1 + 8);
        DAT_00054e08 = local_4c;
        DAT_00054e0c = local_4c;
        DAT_00054e14 = local_38;
        DAT_00054e18 = local_48;
        DAT_00054e1c = local_34;
        DAT_00054e20 = local_44;
        _DAT_00054e24 = local_40;
        DAT_00054e28 = 1;
        DAT_00054e10 = param_2;
        recovered_29baa();
        recovered_26b37();
        return CONCAT31((int3)((uint)pvVar4 >> 8),1);
      }
      goto LAB_0003d6e3;
    }
    local_14 = iVar2;
    local_24 = recovered_20df4(local_18 * uVar3);
    if (local_24 != (void *)0x0) {
      uVar1 = recovered_29b1d((uint)*(byte *)(param_1 + 4),local_14,(int)local_24,local_18 * uVar3);
      pvVar4 = local_1c;
      if ((char)uVar1 != '\0') {
        uVar3 = recovered_3d83c(param_1,param_2,(int)local_1c,local_30,local_28,local_20,local_2c,
                                (int)local_24,uVar3 * local_18,&DAT_0003f254);
        local_14 = CONCAT31(PF_PART3(local_14, 1),(char)uVar3);
        pvVar5 = local_24;
        goto LAB_0003d647;
      }
      recovered_20dfd((int)local_24);
    }
  }
  pvVar4 = local_1c;
LAB_0003d6e3:
  recovered_20dfd((int)pvVar4);
  return 0;
}


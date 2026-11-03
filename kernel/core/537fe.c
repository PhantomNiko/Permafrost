#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
#undef DAT_0005e6b4
#define DAT_0005e6b4 (*(uint8_t *)(0x5e6b4U))
#undef DAT_0005e6b8
#define DAT_0005e6b8 (*(uint *)(0x5e6b8U))
#undef DAT_0005e6bc
#define DAT_0005e6bc (*(uint *)(0x5e6bcU))
#undef DAT_0005e6c0
#define DAT_0005e6c0 (*(uint *)(0x5e6c0U))
#undef DAT_0005e6c4
#define DAT_0005e6c4 (*(uint32_t *)(0x5e6c4U))
#undef DAT_0005e6c8
#define DAT_0005e6c8 (*(uint *)(0x5e6c8U))
#undef DAT_0005e6cc
#define DAT_0005e6cc (*(uint *)(0x5e6ccU))
#undef DAT_0005e6d0
#define DAT_0005e6d0 (*(uint *)(0x5e6d0U))
#undef DAT_0005e6d4
#define DAT_0005e6d4 (*(uint *)(0x5e6d4U))
#undef DAT_0005e708
#define DAT_0005e708 (*(uint *)(0x5e708U))
#undef DAT_0005e70c
#define DAT_0005e70c (*(uint *)(0x5e70cU))
#undef DAT_0005e710
#define DAT_0005e710 (*(uint *)(0x5e710U))
#undef DAT_0005e714
#define DAT_0005e714 (*(uint *)(0x5e714U))
#undef DAT_0005e718
#define DAT_0005e718 (*(uint8_t *)(0x5e718U))
#undef DAT_0005e71c
#define DAT_0005e71c (*(uint8_t *)(0x5e71cU))
#undef DAT_00061d4d
#define DAT_00061d4d (*(uint8_t *)(0x61d4dU))
#undef _DAT_0005e718
#define _DAT_0005e718 (*(uint *)(0x5e718U))
#define local_28 (*(int *)(frame + 596))
#define local_24 (*(void * *)(frame + 600))
#define local_20 (*(uint *)(frame + 604))
#define local_1c (*(void * *)(frame + 608))
#define local_18 (*(uint *)(frame + 612))
#define local_14 (*(uint *)(frame + 616))
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x537fe
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_537fe(int param_1,uint param_2)

{
  unsigned char frame[668] = {0};

  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  void *pvVar6;

  if ((param_2 < 7) && ((0x46U >> (param_2 & 0x1f) & 1) != 0)) {
    uVar2 = recovered_3228e((uint)*(byte *)(param_1 + 4),*(uint *)(param_1 + 8),
                            *(void **)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    if ((char)uVar2 != '\0') {
      if (param_2 != 6) {
        uVar5 = (uint)(DAT_0005e6d4 == param_2);
        goto LAB_00053b2c;
      }
      DAT_0005e6d4 = 6;
      DAT_0005e6d0 = DAT_0005e6d0 | 1;
LAB_00053855:
      uVar5 = 1;
      goto LAB_00053b2c;
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
    recovered_39f57();
    bVar1 = recovered_3864c(*(byte *)(param_1 + 4),*(uint *)(param_1 + 8),(int)local_250,0x200);
    if (bVar1) {
      uVar3 = recovered_3c207((int)local_250,*(uint *)(param_1 + 0xc),&local_18,&local_20,&local_38,
                              &local_48,&local_34,&local_44,&local_40,&local_4c,&local_30);
      uVar5 = 0;
      if (uVar3 != param_2 || uVar3 == 0) goto LAB_00053b2c;
      if (local_18 != 0 && local_44 != 0) {
        uVar5 = ((local_44 * 0x20 + local_18) - 1) / local_18;
      }
      local_14 = local_38 + *(int *)(param_1 + 8);
      local_28 = local_48 * local_34;
      local_2c = local_18 * local_20;
      local_1c = recovered_211fa(local_34 * local_18);
      if (local_1c == (void *)0x0) goto LAB_00053b2a;
      bVar1 = recovered_3864c(*(byte *)(param_1 + 4),local_38 + *(int *)(param_1 + 8),(int)local_1c,
                              local_18 * local_34);
      pvVar4 = local_1c;
      if (bVar1) {
        uVar3 = local_14 + local_28;
        local_28 = uVar3 + uVar5;
        if (param_2 != 5) {
          local_14 = uVar3;
          local_24 = recovered_211fa(local_18 * uVar5);
          if (local_24 != (void *)0x0) {
            bVar1 = recovered_3864c(*(byte *)(param_1 + 4),local_14,(int)local_24,local_18 * uVar5);
            pvVar4 = local_1c;
            if (bVar1) {
              uVar3 = recovered_53b60(param_1,param_2,(int)local_1c,local_30,local_28,local_20,
                                      local_2c,(int)local_24,uVar5 * local_18,&DAT_00057364);
              local_14 = CONCAT31(PF_PART3(local_14, 1),(char)uVar3);
              pvVar6 = local_24;
              goto LAB_00053a76;
            }
            recovered_21203((int)local_24);
          }
          goto LAB_00053b1f;
        }
        local_3c = (void *)0x0;
        local_50 = 0;
        uVar2 = recovered_388cc(param_1,5,(int)local_1c,local_30,local_28,local_20,local_2c,local_40
                                ,&local_3c,&local_50);
        if ((char)uVar2 != '\0') {
          uVar3 = recovered_53b60(param_1,5,(int)pvVar4,local_30,local_28,local_20,local_2c,
                                  (int)local_3c,local_50,&DAT_00057364);
          local_14 = CONCAT31(PF_PART3(local_14, 1),(char)uVar3);
          pvVar6 = local_3c;
LAB_00053a76:
          recovered_21203((int)pvVar6);
          if ((char)local_14 != '\0') {
            recovered_21203((int)pvVar4);
            DAT_0005e6b4 = *(undefined1 *)(param_1 + 4);
            DAT_0005e6b8 = local_18;
            DAT_0005e6bc = local_20;
            DAT_0005e6c0 = local_2c;
            DAT_0005e6c4 = *(undefined4 *)(param_1 + 8);
            DAT_0005e6c8 = local_4c;
            DAT_0005e6cc = local_4c;
            DAT_0005e6d0 = *(uint *)(param_1 + 0x10);
            DAT_0005e708 = local_38;
            DAT_0005e70c = local_48;
            DAT_0005e710 = local_34;
            DAT_0005e714 = local_44;
            _DAT_0005e718 = local_40;
            DAT_0005e71c = 1;
            DAT_0005e6d4 = param_2;
            recovered_37039();
            DAT_00061d4d = 0;
            recovered_32fb9();
            goto LAB_00053855;
          }
          recovered_21203((int)pvVar4);
          recovered_39f57();
          goto LAB_00053b2a;
        }
      }
      else {
LAB_00053b1f:
        pvVar4 = local_1c;
      }
      recovered_21203((int)pvVar4);
    }
  }
LAB_00053b2a:
  uVar5 = 0;
LAB_00053b2c:
  return SUB41(uVar5,0);
}

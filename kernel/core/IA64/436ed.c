#include "functions.h"
#undef DAT_0004627c
#define DAT_0004627c (*(uint8_t *)(0x4627cU))
#undef DAT_0004ce28
#define DAT_0004ce28 (*(uint8_t *)(0x4ce28U))
#undef DAT_0004ce2c
#define DAT_0004ce2c (*(uint *)(0x4ce2cU))
#undef DAT_0004ce30
#define DAT_0004ce30 (*(uint *)(0x4ce30U))
#undef DAT_0004ce34
#define DAT_0004ce34 (*(uint *)(0x4ce34U))
#undef DAT_0004ce38
#define DAT_0004ce38 (*(uint32_t *)(0x4ce38U))
#undef DAT_0004ce3c
#define DAT_0004ce3c (*(uint *)(0x4ce3cU))
#undef DAT_0004ce40
#define DAT_0004ce40 (*(uint *)(0x4ce40U))
#undef DAT_0004ce44
#define DAT_0004ce44 (*(uint *)(0x4ce44U))
#undef DAT_0004ce48
#define DAT_0004ce48 (*(uint *)(0x4ce48U))
#undef DAT_0004ce7c
#define DAT_0004ce7c (*(uint *)(0x4ce7cU))
#undef DAT_0004ce80
#define DAT_0004ce80 (*(uint *)(0x4ce80U))
#undef DAT_0004ce84
#define DAT_0004ce84 (*(uint *)(0x4ce84U))
#undef DAT_0004ce88
#define DAT_0004ce88 (*(uint *)(0x4ce88U))
#undef DAT_0004ce8c
#define DAT_0004ce8c (*(uint8_t *)(0x4ce8cU))
#undef DAT_0004ce90
#define DAT_0004ce90 (*(uint8_t *)(0x4ce90U))
#undef DAT_000504c1
#define DAT_000504c1 (*(uint8_t *)(0x504c1U))
#undef _DAT_0004ce8c
#define _DAT_0004ce8c (*(uint *)(0x4ce8cU))
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
#define local_14 (*(uint *)(frame + 616))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x436ed
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_436ed(int param_1,uint param_2)

{
  unsigned char frame[668];

  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  void *pvVar6;

  if ((param_2 < 7) && ((0x46U >> (param_2 & 0x1f) & 1) != 0)) {
    uVar2 = recovered_24e66((uint)*(byte *)(param_1 + 4),*(uint *)(param_1 + 8),
                            *(uint *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    if ((char)uVar2 != '\0') {
      if (param_2 != 6) {
        uVar5 = (uint)(DAT_0004ce48 == param_2);
        goto LAB_00043a20;
      }
      DAT_0004ce48 = 6;
      DAT_0004ce44 = DAT_0004ce44 | 1;
LAB_00043744:
      uVar5 = 1;
      goto LAB_00043a20;
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
    recovered_2bd61();
    bVar1 = recovered_2b3d8((uint)*(byte *)(param_1 + 4),*(uint *)(param_1 + 8),(int)local_250,0x200
                           );
    if (bVar1) {
      uVar3 = recovered_2de14((int)local_250,*(uint *)(param_1 + 0xc),&local_18,&local_20,&local_38,
                              &local_48,&local_34,&local_44,&local_40,&local_4c,&local_30);
      uVar5 = 0;
      if (uVar3 != param_2 || uVar3 == 0) goto LAB_00043a20;
      if (local_18 != 0 && local_44 != 0) {
        uVar5 = ((local_44 * 0x20 + local_18) - 1) / local_18;
      }
      local_14 = local_38 + *(int *)(param_1 + 8);
      local_28 = local_48 * local_34;
      local_2c = local_18 * local_20;
      local_1c = recovered_211fa(local_34 * local_18);
      if (local_1c == (void *)0x0) goto LAB_00043a1e;
      bVar1 = recovered_2b3d8((uint)*(byte *)(param_1 + 4),local_38 + *(int *)(param_1 + 8),
                              (int)local_1c,local_18 * local_34);
      pvVar4 = local_1c;
      if (bVar1) {
        uVar3 = local_14 + local_28;
        local_28 = uVar3 + uVar5;
        if (param_2 != 5) {
          local_14 = uVar3;
          local_24 = recovered_211fa(local_18 * uVar5);
          if (local_24 != (void *)0x0) {
            bVar1 = recovered_2b3d8((uint)*(byte *)(param_1 + 4),local_14,(int)local_24,
                                    local_18 * uVar5);
            pvVar4 = local_1c;
            if (bVar1) {
              uVar3 = recovered_43b75(param_1,param_2,(int)local_1c,local_30,local_28,local_20,
                                      local_2c,(int)local_24,uVar5 * local_18,&DAT_0004627c);
              local_14 = CONCAT31(PF_PART3(local_14, 1),(char)uVar3);
              pvVar6 = local_24;
              goto LAB_00043965;
            }
            recovered_21203((int)local_24);
          }
          goto LAB_00043a13;
        }
        local_3c = (void *)0x0;
        local_50 = 0;
        uVar2 = recovered_43a54(param_1,5,(int)local_1c,local_30,local_28,local_20,local_2c,local_40
                                ,&local_3c,&local_50);
        if ((char)uVar2 != '\0') {
          uVar3 = recovered_43b75(param_1,5,(int)pvVar4,local_30,local_28,local_20,local_2c,
                                  (int)local_3c,local_50,&DAT_0004627c);
          local_14 = CONCAT31(PF_PART3(local_14, 1),(char)uVar3);
          pvVar6 = local_3c;
LAB_00043965:
          recovered_21203((int)pvVar6);
          if ((char)local_14 != '\0') {
            recovered_21203((int)pvVar4);
            DAT_0004ce28 = *(undefined1 *)(param_1 + 4);
            DAT_0004ce2c = local_18;
            DAT_0004ce30 = local_20;
            DAT_0004ce34 = local_2c;
            DAT_0004ce38 = *(undefined4 *)(param_1 + 8);
            DAT_0004ce3c = local_4c;
            DAT_0004ce40 = local_4c;
            DAT_0004ce44 = *(uint *)(param_1 + 0x10);
            DAT_0004ce7c = local_38;
            DAT_0004ce80 = local_48;
            DAT_0004ce84 = local_34;
            DAT_0004ce88 = local_44;
            _DAT_0004ce8c = local_40;
            DAT_0004ce90 = 1;
            DAT_0004ce48 = param_2;
            recovered_2953a();
            DAT_000504c1 = 0;
            recovered_25ae1();
            recovered_29214();
            goto LAB_00043744;
          }
          recovered_21203((int)pvVar4);
          recovered_2bd61();
          goto LAB_00043a1e;
        }
      }
      else {
LAB_00043a13:
        pvVar4 = local_1c;
      }
      recovered_21203((int)pvVar4);
    }
  }
LAB_00043a1e:
  uVar5 = 0;
LAB_00043a20:
  return SUB41(uVar5,0);
}

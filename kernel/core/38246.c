#include "functions.h"
#undef DAT_0005e69c
#define DAT_0005e69c (*(int *)(0x5e69cU))
#undef DAT_0005e6a0
#define DAT_0005e6a0 (*(uint *)(0x5e6a0U))
#undef DAT_0005e6b4
#define DAT_0005e6b4 (*(byte *)(0x5e6b4U))
#undef DAT_0005e6b8
#define DAT_0005e6b8 (*(void * *)(0x5e6b8U))
#undef DAT_0005e6bc
#define DAT_0005e6bc (*(void * *)(0x5e6bcU))
#undef DAT_0005e6c0
#define DAT_0005e6c0 (*(void * *)(0x5e6c0U))
#undef DAT_0005e6c4
#define DAT_0005e6c4 (*(uint *)(0x5e6c4U))
#undef DAT_0005e6c8
#define DAT_0005e6c8 (*(uint *)(0x5e6c8U))
#undef DAT_0005e6d4
#define DAT_0005e6d4 (*(uint *)(0x5e6d4U))
#undef DAT_0005e6d8
#define DAT_0005e6d8 (*(int *)(0x5e6d8U))
#undef DAT_0005e6dc
#define DAT_0005e6dc (*(uint *)(0x5e6dcU))
#undef DAT_0005e6e0
#define DAT_0005e6e0 (*(int *)(0x5e6e0U))
#undef DAT_0005e6f0
#define DAT_0005e6f0 (*(void * *)(0x5e6f0U))
#undef DAT_0005e6f4
#define DAT_0005e6f4 (*(void * *)(0x5e6f4U))
#undef DAT_0005e708
#define DAT_0005e708 (*(int *)(0x5e708U))
#undef DAT_0005e70c
#define DAT_0005e70c (*(int *)(0x5e70cU))
#undef DAT_0005e710
#define DAT_0005e710 (*(void * *)(0x5e710U))
#undef DAT_0005e714
#define DAT_0005e714 (*(int *)(0x5e714U))
#undef DAT_0005e71c
#define DAT_0005e71c (*(char *)(0x5e71cU))
#define local_30 (*(uint *)(frame + 84))
#define local_2c (*(uint *)(frame + 88))
#define local_28 (*(void * *)(frame + 92))
#define local_24 (*(void * *)(frame + 96))
#define local_20 (*(void * *)(frame + 100))
#define local_1c (*(void * *)(frame + 104))
#define local_18 (*(void * *)(frame + 108))
#define local_14 (*(void * *)(frame + 112))
#define local_74 (*(void * *)(frame + 16))
#define local_70 (*(byte *)(frame + 20))
#define local_40 (*(int *)(frame + 68))
#define local_3c (*(void * *)(frame + 72))
#define local_38 (*(uint *)(frame + 76))
#define local_34 (*(int *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x38246
 */

undefined4 recovered_38246(uint param_1)

{
  unsigned char frame[164] = {0};

  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;

  if (DAT_0005e71c != '\x01') {
    return 0;
  }
  if (DAT_0005e6a0 <= param_1) {
    return 0;
  }
  iVar7 = param_1 * 0x10c + DAT_0005e69c;
  if ((DAT_0005e69c != 0) && ((*(byte *)(iVar7 + 0xfc) & 2) != 0)) goto LAB_000384b4;
  uVar5 = 1;
  if (*(char *)(iVar7 + 0x108) != '\0') {
    return 1;
  }
  uVar2 = *(uint *)(iVar7 + 0xf8);
  if (uVar2 == 0) {
LAB_000383a3:
    *(undefined1 *)(iVar7 + 0x108) = 1;
  }
  else {
    if ((DAT_0005e6d4 < 7) && ((0x46U >> (DAT_0005e6d4 & 0x1f) & 1) != 0)) {
      local_74 = (void *)0x0;
      local_28 = (void *)0x0;
      local_18 = DAT_0005e6b8;
      local_14 = DAT_0005e6bc;
      local_20 = DAT_0005e6c0;
      if (DAT_0005e6dc != 0 &&
          ((DAT_0005e6c0 != (void *)0x0 &&
           (DAT_0005e6bc != (void *)0x0 && DAT_0005e6b8 != (void *)0x0)) &&
          (0xfffffffd < DAT_0005e6d4 - 3 || DAT_0005e6d4 == 6))) {
        local_1c = DAT_0005e6f0;
        local_24 = DAT_0005e6f4;
        if (DAT_0005e6f0 == (void *)0x0) {
          uVar4 = (uint)((ulonglong)DAT_0005e6dc * ZEXT48(DAT_0005e6b8) >> 0x20);
          uVar2 = (uint)((ulonglong)DAT_0005e6dc * ZEXT48(DAT_0005e6b8));
          if ((uVar4 != 0 || uVar4 < (uVar2 == 0)) ||
             (local_1c = recovered_211fa(uVar2), local_1c == (void *)0x0)) goto LAB_000384b4;
          bVar1 = recovered_3864c(DAT_0005e6b4,DAT_0005e6d8 + DAT_0005e6c4,(int)local_1c,uVar2);
          if (!bVar1) {
            pvVar6 = local_1c;
            goto LAB_000384ac;
          }
          if ((void *)(uVar2 >> 2) <= (void *)((int)local_24 - 1U)) {
            local_24 = (void *)(uVar2 >> 2);
          }
          uVar2 = *(uint *)(iVar7 + 0xf8);
          local_18 = local_1c;
        }
        else {
          local_18 = (void *)0x0;
        }
        local_20 = DAT_0005e6c0;
        local_14 = DAT_0005e6bc;
        uVar2 = recovered_38756((uint)DAT_0005e6b4,DAT_0005e6c4,DAT_0005e6e0,(int)DAT_0005e6bc,
                                (uint)DAT_0005e6c0,(int)local_1c,(uint)local_24,
                                *(uint *)(iVar7 + 0x100),uVar2,&local_74,(int *)&local_28);
        local_14 = (void *)CONCAT31(PF_PART3(local_14, 1),(char)uVar2);
        recovered_21203((int)local_18);
        if ((char)local_14 != '\0') {
          *(void **)(iVar7 + 0xf4) = local_74;
          *(void **)(iVar7 + 0x104) = local_28;
          goto LAB_000383a3;
        }
        pvVar6 = local_74;
LAB_000384ac:
        recovered_21203((int)pvVar6);
      }
    }
    else if ((DAT_0005e6d4 - 3 < 3) &&
            (local_20 = DAT_0005e6bc,
            DAT_0005e710 != (void *)0x0 &&
            ((DAT_0005e70c != 0 && DAT_0005e6c0 != (void *)0x0) &&
            (DAT_0005e6bc != (void *)0x0 && DAT_0005e6b8 != (void *)0x0)))) {
      local_18 = DAT_0005e710;
      if (DAT_0005e714 == 0) {
        local_1c = (void *)0x0;
      }
      else {
        local_1c = (void *)((uint)((int)DAT_0005e6b8 + DAT_0005e714 * 0x20 + -1) /
                           (uint)DAT_0005e6b8);
      }
      uVar2 = (int)local_1c + DAT_0005e708 + DAT_0005e70c * (int)DAT_0005e710;
      pvVar6 = (void *)(DAT_0005e6c8 - uVar2);
      if (((uVar2 <= DAT_0005e6c8 && pvVar6 != (void *)0x0) &&
          (local_14 = (void *)((uint)pvVar6 / (uint)DAT_0005e6bc), DAT_0005e6bc <= pvVar6)) &&
         ((int)(ZEXT48(DAT_0005e6b8) * ZEXT48(DAT_0005e710) >> 0x20) == 0)) {
        uVar2 = (int)DAT_0005e710 * (int)DAT_0005e6b8;
        pvVar6 = recovered_211fa(uVar2);
        if (pvVar6 != (void *)0x0) {
          bVar1 = recovered_3864c(DAT_0005e6b4,DAT_0005e708 + DAT_0005e6c4,(int)pvVar6,uVar2);
          if (bVar1) {
            local_20 = pvVar6;
            recovered_213af((int)&local_74,0,0x34);
            local_70 = DAT_0005e6b4;
            local_40 = DAT_0005e708;
            local_34 = DAT_0005e70c;
            local_30 = *(uint *)(iVar7 + 0xf8);
            local_18 = *(void **)(iVar7 + 0x100);
            local_28 = (void *)0x0;
            local_2c = 0;
            local_38 = DAT_0005e6d4;
            local_24 = DAT_0005e6bc;
            local_3c = DAT_0005e6c0;
            uVar2 = DAT_0005e6c4;
            if (local_30 == 0) {
LAB_0003861f:
              local_14 = (void *)CONCAT31((int3)(uVar2 >> 8),1);
              pvVar6 = local_28;
            }
            else {
              uVar3 = recovered_388cc((int)&local_74,DAT_0005e6d4,(int)local_20,(uint)local_14,
                                      (int)local_1c +
                                      (int)DAT_0005e710 * DAT_0005e70c + DAT_0005e708 + DAT_0005e6c4
                                      ,(int)DAT_0005e6bc,(uint)DAT_0005e6c0,(uint)local_18,&local_28
                                      ,&local_2c);
              local_14 = (void *)0x0;
              pvVar6 = (void *)0x0;
              if ((char)uVar3 != '\0') {
                uVar2 = local_30;
                if (local_30 <= local_2c) goto LAB_0003861f;
                recovered_21203((int)local_28);
                local_14 = (void *)0x0;
                pvVar6 = (void *)0x0;
              }
            }
            recovered_21203((int)local_20);
            if ((char)local_14 != '\0') {
              *(void **)(iVar7 + 0xf4) = pvVar6;
              goto LAB_000383a3;
            }
          }
          goto LAB_000384ac;
        }
      }
    }
LAB_000384b4:
    uVar5 = 0;
  }
  return uVar5;
}

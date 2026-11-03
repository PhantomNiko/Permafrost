#include "functions.h"
#undef DAT_0002cb77
#define DAT_0002cb77 (*(uint8_t *)(0x2cb77U))
#undef DAT_0002f0b8
#define DAT_0002f0b8 (*(int *)(0x2f0b8U))
#undef DAT_0002f0bc
#define DAT_0002f0bc (*(uint8_t *)(0x2f0bcU))
#undef DAT_0002f1b0
#define DAT_0002f1b0 (*(uint32_t *)(0x2f1b0U))
#undef DAT_0002f1b4
#define DAT_0002f1b4 (*(uint32_t *)(0x2f1b4U))
#undef DAT_0002f1b8
#define DAT_0002f1b8 (*(uint32_t *)(0x2f1b8U))
#undef DAT_0003f0bc
#define DAT_0003f0bc (*(uint32_t * *)(0x3f0bcU))
#undef DAT_0003f0c0
#define DAT_0003f0c0 (*(uint *)(0x3f0c0U))
#undef DAT_0003f0c4
#define DAT_0003f0c4 (*(int *)(0x3f0c4U))
#undef DAT_0003f0c8
#define DAT_0003f0c8 (*(uint *)(0x3f0c8U))
#undef DAT_0003f0cc
#define DAT_0003f0cc (*(uint32_t * *)(0x3f0ccU))
#undef DAT_0003f0d0
#define DAT_0003f0d0 (*(uint *)(0x3f0d0U))
#undef DAT_0003f0d4
#define DAT_0003f0d4 (*(char *)(0x3f0d4U))
#undef PTR_DAT_0002f01c
#define PTR_DAT_0002f01c (*(uint8_t * *)(0x2f01cU))
#undef PTR_DAT_0002f020
#define PTR_DAT_0002f020 (*(uint8_t * *)(0x2f020U))
#undef PTR_DAT_0002f024
#define PTR_DAT_0002f024 (*(uint8_t * *)(0x2f024U))
#undef _DAT_00006068
#define _DAT_00006068 (*(uint32_t *)(0x6068U))
#define local_14 (*(void * *)(frame + 2184))
#define local_8c (*(undefined1 (*)[8])(frame + 2064))
#define local_84 (*(undefined4 *)(frame + 2072))
#define local_80 (*(uint *)(frame + 2076))
#define auStack_88c (*(uint (*)[256])(frame + 16))
#define local_7c (*(int *)(frame + 2080))
#define aiStack_48c (*(int (*)[256])(frame + 1040))
#define local_78 (*(int *)(frame + 2084))
#define local_74 (*(uint *)(frame + 2088))
#define local_70 (*(int *)(frame + 2092))
#define local_6c (*(uint *)(frame + 2096))
#define local_68 (*(int *)(frame + 2100))
#define local_64 (*(uint *)(frame + 2104))
#define local_60 (*(void * *)(frame + 2108))
#define local_5c (*(uint *)(frame + 2112))
#define local_48 (*(uint *)(frame + 2132))
#define local_44 (*(int *)(frame + 2136))
#define local_40 (*(uint *)(frame + 2140))
#define local_3c (*(int *)(frame + 2144))
#define local_38 (*(int *)(frame + 2148))
#define local_34 (*(uint *)(frame + 2152))
#define local_30 (*(uint *)(frame + 2156))
#define local_2c (*(void * *)(frame + 2160))
#define local_28 (*(void * *)(frame + 2164))
#define local_24 (*(void * *)(frame + 2168))
#define local_20 (*(uint *)(frame + 2172))
#define local_1c (*(void * *)(frame + 2176))
#define local_18 (*(char * *)(frame + 2180))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x217ea
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_217ea(void)

{
  unsigned char frame[2236];

  int *piVar1;
  void *pvVar2;
  void *extraout_ECX;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  bool bVar10;
  
  if (DAT_0003f0c4 != 0 && (DAT_0003f0c0 != 0 && DAT_0003f0d4 == '\x01')) {
    local_38 = DAT_0003f0c4;
    local_24 = (void *)DAT_0003f0d0;
    uVar5 = (int)DAT_0003f0bc * 0x100;
    local_28 = (void *)DAT_0003f0c0;
    local_18 = (char *)0x0;
    local_30 = DAT_0003f0c8;
    local_14 = (void *)(DAT_0003f0c8 - 1);
    piVar1 = &DAT_0002f1b4;
    local_2c = DAT_0003f0bc;
    pvVar8 = DAT_0003f0bc;
    while (bVar10 = pvVar8 != (void *)0x0, pvVar8 = (void *)((int)pvVar8 + -1), bVar10) {
      local_18 = (char *)((int)local_18 + (uint)(*piVar1 + (int)local_14) / DAT_0003f0c8);
      piVar1 = piVar1 + 0x40;
    }
    local_1c = (void *)((uVar5 + DAT_0003f0c0) - uVar5 % DAT_0003f0c0);
    if (uVar5 % DAT_0003f0c0 == 0) {
      local_1c = (void *)uVar5;
    }
    iVar9 = 2;
    piVar1 = &DAT_0002f1b4;
    for (pvVar8 = (void *)0x0; pvVar4 = local_28, local_2c != pvVar8;
        pvVar8 = (void *)((int)pvVar8 + 1)) {
      if (*piVar1 == 0) {
        auStack_88c[(int)pvVar8] = 0;
LAB_000218cb:
        aiStack_48c[(int)pvVar8] = 0;
      }
      else {
        uVar6 = *piVar1 + (int)local_14;
        uVar5 = uVar6 / local_30;
        auStack_88c[(int)pvVar8] = uVar5;
        if (uVar6 < local_30) goto LAB_000218cb;
        aiStack_48c[(int)pvVar8] = iVar9;
        iVar9 = iVar9 + uVar5;
      }
      piVar1 = piVar1 + 0x40;
    }
    uVar5 = (uint)local_24 / (uint)local_28;
    local_14 = (void *)((uint)local_1c / (uint)local_28);
    if (iVar9 - 2U <= local_18) {
      uVar6 = (int)local_18 * 4 + 8;
      uVar3 = uVar6 % (uint)local_28;
      local_34 = ((int)local_28 + (int)local_18 * 4 + 8) - uVar3;
      if (uVar3 == 0) {
        local_34 = uVar6;
      }
      local_34 = local_34 / (uint)local_28;
      local_44 = local_34 + (int)local_14 + 1;
      uVar6 = local_38 * (int)local_18 + local_44;
      if ((local_24 < local_28) || (uVar6 <= uVar5)) {
        local_20 = uVar6 * (int)local_28;
        local_48 = uVar5;
        local_1c = recovered_20ae5(local_20);
        if (local_1c != (void *)0x0) {
          local_3c = local_34 + 1;
          local_40 = uVar6;
          recovered_20c84((int)local_1c,0,local_20);
          recovered_20c84((int)local_8c,0,0x44);
          recovered_20c1d((int)local_8c,0x2ca90,8);
          pvVar8 = local_1c;
          local_84 = 1;
          local_80 = (uint)pvVar4;
          local_7c = local_38;
          local_78 = 1;
          local_74 = local_34;
          local_70 = local_3c;
          local_6c = (uint)local_14;
          local_5c = uVar5;
          if (local_24 < pvVar4) {
            local_5c = local_40;
          }
          local_68 = local_44;
          local_64 = (uint)local_18;
          local_60 = local_2c;
          recovered_20c1d((int)local_1c,(int)local_8c,0x44);
          iVar9 = local_78 * (int)pvVar4;
          *(undefined4 *)((int)pvVar8 + iVar9) = 0xffffffff;
          *(undefined4 *)((int)pvVar8 + iVar9 + 4) = 0xffffffff;
          local_14 = (void *)(iVar9 + (int)pvVar8);
          for (pvVar2 = (void *)0x0; pvVar2 != local_2c; pvVar2 = (void *)((int)pvVar2 + 1)) {
            uVar5 = auStack_88c[(int)pvVar2];
            for (uVar6 = 1; uVar6 - uVar5 != 1; uVar6 = uVar6 + 1) {
              iVar7 = aiStack_48c[(int)pvVar2] + uVar6;
              if (uVar6 == uVar5) {
                iVar7 = -1;
              }
              *(int *)(iVar9 + (int)pvVar8 + (aiStack_48c[(int)pvVar2] + uVar6) * 4 + -4) = iVar7;
            }
            pvVar4 = local_28;
          }
          local_24 = (void *)(local_70 * (int)pvVar4 + (int)local_1c);
          iVar9 = 0;
          pvVar8 = (void *)0x0;
          while (pvVar4 = local_24, local_2c != pvVar8) {
            local_18 = (char *)((int)local_24 + iVar9);
            local_14 = pvVar8;
            recovered_20c84((int)local_18,0,0x100);
            recovered_216bc(local_18,0xf0,&DAT_0002cb77,&DAT_0002f0bc + iVar9);
            *(int *)((int)pvVar4 + iVar9 + 0xf0) = aiStack_48c[(int)local_14];
            *(undefined4 *)((int)pvVar4 + iVar9 + 0xf4) =
                 *(undefined4 *)((int)&DAT_0002f1b4 + iVar9);
            *(undefined4 *)((int)pvVar4 + iVar9 + 0xf8) =
                 *(undefined4 *)((int)&DAT_0002f1b8 + iVar9);
            iVar9 = iVar9 + 0x100;
            pvVar8 = (void *)((int)local_14 + 1);
          }
          local_28 = (void *)(local_68 * (int)local_28 + (int)local_1c);
          pvVar8 = (void *)0x0;
          uVar5 = local_30;
          while (pvVar8 != local_2c) {
            local_18 = pvVar8;
            if (((&DAT_0002f1b0)[(int)pvVar8 * 0x40] != 0) &&
               ((&DAT_0002f1b4)[(int)pvVar8 * 0x40] != 0)) {
              uVar6 = 0;
              local_14 = (void *)-auStack_88c[(int)pvVar8];
              for (iVar9 = -2; (int)local_14 + iVar9 != -2; iVar9 = iVar9 + 1) {
                uVar3 = (&DAT_0002f1b4)[(int)pvVar8 * 0x40] - uVar6;
                if ((uint)(&DAT_0002f1b4)[(int)pvVar8 * 0x40] < uVar6) {
                  uVar3 = 0;
                }
                if (uVar5 <= uVar3) {
                  uVar3 = uVar5;
                }
                if (uVar3 != 0) {
                  recovered_20c1d((int)((aiStack_48c[(int)local_18] + iVar9) * uVar5 + (int)local_28
                                       ),(&DAT_0002f1b0)[(int)pvVar8 * 0x40] + uVar6,uVar3);
                  uVar5 = local_30;
                }
                uVar6 = uVar6 + uVar5;
              }
            }
            pvVar8 = (void *)((int)local_18 + 1);
          }
          local_18 = (char *)0x0;
          if ((((local_20 & 0x1ff) == 0) && (local_20 != 0)) && (DAT_0002f0b8 != 0)) {
            local_14 = DAT_0003f0cc;
            uVar5 = 0;
            pvVar8 = DAT_0003f0cc;
            do {
              uVar6 = local_20 - uVar5;
              local_18 = (char *)CONCAT31((int3)((uint)pvVar8 >> 8),local_20 < uVar5 || uVar6 == 0);
              if (local_20 < uVar5 || uVar6 == 0) break;
              uVar3 = uVar6 >> 9;
              if (0x37 < uVar6 >> 9) {
                uVar3 = 0x38;
              }
              recovered_20c1d(0x10000,(int)local_1c + uVar5,uVar3 * 0x200);
              *(undefined4 *)PTR_DAT_0002f01c = _DAT_00006068;
              *(uint *)PTR_DAT_0002f024 = (uVar5 >> 9) + (int)local_14;
              *(uint *)PTR_DAT_0002f020 = uVar3;
              iVar9 = FUN_000202c9();
              uVar5 = uVar5 + uVar3 * 0x200;
              pvVar8 = extraout_ECX;
            } while (iVar9 != 0);
          }
          recovered_20aee((int)local_1c);
          return local_18;
        }
      }
    }
  }
  return 0;
}


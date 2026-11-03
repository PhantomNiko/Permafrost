#include "functions.h"
#undef DAT_0003f336
#define DAT_0003f336 (*(uint8_t *)(0x3f336U))
#undef DAT_00044df0
#define DAT_00044df0 (*(uint8_t *)(0x44df0U))
#undef DAT_00044ee4
#define DAT_00044ee4 (*(uint32_t *)(0x44ee4U))
#undef DAT_00044ee8
#define DAT_00044ee8 (*(uint32_t *)(0x44ee8U))
#undef DAT_00044eec
#define DAT_00044eec (*(uint32_t *)(0x44eecU))
#undef DAT_00054df0
#define DAT_00054df0 (*(uint *)(0x54df0U))
#undef DAT_00054e28
#define DAT_00054e28 (*(char *)(0x54e28U))
#define local_201 (*(char (*)[241])(frame + 16))
#define local_110 (*(undefined1 (*)[244])(frame + 257))
#define local_1c (*(int *)(frame + 501))
#define local_14 (*(byte *)(frame + 509))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3c967
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 recovered_3c967(int param_1,int param_2,uint param_3)

{
  unsigned char frame[561];

  char *out;
  bool bVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_00054e28 == '\0') {
    return 0;
  }
  if (param_2 == 0 && param_3 != 0) {
    return 0;
  }
  recovered_26d9b(param_1,local_201);
  pvVar4 = (void *)0x0;
  if (local_201[0] == '\0') {
    return 0;
  }
  if (param_3 != 0) {
    pvVar4 = recovered_20df4(param_3);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    recovered_20f42((int)pvVar4,param_2,param_3);
  }
  uVar2 = recovered_26d47(local_201);
  recovered_20fa9((int)local_110,0,0x100);
  uVar6 = DAT_00054df0;
  if (uVar2 == 0xffffffff) {
    if (DAT_00054df0 < 0x100) {
      iVar3 = DAT_00054df0 * 0x100;
      DAT_00054df0 = DAT_00054df0 + 1;
      recovered_20fa9((int)(&DAT_00044df0 + iVar3),0,0x100);
      goto LAB_0003ca77;
    }
  }
  else {
    recovered_20f42((int)local_110,(int)(&DAT_00044df0 + uVar2 * 0x100),0x100);
    uVar6 = uVar2;
    if ((local_14 & 2) == 0) {
LAB_0003ca77:
      out = &DAT_00044df0 + uVar6 * 0x100;
      recovered_219e1(out,0xf1,&DAT_0003f336,local_201);
      (&DAT_00044ee4)[uVar6 * 0x40] = pvVar4;
      (&DAT_00044ee8)[uVar6 * 0x40] = param_3;
      (&DAT_00044eec)[uVar6 * 0x40] = 0;
      bVar1 = recovered_22486();
      if (bVar1) {
        uVar5 = CONCAT31((int3)((uint)pvVar4 >> 8),1);
        if (local_1c == 0 || uVar2 == 0xffffffff) {
          return uVar5;
        }
        recovered_20dfd(local_1c);
        return uVar5;
      }
      recovered_20dfd((int)pvVar4);
      if (uVar2 == 0xffffffff) {
        recovered_20fa9((int)out,0,0x100);
        DAT_00054df0 = DAT_00054df0 - 1;
        return 0;
      }
      recovered_20f42((int)out,(int)local_110,0x100);
      return 0;
    }
  }
  recovered_20dfd((int)pvVar4);
  return 0;
}


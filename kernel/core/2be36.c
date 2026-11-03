#include "functions.h"
#undef DAT_0002cb77
#define DAT_0002cb77 (*(uint8_t *)(0x2cb77U))
#undef DAT_0002f0bc
#define DAT_0002f0bc (*(uint8_t *)(0x2f0bcU))
#undef DAT_0002f1b0
#define DAT_0002f1b0 (*(uint32_t *)(0x2f1b0U))
#undef DAT_0002f1b4
#define DAT_0002f1b4 (*(uint32_t *)(0x2f1b4U))
#undef DAT_0002f1b8
#define DAT_0002f1b8 (*(uint32_t *)(0x2f1b8U))
#undef DAT_0003f0bc
#define DAT_0003f0bc (*(uint *)(0x3f0bcU))
#undef DAT_0003f0d4
#define DAT_0003f0d4 (*(char *)(0x3f0d4U))
#define local_204 (*(undefined1 (*)[244])(frame + 16))
#define local_110 (*(int *)(frame + 260))
#define local_101 (*(char (*)[241])(frame + 275))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2be36
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 recovered_2be36(int param_1,int param_2,int param_3)

{
  unsigned char frame[564];

  char *out;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  uint uVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_0003f0d4 == '\0') {
    return 0;
  }
  if (param_2 != 0 || param_3 == 0) {
    recovered_25240(param_1,local_101);
    pvVar4 = (void *)0x0;
    if (local_101[0] == '\0') {
      return 0;
    }
    if (param_3 != 0) {
      pvVar4 = recovered_20ae5(param_3);
      if (pvVar4 == (void *)0x0) {
        return 0;
      }
      recovered_20c1d((int)pvVar4,param_2,param_3);
    }
    uVar1 = recovered_255e4(local_101);
    recovered_20c84((int)local_204,0,0x100);
    uVar5 = DAT_0003f0bc;
    if (uVar1 == 0xffffffff) {
      if (0xff < DAT_0003f0bc) {
        recovered_20aee((int)pvVar4);
        return 0;
      }
      iVar2 = DAT_0003f0bc * 0x100;
      DAT_0003f0bc = DAT_0003f0bc + 1;
      recovered_20c84((int)(&DAT_0002f0bc + iVar2),0,0x100);
    }
    else {
      recovered_20c1d((int)local_204,(int)(&DAT_0002f0bc + uVar1 * 0x100),0x100);
      uVar5 = uVar1;
    }
    out = &DAT_0002f0bc + uVar5 * 0x100;
    recovered_216bc(out,0xf1,&DAT_0002cb77,local_101);
    (&DAT_0002f1b0)[uVar5 * 0x40] = pvVar4;
    (&DAT_0002f1b4)[uVar5 * 0x40] = param_3;
    (&DAT_0002f1b8)[uVar5 * 0x40] = 0;
    uVar3 = recovered_217ea();
    if ((char)uVar3 != '\0') {
      uVar3 = CONCAT31((int3)((uint)pvVar4 >> 8),1);
      if (local_110 == 0 || uVar1 == 0xffffffff) {
        return uVar3;
      }
      recovered_20aee(local_110);
      return uVar3;
    }
    recovered_20aee((int)pvVar4);
    if (uVar1 == 0xffffffff) {
      recovered_20c84((int)out,0,0x100);
      DAT_0003f0bc = DAT_0003f0bc - 1;
    }
    else {
      recovered_20c1d((int)out,(int)local_204,0x100);
    }
  }
  return 0;
}


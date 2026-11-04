#include "functions.h"
#undef DAT_00006068
#define DAT_00006068 (*(uint8_t *)(0x6068U))
#undef DAT_00006084
#define DAT_00006084 (*(uint8_t *)(0x6084U))
#undef DAT_00006238
#define DAT_00006238 (*(uint8_t *)(0x6238U))
#undef DAT_0000623c
#define DAT_0000623c (*(uint8_t *)(0x623cU))
#undef DAT_0005e940
#define DAT_0005e940 (*(int *)(0x5e940U))
#undef DAT_000875fc
#define DAT_000875fc (*(uint8_t *)(0x875fcU))
#undef DAT_000875fd
#define DAT_000875fd (*(uint8_t *)(0x875fdU))
#undef DAT_00087600
#define DAT_00087600 (*(uint32_t *)(0x87600U))
#undef DAT_00087604
#define DAT_00087604 (*(uint32_t *)(0x87604U))
#undef DAT_00087620
#define DAT_00087620 (*(char *)(0x87620U))
#undef DAT_00087621
#define DAT_00087621 (*(char *)(0x87621U))
#undef DAT_00087622
#define DAT_00087622 (*(byte *)(0x87622U))
#undef DAT_00087624
#define DAT_00087624 (*(void * *)(0x87624U))
#undef PTR_DAT_0005d0d0
#define PTR_DAT_0005d0d0 (*(uint8_t * *)(0x5d0d0U))
#undef PTR_DAT_0005d0d4
#define PTR_DAT_0005d0d4 (*(uint8_t * *)(0x5d0d4U))
#undef _DAT_00006068
#define _DAT_00006068 (*(uint *)(0x6068U))
#undef _DAT_00006084
#define _DAT_00006084 (*(void * *)(0x6084U))
#undef _DAT_00006238
#define _DAT_00006238 (*(int *)(0x6238U))
#undef _DAT_0000623c
#define _DAT_0000623c (*(uint *)(0x623cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3b248
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_3b248(void)

{
  unsigned char frame[64] = {0};

  char cVar1;
  undefined3 extraout_var = 0;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;

  iVar6 = *(int *)PTR_DAT_0005d0d0;
  uVar5 = *(uint *)PTR_DAT_0005d0d4;
  if ((uVar5 == 0 || iVar6 == 0) && (DAT_0005e940 != 0)) {
    uVar5 = _DAT_0000623c;
    iVar6 = _DAT_00006238;
  }
  if (DAT_00087621 == '\x01') {
LAB_0003b293:
    pvVar3 = DAT_00087624;
    uVar5 = (uint)DAT_00087622;
    cVar1 = recovered_3b378(uVar5);
    uVar2 = CONCAT31(extraout_var,1);
    if (cVar1 == '\0') {
      uVar2 = recovered_31ce7(uVar5,0,pvVar3,0);
    }
  }
  else {
    if (DAT_00087620 == '\0') {
      DAT_00087620 = '\x01';
      if (iVar6 == 0) {
        DAT_00087620 = 1;
        return 0;
      }
      if (uVar5 == 0) {
        DAT_00087620 = 1;
        return 0;
      }
      if ((uVar5 & 0x1ff) != 0) {
        DAT_00087620 = 1;
        return 0;
      }
      cVar1 = 'p';
      for (iVar4 = -0x60; iVar4 != 0; iVar4 = iVar4 + 0xc) {
        if ((&DAT_000875fc)[iVar4] != '\x01') {
          (&DAT_000875fd)[iVar4] = cVar1;
          pvVar3 = (void *)(uintptr_t)iVar6;
          *(void **)((int)&DAT_00087604 + iVar4) = pvVar3;
          if (pvVar3 != (void *)0x0) {
            /* Keep the reserved boot RAM disk in place. */
            DAT_00087624 = (void *)(uVar5 >> 9);
            *(void **)((int)&DAT_00087600 + iVar4) = DAT_00087624;
            (&DAT_000875fc)[iVar4] = 1;
            DAT_00087621 = '\x01';
            DAT_00087622 = (&DAT_000875fd)[iVar4];
            if (DAT_0005e940 != 0) {
              _DAT_00006068 = (uint)DAT_00087622;
              _DAT_00006084 = DAT_00087624;
            }
            DAT_000875fc = 0;
            goto LAB_0003b293;
          }
          break;
        }
        cVar1 = cVar1 + '\x01';
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf1fc (*(uint32_t volatile *)(0x2245284U))
#define DAT_020cf204 (*(uint32_t volatile *)(0x224528cU))
undefined4 recovered_207e100(char *incoming_ecx,int incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  char *left;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  if (incoming_edx == 0 || incoming_ecx == (char *)0x0) {
    return 0;
  }
  iVar5 = DAT_020cf1fc;
  do {
    do {
      do {
        if (iVar5 == 0) {
          uVar4 = recovered_20b91c0(incoming_ecx,incoming_edx);
          return uVar4;
        }
        iVar7 = DAT_020cf204;
        iVar5 = iVar5 + -1;
      } while (iVar7 == 0);
      piVar1 = (int *)(iVar7 + iVar5 * 0xc);
      uVar2 = piVar1[1];
    } while (uVar2 == 0);
    iVar7 = 0;
    uVar6 = 0;
    do {
      if ((*(char *)(*piVar1 + 0x28 + iVar7) == '\x01') &&
         (left = *(char **)(*piVar1 + iVar7), left != (char *)0x0)) {
        iVar3 = recovered_20022a0(left,incoming_ecx);
        if (iVar3 == 0) {
          if (-1 < (int)uVar6) {
            iVar3 = DAT_020cf204;
            uVar4 = recovered_207e1d0((undefined4 *)(*(int *)(iVar3 + iVar5 * 0xc) + 4 + iVar7),
                                      (undefined4 *)incoming_edx);
            return uVar4;
          }
          break;
        }
        uVar2 = piVar1[1];
      }
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 0x2c;
    } while (uVar6 < uVar2);
  } while( true );
}

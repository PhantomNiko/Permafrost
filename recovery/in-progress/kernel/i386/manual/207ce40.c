/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf1fc (*(uint32_t volatile *)(0x2245284U))
#define DAT_020cf204 (*(uint32_t volatile *)(0x224528cU))
#define DAT_020cf214 (*(uint32_t volatile *)(0x224529cU))
#define DAT_020cf218 (*(uint32_t volatile *)(0x22452a0U))
undefined4 recovered_207ce40(char *incoming_ecx,int incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *left;
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  if (!(incoming_edx != 0 && incoming_ecx != (char *)0x0)) {
LAB_02052bbf:
    return 0;
  }
  iVar5 = DAT_020cf1fc;
  do {
    if (iVar5 == 0) {
      uVar1 = DAT_020cf218;
      if (uVar1 != 0) {
        iVar7 = 0;
        iVar5 = DAT_020cf214;
        uVar6 = 0;
        do {
          if ((*(char *)(iVar5 + 0x28 + iVar7) == '\x01') &&
             (*(char **)(iVar5 + iVar7) != (char *)0x0)) {
            iVar5 = recovered_20022a0(*(char **)(iVar5 + iVar7),incoming_ecx);
            if (iVar5 == 0) {
              piVar3 = &DAT_020cf214;
              if ((int)uVar6 < 0) {
                return 0;
              }
LAB_02052bd8:
              uVar4 = recovered_207e1d0((undefined4 *)incoming_edx,
                                        (undefined4 *)(*piVar3 + 4 + uVar6 * 0x2c));
              return uVar4;
            }
            iVar5 = DAT_020cf214;
            uVar1 = DAT_020cf218;
          }
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + 0x2c;
        } while (uVar6 < uVar1);
      }
      goto LAB_02052bbf;
    }
    iVar7 = DAT_020cf204;
    iVar5 = iVar5 + -1;
    if (iVar7 != 0) {
      piVar3 = (int *)(iVar7 + iVar5 * 0xc);
      uVar1 = piVar3[1];
      if (uVar1 != 0) {
        iVar7 = 0;
        uVar6 = 0;
        do {
          if ((*(char *)(*piVar3 + 0x28 + iVar7) == '\x01') &&
             (left = *(char **)(*piVar3 + iVar7), left != (char *)0x0)) {
            iVar2 = recovered_20022a0(left,incoming_ecx);
            if (iVar2 == 0) {
              if (-1 < (int)uVar6) {
                uVar4 = DAT_020cf204;
                uVar4 = DAT_020cf204;
                iVar7 = DAT_020cf204;
                piVar3 = (int *)(iVar5 * 0xc + iVar7);
                goto LAB_02052bd8;
              }
              break;
            }
            uVar1 = piVar3[1];
          }
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + 0x2c;
        } while (uVar6 < uVar1);
      }
    }
  } while( true );
}

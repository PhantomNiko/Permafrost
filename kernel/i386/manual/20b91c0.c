/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf214 (*(uint32_t volatile *)(0x224529cU))
#define DAT_020cf218 (*(uint32_t volatile *)(0x22452a0U))
#define DAT_020cf21c (*(uint32_t volatile *)(0x22452a4U))
undefined4 recovered_20b91c0(char *incoming_ecx,int incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  void *pvVar3;
  ulong size;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;

  if (incoming_edx != 0) {
    uVar2 = DAT_020cf218;
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      iVar7 = 0;
      iVar1 = DAT_020cf214;
      uVar6 = 0;
      do {
        if ((*(char *)(iVar1 + 0x28 + iVar7) == '\x01') &&
           (*(char **)(iVar1 + iVar7) != (char *)0x0)) {
          iVar1 = recovered_20022a0(*(char **)(iVar1 + iVar7),incoming_ecx);
          if (iVar1 == 0) {
            if (-1 < (int)uVar6) {
              iVar1 = DAT_020cf214;
              goto LAB_02086c53;
            }
            uVar2 = DAT_020cf218;
            break;
          }
          iVar1 = DAT_020cf214;
          uVar2 = DAT_020cf218;
        }
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + 0x2c;
      } while (uVar6 < uVar2);
    }
    uVar2 = uVar2 + 1;
    uVar6 = DAT_020cf21c;
    if (uVar6 < uVar2) {
      uVar8 = 0x10;
      if (uVar6 != 0) {
        uVar8 = uVar6;
      }
      for (; uVar8 < uVar2; uVar8 = uVar8 * 2) {
        if ((int)uVar8 < 0) {
          uVar8 = uVar2;
          break;
        }
      }
      pvVar3 = (void *)DAT_020cf214;
      pvVar3 = recovered_2001860(pvVar3,uVar8 * 0x2c);
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
      uVar2 = DAT_020cf21c;
      iVar1 = uVar8 - uVar2;
      if (uVar2 <= uVar8 && iVar1 != 0) {
        puVar5 = (undefined1 *)(uVar2 * 0x2c + 0x28 + (int)pvVar3);
        do {
          *(undefined4 *)(puVar5 + -0x28) = 0;
          *(undefined4 *)(puVar5 + -0x24) = 0;
          *(undefined4 *)(puVar5 + -0x20) = 0;
          *(undefined4 *)(puVar5 + -0x1c) = 0;
          *(undefined4 *)(puVar5 + -0x18) = 0;
          *(undefined4 *)(puVar5 + -0x14) = 0;
          *(undefined4 *)(puVar5 + -0x10) = 0;
          *(undefined4 *)(puVar5 + -0xc) = 0;
          *(undefined4 *)(puVar5 + -8) = 0;
          *(undefined4 *)(puVar5 + -4) = 0;
          *puVar5 = 0;
          puVar5 = puVar5 + 0x2c;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      DAT_020cf214 = pvVar3;
      DAT_020cf21c = uVar8;
    }
    size = recovered_2002270(incoming_ecx);
    pvVar3 = recovered_2001650(size + 1);
    if (pvVar3 != (void *)0x0) {
      if (incoming_ecx != (char *)0x0 && size != 0) {
        recovered_2001b70(pvVar3,incoming_ecx,size);
      }
      *(undefined1 *)((int)pvVar3 + size) = 0;
      uVar6 = DAT_020cf218;
      DAT_020cf218 = uVar6 + 1;
      iVar1 = DAT_020cf214;
      *(void **)(iVar1 + uVar6 * 0x2c) = pvVar3;
      *(undefined1 *)(iVar1 + 0x28 + uVar6 * 0x2c) = 1;
LAB_02086c53:
      uVar4 = recovered_207e1d0((undefined4 *)(iVar1 + 4 + uVar6 * 0x2c),(undefined4 *)incoming_edx)
      ;
      return uVar4;
    }
  }
  return 0;
}

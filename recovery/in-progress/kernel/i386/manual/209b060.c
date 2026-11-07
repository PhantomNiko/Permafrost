/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define DAT_02095760 (*(uint8_t *)(0x20d3aeeU))
#define DAT_02095762 (*(uint8_t *)(0x20d3af0U))
#define DAT_02095765 (*(uint8_t *)(0x20d3af3U))
#define DAT_02095768 (*(uint8_t *)(0x20d3af6U))
#define DAT_0209576b (*(uint8_t *)(0x20d3af9U))
#define DAT_0209576e (*(uint8_t *)(0x20d3afcU))
#define local_11 (*(byte *)(frame + 31))
#define local_18 (*(byte * *)(frame + 24))
undefined4 recovered_209b060(int *incoming_ecx,byte *incoming_edx)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  char *incoming_edx_00;
  int iVar7;
  uint size;

  local_18 = &DAT_0208e2dc;
  if (incoming_edx != (byte *)0x0) {
    local_18 = incoming_edx;
  }
  if ((incoming_ecx == (int *)0x0) ||
     (uVar4 = recovered_2086400(incoming_ecx,&DAT_02095760), (char)uVar4 == '\0')) {
LAB_02070322:
    uVar4 = 0;
  }
  else {
    bVar3 = *local_18;
    if (bVar3 != 0) {
      iVar7 = 0;
      do {
        local_11 = bVar3;
        switch((uintptr_t)(bVar3)) {
        case 9:
          incoming_edx_00 = &DAT_0209576e;
          break;
        case 10:
          incoming_edx_00 = &DAT_02095768;
          break;
        case 0xb:
        case 0xc:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
switchD_0207026a_caseD_b:
          iVar6 = *incoming_ecx;
          uVar2 = incoming_ecx[1];
          uVar1 = iVar6 + 2;
          if (uVar2 < uVar1) {
            size = 0x20;
            if (uVar2 != 0) {
              size = uVar2;
            }
            for (; size < uVar1; size = size * 2) {
              if ((int)size < 0) {
                size = uVar1;
                break;
              }
            }
            pvVar5 = recovered_2001860((void *)incoming_ecx[2],size);
            if (pvVar5 == (void *)0x0) goto LAB_02070322;
            incoming_ecx[2] = (int)pvVar5;
            incoming_ecx[1] = size;
            iVar6 = *incoming_ecx;
          }
          else {
            pvVar5 = (void *)incoming_ecx[2];
          }
          recovered_2001b70((void *)((int)pvVar5 + iVar6),&local_11,1);
          iVar6 = *incoming_ecx;
          *incoming_ecx = iVar6 + 1;
          *(undefined1 *)(incoming_ecx[2] + 1 + iVar6) = 0;
          goto LAB_0207024b;
        case 0xd:
          incoming_edx_00 = &DAT_0209576b;
          break;
        case 0x22:
          incoming_edx_00 = &DAT_02095765;
          break;
        default:
          if (bVar3 != 0x5c) goto switchD_0207026a_caseD_b;
          incoming_edx_00 = &DAT_02095762;
        }
        uVar4 = recovered_2086400(incoming_ecx,incoming_edx_00);
        if ((char)uVar4 == '\0') goto LAB_02070322;
LAB_0207024b:
        bVar3 = local_18[iVar7 + 1];
        iVar7 = iVar7 + 1;
      } while (bVar3 != 0);
    }
    uVar4 = recovered_2086400(incoming_ecx,&DAT_02095760);
  }
  return uVar4;
}

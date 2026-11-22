/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_34 (*(uint *)(frame + 28))
undefined4 recovered_207a500(char *incoming_ecx,uint *incoming_edx)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined4 in_EAX = 0;
  ulong uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  ushort uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;

  if (incoming_edx == (uint *)0x0) {
    return 0;
  }
  *incoming_edx = 0;
  incoming_edx[1] = 0;
  incoming_edx[2] = 0;
  if (incoming_ecx == (char *)0x0) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  uVar4 = recovered_2002270(incoming_ecx);
  uVar5 = 0;
  if (uVar4 == 0) {
LAB_020504e8:
    return CONCAT31((int3)(uVar5 >> 8),1);
  }
  uVar11 = 0;
  bVar7 = false;
  local_34 = 0;
  bVar3 = false;
  uVar12 = 0;
LAB_02050200:
  bVar1 = incoming_ecx[uVar11];
  uVar5 = 0;
  uVar10 = uVar12;
  if ((((!bVar7) && (bVar1 == 0x40)) && (uVar5 = uVar11 + 1, uVar5 < uVar4)) &&
     (incoming_ecx[uVar5] == '@')) goto LAB_0205046a;
  if (bVar7) {
    if (bVar3) {
LAB_020501f0:
      bVar3 = false;
    }
    else {
      bVar3 = true;
      uVar5 = 0;
      if (bVar1 != 0x5c) {
        if (bVar1 != (byte)local_34) goto LAB_020501f0;
        uVar5 = recovered_207f3a0((int *)incoming_edx,incoming_ecx + uVar12,(uVar11 + 1) - uVar12);
        bVar7 = false;
        local_34 = 0;
        bVar3 = false;
        uVar10 = uVar11 + 1;
        if ((char)uVar5 == '\0') {
          if (*incoming_edx != 0) {
            uVar5 = 0;
            do {
              recovered_2001710(*(void **)(incoming_edx[2] + uVar5 * 4));
              uVar5 = uVar5 + 1;
            } while (uVar5 < *incoming_edx);
          }
          goto LAB_020505b5;
        }
      }
    }
  }
  else {
    uVar5 = bVar1 - 9;
    if (uVar5 < 0x1f) {
      if ((0x80001fU >> (uVar5 & 0x1f) & 1) == 0) {
        if ((0x42000000U >> (uVar5 & 0x1f) & 1) == 0) goto LAB_0205031c;
        bVar7 = true;
        uVar10 = uVar11;
        if (uVar11 < uVar12 || uVar11 - uVar12 == 0) {
          bVar3 = false;
          uVar5 = (uint)bVar1;
          local_34 = uVar5;
          goto LAB_020501f7;
        }
        uVar6 = recovered_207f3a0((int *)incoming_edx,incoming_ecx + uVar12,uVar11 - uVar12);
        if ((char)uVar6 == '\0') {
          if (*incoming_edx != 0) {
            uVar5 = 0;
            do {
              recovered_2001710(*(void **)(incoming_edx[2] + uVar5 * 4));
              uVar5 = uVar5 + 1;
            } while (uVar5 < *incoming_edx);
          }
          goto LAB_020505b5;
        }
        bVar3 = false;
        uVar5 = (uint)bVar1;
        bVar7 = true;
        local_34 = uVar5;
        goto LAB_020501f7;
      }
      uVar5 = uVar11 - uVar12;
      if ((uVar12 <= uVar11 && uVar5 != 0) &&
         (uVar5 = recovered_207f3a0((int *)incoming_edx,incoming_ecx + uVar12,uVar5),
         (char)uVar5 == '\0')) {
        if (*incoming_edx != 0) {
          uVar5 = 0;
          do {
            recovered_2001710(*(void **)(incoming_edx[2] + uVar5 * 4));
            uVar5 = uVar5 + 1;
          } while (uVar5 < *incoming_edx);
        }
        goto LAB_020505b5;
      }
      uVar12 = uVar11 + 1;
    }
    else {
LAB_0205031c:
      uVar10 = uVar11 + 1;
      if(uVar10<uVar4 && ((cVar2=incoming_ecx[uVar10]),
   ((((bVar1&0xfd)==0x3c || bVar1==0x7e || bVar1==0x3d || bVar1==0x21 ||
       (bVar1&0xfe)==0x2a || (bVar1&0xfd)==0x2d) && cVar2=='=') ||
      (bVar1==0x26 && cVar2=='&') || (bVar1==0x7c && cVar2=='|')))) {
        if ((uVar12 <= uVar11 && uVar11 - uVar12 != 0) &&
           (uVar6 = recovered_207f3a0((int *)incoming_edx,incoming_ecx + uVar12,uVar11 - uVar12),
           (char)uVar6 == '\0')) {
          if (*incoming_edx != 0) {
            uVar5 = 0;
            do {
              recovered_2001710(*(void **)(incoming_edx[2] + uVar5 * 4));
              uVar5 = uVar5 + 1;
            } while (uVar5 < *incoming_edx);
          }
          goto LAB_020505b5;
        }
        uVar5 = recovered_207f3a0((int *)incoming_edx,incoming_ecx + uVar11,2);
        if ((char)uVar5 == '\0') {
          if (*incoming_edx != 0) {
            uVar5 = 0;
            do {
              recovered_2001710(*(void **)(incoming_edx[2] + uVar5 * 4));
              uVar5 = uVar5 + 1;
            } while (uVar5 < *incoming_edx);
          }
          goto LAB_020505b5;
        }
        uVar12 = uVar11 + 2;
        uVar11 = uVar10;
      }
      else {
        uVar5 = bVar1 - 0x21;
        switch((uintptr_t)(uVar5)) {
        case 0:
        case 2:
        case 4:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xe:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x5a:
        case 0x5c:
          if ((uVar11 < uVar12 || uVar11 - uVar12 == 0) ||
             (uVar6 = recovered_207f3a0((int *)incoming_edx,incoming_ecx + uVar12,uVar11 - uVar12),
             (char)uVar6 != '\0')) {
            uVar5 = recovered_207f3a0((int *)incoming_edx,incoming_ecx + uVar11,1);
            if ((char)uVar5 != '\0') goto LAB_020501f7;
            if (*incoming_edx != 0) {
              uVar5 = 0;
              do {
                recovered_2001710(*(void **)(incoming_edx[2] + uVar5 * 4));
                uVar5 = uVar5 + 1;
              } while (uVar5 < *incoming_edx);
            }
          }
          else if (*incoming_edx != 0) {
            uVar5 = 0;
            do {
              recovered_2001710(*(void **)(incoming_edx[2] + uVar5 * 4));
              uVar5 = uVar5 + 1;
            } while (uVar5 < *incoming_edx);
          }
          goto LAB_020505b5;
        }
      }
    }
    uVar10 = uVar12;
  }
LAB_020501f7:
  uVar11 = uVar11 + 1;
  uVar12 = uVar10;
  if (uVar4 <= uVar11) goto LAB_02050468;
  goto LAB_02050200;
LAB_02050468:
  uVar11 = uVar4;
LAB_0205046a:
  if (bVar7) {
    if (*incoming_edx != 0) {
      uVar5 = 0;
      do {
        recovered_2001710(*(void **)(incoming_edx[2] + uVar5 * 4));
        uVar5 = uVar5 + 1;
      } while (uVar5 < *incoming_edx);
    }
  }
  else {
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) goto LAB_020504e8;
    uVar6 = recovered_207f3a0((int *)incoming_edx,incoming_ecx + uVar10,uVar11 - uVar10);
    if ((char)uVar6 != '\0') {
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
    if (*incoming_edx != 0) {
      uVar5 = 0;
      do {
        recovered_2001710(*(void **)(incoming_edx[2] + uVar5 * 4));
        uVar5 = uVar5 + 1;
      } while (uVar5 < *incoming_edx);
    }
  }
LAB_020505b5:
  recovered_2001710((void *)incoming_edx[2]);
  *incoming_edx = 0;
  incoming_edx[1] = 0;
  incoming_edx[2] = 0;
  return 0;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_3c (*(uint *)(frame + 20))
uchar recovered_209c670(long param_1,ulong *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uchar uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  ulong uVar10;

  if (param_2 != (ulong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    if (param_1 == 0) {
      return '\x01';
    }
    uVar7 = recovered_2002e80((char *)param_1);
    if (uVar7 == 0) {
      return '\x01';
    }
    uVar8 = 0;
    uVar10 = 0;
    bVar4 = false;
    local_3c = 0;
    bVar9 = false;
    do {
      bVar2 = *(byte *)(param_1 + uVar10);
      if ((((!bVar4) && (bVar2 == 0x40)) && (uVar10 + 1 < uVar7)) &&
         (*(char *)(param_1 + uVar10 + 1) == '@')) goto LAB_0205f08d;
      if (bVar4) {
        if (bVar9) {
LAB_0205ee42:
          bVar9 = false;
        }
        else {
          bVar9 = true;
          if (bVar2 != 0x5c) {
            if (bVar2 != (byte)local_3c) goto LAB_0205ee42;
            uVar5 = recovered_20a1970((long *)param_2,(undefined1 *)(param_1 + uVar8),
                                      (uVar10 + 1) - uVar8);
            bVar4 = false;
            local_3c = 0;
            bVar9 = false;
            uVar8 = uVar10 + 1;
            if (uVar5 == '\0') {
              if (*param_2 != 0) {
                uVar7 = 0;
                do {
                  recovered_2000bb0(*(void **)(param_2[2] + uVar7 * 8));
                  uVar7 = uVar7 + 1;
                } while (uVar7 < *param_2);
              }
              goto LAB_0205f212;
            }
          }
        }
      }
      else {
        uVar6 = (uint)bVar2;
        if (uVar6 < 0x28) {
          if ((0x100003e00U >> ((ulong)uVar6 & 0x3f) & 1) == 0) {
            if ((0x8400000000U >> ((ulong)uVar6 & 0x3f) & 1) == 0) goto LAB_0205ef2b;
            bVar4 = true;
            if ((uVar8 <= uVar10 && uVar10 - uVar8 != 0) &&
               (uVar5 = recovered_20a1970((long *)param_2,(undefined1 *)(uVar8 + param_1),
                                          uVar10 - uVar8), uVar5 == '\0')) {
              if (*param_2 != 0) {
                uVar7 = 0;
                do {
                  recovered_2000bb0(*(void **)(param_2[2] + uVar7 * 8));
                  uVar7 = uVar7 + 1;
                } while (uVar7 < *param_2);
              }
              goto LAB_0205f212;
            }
            bVar9 = false;
            uVar8 = uVar10;
            local_3c = uVar6;
          }
          else {
            if ((uVar8 <= uVar10 && uVar10 - uVar8 != 0) &&
               (uVar5 = recovered_20a1970((long *)param_2,(undefined1 *)(uVar8 + param_1),
                                          uVar10 - uVar8), uVar5 == '\0')) {
              if (*param_2 != 0) {
                uVar7 = 0;
                do {
                  recovered_2000bb0(*(void **)(param_2[2] + uVar7 * 8));
                  uVar7 = uVar7 + 1;
                } while (uVar7 < *param_2);
              }
              goto LAB_0205f212;
            }
            uVar8 = uVar10 + 1;
          }
        }
        else {
LAB_0205ef2b:
          uVar1 = uVar10 + 1;
          if (uVar1 < uVar7 &&
      ((cVar3 = *(char *)(param_1 + uVar1)),
       (((((bVar2 & 0xfd) == 0x2d || (bVar2 & 0xfe) == 0x2a ||
           (bVar2 & 0xfd) == 0x3c || bVar2 == 0x7e || bVar2 == 0x21 || bVar2 == 0x3d)
          && cVar3 == '=') ||
         (cVar3 == '&' && bVar2 == 0x26) || (cVar3 == '|' && bVar2 == 0x7c))))) {
            if ((uVar8 <= uVar10 && uVar10 - uVar8 != 0) &&
               (uVar5 = recovered_20a1970((long *)param_2,(undefined1 *)(uVar8 + param_1),
                                          uVar10 - uVar8), uVar5 == '\0')) {
              if (*param_2 != 0) {
                uVar7 = 0;
                do {
                  recovered_2000bb0(*(void **)(param_2[2] + uVar7 * 8));
                  uVar7 = uVar7 + 1;
                } while (uVar7 < *param_2);
              }
              goto LAB_0205f212;
            }
            uVar5 = recovered_20a1970((long *)param_2,(undefined1 *)(param_1 + uVar10),2);
            if (uVar5 == '\0') {
              if (*param_2 != 0) {
                uVar7 = 0;
                do {
                  recovered_2000bb0(*(void **)(param_2[2] + uVar7 * 8));
                  uVar7 = uVar7 + 1;
                } while (uVar7 < *param_2);
              }
              goto LAB_0205f212;
            }
            uVar8 = uVar10 + 2;
            uVar10 = uVar1;
          }
          else {
            switch((uintptr_t)(bVar2)) {
            case 0x21:
            case 0x23:
            case 0x25:
            case 0x28:
            case 0x29:
            case 0x2a:
            case 0x2b:
            case 0x2c:
            case 0x2d:
            case 0x2f:
            case 0x3a:
            case 0x3b:
            case 0x3c:
            case 0x3d:
            case 0x3e:
            case 0x5b:
            case 0x5c:
            case 0x5d:
            case 0x5e:
            case 0x7b:
            case 0x7d:
              if ((uVar8 <= uVar10 && uVar10 - uVar8 != 0) &&
                 (uVar5 = recovered_20a1970((long *)param_2,(undefined1 *)(uVar8 + param_1),
                                            uVar10 - uVar8), uVar5 == '\0')) {
                if (*param_2 != 0) {
                  uVar7 = 0;
                  do {
                    recovered_2000bb0(*(void **)(param_2[2] + uVar7 * 8));
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < *param_2);
                }
                goto LAB_0205f212;
              }
              uVar5 = recovered_20a1970((long *)param_2,(undefined1 *)(param_1 + uVar10),1);
              uVar8 = uVar1;
              if (uVar5 == '\0') {
                if (*param_2 != 0) {
                  uVar7 = 0;
                  do {
                    recovered_2000bb0(*(void **)(param_2[2] + uVar7 * 8));
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < *param_2);
                }
                goto LAB_0205f212;
              }
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar7);
    uVar10 = uVar7;
LAB_0205f08d:
    if (bVar4) {
      if (*param_2 != 0) {
        uVar7 = 0;
        do {
          recovered_2000bb0(*(void **)(param_2[2] + uVar7 * 8));
          uVar7 = uVar7 + 1;
        } while (uVar7 < *param_2);
      }
    }
    else {
      if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
        return '\x01';
      }
      uVar5 = recovered_20a1970((long *)param_2,(undefined1 *)(param_1 + uVar8),uVar10 - uVar8);
      if (uVar5 != '\0') {
        return '\x01';
      }
      if (*param_2 != 0) {
        uVar7 = 0;
        do {
          recovered_2000bb0(*(void **)(param_2[2] + uVar7 * 8));
          uVar7 = uVar7 + 1;
        } while (uVar7 < *param_2);
      }
    }
LAB_0205f212:
    recovered_2000bb0((void *)param_2[2]);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return '\0';
}

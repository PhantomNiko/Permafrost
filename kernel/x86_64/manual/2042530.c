/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf3a0 (*(uint64_t volatile *)(0x215a7b0U))
#define DAT_020cf3a8 (*(uint64_t volatile *)(0x215a7b8U))
#define DAT_020cf454 (*(uint8_t volatile *)(0x215a894U))
uint recovered_2042530(char *param_1,undefined1 *param_2,byte *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  long lVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  ulong uVar10;

  uVar3 = 0;
  if (param_1 == (char *)0x0) {
    uVar8 = 0;
    uVar3 = 0;
  }
  else {
    cVar2 = DAT_020cf454;
    uVar8 = 0;
    if (cVar2 != '\0') {
      if (*param_1 == '\0') {
        uVar3 = 1;
      }
      else {
        uVar4 = recovered_2042180((byte *)param_1);
        if (uVar4 == 0xffffffffffffffff) {
          uVar5 = recovered_2002e80(param_1);
          uVar7 = 0;
          uVar3 = 0;
          cVar2 = DAT_020cf454;
          if (cVar2 == '\x01') {
            lVar9 = DAT_020cf3a8;
            uVar8 = 0;
            if (lVar9 != 0) {
              lVar9 = 0;
              uVar10 = 0;
              do {
                lVar1 = DAT_020cf3a0;
                text = (char *)(lVar1 + lVar9);
                if (*param_1 == '\0') {
                  if (*text != '\0') {
LAB_0204d3a9:
                    uVar3 = (uint)CONCAT71((int7)(uVar7 >> 8),1);
                    uVar8 = 1;
                    goto joined_r0x0204d3ee;
                  }
                }
                else if (lVar1 != 0) {
                  uVar6 = recovered_2002e80(param_1);
                  uVar7 = recovered_2002e80(text);
                  if (uVar6 <= uVar7) {
                    uVar3 = recovered_2002a00(text,param_1,uVar6);
                    uVar7 = (ulong)uVar3;
                    if ((uVar3 == 0) && (*(char *)(lVar9 + lVar1 + uVar5) == '/'))
                    goto LAB_0204d3a9;
                  }
                }
                uVar10 = uVar10 + 1;
                lVar9 = lVar9 + 0x118;
                uVar6 = DAT_020cf3a8;
              } while (uVar10 < uVar6);
              uVar3 = 0;
              uVar8 = 0;
            }
          }
          else {
            uVar8 = 0;
            uVar3 = 0;
          }
          goto joined_r0x0204d3ee;
        }
        lVar9 = DAT_020cf3a0;
        if (lVar9 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (uint)(*(byte *)(lVar9 + 0x104 + uVar4 * 0x118) >> 1 & 1);
        }
      }
      uVar8 = 1;
    }
  }
joined_r0x0204d3ee:
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = uVar8;
  }
  if (param_3 != (byte *)0x0) {
    *param_3 = (byte)uVar3;
  }
  return uVar3;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020de620 (*(uint64_t volatile *)(0x226c270U))
#define DAT_020de628 (*(uint64_t volatile *)(0x226c278U))
uchar recovered_20e74d0(long *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;
  uchar uVar3;
  ulong uVar4;
  void *out;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;

  if (param_2 == (long *)0x0 || param_1 == (long *)0x0) {
    return '\0';
  }
  lVar8 = DAT_020de628;
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    uVar6 = 0;
    do {
      lVar1 = DAT_020de620;
      pcVar5 = *(char **)(lVar1 + uVar6 * 8);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = &DAT_020a259c;
      }
      uVar4 = recovered_2002e80(pcVar5);
      uVar6 = uVar6 + 1;
      uVar7 = DAT_020de628;
      lVar8 = lVar8 + uVar4 + (ulong)(uVar6 < uVar7);
    } while (uVar6 < uVar7);
  }
  out = recovered_2000ad0(lVar8 + (ulong)(lVar8 == 0));
  if (out == (void *)0x0) {
    uVar3 = '\0';
  }
  else {
    lVar8 = DAT_020de628;
    if (lVar8 == 0) {
      uVar6 = 0;
    }
    else {
      plVar2 = (long *)DAT_020de620;
      pcVar5 = (char *)*plVar2;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = &DAT_020a259c;
      }
      uVar6 = recovered_2002e80(pcVar5);
      recovered_2001410(out,pcVar5,uVar6);
      uVar7 = DAT_020de628;
      if (1 < uVar7) {
        uVar7 = 1;
        do {
          *(undefined1 *)((long)out + uVar6) = 10;
          lVar8 = DAT_020de620;
          pcVar5 = *(char **)(lVar8 + uVar7 * 8);
          if (pcVar5 == (char *)0x0) {
            pcVar5 = &DAT_020a259c;
          }
          uVar4 = recovered_2002e80(pcVar5);
          recovered_2001410((void *)((long)out + uVar6 + 1),pcVar5,uVar4);
          uVar6 = uVar6 + uVar4 + 1;
          uVar7 = uVar7 + 1;
          uVar4 = DAT_020de628;
        } while (uVar7 < uVar4);
      }
    }
    *param_1 = (long)out;
    *param_2 = uVar6;
    uVar3 = '\x01';
  }
  return uVar3;
}

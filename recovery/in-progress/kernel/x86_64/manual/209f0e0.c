/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020e60e0 (*(uint64_t volatile *)(0x2274170U))
#define DAT_020e60f0 (*(uint64_t volatile *)(0x2274180U))
#define DAT_020e6110 (*(uint64_t volatile *)(0x22741a0U))
#define DAT_020e6118 (*(uint64_t volatile *)(0x22741a8U))
uchar recovered_209f0e0(long param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *left;
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;

  if (param_2 == (undefined8 *)0x0 || param_1 == 0) {
    return '\0';
  }
  lVar6 = DAT_020e60e0;
  do {
    do {
      do {
        if (lVar6 == 0) {
          uVar4 = DAT_020e6118;
          if (uVar4 == 0) {
            return '\0';
          }
          lVar6 = DAT_020e6110;
          lVar7 = 0;
          uVar8 = 0;
          do {
            if ((*(char *)(lVar6 + 0x48 + lVar7) == '\x01') &&
               (*(char **)(lVar6 + lVar7) != (char *)0x0)) {
              iVar2 = recovered_2002eb0(*(char **)(lVar6 + lVar7),(char *)param_1);
              if (iVar2 == 0) {
                if ((int)uVar8 < 0) {
                  return '\0';
                }
                plVar5 = &DAT_020e6110;
LAB_0206194b:
                uVar3 = recovered_20a0670(param_2,(undefined8 *)
                                                  (*plVar5 + (ulong)((uint)uVar8 & 0x7fffffff) *
                                                             0x50 + 8));
                return (uchar)uVar3;
              }
              lVar6 = DAT_020e6110;
              uVar4 = DAT_020e6118;
            }
            uVar8 = uVar8 + 1;
            lVar7 = lVar7 + 0x50;
            if (uVar4 <= uVar8) {
              return '\0';
            }
          } while( true );
        }
        lVar7 = DAT_020e60f0;
        lVar6 = lVar6 + -1;
      } while (lVar7 == 0);
      plVar5 = (long *)(lVar7 + lVar6 * 0x18);
      uVar4 = plVar5[1];
    } while (uVar4 == 0);
    lVar7 = 0;
    uVar8 = 0;
    do {
      if ((*(char *)(*plVar5 + 0x48 + lVar7) == '\x01') &&
         (left = *(char **)(*plVar5 + lVar7), left != (char *)0x0)) {
        iVar2 = recovered_2002eb0(left,(char *)param_1);
        if (iVar2 == 0) {
          if (-1 < (int)uVar8) {
            uVar1 = DAT_020e60f0;
            uVar1 = DAT_020e60f0;
            lVar7 = DAT_020e60f0;
            plVar5 = (long *)(lVar6 * 0x18 + lVar7);
            goto LAB_0206194b;
          }
          break;
        }
        uVar4 = plVar5[1];
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x50;
    } while (uVar8 < uVar4);
  } while( true );
}

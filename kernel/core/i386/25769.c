#include "functions.h"
#undef DAT_00006228
#define DAT_00006228 (*(uint8_t *)(0x6228U))
#undef DAT_0000622c
#define DAT_0000622c (*(uint8_t *)(0x622cU))
#undef DAT_00006230
#define DAT_00006230 (*(uint8_t *)(0x6230U))
#undef DAT_00006234
#define DAT_00006234 (*(uint8_t *)(0x6234U))
#undef DAT_0004ce98
#define DAT_0004ce98 (*(int *)(0x4ce98U))
#undef PTR_DAT_0004c03c
#define PTR_DAT_0004c03c (*(uint8_t * *)(0x4c03cU))
#undef PTR_DAT_0004c040
#define PTR_DAT_0004c040 (*(uint8_t * *)(0x4c040U))
#undef PTR_DAT_0004c044
#define PTR_DAT_0004c044 (*(uint8_t * *)(0x4c044U))
#undef _DAT_00006228
#define _DAT_00006228 (*(uint *)(0x6228U))
#undef _DAT_0000622c
#define _DAT_0000622c (*(uint *)(0x622cU))
#undef _DAT_00006230
#define _DAT_00006230 (*(int *)(0x6230U))
#undef _DAT_00006234
#define _DAT_00006234 (*(uint *)(0x6234U))
#define local_18 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25769
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_25769(void)

{
  unsigned char frame[72];

  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;

  iVar4 = FUN_0002085e();
  iVar3 = _DAT_00006230;
  uVar1 = *(uint *)PTR_DAT_0004c040;
  if ((*(uint *)PTR_DAT_0004c03c != 0 && *(uint *)PTR_DAT_0004c044 != 0) &&
      (uVar1 != 0 && iVar4 != 0)) {
    lVar2 = (ulonglong)*(uint *)PTR_DAT_0004c03c * (ulonglong)*(uint *)PTR_DAT_0004c044;
    if (((DAT_0004ce98 != 0) && (_DAT_0000622c != 0)) &&
       (local_18 = 0, iVar7 = (int)(lVar2 + (ulonglong)uVar1 >> 0x20),
       !(iVar7 == 0 && (uint)(_DAT_00006228 < (uint)(lVar2 + (ulonglong)uVar1)) <= (uint)-iVar7 ||
        CARRY4(_DAT_0000622c,_DAT_00006228) == 0 &&
        (uint)(uVar1 < _DAT_0000622c + _DAT_00006228) <= -(uint)CARRY4(_DAT_0000622c,_DAT_00006228))
       )) {
      if (_DAT_00006234 == 0) {
        iVar7 = 0;
      }
      else {
        uVar9 = uVar1 & 0x1fffff;
        uVar8 = (uint)lVar2 + uVar9;
        uVar6 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar9) +
                (uint)(0xffe00000 < uVar8);
        uVar8 = uVar8 + 0x1fffff & 0xffe00000;
        iVar7 = 0;
        if ((uVar6 - 1) + (uint)(uVar8 != 0) < (uint)(uVar8 - 1 < _DAT_00006234)) {
          uVar11 = 0;
          for (uVar10 = 0; uVar10 < uVar6 || uVar10 - uVar6 < (uint)(uVar11 < uVar8);
              uVar10 = uVar10 + bVar12) {
            uVar5 = iVar3 + uVar11 >> 0x15;
            *(uint *)(uVar5 * 8 + 0x2f9000) = uVar1 + uVar11 & 0xffe00000 | 0x83;
            *(undefined4 *)(uVar5 * 8 + 0x2f9004) = 0;
            bVar12 = 0xffdfffff < uVar11;
            uVar11 = uVar11 + 0x200000;
          }
          local_18 = iVar3 + uVar9;
          iVar7 = iVar4;
        }
      }
      *(int *)PTR_DAT_0004c040 = local_18;
      iVar4 = iVar7;
    }
  }
  return iVar4;
}

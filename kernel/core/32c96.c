#include "functions.h"
#undef DAT_00006228
#define DAT_00006228 (*(uint8_t *)(0x6228U))
#undef DAT_0000622c
#define DAT_0000622c (*(uint8_t *)(0x622cU))
#undef DAT_00006230
#define DAT_00006230 (*(uint8_t *)(0x6230U))
#undef DAT_00006234
#define DAT_00006234 (*(uint8_t *)(0x6234U))
#undef DAT_0005e924
#define DAT_0005e924 (*(int *)(0x5e924U))
#undef PTR_DAT_0005d0b0
#define PTR_DAT_0005d0b0 (*(uint8_t * *)(0x5d0b0U))
#undef PTR_DAT_0005d0b4
#define PTR_DAT_0005d0b4 (*(uint8_t * *)(0x5d0b4U))
#undef PTR_DAT_0005d0b8
#define PTR_DAT_0005d0b8 (*(uint8_t * *)(0x5d0b8U))
#undef _DAT_00006228
#define _DAT_00006228 (*(uint *)(0x6228U))
#undef _DAT_0000622c
#define _DAT_0000622c (*(uint *)(0x622cU))
#undef _DAT_00006230
#define _DAT_00006230 (*(int *)(0x6230U))
#undef _DAT_00006234
#define _DAT_00006234 (*(uint *)(0x6234U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x32c96
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_32c96(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined2 extraout_var = 0;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;

  iVar4 = FUN_0002085e();
  uVar1 = *(uint *)PTR_DAT_0005d0b4;
  uVar5 = *(uint *)PTR_DAT_0005d0b8;
  uVar7 = CONCAT22(extraout_var,CONCAT11(uVar5 == 0,uVar1 == 0 || iVar4 == 0));
  if ((*(uint *)PTR_DAT_0005d0b0 != 0 && uVar5 != 0) && (uVar1 != 0 && iVar4 != 0)) {
    lVar3 = (ulonglong)*(uint *)PTR_DAT_0005d0b0 * (ulonglong)uVar5;
    iVar8 = (int)((ulonglong)lVar3 >> 0x20);
    uVar5 = (uint)lVar3;
    if ((DAT_0005e924 != 0) && (_DAT_0000622c != 0)) {
      uVar7 = (uint)CARRY4(_DAT_0000622c,_DAT_00006228);
      iVar6 = (int)(lVar3 + (ulonglong)uVar1 >> 0x20);
      if ((uVar7 != 0 || -uVar7 < (uint)(uVar1 < _DAT_0000622c + _DAT_00006228)) &&
          (iVar6 != 0 || (uint)-iVar6 < (uint)(_DAT_00006228 < (uint)(lVar3 + (ulonglong)uVar1)))) {
        if (_DAT_00006234 != 0) {
          uVar10 = uVar1 & 0x1fffff;
          uVar7 = uVar5 + uVar10 + 0x1fffff & 0xffe00000;
          uVar9 = iVar8 + (uint)CARRY4(uVar5,uVar10) + (uint)(0xffe00000 < uVar5 + uVar10) + -1 +
                  (uint)(uVar7 != 0);
          uVar2 = (uint)(uVar7 - 1 < _DAT_00006234);
          uVar7 = uVar9 - uVar2;
          if (uVar9 < uVar2) {
            uVar10 = uVar10 + _DAT_00006230;
            uVar11 = recovered_3a348(uVar10,uVar1,uVar5,iVar8);
            uVar7 = (uint)((ulonglong)uVar11 >> 0x20);
            if ((char)uVar11 != '\0') {
              *(uint *)PTR_DAT_0005d0b4 = uVar10;
              goto LAB_00032daf;
            }
          }
        }
        *(undefined4 *)PTR_DAT_0005d0b4 = 0;
        iVar4 = 0;
        goto LAB_00032daf;
      }
    }
    uVar11 = recovered_3a348(uVar1,uVar1,uVar5,iVar8);
    uVar7 = (uint)((ulonglong)uVar11 >> 0x20);
  }
LAB_00032daf:
  return CONCAT44(uVar7,iVar4);
}

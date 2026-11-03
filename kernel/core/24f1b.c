#include "functions.h"
#undef DAT_00047600
#define DAT_00047600 (*(uint8_t *)(0x47600U))
#undef DAT_00047e80
#define DAT_00047e80 (*(uint8_t *)(0x47e80U))
#undef DAT_00047e88
#define DAT_00047e88 (*(uint8_t *)(0x47e88U))
#undef DAT_00047e89
#define DAT_00047e89 (*(uint8_t *)(0x47e89U))
#undef DAT_0004c5a4
#define DAT_0004c5a4 (*(uint32_t *)(0x4c5a4U))
#undef PTR_DAT_00047038
#define PTR_DAT_00047038 (*(uint8_t * *)(0x47038U))
#undef PTR_DAT_0004703c
#define PTR_DAT_0004703c (*(uint8_t * *)(0x4703cU))
#undef PTR_DAT_00047040
#define PTR_DAT_00047040 (*(uint8_t * *)(0x47040U))
#undef PTR_DAT_00047044
#define PTR_DAT_00047044 (*(uint8_t * *)(0x47044U))
#undef PTR_DAT_00047048
#define PTR_DAT_00047048 (*(uint8_t * *)(0x47048U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x24f1b
 */

int recovered_24f1b(void)

{
  unsigned char frame[64];

  undefined4 uVar1;
  int iVar2;
  bool bVar3;

  uVar1 = recovered_24fca();
  if ((char)uVar1 == '\0') {
    iVar2 = FUN_000205bc();
    DAT_00047e88 = false;
    if ((((iVar2 != 0) && (*(int *)PTR_DAT_00047040 != 0)) && (*(int *)PTR_DAT_00047044 != 0)) &&
       ((*(int *)PTR_DAT_00047048 != 0 && (*(int *)PTR_DAT_0004703c != 0)))) {
      DAT_00047e88 = (*(int *)PTR_DAT_00047038 - 0x18U & 0xfffffff7) == 0;
    }
  }
  uVar1 = recovered_24fca();
  bVar3 = (char)uVar1 == '\0';
  if (bVar3) {
    DAT_00047e80 = 0;
  }
  else {
    recovered_25018();
    recovered_24ed9(0,0xffffff,0xf);
    DAT_00047600 = 0;
    DAT_00047e80 = 1;
    DAT_0004c5a4 = 0;
    DAT_00047e89 = 0;
    recovered_21d99();
  }
  return (uint)!bVar3;
}

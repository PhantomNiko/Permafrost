#include "functions.h"
#undef PTR_DAT_0004e038
#define PTR_DAT_0004e038 (*(uint8_t * *)(0x4e038U))
#undef PTR_DAT_0004e03c
#define PTR_DAT_0004e03c (*(uint8_t * *)(0x4e03cU))
#undef PTR_DAT_0004e040
#define PTR_DAT_0004e040 (*(uint8_t * *)(0x4e040U))
#undef PTR_DAT_0004e044
#define PTR_DAT_0004e044 (*(uint8_t * *)(0x4e044U))
#undef PTR_DAT_0004e048
#define PTR_DAT_0004e048 (*(uint8_t * *)(0x4e048U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45029
 */

void recovered_45029(uint param_1,uint param_2,uint param_3,uint param_4,byte param_5)

{
  unsigned char frame[64];

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  iVar1 = *(int *)PTR_DAT_0004e040;
  if ((((iVar1 != 0) && (iVar2 = *(int *)PTR_DAT_0004e044, iVar2 != 0)) &&
      (7 < *(int *)PTR_DAT_0004e038 + 7U)) &&
     ((param_1 < *(uint *)PTR_DAT_0004e048 && (param_2 < *(uint *)PTR_DAT_0004e03c)))) {
    uVar4 = *(int *)PTR_DAT_0004e038 + 7U >> 3;
    uVar3 = recovered_296a6(param_3 & 0xff,param_4 & 0xff,param_5);
    recovered_2967f(param_1 * uVar4 + iVar1 + iVar2 * param_2,uVar3,uVar4);
  }
  return;
}

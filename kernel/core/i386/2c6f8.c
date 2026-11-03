#include "functions.h"
#undef DAT_00046264
#define DAT_00046264 (*(uint8_t *)(0x46264U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c6f8
 */

int recovered_2c6f8(uint *value,char *text,uint size)

{
  unsigned char frame[64];

  void *pvVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;

  if (value == (uint *)0x0) {
    return 0;
  }
  pcVar4 = &DAT_00046264;
  if (text != (char *)0x0) {
    pcVar4 = text;
  }
  pvVar1 = recovered_29c28((int)pcVar4,size);
  if (pvVar1 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    uVar2 = recovered_2603e(value);
    *value = 3;
    value[3] = (uint)pvVar1;
    iVar3 = CONCAT31((int3)(uVar2 >> 8),1);
  }
  return iVar3;
}

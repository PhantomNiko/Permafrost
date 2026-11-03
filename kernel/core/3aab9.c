#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3aab9
 */

int recovered_3aab9(uint *value,char *text,uint size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;

  if (value == (uint *)0x0) {
    return 0;
  }
  pcVar4 = &DAT_00057364;
  if (text != (char *)0x0) {
    pcVar4 = text;
  }
  pvVar1 = recovered_3773b((int)pcVar4,size);
  if (pvVar1 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    uVar2 = recovered_3352a(value);
    *value = 3;
    value[3] = (uint)pvVar1;
    iVar3 = CONCAT31((int3)(uVar2 >> 8),1);
  }
  return iVar3;
}

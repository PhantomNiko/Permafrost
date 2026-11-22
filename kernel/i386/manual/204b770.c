/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020de158 (*(uint32_t volatile *)(0x20de158U))


bool recovered_204b770(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  bool bVar3;

  if (in_ECX != 4) {
    return false;
  }
  iVar1 = DAT_020de158;
  if (iVar1 != 0x20) {
    return false;
  }
  puVar2 = recovered_2012220();
  if ((((puVar2[5] == 0x20) && (puVar2 = recovered_2012220(), puVar2[6] == 8)) &&
      (puVar2 = recovered_2012220(), puVar2[7] == 0x10)) &&
     (((puVar2 = recovered_2012220(), puVar2[8] == 8 &&
       (puVar2 = recovered_2012220(), puVar2[9] == 8)) &&
      (puVar2 = recovered_2012220(), puVar2[10] == 8)))) {
    puVar2 = recovered_2012220();
    bVar3 = puVar2[0xb] == 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}
#undef DAT_020de158

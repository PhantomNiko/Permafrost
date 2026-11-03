#include "functions.h"
#undef DAT_000445dd
#define DAT_000445dd (*(uint8_t *)(0x445ddU))
#undef DAT_000445de
#define DAT_000445de (*(uint8_t *)(0x445deU))
#undef DAT_00057324
#define DAT_00057324 (*(uint32_t *)(0x57324U))
#undef DAT_00058434
#define DAT_00058434 (*(uint32_t *)(0x58434U))
#undef DAT_00088e5f
#define DAT_00088e5f (*(uint8_t *)(0x88e5fU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x284f5
 */

void FUN_000284f5(void)

{
  unsigned char frame[64];

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar3 = DAT_00088e5f;
  uVar2 = DAT_000445de;
  uVar1 = DAT_000445dd;
  recovered_26603(&DAT_00058434,DAT_000445dd,DAT_00088e5f,DAT_000445de);
  recovered_26603(&DAT_00057324,uVar1,uVar3,uVar2);
  return;
}


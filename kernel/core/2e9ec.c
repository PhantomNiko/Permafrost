#include "functions.h"
#undef DAT_0005cf88
#define DAT_0005cf88 (*(uint8_t *)(0x5cf88U))
#undef LAB_0002ea59
#define LAB_0002ea59 (*(uint8_t *)(0x2ea59U))
#undef PTR_LAB_0005d040
#define PTR_LAB_0005d040 (*(uint8_t * *)(0x5d040U))
#define local_4c (*(undefined4 *)(frame + 160))
#define local_48 (*(undefined4 *)(frame + 164))
#define local_34 (*(undefined * *)(frame + 184))
#define local_30 (*(undefined * *)(frame + 188))
#define local_2c (*(undefined1 * *)(frame + 192))
#define local_28 (*(undefined1 * *)(frame + 196))
#define local_24 (*(undefined1 * *)(frame + 200))
#define local_14 (*(undefined4 *)(frame + 216))
#define auStackY_dc (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e9ec
 */

undefined4 * recovered_2e9ec(undefined1 *param_1,int param_2,float param_3)

{
  unsigned char frame[268] = {0};

  undefined4 *puVar1;

  local_2c = auStackY_dc + 0xd8;
  local_24 = auStackY_dc + 0x80;
  local_14 = param_3;
  local_34 = PTR_LAB_0005d040;
  local_30 = &DAT_0005cf88;
  local_28 = &LAB_0002ea59;
  local_48 = 1;
  recovered_234cb(&local_4c);
  puVar1 = recovered_274d4((int)param_1,param_2,local_14);
  recovered_234e0(&local_4c);
  return puVar1;
}

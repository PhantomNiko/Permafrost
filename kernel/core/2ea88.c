#include "functions.h"
#undef DAT_0005cf98
#define DAT_0005cf98 (*(uint8_t *)(0x5cf98U))
#undef LAB_0002eaea
#define LAB_0002eaea (*(uint8_t *)(0x2eaeaU))
#undef PTR_LAB_0005d040
#define PTR_LAB_0005d040 (*(uint8_t * *)(0x5d040U))
#define auStackY_dc (*(undefined1 (*)[128])(frame + 16))
#define uStack_4c (*(undefined4 *)(frame + 160))
#define uStack_48 (*(undefined4 *)(frame + 164))
#define puStack_34 (*(undefined * *)(frame + 184))
#define puStack_30 (*(undefined * *)(frame + 188))
#define puStack_2c (*(undefined1 * *)(frame + 192))
#define puStack_28 (*(undefined1 * *)(frame + 196))
#define puStack_24 (*(undefined1 * *)(frame + 200))
#define uStack_14 (*(undefined4 *)(frame + 216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ea88
 */

void recovered_2ea88(int *param_1,float param_2)

{
  unsigned char frame[268] = {0};


  puStack_2c = auStackY_dc + 0xd8;
  puStack_24 = auStackY_dc + 0x80;
  uStack_14 = param_2;
  puStack_34 = PTR_LAB_0005d040;
  puStack_30 = &DAT_0005cf98;
  puStack_28 = &LAB_0002eaea;
  uStack_48 = 1;
  recovered_234cb(&uStack_4c);
  recovered_27ad0(param_1,uStack_14);
  recovered_234e0(&uStack_4c);
  return;
}

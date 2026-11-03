#include "functions.h"
#undef DAT_0005cfbc
#define DAT_0005cfbc (*(uint8_t *)(0x5cfbcU))
#undef LAB_0002ecfa
#define LAB_0002ecfa (*(uint8_t *)(0x2ecfaU))
#undef PTR_LAB_0005d040
#define PTR_LAB_0005d040 (*(uint8_t * *)(0x5d040U))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define uStack_44 (*(undefined4 *)(frame + 152))
#define uStack_40 (*(undefined4 *)(frame + 156))
#define puStack_2c (*(undefined * *)(frame + 176))
#define puStack_28 (*(undefined * *)(frame + 180))
#define puStack_24 (*(undefined1 * *)(frame + 184))
#define puStack_20 (*(undefined1 * *)(frame + 188))
#define puStack_1c (*(undefined1 * *)(frame + 192))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2eca5
 */

void recovered_2eca5(int *param_1)

{
  unsigned char frame[252] = {0};


  puStack_24 = auStack_18 + 0x14;
  puStack_1c = auStackY_cc + 0x80;
  puStack_2c = PTR_LAB_0005d040;
  puStack_28 = &DAT_0005cfbc;
  puStack_20 = &LAB_0002ecfa;
  uStack_40 = 1;
  recovered_234cb(&uStack_44);
  recovered_28abc(param_1);
  recovered_234e0(&uStack_44);
  return;
}

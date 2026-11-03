#include "functions.h"
#undef DAT_0005cd5c
#define DAT_0005cd5c (*(uint8_t *)(0x5cd5cU))
#undef LAB_00023130
#define LAB_00023130 (*(uint8_t *)(0x23130U))
#undef LAB_000231e8
#define LAB_000231e8 (*(uint8_t *)(0x231e8U))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_44 (*(undefined4 *)(frame + 152))
#define in_stack_00000004 (*(int *)(frame + 224))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(undefined1 * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined1 * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23194
 */

void recovered_23194(void)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = &LAB_00023130;
  local_28 = &DAT_0005cd5c;
  local_20 = &LAB_000231e8;
  local_40 = 1;
  recovered_234cb(&local_44);
  recovered_21203(in_stack_00000004);
  recovered_234e0(&local_44);
  return;
}

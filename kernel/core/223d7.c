#include "functions.h"
#undef DAT_0005d7c0
#define DAT_0005d7c0 (*(int *)(0x5d7c0U))
#undef DAT_0005d7c4
#define DAT_0005d7c4 (*(uint8_t *)(0x5d7c4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x223d7
 */

void recovered_223d7(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  int iVar3;

  if (param_1 != 0) {
    for (iVar3 = 0; param_2 != iVar3; iVar3 = iVar3 + 1) {
      cVar2 = *(char *)(param_1 + iVar3);
      if (cVar2 == '\b') {
        if (DAT_0005d7c0 != 0) {
          DAT_0005d7c0 = DAT_0005d7c0 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_2245d(1);
        }
        else {
          if (DAT_0005d7c0 - 0x1ffU < 0xfffffe00) {
            recovered_2245d(0);
          }
          pcVar1 = &DAT_0005d7c4 + DAT_0005d7c0;
          DAT_0005d7c0 = DAT_0005d7c0 + 1;
          *pcVar1 = cVar2;
        }
      }
    }
  }
  return;
}

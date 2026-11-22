#include "functions.h"




#undef DAT_020de164
#define DAT_020de164 (*(uint32_t volatile *)(0x20de164U))
#undef DAT_020de168
#define DAT_020de168 (*(uint32_t volatile *)(0x20de168U))
#undef DAT_0214b320
#define DAT_0214b320 (*(uint32_t volatile *)(0x214b320U))
#undef DAT_0214b364
#define DAT_0214b364 (*(uint32_t volatile *)(0x214b364U))
#undef UNK_0214b324
#define UNK_0214b324 (*(uint8_t volatile *)(0x214b324U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2039960
 */

void recovered_2039960(byte in_CL)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined4 uVar2;
  uchar uVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  uint uVar5;

  uVar3 = recovered_2006ec0();
  uVar5 = 0;
  if (CONCAT31(extraout_var,uVar3) < 0x20) {
    uVar5 = CONCAT31(extraout_var,uVar3);
  }
  (&DAT_0214b364)[uVar5 * 0x12] = uVar5;
  pcVar1 = (char *)(&DAT_0214b320)[uVar5 * 0x12];
  if (pcVar1 != (char *)0x0) {
    if ((*pcVar1 == '\x01') && (pcVar1[2] != '\x01')) {
      pcVar1[5] = in_CL ^ 1;
      uVar2 = DAT_020de168;
      *(undefined4 *)(pcVar1 + 0x18) = uVar2;
      iVar4 = recovered_2019420(pcVar1 + 0x24);
      if (iVar4 != 0) {
        return;
      }
    }
    recovered_2019450(&UNK_0214b324 + uVar5 * 0x48,1);
  }
  uVar2 = DAT_020de164;
  recovered_2039a70(DAT_020de164);
  return;
}

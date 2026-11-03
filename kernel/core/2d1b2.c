#include "functions.h"
#undef DAT_0005cf3c
#define DAT_0005cf3c (*(uint8_t *)(0x5cf3cU))
#undef LAB_0002d2a0
#define LAB_0002d2a0 (*(uint8_t *)(0x2d2a0U))
#undef PTR_DAT_0005d044
#define PTR_DAT_0005d044 (*(uint8_t * *)(0x5d044U))
#undef PTR_LAB_0005d040
#define PTR_LAB_0005d040 (*(uint8_t * *)(0x5d040U))
#define local_54 (*(undefined4 *)(frame + 168))
#define local_50 (*(undefined4 *)(frame + 172))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 16))
#define local_3c (*(undefined * *)(frame + 192))
#define local_38 (*(undefined * *)(frame + 196))
#define local_34 (*(undefined1 * *)(frame + 200))
#define local_30 (*(undefined1 * *)(frame + 204))
#define local_2c (*(undefined1 * *)(frame + 208))
#define local_1c (*(undefined4 *)(frame + 224))
#define local_18 (*(undefined4 *)(frame + 228))
#define local_14 (*(undefined4 *)(frame + 232))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d1b2
 */

int recovered_2d1b2(int *param_1,undefined4 *param_2)

{
  unsigned char frame[284] = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = recovered_2d366(param_1,param_2);
  local_2c = auStackY_ec + 0x80;
  iVar1 = param_1[1];
  iVar2 = *param_1;
  local_3c = PTR_LAB_0005d040;
  local_38 = &DAT_0005cf3c;
  local_30 = &LAB_0002d2a0;
  local_34 = auStackY_ec + 0xe8;
  recovered_234cb(&local_54);
  if (iVar3 == iVar1 * 0x18 + iVar2) {
    local_50 = 0xffffffff;
    recovered_2d394((int)param_1);
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_50 = 1;
    recovered_2d3d0(param_1,param_2,&local_1c);
    local_18 = 0;
    recovered_23194();
    local_50 = 0xffffffff;
    recovered_29c88(param_1 + 6,(undefined4 *)PTR_DAT_0005d044);
    recovered_2d42e(param_1,param_1[1] + -1);
    iVar3 = *param_1 + param_1[1] * 0x18 + -0x18;
  }
  recovered_234e0(&local_54);
  return iVar3 + 0xc;
}

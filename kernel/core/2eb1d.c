#include "functions.h"
#undef DAT_0005cfa8
#define DAT_0005cfa8 (*(uint8_t *)(0x5cfa8U))
#undef LAB_0002ec55
#define LAB_0002ec55 (*(uint8_t *)(0x2ec55U))
#undef PTR_LAB_0005d040
#define PTR_LAB_0005d040 (*(uint8_t * *)(0x5d040U))
#define puStack_44 (*(undefined1 * *)(frame + 216))
#define puStack_40 (*(undefined1 * *)(frame + 220))
#define puStack_3c (*(undefined1 * *)(frame + 224))
#define uStack_2c (*(uint *)(frame + 240))
#define uStack_28 (*(undefined4 *)(frame + 244))
#define dStack_24 (*(double *)(frame + 248))
#define uStack_14 (*(undefined4 *)(frame + 264))
#define auStackY_10c (*(undefined1 (*)[128])(frame + 16))
#define uStack_64 (*(undefined4 *)(frame + 184))
#define uStack_60 (*(undefined4 *)(frame + 188))
#define puStack_4c (*(undefined * *)(frame + 208))
#define puStack_48 (*(undefined * *)(frame + 212))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2eb1d
 */

uint recovered_2eb1d(int *param_1,byte *param_2,uint param_3,int *param_4,uint param_5,uint param_6,
                    undefined4 *param_7)

{
  unsigned char frame[316] = {0};

  uint uVar1;
  uint *puVar2;
  uint uVar3;

  uStack_14 = param_7;
  recovered_2e184((int)param_7);
  puStack_3c = auStackY_10c + 0x80;
  uStack_2c = param_6;
  uStack_28 = 0;
  dStack_24 = (double)param_6;
  puStack_4c = PTR_LAB_0005d040;
  puStack_48 = &DAT_0005cfa8;
  puStack_40 = &LAB_0002ec55;
  uStack_60 = 1;
  puStack_44 = (undefined1 *)((int)(uintptr_t)(frame + 284) + -4);
  recovered_234cb(&uStack_64);
  puVar2 = (uint *)recovered_27b0d(param_1,param_2,param_3,param_4,param_5);
  if (puVar2 == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
    if (((int)uVar3 < 1) || (uVar1 = puVar2[1], (int)uVar1 < 1)) {
      uVar3 = 0;
    }
    else {
      dStack_24 = pf_bits_double(CONCAT44(PF_PART4(dStack_24, 4),puVar2));
      uStack_60 = 2;
      uVar3 = recovered_2e1a0(puVar2[2],uVar3,uVar1,uVar3 * uVar1 * 4,uStack_14);
      puVar2 = PF_PART4(dStack_24, 0);
    }
    if (puVar2[2] != 0) {
      recovered_23207();
    }
    if (puVar2[5] != 0) {
      recovered_23207();
    }
    recovered_23194();
    uVar3 = uVar3 & 0xff;
  }
  recovered_234e0(&uStack_64);
  return uVar3;
}

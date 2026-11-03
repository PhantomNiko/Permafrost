#include "functions.h"
#undef DAT_0005cf58
#define DAT_0005cf58 (*(uint8_t *)(0x5cf58U))
#undef LAB_0002e424
#define LAB_0002e424 (*(uint8_t *)(0x2e424U))
#undef PTR_LAB_0005d040
#define PTR_LAB_0005d040 (*(uint8_t * *)(0x5d040U))
#undef recovered_2e262
#define recovered_2e262 (*(uint *)(0xed2e262U))
#define auStackY_118 (*(undefined1 (*)[128])(frame + 16))
#define uStack_84 (*(undefined4 *)(frame + 164))
#define uStack_88 (*(undefined4 *)(frame + 160))
#define puStack_6c (*(undefined * *)(frame + 188))
#define puStack_70 (*(undefined * *)(frame + 184))
#define puStack_64 (*(undefined1 * *)(frame + 196))
#define puStack_68 (*(undefined1 * *)(frame + 192))
#define uStack_4e (*(ushort *)(frame + 218))
#define puStack_60 (*(undefined1 * *)(frame + 200))
#define iStack_3c (*(int *)(frame + 236))
#define uStack_4c (*(uint *)(frame + 220))
#define uStack_34 (*(undefined4 *)(frame + 244))
#define uStack_38 (*(uint *)(frame + 240))
#define uStack_2c (*(ushort *)(frame + 252))
#define iStack_30 (*(int *)(frame + 248))
#define pvStack_24 (*(void * *)(frame + 260))
#define uStack_28 (*(uint *)(frame + 256))
#define pcStack_10 (*(code * *)(frame + 280))
#define puStack_20 (*(undefined4 * *)(frame + 264))
#define uStack_8 (*(undefined4 *)(frame + 288))
#define unaff_retaddr (*(uint *)(frame + 296))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e24c
 */

undefined4 recovered_2e24c(undefined4 *param_1)

{
  unsigned char frame[328] = {0};

  undefined4 uVar1;
  void *pvVar2;
  uint uVar3;
  uint unaff_EBP;

  pcStack_10 = (code *)0x2e25d;
  recovered_23140((int)param_1);
  pcStack_10 = recovered_2e262;
  recovered_230cf();
  puStack_20 = param_1;
  pcStack_10 = (code *)((int)(uintptr_t)(frame + 296) + -4);
  recovered_2e469((int)param_1);
  puStack_60 = auStackY_118 + 0x80;
  pvStack_24 = (void *)0x0;
  if (0xffff < unaff_retaddr) {
    unaff_retaddr = 0;
  }
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  iStack_30 = 0;
  uStack_4e = (ushort)unaff_retaddr;
  uStack_2c = 0;
  puStack_70 = PTR_LAB_0005d040;
  puStack_6c = &DAT_0005cf58;
  puStack_64 = &LAB_0002e424;
  uStack_84 = 1;
  puStack_68 = (undefined1 *)&pcStack_10;
  recovered_234cb(&uStack_88);
  uVar1 = recovered_2e485(uStack_8,unaff_EBP,&iStack_3c,&uStack_4e);
  if ((char)uVar1 != '\0') {
    if ((((-1 < (int)uStack_38) && (uStack_38 != 0)) && (iStack_30 != 0)) && (uStack_2c != 0)) {
      uStack_4c = uStack_38;
      uStack_28 = uStack_38 * 2;
      uStack_84 = 2;
      pvVar2 = recovered_211fa(uStack_28);
      if (pvVar2 != (void *)0x0) {
        uStack_84 = 3;
        pvStack_24 = pvVar2;
        recovered_21348((int)pvVar2,iStack_3c,uStack_28);
        *puStack_20 = pvStack_24;
        puStack_20[1] = uStack_28;
        puStack_20[2] = uStack_4c;
        puStack_20[3] = iStack_30;
        uVar3 = (uint)uStack_2c;
        puStack_20[4] = uVar3;
        puStack_20[5] = 0x10;
        if (uVar3 == 0) {
          uStack_38 = 0;
        }
        else {
          uStack_38 = uStack_38 / uVar3;
        }
        puStack_20[6] = uStack_38;
        pvStack_24 = (void *)0x1;
      }
    }
  }
  uStack_38 = 0;
  recovered_23194();
  recovered_234e0(&uStack_88);
  return pvStack_24;
}

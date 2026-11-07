/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494ae4 (*(uint8_t volatile *)(0x8266f1b4U))
#define DAT_40494ae8 (*(uint volatile *)(0x8266f1b8U))
#define DAT_40494af0 (*(uint32_t volatile *)(0x8266f1c0U))
#define DAT_40494af4 (*(uint32_t volatile *)(0x8266f1c4U))
#define DAT_40494b10 (*(uint32_t volatile *)(0x8266f1e0U))
#define DAT_40494b20 (*(uint64_t volatile *)(0x8266f1f0U))
#define Ram0000000040494b28 (*(uint64_t volatile *)(0x8266f1f8U))
bool recovered_8243a6e8(ulong param_1,long param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  void *buffer;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;

  if (param_4 == 0) {
    bVar8 = param_3 == 0;
  }
  else {
    uVar11 = DAT_40494af0;
    buffer = recovered_82400744((ulong)uVar11);
    bVar8 = false;
    if (buffer != (void *)0x0) {
      uVar10 = 0;
      uVar11 = 0;
      do {
        do {
          if (param_4 == uVar11) {
            recovered_82400748(buffer);
            return true;
          }
          uVar1 = 0;
          if (uVar10 <= param_3) {
            uVar1 = param_3 - uVar10;
          }
          uVar2 = DAT_40494af0;
          recovered_82400b14(buffer,0,(ulong)uVar2);
          uVar2 = DAT_40494af0;
          uVar9 = (ulong)uVar2;
          if (uVar9 <= uVar1) {
            uVar1 = uVar9;
          }
          if ((param_2 != 0) && (uVar1 != 0)) {
            recovered_82400928(buffer,(void *)(param_2 + uVar10),uVar1);
            uVar2 = DAT_40494af0;
            uVar9 = (ulong)uVar2;
          }
          bVar3 = DAT_40494ae4;
          iVar5 = DAT_40494af4;
          iVar6 = DAT_40494b10;
          iVar4 = PF_PART4(DAT_40494ae8, 4);
          uVar9 = recovered_824393dc((ulong)bVar3,
                                     (ulong)(uint)(iVar6 + iVar5 + iVar4 * ((int)param_1 + -2)),
                                     (long)buffer,uVar9);
          if ((uVar9 & 1) == 0) goto LAB_4049c97c;
          uVar10 = uVar1 + uVar10;
          uVar11 = uVar11 + 1;
        } while (param_4 <= uVar11);
        lVar7 = DAT_40494b20;
        uVar1 = Ram0000000040494b28;
        uVar2 = *(uint *)(lVar7 + (param_1 & 0xffffffff) * 4);
        param_1 = (ulong)uVar2;
      } while ((uVar2 >= 2 && param_1 <= uVar1) && (uVar2 < 2 || uVar1 != param_1));
LAB_4049c97c:
      recovered_82400748(buffer);
      bVar8 = false;
    }
  }
  return bVar8;
}

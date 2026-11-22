/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e262 (*(uint8_t *)(0x82473a33U))
#define DAT_40494890 (*(uint64_t volatile *)(0x8266ee30U))
#define DAT_40494898 (*(uint64_t volatile *)(0x8266ee38U))
#define acStack_170 (*(char (*)[320])(frame + 16))
#define str_40457996 (*(char (*)[1])(0x82484265U))
#define str_404579b0 (*(char (*)[1])(0x8248427fU))
#define str_404579d7 (*(char (*)[1])(0x824842a6U))
#define str_404579fd (*(char (*)[1])(0x824842ccU))
#define str_40457a1d (*(char (*)[1])(0x824842ecU))
#define str_40457a40 (*(char (*)[1])(0x8248430fU))
undefined8 recovered_82433d98(long param_1)

{
  unsigned char frame[416] __attribute__((aligned(16))) = {0};

  void *data;
  byte bVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  ulong uVar7;
  void *buffer;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;

  if (param_1 == 0) {
    return 0;
  }
  pf_varargs_404019bc_1(acStack_170,0x140,&DAT_4044e262,param_1);
  pbVar4 = (byte *)recovered_8246ec7c(acStack_170);
  bVar2 = *pbVar4;
  if (bVar2 == 0x3e) {
    pbVar5 = pbVar4 + 1;
    if (*pbVar5 == 0x20) {
      pbVar5 = pbVar4 + 2;
    }
    uVar7 = recovered_82400de8((char *)pbVar5);
    buffer = (void *)recovered_8244a904((long)pbVar5,uVar7);
    if (buffer != (void *)0x0) {
      lVar9 = DAT_40494898;
      uVar7 = recovered_8246ee14(lVar9 + 1);
      if ((uVar7 & 1) != 0) {
        lVar9 = DAT_40494890;
        lVar3 = DAT_40494898;
        *(void **)(lVar9 + lVar3 * 8) = buffer;
        DAT_40494898 = lVar3 + 1;
        return 1;
      }
LAB_4041faa8:
      recovered_82400748(buffer);
    }
  }
  else {
    bVar1 = bVar2 | 0x20;
    if (0x19 < bVar2 - 0x41U) {
      bVar1 = bVar2;
    }
    pbVar5 = pbVar4;
    if (bVar1 == 0x69) {
      pbVar5 = pbVar4 + 1;
    }
    bVar2 = *pbVar5;
    if (9 < bVar2 - 0x30U) {
      return 0;
    }
    uVar7 = 0;
    pbVar4 = pbVar4 + (bVar1 == 0x69);
    while( true ) {
      uVar10 = (uint)bVar2;
      pbVar5 = pbVar4 + 1;
      if (9 < uVar10 - 0x30) break;
      if ((0x2f - (ulong)uVar10) / 10 < uVar7) {
        pcVar6 = str_404579b0;
        goto LAB_4041fab4;
      }
      uVar7 = ((ulong)uVar10 + uVar7 * 10) - 0x30;
      bVar2 = *pbVar5;
      pbVar4 = pbVar5;
    }
    if (uVar10 != 0x3e) {
      return 0;
    }
    if (uVar7 == 0) {
      pcVar6 = str_404579d7;
      goto LAB_4041fab4;
    }
    pbVar4 = pbVar4 + 2;
    if (*pbVar5 != 0x20) {
      pbVar4 = pbVar5;
    }
    uVar8 = DAT_40494898;
    if (bVar1 != 0x69) {
      if (uVar8 < uVar7) {
        pcVar6 = str_40457a1d;
      }
      else {
        uVar8 = recovered_82400de8((char *)pbVar4);
        lVar9 = recovered_8244a904((long)pbVar4,uVar8);
        if (lVar9 != 0) {
          lVar3 = DAT_40494890;
          lVar11 = uVar7 * 8 + -8;
          recovered_82400748(*(void **)(lVar3 + lVar11));
          lVar3 = DAT_40494890;
          *(long *)(lVar3 + lVar11) = lVar9;
          return 1;
        }
        pcVar6 = str_40457a40;
      }
      goto LAB_4041fab4;
    }
    if (uVar8 + 1 < uVar7) {
      pcVar6 = str_404579fd;
      goto LAB_4041fab4;
    }
    uVar7 = uVar7 - 1;
    if (uVar7 <= uVar8) {
      uVar8 = recovered_82400de8((char *)pbVar4);
      buffer = (void *)recovered_8244a904((long)pbVar4,uVar8);
      if (buffer != (void *)0x0) {
        lVar9 = DAT_40494898;
        uVar8 = recovered_8246ee14(lVar9 + 1);
        if ((uVar8 & 1) != 0) {
          uVar8 = DAT_40494898;
          if (uVar7 <= uVar8 && uVar8 - uVar7 != 0) {
            lVar9 = DAT_40494890;
            data = (void *)(lVar9 + uVar7 * 8);
            recovered_82400a00((void *)((long)data + 8),data,(uVar8 - uVar7) * 8);
            uVar8 = DAT_40494898;
          }
          lVar9 = DAT_40494890;
          *(void **)(lVar9 + uVar7 * 8) = buffer;
          DAT_40494898 = uVar8 + 1;
          return 1;
        }
        goto LAB_4041faa8;
      }
    }
  }
  pcVar6 = str_40457996;
LAB_4041fab4:
  recovered_8242d468(pcVar6);
  recovered_8241dfec();
  return 1;
}

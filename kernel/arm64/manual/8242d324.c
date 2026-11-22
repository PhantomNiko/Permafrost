/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494820 (*(uint64_t volatile *)(0x8266ed80U))
#define DAT_40494ae4 (*(uint8_t volatile *)(0x8266f1b4U))
#define DAT_40494ae8 (*(uint64_t volatile *)(0x8266f1b8U))
#define DAT_40494af4 (*(uint32_t volatile *)(0x8266f1c4U))
#define DAT_40494af8 (*(uint32_t volatile *)(0x8266f1c8U))
#define DAT_40494b00 (*(uint8_t volatile *)(0x8266f1d0U))
#define DAT_40494b04 (*(uint32_t volatile *)(0x8266f1d4U))
#define DAT_40494b6c (*(uint8_t volatile *)(0x8266f26cU))
#define Ram0000000040494b00 (*(uint32_t volatile *)(0x8266f1d0U))
#define in_stack_ffffffffffffffb8 (*(ulong *)(frame + 24))
#define str_4044e51e (*(char (*)[1])(0x82473f84U))
#define str_4044e534 (*(char (*)[1])(0x82473f9aU))
#define str_4044e554 (*(char (*)[1])(0x82473fbaU))
#define str_4044e575 (*(char (*)[1])(0x82473fdbU))
#define str_4044e597 (*(char (*)[1])(0x82473ffdU))
#define str_4044e5b4 (*(char (*)[1])(0x8247401aU))
#define str_4044e5d7 (*(char (*)[1])(0x8247403dU))
undefined8 recovered_8242d324(void)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *format;

  recovered_8241d99c();
  lVar1 = DAT_40494820;
  if (lVar1 != 0) {
    cVar8 = DAT_40494b6c;
    iVar3 = PF_PART4(DAT_40494ae8, 0);
    if ((cVar8 == '\x01' && iVar3 != 0) && (iVar3 = DAT_40494b04, iVar3 == 1 || iVar3 == 6)) {
      bVar2 = DAT_40494b00;
      if ((bVar2 & 1) == 0) {
        bVar2 = DAT_40494ae4;
        uVar4 = DAT_40494af4;
        uVar9 = recovered_8242d510();
        if (uVar9 == 0) {
          pcVar12 = str_4044e554;
        }
        else {
          uVar5 = DAT_40494af8;
          if (uVar9 <= uVar5) {
            iVar3 = DAT_40494b04;
            pcVar12 = recovered_82421b24(iVar3);
            format = str_4044e575;
LAB_4041beb0:
            pf_varargs_4041aa18_2(format,(ulonglong)pcVar12,in_stack_ffffffffffffffb8);
            return 1;
          }
          DAT_40494af8 = uVar9;
          uVar10 = recovered_8242d680();
          if ((uVar10 & 1) == 0) {
            DAT_40494af8 = uVar5;
            pcVar12 = str_4044e597;
          }
          else {
            uVar6 = Ram0000000040494b00;
            uVar11 = recovered_8242f6e0((ulong)bVar2,(ulong)uVar4,uVar9,uVar6);
            if (((int)uVar11 != 0) && (iVar7 = DAT_40494b04, iVar7 == iVar3)) {
              pcVar12 = recovered_82421b24(iVar3);
              uVar4 = DAT_40494af8;
              in_stack_ffffffffffffffb8 = (ulong)uVar4;
              format = str_4044e5d7;
              goto LAB_4041beb0;
            }
            pcVar12 = str_4044e5b4;
          }
        }
      }
      else {
        pcVar12 = str_4044e534;
      }
      goto LAB_4041be70;
    }
  }
  pcVar12 = str_4044e51e;
LAB_4041be70:
  recovered_8242d468(pcVar12);
  return 0;
}

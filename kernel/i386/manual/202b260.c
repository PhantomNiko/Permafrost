/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9cb8 (*(uint32_t volatile *)(0x2130724U))
#define DAT_020b9cbc (*(uint32_t volatile *)(0x2130728U))
#define DAT_020b9d50 (*(uint8_t volatile *)(0x21307dcU))
uint recovered_202b260(char *incoming_ecx,undefined1 *incoming_edx,byte *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  ulong size;
  ulong uVar6;
  int iVar7;
  char *text;
  undefined1 uVar8;
  int iVar9;

  uVar4 = 0;
  if (incoming_ecx != (char *)0x0) {
    cVar3 = DAT_020b9d50;
    uVar8 = 0;
    if (cVar3 == '\0') goto LAB_0203ffb3;
    if (*incoming_ecx == '\0') {
      uVar4 = 1;
      uVar8 = 1;
      goto LAB_0203ffb3;
    }
    uVar4 = recovered_202af10((byte *)incoming_ecx,(uint)incoming_edx);
    if (uVar4 != 0xffffffff) {
      iVar9 = DAT_020b9cb8;
      if (iVar9 == 0) {
        uVar4 = 0;
        uVar8 = 1;
      }
      else {
        uVar4 = (uint)(*(byte *)(iVar9 + 0xfc + uVar4 * 0x110) >> 1 & 1);
        uVar8 = 1;
      }
      goto LAB_0203ffb3;
    }
    uVar5 = recovered_2002270(incoming_ecx);
    uVar4 = 0;
    cVar3 = DAT_020b9d50;
    if (cVar3 == '\x01') {
      iVar9 = DAT_020b9cbc;
      if (iVar9 != 0) {
        iVar9 = 0;
        uVar4 = 0;
        do {
          iVar1 = DAT_020b9cb8;
          text = (char *)(iVar1 + iVar9);
          if (*incoming_ecx == '\0') {
            if (*text != '\0') {
LAB_0203ff9c:
              uVar4 = CONCAT31((int3)((uint)text >> 8),1);
              uVar8 = 1;
              goto LAB_0203ffb3;
            }
          }
          else if (iVar1 != 0) {
            size = recovered_2002270(incoming_ecx);
            uVar6 = recovered_2002270(text);
            if (((size <= uVar6) && (iVar7 = recovered_2001ff0(text,incoming_ecx,size), iVar7 == 0))
               && (text = (char *)0x0, *(char *)(iVar9 + iVar1 + uVar5) == '/')) goto LAB_0203ff9c;
          }
          uVar4 = uVar4 + 1;
          iVar9 = iVar9 + 0x110;
          uVar2 = DAT_020b9cbc;
        } while (uVar4 < uVar2);
        uVar4 = 0;
        uVar8 = 0;
      }
      goto LAB_0203ffb3;
    }
  }
  uVar4 = 0;
  uVar8 = 0;
LAB_0203ffb3:
  if (incoming_edx != (undefined1 *)0x0) {
    *incoming_edx = uVar8;
  }
  if (param_3 != (byte *)0x0) {
    *param_3 = (byte)uVar4;
  }
  return uVar4;
}

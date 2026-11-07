/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9cb8 (*(uint32_t volatile *)(0x2130724U))
#define DAT_020b9cbc (*(uint32_t volatile *)(0x2130728U))
#define DAT_020b9cd0 (*(uint8_t volatile *)(0x213073cU))
#define DAT_020b9cd4 (*(uint32_t volatile *)(0x2130740U))
#define DAT_020b9cd8 (*(uint32_t volatile *)(0x2130744U))
#define DAT_020b9cdc (*(uint32_t volatile *)(0x2130748U))
#define DAT_020b9ce0 (*(uint32_t volatile *)(0x213074cU))
#define DAT_020b9cf0 (*(uint32_t volatile *)(0x213075cU))
#define DAT_020b9cf4 (*(uint32_t volatile *)(0x2130760U))
#define DAT_020b9cf8 (*(uint32_t volatile *)(0x2130764U))
#define DAT_020b9cfc (*(uint32_t volatile *)(0x2130768U))
#define DAT_020b9d0c (*(uint32_t volatile *)(0x2130778U))
#define DAT_020b9d10 (*(uint32_t volatile *)(0x213077cU))
#define DAT_020b9d50 (*(uint8_t volatile *)(0x21307dcU))
#define local_14 (*(void * *)(frame + 28))
#define local_18 (*(uint *)(frame + 24))
#define local_1c (*(int *)(frame + 20))
#define local_20 (*(void * *)(frame + 16))
undefined4 recovered_202b020(uint incoming_ecx,uint incoming_edx)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uchar uVar7;
  char cVar8;
  void *buffer;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int incoming_ecx_00;

  cVar8 = DAT_020b9d50;
  if (cVar8 != '\x01') {
    return 0;
  }
  uVar10 = DAT_020b9cbc;
  if (uVar10 <= incoming_ecx) {
    return 0;
  }
  iVar1 = DAT_020b9cb8;
  incoming_ecx_00 = incoming_ecx * 0x110 + iVar1;
  if ((iVar1 != 0) && ((*(byte *)(incoming_ecx_00 + 0xfc) & 2) != 0)) goto LAB_0203de36;
  uVar11 = 1;
  if (*(char *)(incoming_ecx_00 + 0x10c) != '\0') {
    return 1;
  }
  if (*(int *)(incoming_ecx_00 + 0xf8) == 0) {
LAB_0203de2d:
    *(undefined1 *)(incoming_ecx_00 + 0x10c) = 1;
  }
  else {
    uVar10 = DAT_020b9cf0;
    if ((uVar10 < 7) && ((0x46U >> (uVar10 & 0x1f) & 1) != 0)) {
      buffer = (void *)DAT_020b9d0c;
      local_18 = DAT_020b9d10;
      local_20 = (void *)0x0;
      local_1c = 0;
      uVar3 = DAT_020b9cd4;
      iVar1 = DAT_020b9cd8;
      iVar4 = DAT_020b9cdc;
      uVar5 = DAT_020b9cf8;
      if (uVar5 != 0 &&
          ((iVar4 != 0 && (iVar1 != 0 && uVar3 != 0)) && (0xfffffffd < uVar10 - 3 || uVar10 == 6)))
      {
        if (buffer == (void *)0x0) {
          uVar10 = (uint)((ulonglong)uVar5 * (ulonglong)uVar3 >> 0x20);
          local_14 = (void *)((ulonglong)uVar5 * (ulonglong)uVar3);
          if ((uVar10 != 0 || uVar10 < (local_14 == (void *)0x0)) ||
             (buffer = recovered_2001650((ulong)local_14), buffer == (void *)0x0))
          goto LAB_0203de36;
          bVar2 = DAT_020b9cd0;
          iVar4 = DAT_020b9cf4;
          uVar9 = DAT_020b9ce0;
          uVar9 = DAT_020b9ce0;
          iVar1 = DAT_020b9ce0;
          uVar9 = recovered_204ed30((uint)bVar2,iVar4 + iVar1,(int)buffer,(uint)local_14);
          if ((char)uVar9 != '\0') {
            if ((uint)local_14 >> 2 <= local_18 - 1) {
              local_18 = (uint)local_14 >> 2;
            }
            if (local_18 == 0) {
              local_18 = 0;
            }
            else {
              uVar10 = 0;
              do {
                uVar10 = uVar10 + 1;
              } while (local_18 != uVar10);
            }
            local_14 = buffer;
            goto LAB_0203dd0e;
          }
        }
        else {
          local_14 = (void *)0x0;
LAB_0203dd0e:
          bVar2 = DAT_020b9cd0;
          iVar4 = DAT_020b9ce0;
          uVar10 = DAT_020b9cdc;
          iVar1 = DAT_020b9cd8;
          iVar6 = DAT_020b9cfc;
          uVar7 = recovered_20bb650((uint)bVar2,iVar4,iVar6,iVar1,uVar10,(int)buffer,local_18,
                                    *(uint *)(incoming_ecx_00 + 0x104),
                                    *(uint *)(incoming_ecx_00 + 0xf8),(int *)&local_20,&local_1c);
          local_18 = CONCAT31(PF_PART3(local_18, 1),uVar7);
          recovered_2001710(local_14);
          if ((char)local_18 != '\0') {
            *(void **)(incoming_ecx_00 + 0xf4) = local_20;
            *(int *)(incoming_ecx_00 + 0x108) = local_1c;
            goto LAB_0203de2d;
          }
          buffer = local_20;
        }
        recovered_2001710(buffer);
      }
    }
    else {
      if (uVar10 - 3 < 3) {
        uVar9 = recovered_20baf90(incoming_ecx_00,incoming_edx);
        cVar8 = (char)uVar9;
      }
      else {
        if (uVar10 != 7) goto LAB_0203de36;
        uVar9 = recovered_20bb430(incoming_ecx_00,incoming_edx);
        cVar8 = (char)uVar9;
      }
      if (cVar8 != '\0') goto LAB_0203de2d;
    }
LAB_0203de36:
    uVar11 = 0;
  }
  return uVar11;
}

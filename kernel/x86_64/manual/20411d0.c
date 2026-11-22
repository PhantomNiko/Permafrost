/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259a (*(uint8_t *)(0x20ecf14U))
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define DAT_020a2e65 (*(uint8_t *)(0x20ecf16U))
#define local_138 (*(byte (*)[248])(frame + 15704))
#define local_238 (*(char (*)[256])(frame + 15448))
#define local_38 (*(undefined1 * *)(frame + 15960))
#define local_3d87 (*(char (*)[15183])(frame + 265))
#define local_3e78 (*(char (*)[241])(frame + 24))
#define local_40 (*(ulong *)(frame + 15952))
uint recovered_20411d0(long param_1,undefined1 *param_2)

{
  unsigned char frame[16048] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  void *pvVar3;
  void *size;
  ulong size_00;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte *out;
  void *pvVar8;
  ulong uVar9;
  char *text;
  bool bVar10;

  if (param_2 == (undefined1 *)0x0) {
    return in_EAX;
  }
  *param_2 = 0;
  if (param_1 == 0) {
    return in_EAX;
  }
  out = local_138;
  pf_varargs_20039e0__8_((char *)out,0xf1,&DAT_020a25e3,param_1);
  do {
    if (*out == 0x5c) {
      *out = 0x2f;
    }
    else if (*out == 0) break;
    out = out + 1;
  } while( true );
  local_38 = param_2;
  local_40 = recovered_2002e80((char *)local_138);
  uVar6 = 0;
  uVar5 = 0;
  do {
    uVar9 = 0;
    while( true ) {
      bVar1 = (local_138 + uVar5)[uVar9];
      size = (void *)(ulong)bVar1;
      if ((bVar1 == 0) || (bVar1 == 0x2f)) break;
      uVar9 = uVar9 + 1;
    }
    if (uVar9 != 0) {
      size_00 = 0xf0;
      if (uVar9 < 0xf0) {
        size_00 = uVar9;
      }
      recovered_2001410(local_238,local_138 + uVar5,size_00);
      local_238[size_00] = '\0';
      uVar2 = recovered_2002eb0(local_238,&DAT_020a259a);
      size = (void *)(ulong)uVar2;
      if (uVar2 != 0) {
        uVar2 = recovered_2002eb0(local_238,&DAT_020a2e65);
        size = (void *)(ulong)uVar2;
        if (uVar2 == 0) {
          bVar10 = uVar6 == 0;
          uVar6 = uVar6 - 1;
          size = (void *)0x0;
          if (bVar10) {
            uVar6 = 0;
          }
        }
        else if (uVar6 < 0x40) {
          uVar2 = pf_varargs_20039e0__8_
                            (local_3e78 + uVar6 * 0xf1,0xf1,&DAT_020a25e3,(ulonglong)local_238);
          size = (void *)(ulong)uVar2;
          uVar6 = uVar6 + 1;
        }
      }
    }
    uVar5 = uVar5 + uVar9 + 1;
  } while (uVar5 <= local_40);
  if (uVar6 == 0) {
    pvVar8 = (void *)0x0;
    puVar4 = local_38;
  }
  else {
    pvVar3 = (void *)recovered_2002e80(local_3e78);
    puVar4 = local_38;
    if (pvVar3 < (void *)0xf1) {
      size = recovered_2001410(local_38,local_3e78,(ulong)pvVar3);
      pvVar8 = pvVar3;
      if (uVar6 != 1) {
        lVar7 = uVar6 - 1;
        text = local_3d87;
        do {
          size = (void *)recovered_2002e80(text);
          pvVar3 = pvVar8;
          if (pvVar8 < (void *)0xf0) {
            puVar4[(long)pvVar8] = 0x2f;
            pvVar3 = (void *)((long)pvVar8 + 1);
          }
          pvVar8 = (void *)((long)pvVar3 + (long)size);
          if ((void *)0xf0 < pvVar8) {
            pvVar8 = pvVar3;
            break;
          }
          size = recovered_2001410((undefined1 *)((long)pvVar3 + (long)puVar4),text,(ulong)size);
          text = text + 0xf1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    else {
      pvVar8 = (void *)0x0;
      size = pvVar3;
    }
  }
  puVar4[(long)pvVar8] = 0;
  return (uint)size;
}

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2da (*(uint8_t *)(0x20c5082U))
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
#define DAT_0208eba5 (*(uint8_t *)(0x20c5ad8U))
#define local_10d (*(char (*)[241])(frame + 15683))
#define local_14 (*(undefined1 * *)(frame + 15932))
#define local_18 (*(uint *)(frame + 15928))
#define local_1c (*(ulong *)(frame + 15924))
#define local_1fe (*(char (*)[241])(frame + 15442))
#define local_3d4d (*(char (*)[15183])(frame + 259))
#define local_3e3e (*(char (*)[241])(frame + 18))
uint recovered_202a060(int incoming_ecx,undefined1 *incoming_edx)

{
  unsigned char frame[15984] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint in_EAX = 0;
  int iVar2;
  ulong size;
  ulong size_00;
  uint uVar3;
  uint size_01;
  uint uVar4;
  uint uVar5;
  char *pcVar6;

  if (incoming_edx == (undefined1 *)0x0) {
    return in_EAX;
  }
  *incoming_edx = 0;
  if (incoming_ecx == 0) {
    return in_EAX;
  }
  pcVar6 = local_1fe;
  local_14 = incoming_edx;
  pf_varargs_2003aa0__4_(pcVar6,0xf1,&DAT_0208e323,incoming_ecx);
  do {
    if (*pcVar6 == '\\') {
      *pcVar6 = '/';
    }
    else if (*pcVar6 == '\0') break;
    pcVar6 = pcVar6 + 1;
  } while( true );
  uVar3 = 0;
  local_1c = recovered_2002270(local_1fe);
  uVar4 = 0;
  do {
    for (uVar5 = 0; (cVar1 = (local_1fe + uVar4)[uVar5], cVar1 != '\0' && (cVar1 != '/'));
        uVar5 = uVar5 + 1) {
    }
    if (uVar5 != 0) {
      size_01 = uVar5;
      if (0xef < uVar5) {
        size_01 = 0xf0;
      }
      local_18 = uVar3;
      recovered_2001b70(local_10d,local_1fe + uVar4,size_01);
      local_10d[size_01] = '\0';
      iVar2 = recovered_20022a0(local_10d,&DAT_0208e2da);
      if (iVar2 == 0) {
        uVar3 = local_18;
      }
      else {
        iVar2 = recovered_20022a0(local_10d,&DAT_0208eba5);
        uVar3 = local_18;
        if (iVar2 == 0) {
          uVar3 = 0;
          if (local_18 != 0) {
            uVar3 = local_18 - 1;
          }
        }
        else if (local_18 < 0x40) {
          pf_varargs_2003aa0__4_(local_3e3e + local_18 * 0xf1,0xf1,&DAT_0208e323,(uint)local_10d);
          uVar3 = uVar3 + 1;
        }
      }
    }
    uVar4 = uVar4 + 1 + uVar5;
  } while (uVar4 <= local_1c);
  uVar4 = 0;
  if (uVar3 != 0) {
    size = recovered_2002270(local_3e3e);
    if (size < 0xf1) {
      recovered_2001b70(local_14,local_3e3e,size);
      uVar4 = size;
      if (uVar3 != 1) {
        iVar2 = uVar3 - 1;
        pcVar6 = local_3d4d;
        do {
          size_00 = recovered_2002270(pcVar6);
          if (size < 0xf0) {
            local_14[size] = 0x2f;
            size = size + 1;
          }
          uVar4 = size + size_00;
          if (0xf0 < uVar4) {
            uVar4 = size;
            break;
          }
          recovered_2001b70(local_14 + size,pcVar6,size_00);
          pcVar6 = pcVar6 + 0xf1;
          iVar2 = iVar2 + -1;
          size = uVar4;
        } while (iVar2 != 0);
      }
    }
  }
  local_14[uVar4] = 0;
  return (uint)local_14;
}

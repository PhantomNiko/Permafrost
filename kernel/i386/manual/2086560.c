/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
#define abStack_125 (*(byte (*)[257])(frame + 27))
#define local_11 (*(byte *)(frame + 303))
#define local_18 (*(char * *)(frame + 296))
#define local_1c (*(ulong *)(frame + 292))
#define local_20 (*(uint *)(frame + 288))
#define local_24 (*(uint *)(frame + 284))
undefined4 recovered_2086560(int incoming_ecx,char *incoming_edx,uint param_3)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar3;
  ulong uVar2;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *text;
  uint uVar9;

  uVar8 = 0;
  if (incoming_edx == (char *)0x0 || incoming_ecx == 0) {
    return 0;
  }
  pf_varargs_2003aa0__4_((char *)(abStack_125 + 1),0x100,&DAT_0208e323,incoming_ecx);
  while ((abStack_125[uVar8 + 1] - 9 < 5 || (abStack_125[uVar8 + 1] == 0x20))) {
    uVar8 = uVar8 + 1;
  }
  if (uVar8 != 0) {
    uVar2 = recovered_2002270((char *)(abStack_125 + uVar8 + 1));
    recovered_2001c30(abStack_125 + 1,abStack_125 + uVar8 + 1,uVar2 + 1);
  }
  text = abStack_125 + 1;
  for (uVar2 = recovered_2002270((char *)text);
      (uVar2 != 0 && ((abStack_125[uVar2] - 9 < 5 || (abStack_125[uVar2] == 0x20))));
      uVar2 = uVar2 - 1) {
    abStack_125[uVar2] = 0;
  }
  local_1c = recovered_2002270((char *)text);
  if (local_1c < 2) {
LAB_0205c357:
    pf_varargs_2003aa0__4_(incoming_edx,param_3,&DAT_0208e323,(uint)text);
  }
  else {
    local_24 = (uint)abStack_125[1];
    if (local_24 == 0x27) {
      if (text[local_1c - 1] != 0x27) goto LAB_0205c357;
    }
    else if ((local_24 != 0x22) || (text[local_1c - 1] != 0x22)) goto LAB_0205c357;
    iVar5 = 0;
    if (1 < param_3 && local_1c != 2) {
      uVar8 = 1;
      uVar9 = 2;
      local_18 = incoming_edx;
      iVar6 = 0;
      do {
        bVar4 = abStack_125[uVar8 + 1];
        if (uVar8 + 2 < local_1c && bVar4 == 0x5c) {
          bVar4 = abStack_125[uVar9 + 1];
          local_20 = (uint)bVar4;
          switch((uintptr_t)((uint)bVar4)) {
          case 0x5c:
          case 0x5d:
          case 0x5e:
          case 0x5f:
          case 0x60:
          case 0x61:
          case 0x62:
          case 99:
          case 100:
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x68:
          case 0x69:
          case 0x6a:
          case 0x6b:
          case 0x6c:
          case 0x6d:
          case 0x6f:
          case 0x70:
          case 0x71:
          case 0x73:
          case 0x75:
          case 0x76:
          case 0x77:
            break;
          case 0x6e:
            bVar4 = 10;
            break;
          case 0x72:
            bVar4 = 0xd;
            break;
          case 0x74:
            bVar4 = 9;
            break;
          case 0x78:
            uVar7 = uVar8 + 3;
            if (local_1c <= uVar7) {
              return 0;
            }
            bVar1 = abStack_125[uVar8 + 3];
            local_20 = (uint)bVar1;
            if (((9 < (byte)(bVar1 - 0x30U)) && (5 < local_20 - 0x61)) && (5 < local_20 - 0x41)) {
              return 0;
            }
            local_11 = abStack_125[uVar8 + 4];
            bVar4 = local_11 - 0x30;
            if (((9 < bVar4) && (5 < local_11 - 0x61)) && (5 < local_11 - 0x41)) {
              return 0;
            }
            bVar3 = bVar1 * '\x10';
            if (9 < (byte)(bVar1 - 0x30U)) {
              bVar3 = bVar3 + 0x90;
            }
            if ((byte)(local_11 + 0x9f) < 0x1a) {
              local_11 = local_11 - 0x20;
            }
            if (9 < bVar4) {
              bVar4 = local_11 - 0x37;
            }
            bVar4 = bVar4 | bVar3;
            goto LAB_0205c265;
          default:
          }
          uVar7 = uVar9;
        }
        else {
          uVar7 = uVar8;
          if (bVar4 == abStack_125[1]) {
            iVar5 = iVar6;
            break;
          }
        }
LAB_0205c265:
        incoming_edx[iVar6] = bVar4;
        uVar9 = uVar7 + 2;
        iVar5 = iVar6 + 1;
        uVar8 = uVar7;
        if ((local_1c <= uVar9) ||
           (uVar8 = uVar7 + 1, uVar7 = iVar6 + 2, iVar6 = iVar5, param_3 <= uVar7)) break;
      } while( true );
    }
    incoming_edx[iVar5] = '\0';
  }
  return CONCAT31((int3)(uVar8 >> 8),1);
}

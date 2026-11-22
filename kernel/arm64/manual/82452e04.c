#include "functions.h"
#undef DAT_82473985
#define DAT_82473985 (*(uint8_t *)(0x82473985U))
#undef DAT_82474139
#define DAT_82474139 (*(uint8_t *)(0x82474139U))
#undef DAT_824753b2
#define DAT_824753b2 (*(uint8_t *)(0x824753b2U))
#undef DAT_82479088
#define DAT_82479088 (*(uint8_t *)(0x82479088U))
#undef DAT_82479cbe
#define DAT_82479cbe (*(uint8_t *)(0x82479cbeU))
#undef DAT_82479cc0
#define DAT_82479cc0 (*(uint8_t *)(0x82479cc0U))
#undef DAT_8247a1a6
#define DAT_8247a1a6 (*(uint8_t *)(0x8247a1a6U))
#undef DAT_8247a1a8
#define DAT_8247a1a8 (*(uint8_t *)(0x8247a1a8U))
#undef DAT_8247a225
#define DAT_8247a225 (*(uint8_t *)(0x8247a225U))
#undef DAT_8247a258
#define DAT_8247a258 (*(uint8_t *)(0x8247a258U))
#undef DAT_8247a421
#define DAT_8247a421 (*(uint8_t *)(0x8247a421U))
#undef DAT_8247a433
#define DAT_8247a433 (*(uint8_t *)(0x8247a433U))
#undef DAT_8247a442
#define DAT_8247a442 (*(uint8_t *)(0x8247a442U))
#undef str_82475aa9
#define str_82475aa9 (*(char (*)[1])(0x82475aa9U))
#undef str_8247a424
#define str_8247a424 (*(char (*)[1])(0x8247a424U))
#undef str_8247a445
#define str_8247a445 (*(char (*)[1])(0x8247a445U))
#undef str_8247a450
#define str_8247a450 (*(char (*)[1])(0x8247a450U))
#define auStack_b0 (*(uchar (*)[96])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x82452e04
 */

uchar recovered_82452e04(int *param_1,long *param_2,uint param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  char *text;
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  uchar *puVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  uchar *puVar10;
  uint64_t argument_3;
  long lVar11;
  ulong size;

  if (param_2 == (long *)0x0) {
    return '\0';
  }
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    pcVar7 = &DAT_8247a225;
    goto switchD_82452eb4_default;
  }
  if (0x10 < param_3) {
    pcVar7 = str_8247a424;
    goto switchD_82452eb4_default;
  }
  switch((uintptr_t)(*param_1)) {
  case 1:
    argument_3 = (uint32_t)param_1[1];
    pcVar7 = &DAT_8247a258;
    goto LAB_8245304c;
  case 2:
    argument_3 = pf_double_bits((double)pf_bits_float((uint32_t)param_1[2]));
    pcVar7 = &DAT_8247a421;
    goto LAB_8245304c;
  case 3:
    pcVar7 = &DAT_82473985;
    if (*(char **)(param_1 + 4) != (char *)0x0) {
      pcVar7 = *(char **)(param_1 + 4);
    }
    break;
  case 4:
    uVar3 = recovered_82453184(param_2,&DAT_8247a433);
    if (uVar3 == 0) {
      return '\0';
    }
    if (*(long *)(param_1 + 6) != 0) {
      uVar5 = 0;
      uVar8 = *(ulong *)(param_1 + 8);
      if (0x1f < uVar8) {
        uVar8 = 0x20;
      }
      while (uVar8 != uVar5) {
        if ((uVar5 != 0) && (uVar3 = recovered_82453184(param_2,&DAT_82479088), uVar3 == 0)) {
          return '\0';
        }
        recovered_82401ff0((char *)auStack_b0,0x60,(char *)0x8247a438,
                           (uint)*(byte *)(*(long *)(param_1 + 6) + uVar5));
        uVar3 = recovered_82453184(param_2,auStack_b0);
        uVar5 = uVar5 + 1;
        if ((uVar3 & 1) == 0) {
          return '\0';
        }
      }
      if ((uVar8 < *(ulong *)(param_1 + 8)) &&
         (uVar3 = recovered_82453184(param_2,(uchar *)0x8247a43d), uVar3 == 0)) {
        return '\0';
      }
    }
    puVar6 = &DAT_82479cc0;
    goto LAB_82453058;
  case 5:
    pcVar7 = str_82475aa9;
    if (param_1[1] != 0) {
      pcVar7 = &DAT_824753b2;
    }
    break;
  case 6:
    argument_3 = (uint32_t)param_1[1];
    pcVar7 = (char *)0x8247a42d;
LAB_8245304c:
    recovered_82401ff0((char *)auStack_b0,0x60,pcVar7,argument_3);
    puVar6 = auStack_b0;
LAB_82453058:
    uVar3 = recovered_82453184(param_2,puVar6);
    return (uchar)uVar3;
  case 7:
    uVar3 = recovered_82453184(param_2,&DAT_82479cbe);
    if (uVar3 == 0) {
      return '\0';
    }
    if (*(long *)(param_1 + 10) != 0) {
      lVar11 = 0;
      uVar5 = 0;
      while (lVar9 = *(long *)(param_1 + 10), uVar5 < *(ulong *)(lVar9 + 8)) {
        if (uVar5 != 0) {
          uVar3 = recovered_82453184(param_2,&DAT_8247a442);
          if (uVar3 == 0) {
            return '\0';
          }
          lVar9 = *(long *)(param_1 + 10);
        }
        bVar2 = recovered_82452e04((int *)(*(long *)(lVar9 + 0x18) + lVar11),param_2,param_3 + 1);
        uVar5 = uVar5 + 1;
        lVar11 = lVar11 + 0x40;
        if ((bVar2 & 1) == 0) {
          return '\0';
        }
      }
    }
    pcVar7 = &DAT_82479cc0;
    break;
  case 8:
    uVar3 = recovered_82453184(param_2,&DAT_8247a1a6);
    if (uVar3 == 0) {
      return '\0';
    }
    if (*(long *)(param_1 + 0xc) != 0) {
      lVar11 = 0;
      uVar5 = 0;
      while (lVar9 = *(long *)(param_1 + 0xc), uVar5 < *(ulong *)(lVar9 + 8)) {
        if (uVar5 != 0) {
          uVar3 = recovered_82453184(param_2,&DAT_8247a442);
          if (uVar3 == 0) {
            return '\0';
          }
          lVar9 = *(long *)(param_1 + 0xc);
        }
        puVar10 = *(uchar **)(*(long *)(lVar9 + 0x18) + lVar11);
        puVar6 = &DAT_82473985;
        if (puVar10 != (uchar *)0x0) {
          puVar6 = puVar10;
        }
        uVar3 = recovered_82453184(param_2,puVar6);
        if (uVar3 == 0) {
          return '\0';
        }
        uVar3 = recovered_82453184(param_2,&DAT_82474139);
        if (uVar3 == 0) {
          return '\0';
        }
        bVar2 = recovered_82452e04((int *)(*(long *)(*(long *)(param_1 + 0xc) + 0x18) + lVar11 + 8),
                                   param_2,param_3 + 1);
        uVar5 = uVar5 + 1;
        lVar11 = lVar11 + 0x48;
        if ((bVar2 & 1) == 0) {
          return '\0';
        }
      }
    }
    pcVar7 = &DAT_8247a1a8;
    break;
  case 9:
    pcVar7 = str_8247a445;
    break;
  default:
    pcVar7 = str_8247a450;
  }
switchD_82452eb4_default:
  text = &DAT_82473985;
  if (pcVar7 != (char *)0x0) {
    text = pcVar7;
  }
  uVar5 = recovered_82400de8(text);
  if (param_2 == (long *)0x0) {
    return '\0';
  }
  lVar11 = *param_2;
  uVar1 = param_2[1];
  uVar8 = uVar5 + lVar11 + 1;
  if (uVar1 < uVar8) {
    size = 0x20;
    if (uVar1 != 0) {
      size = uVar1;
    }
    for (; size < uVar8; size = size << 1) {
      if ((long)size < 0) {
        size = uVar8;
        break;
      }
    }
    pvVar4 = recovered_82400820((void *)param_2[2],size);
    if (pvVar4 == (void *)0x0) {
      return '\0';
    }
    param_2[1] = size;
    param_2[2] = (long)pvVar4;
    lVar11 = *param_2;
  }
  if ((text != (char *)0x0) && (uVar5 != 0)) {
    recovered_82400928((void *)(param_2[2] + lVar11),text,uVar5);
    lVar11 = *param_2;
  }
  *param_2 = lVar11 + uVar5;
  *(undefined1 *)(param_2[2] + lVar11 + uVar5) = 0;
  return '\x01';
}

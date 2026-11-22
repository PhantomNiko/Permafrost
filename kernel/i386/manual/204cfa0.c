/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_0213073c (*(uint8_t volatile *)(0x213073cU))
#define DAT_02130740 (*(uint32_t volatile *)(0x2130740U))
#define DAT_02130744 (*(uint32_t volatile *)(0x2130744U))
#define DAT_02130748 (*(uint32_t volatile *)(0x2130748U))
#define DAT_0213074c (*(uint32_t volatile *)(0x213074cU))
#define DAT_02130750 (*(uint32_t volatile *)(0x2130750U))
#define DAT_02130758 (*(uint32_t volatile *)(0x2130758U))
#define DAT_0213075c (*(uint32_t volatile *)(0x213075cU))
#define DAT_02130790 (*(uint32_t volatile *)(0x2130790U))
#define DAT_02130794 (*(uint32_t volatile *)(0x2130794U))
#define DAT_02130798 (*(uint32_t volatile *)(0x2130798U))
#define DAT_0213079c (*(uint32_t volatile *)(0x213079cU))
#define DAT_021307a4 (*(uint32_t volatile *)(0x21307a4U))
#define DAT_021307a8 (*(uint32_t volatile *)(0x21307a8U))
#define DAT_021307ac (*(uint32_t volatile *)(0x21307acU))
#define DAT_021307b0 (*(uint32_t volatile *)(0x21307b0U))
#define DAT_021307b4 (*(uint32_t volatile *)(0x21307b4U))
#define DAT_021307b8 (*(uint32_t volatile *)(0x21307b8U))
#define DAT_021307bc (*(uint32_t volatile *)(0x21307bcU))
#define DAT_021307c0 (*(uint8_t volatile *)(0x21307c0U))
#define DAT_021307dc (*(uint8_t volatile *)(0x21307dcU))


bool recovered_204cfa0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *data;
  char cVar9;
  bool bVar10;
  void *pvVar11;
  uint uVar12;
  uint size;
  uint uVar13;
  uint uVar14;
  uint uVar15;

  cVar9 = DAT_021307dc;
  if ((cVar9 == '\x01') && (iVar2 = DAT_0213075c, iVar2 - 3U < 3)) {
    iVar7 = DAT_02130798;
    iVar2 = DAT_02130740;
    size = iVar2 * iVar7;
    uVar12 = DAT_02130758;
    uVar3 = DAT_02130744;
    iVar4 = DAT_02130748;
    iVar6 = DAT_02130794;
    if ((((uVar12 & 1) == 0) &&
        ((((iVar2 == 0x200 && (uVar3 != 0)) && (iVar4 != 0)) && ((iVar6 != 0 && (iVar7 != 0)))))) &&
       ((iVar8 = DAT_021307a4, iVar8 != 0 &&
        (((uVar13 = DAT_021307a8, size <= uVar13 && (iVar8 = DAT_021307ac, iVar8 != 0)) &&
         (iVar8 = DAT_021307b0, iVar8 != 0)))))) {
      return true;
    }
    if ((0xff800000 < iVar7 - 0x800000U && iVar6 != 0) &&
        ((iVar4 != 0 && uVar3 != 0) && (iVar2 == 0x200 && (uVar12 & 1) == 0))) {
      iVar2 = DAT_0213079c;
      uVar15 = iVar2 * 0x20 + 0x1ffU >> 9;
      uVar12 = DAT_02130750;
      uVar5 = DAT_02130790;
      uVar5 = DAT_02130790;
      iVar2 = DAT_02130790;
      uVar13 = iVar6 * iVar7 + iVar2 + uVar15;
      uVar14 = uVar12 - uVar13;
      if (uVar12 < uVar13 || uVar14 == 0) {
        return false;
      }
      if (uVar14 < uVar3) {
        return false;
      }
      pvVar11 = recovered_2001650(size);
      if (pvVar11 != (void *)0x0) {
        bVar1 = DAT_0213073c;
        iVar4 = DAT_02130790;
        uVar5 = DAT_0213074c;
        uVar5 = DAT_0213074c;
        iVar2 = DAT_0213074c;
        uVar12 = recovered_204ed30((uint)bVar1,iVar4 + iVar2,(int)pvVar11,size);
        if ((char)uVar12 != '\0') {
          data = (void *)DAT_021307a4;
          recovered_2001710(data);
          DAT_021307a4 = pvVar11;
          pvVar11 = (void *)DAT_021307b4;
          recovered_2001710(pvVar11);
          DAT_021307b4 = 0;
          DAT_021307b8 = 0;
          DAT_021307bc = 0;
          DAT_021307c0 = 0;
          DAT_021307a8 = size;
          DAT_021307ac = uVar14 / uVar3;
          iVar7 = DAT_02130798;
          iVar6 = DAT_02130794;
          uVar5 = DAT_0213074c;
          uVar5 = DAT_0213074c;
          iVar2 = DAT_0213074c;
          uVar5 = DAT_02130790;
          uVar5 = DAT_02130790;
          iVar4 = DAT_02130790;
          DAT_021307b0 = uVar15 + iVar2 + iVar4 + iVar7 * iVar6;
          bVar10 = recovered_204eca0();
          return bVar10;
        }
        recovered_2001710(pvVar11);
      }
    }
  }
  return false;
}
#undef DAT_0213073c
#undef DAT_02130740
#undef DAT_02130744
#undef DAT_02130748
#undef DAT_0213074c
#undef DAT_02130750
#undef DAT_02130758
#undef DAT_0213075c
#undef DAT_02130790
#undef DAT_02130794
#undef DAT_02130798
#undef DAT_0213079c
#undef DAT_021307a4
#undef DAT_021307a8
#undef DAT_021307ac
#undef DAT_021307b0
#undef DAT_021307b4
#undef DAT_021307b8
#undef DAT_021307bc
#undef DAT_021307c0
#undef DAT_021307dc

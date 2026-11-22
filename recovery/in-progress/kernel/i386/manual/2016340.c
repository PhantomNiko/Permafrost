#include "functions.h"
#undef DAT_021045ec
#define DAT_021045ec (*(uint8_t volatile *)(0x21045ecU))
#undef DAT_021045ed
#define DAT_021045ed (*(uint8_t volatile *)(0x21045edU))
#undef DAT_021045f1
#define DAT_021045f1 (*(uint8_t volatile *)(0x21045f1U))
#undef DAT_021045f2
#define DAT_021045f2 (*(uint8_t volatile *)(0x21045f2U))
#undef DAT_021045f4
#define DAT_021045f4 (*(uint8_t volatile *)(0x21045f4U))
#undef DAT_021045f8
#define DAT_021045f8 (*(uint8_t volatile *)(0x21045f8U))
#undef DAT_021045fc
#define DAT_021045fc (*(uint32_t volatile *)(0x21045fcU))
#undef DAT_02104600
#define DAT_02104600 (*(uint8_t volatile *)(0x2104600U))
#undef DAT_02104601
#define DAT_02104601 (*(uint8_t volatile *)(0x2104601U))
#undef DAT_02104602
#define DAT_02104602 (*(uint8_t volatile *)(0x2104602U))
#undef DAT_02104604
#define DAT_02104604 (*(uint16_t volatile *)(0x2104604U))
#undef DAT_02104606
#define DAT_02104606 (*(uint8_t volatile *)(0x2104606U))
#undef DAT_0210460c
#define DAT_0210460c (*(uint32_t volatile *)(0x210460cU))
#undef DAT_02104610
#define DAT_02104610 (*(uint32_t volatile *)(0x2104610U))
#undef DAT_02104614
#define DAT_02104614 (*(uint32_t volatile *)(0x2104614U))
#undef DAT_02104618
#define DAT_02104618 (*(uint32_t volatile *)(0x2104618U))
#undef DAT_0210461c
#define DAT_0210461c (*(uint32_t volatile *)(0x210461cU))
#undef DAT_02104620
#define DAT_02104620 (*(uint32_t volatile *)(0x2104620U))
#undef DAT_02104bc4
#define DAT_02104bc4 (*(uint8_t volatile *)(0x2104bc4U))
#undef DAT_02104bc5
#define DAT_02104bc5 (*(uint8_t volatile *)(0x2104bc5U))
#undef DAT_02104bc7
#define DAT_02104bc7 (*(uint8_t volatile *)(0x2104bc7U))
#undef DAT_02104bc8
#define DAT_02104bc8 (*(uint8_t volatile *)(0x2104bc8U))
#undef DAT_02104bcc
#define DAT_02104bcc (*(uint8_t volatile *)(0x2104bccU))
#undef DAT_02104bd0
#define DAT_02104bd0 (*(uint8_t volatile *)(0x2104bd0U))
#undef DAT_02104bd4
#define DAT_02104bd4 (*(uint8_t volatile *)(0x2104bd4U))
#undef DAT_02104bd5
#define DAT_02104bd5 (*(uint8_t volatile *)(0x2104bd5U))
#undef DAT_02104bd6
#define DAT_02104bd6 (*(uint8_t volatile *)(0x2104bd6U))
#undef DAT_02104bd8
#define DAT_02104bd8 (*(uint8_t volatile *)(0x2104bd8U))
#undef DAT_02104bda
#define DAT_02104bda (*(uint8_t volatile *)(0x2104bdaU))
#undef DAT_02104bdc
#define DAT_02104bdc (*(uint8_t volatile *)(0x2104bdcU))
#undef DAT_02104be0
#define DAT_02104be0 (*(uint8_t volatile *)(0x2104be0U))
#undef DAT_0212d000
#define DAT_0212d000 (*(uint8_t volatile *)(0x212d000U))
#undef DAT_0212d001
#define DAT_0212d001 (*(uint8_t volatile *)(0x212d001U))
#undef DAT_0212d003
#define DAT_0212d003 (*(uint8_t volatile *)(0x212d003U))
#undef DAT_0212d004
#define DAT_0212d004 (*(uint8_t volatile *)(0x212d004U))
#undef DAT_0212d005
#define DAT_0212d005 (*(uint8_t volatile *)(0x212d005U))
#undef DAT_0212d007
#define DAT_0212d007 (*(uint8_t volatile *)(0x212d007U))
#undef Ram021045ec
#define Ram021045ec (*(uint16_t volatile *)(0x21045ecU))
#undef Ram021045f4
#define Ram021045f4 (*(uint32_t volatile *)(0x21045f4U))
#undef Ram021045f8
#define Ram021045f8 (*(uint32_t volatile *)(0x21045f8U))
#undef Ram02104bc4
#define Ram02104bc4 (*(uint16_t volatile *)(0x2104bc4U))
#undef Ram02104bc8
#define Ram02104bc8 (*(uint32_t volatile *)(0x2104bc8U))
#undef Ram02104bcc
#define Ram02104bcc (*(uint32_t volatile *)(0x2104bccU))
#undef Ram02104bd0
#define Ram02104bd0 (*(uint32_t volatile *)(0x2104bd0U))
#undef Ram02104bd8
#define Ram02104bd8 (*(uint16_t volatile *)(0x2104bd8U))
#undef Ram02104bdc
#define Ram02104bdc (*(uint32_t volatile *)(0x2104bdcU))
#undef Ram02104be0
#define Ram02104be0 (*(uint32_t volatile *)(0x2104be0U))
#define local_4c (*(uint *)(frame + 20))
#define local_48 (*(uint *)(frame + 24))
#define local_3c (*(uint *)(frame + 36))
#define local_34 (*(uint *)(frame + 44))
#define local_30 (*(uint *)(frame + 48))
#define local_2c (*(uint *)(frame + 52))
#define local_28 (*(uint *)(frame + 56))
#define local_24 (*(uint *)(frame + 60))
#define local_1c (*(uint *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2016340
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_2016340(int controller,uint device,uchar a,uchar b,uchar c,uchar d,ushort e)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int controller_00;
  byte bVar12;
  ushort uVar13;

  if ((ushort)(e - 0x101) < 0xff08) {
    return 0;
  }
  bVar4 = DAT_0212d005;
  uVar10 = 0;
  cVar2 = DAT_02104bc5;
  uVar11 = (uint)e;
  if (cVar2 == '\0') {
    uVar7 = 2;
    bVar8 = false;
    local_28 = 0;
    bVar9 = false;
    local_2c = 0;
    bVar12 = 0;
    local_30 = 0;
    cVar2 = '\0';
    do {
      bVar3 = (&DAT_0212d000)[uVar10];
      if ((bVar3 < 2) || (uVar1 = uVar10 + bVar3, uVar11 < uVar1)) break;
      if (bVar3 < 9 || (&DAT_0212d001)[uVar10] != '\x04') {
        if (!(bVar3 < 7 || (&DAT_0212d001)[uVar10] != '\x05')) {
          if (bVar8) {
            bVar3 = (&DAT_0212d000)[uVar7];
            uVar5 = *(ushort *)(&DAT_0212d004 + uVar10);
            bVar8 = true;
            if (((char)bVar3 < '\0') && ((~(&DAT_0212d003)[uVar10] & 3) == 0)) {
              uVar10 = (uint)uVar5;
              if ((uVar5 != 0) && ((cVar2 == '\x01' || (7 < uVar5)))) {
                if (0xf < uVar5) {
                  uVar10 = 0x10;
                }
                if (cVar2 == '\x01') {
                  bVar12 = bVar3 & 0xf;
                  goto LAB_0201650f;
                }
                if (!bVar9) {
                  bVar12 = bVar3 & 0xf;
                  bVar9 = true;
                  local_30 = local_28;
                  bVar8 = true;
                  local_2c = uVar10;
                }
              }
            }
          }
          else {
            bVar8 = false;
          }
        }
      }
      else {
        local_28 = (uint)(byte)(&DAT_0212d000)[uVar7];
        cVar2 = (&DAT_0212d007)[uVar10];
        bVar8 = cVar2 != '\x02' && (&DAT_0212d005)[uVar10] == '\x03';
      }
      uVar10 = uVar1 & 0xffff;
      uVar7 = uVar10 + 2;
    } while (uVar7 <= uVar11);
    local_28 = local_30;
    uVar10 = local_2c;
    if (!bVar9) goto LAB_0201653a;
LAB_0201650f:
    bVar8 = true;
    cVar2 = DAT_021045ed;
    local_30 = uVar10;
  }
  else {
LAB_0201653a:
    local_28 = 0;
    local_30 = 0;
    bVar12 = 0;
    bVar8 = false;
    cVar2 = DAT_021045ed;
  }
  uVar5 = (ushort)local_28;
  if (cVar2 == '\0') {
    uVar7 = 0;
    uVar10 = 2;
    bVar9 = false;
    local_24 = 0;
    bVar6 = false;
    local_34 = 0;
    local_3c = 0;
    local_4c = 0;
    local_48 = 0;
    local_1c = 0;
    do {
      bVar3 = (&DAT_0212d000)[uVar7];
      if ((bVar3 < 2) || (uVar1 = uVar7 + bVar3, uVar11 < uVar1)) break;
      if (bVar3 < 9 || (&DAT_0212d001)[uVar7] != '\x04') {
        if (!(bVar3 < 7 || (&DAT_0212d001)[uVar7] != '\x05')) {
          if (bVar9) {
            bVar3 = (&DAT_0212d000)[uVar10];
            uVar13 = *(ushort *)(&DAT_0212d004 + uVar7);
            bVar9 = true;
            if (((char)bVar3 < '\0') && ((~(&DAT_0212d003)[uVar7] & 3) == 0)) {
              uVar10 = (uint)uVar13;
              if (uVar13 != 0) {
                if (0x3ff < uVar10) {
                  uVar10 = 0x400;
                }
                if ((char)local_1c == '\x02') {
                  local_3c = (uint)(bVar3 & 0xf);
                  local_4c = 2;
                  local_48 = local_24;
                  goto LAB_020166cb;
                }
                if (4 < uVar13) {
                  local_3c = (uint)(bVar3 & 0xf);
                  local_4c = local_1c;
                  local_48 = local_24;
                  goto LAB_020166cb;
                }
                if (!bVar6) {
                  local_3c = (uint)(bVar3 & 0xf);
                  bVar6 = true;
                  local_48 = local_24;
                  local_4c = local_1c;
                  bVar9 = true;
                  local_34 = uVar10;
                }
              }
            }
          }
          else {
            bVar9 = false;
          }
        }
      }
      else {
        local_24 = (uint)(byte)(&DAT_0212d000)[uVar10];
        local_1c = (uint)(byte)(&DAT_0212d007)[uVar7];
        bVar9 = (&DAT_0212d007)[uVar7] != 1 && (&DAT_0212d005)[uVar7] == '\x03';
      }
      uVar7 = uVar1 & 0xffff;
      uVar10 = uVar7 + 2;
    } while (uVar10 <= uVar11);
    uVar10 = local_34;
    if (bVar6) {
LAB_020166cb:
      uVar13 = (ushort)local_48;
      uVar11 = local_3c << 8 | local_4c << 0x10 | local_48 << 0x18;
      bVar9 = true;
      local_34 = uVar10;
      local_1c = local_4c;
      goto LAB_0201672e;
    }
  }
  if (!bVar8) {
    return 0;
  }
  uVar11 = (uint)bVar12 << 8 | local_28 << 0x18;
  uVar13 = 0;
  local_1c = 0;
  local_3c = 0;
  local_34 = 0;
  bVar9 = false;
  uVar10 = local_30;
LAB_0201672e:
  DAT_0210461c = 0xd;
  DAT_02104620 = uVar10 | uVar11;
  uVar10 = (uint)a;
  uVar11 = recovered_20169e0(*(int *)(controller + 0x14),uVar10,b,c,'\0','\t',(ushort)bVar4,0,'\0',
                             (void *)0x0,0);
  if ((char)uVar11 == '\0') {
    return 0;
  }
  if (bVar8) {
    recovered_20169e0(*(int *)(controller + 0x14),uVar10,b,c,'!','\v',0,uVar5,'\0',(void *)0x0,0);
    recovered_20169e0(*(int *)(controller + 0x14),uVar10,b,c,'!','\n',0,uVar5,'\0',(void *)0x0,0);
    recovered_2001e00(&DAT_02104bc4,0,0x24);
    Ram02104bc4 = 0x101;
    DAT_02104bc7 = c;
    Ram02104bc8 = device;
    Ram02104bcc = *(undefined4 *)(controller + 8);
    Ram02104bd0 = *(undefined4 *)(controller + 0x14);
    DAT_02104bd4 = a;
    DAT_02104bd5 = bVar12;
    DAT_02104bd6 = (undefined1)local_28;
    Ram02104bd8 = (short)local_30;
    DAT_02104bda = d;
    Ram02104bdc = 0x1e;
    Ram02104be0 = (uint)bVar12;
  }
  if (bVar9) {
    controller_00 = *(int *)(controller + 0x14);
    PF_PART1(local_24, 0) = (undefined1)uVar13;
    if (((char)local_1c == '\x02') && ((ushort)local_34 < 5)) {
      recovered_20169e0(controller_00,uVar10,b,c,'!','\v',0,uVar13,'\0',(void *)0x0,0);
      controller_00 = *(int *)(controller + 0x14);
    }
    recovered_20169e0(controller_00,uVar10,b,c,'!','\n',0,uVar13,'\0',(void *)0x0,0);
    recovered_2001e00(&DAT_021045ec,0,0x40);
    Ram021045ec = 0x101;
    DAT_021045f1 = 4 < (ushort)local_34 || (char)local_1c != '\x02';
    DAT_021045f2 = c;
    Ram021045f4 = device;
    Ram021045f8 = *(undefined4 *)(controller + 8);
    DAT_021045fc = *(undefined4 *)(controller + 0x14);
    DAT_02104600 = a;
    DAT_02104601 = (char)local_3c;
    DAT_02104602 = (undefined1)local_24;
    DAT_02104604 = (ushort)local_34;
    DAT_02104606 = d;
    DAT_02104614 = 0x7fff;
    DAT_02104618 = 0x7fff;
    DAT_0210460c = 0x3fff;
    DAT_02104610 = 0x3fff;
    DAT_0210461c = 0x1e;
    DAT_02104620 = local_1c;
    return 1;
  }
  return 1;
}

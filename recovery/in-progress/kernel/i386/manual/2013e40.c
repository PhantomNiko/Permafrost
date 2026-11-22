#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2013e40
 */

uint recovered_2013e40(uchar bus,uchar device,uchar function,uchar *out)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;

  if ((out == (uchar *)0x0) || (7 < function || 0x1f < device)) {
    uVar1 = 0;
  }
  else {
    uVar4 = (uint)device << 0xb | (uint)bus << 0x10;
    pf_pci_out32(0xcf8,(uint)function * 0x100 + 0x80000000 + uVar4);
    uVar2 = pf_pci_in32(0xcfc);
    uVar1 = 0;
    if (((short)uVar2 != 0) && ((uVar2 & 0xffff) != 0xffff)) {
      uVar4 = uVar4 | (uint)function * 0x100;
      recovered_2001e00(out,0,0x28);
      *out = bus;
      out[1] = device;
      out[2] = function;
      *(short *)(out + 4) = (short)uVar2;
      *(short *)(out + 6) = (short)(uVar2 >> 0x10);
      out[0xc] = '\0';
      out[0xd] = '\0';
      out[0xe] = '\0';
      out[0xf] = '\0';
      pf_pci_out32(0xcf8,uVar4 | 0x80000004);
      out[0xc] = '\0';
      out[0xd] = '\0';
      out[0xe] = '\0';
      out[0xf] = '\0';
      uVar3 = pf_pci_in32(0xcfc);
      *(undefined4 *)(out + 0xc) = uVar3;
      pf_pci_out32(0xcf8,uVar4 | 0x80000008);
      uVar3 = pf_pci_in32(0xcfc);
      out[10] = (uchar)((uint)uVar3 >> 8);
      out[9] = (uchar)((uint)uVar3 >> 0x10);
      out[8] = (uchar)((uint)uVar3 >> 0x18);
      pf_pci_out32(0xcf8,uVar4 | 0x8000000c);
      uVar3 = pf_pci_in32(0xcfc);
      out[0xb] = (uchar)((uint)uVar3 >> 0x10);
      out[0x10] = '\0';
      out[0x11] = '\0';
      out[0x12] = '\0';
      out[0x13] = '\0';
      pf_pci_out32(0xcf8,uVar4 | 0x80000010);
      out[0x10] = '\0';
      out[0x11] = '\0';
      out[0x12] = '\0';
      out[0x13] = '\0';
      uVar3 = pf_pci_in32(0xcfc);
      *(undefined4 *)(out + 0x10) = uVar3;
      out[0x14] = '\0';
      out[0x15] = '\0';
      out[0x16] = '\0';
      out[0x17] = '\0';
      pf_pci_out32(0xcf8,uVar4 | 0x80000014);
      out[0x14] = '\0';
      out[0x15] = '\0';
      out[0x16] = '\0';
      out[0x17] = '\0';
      uVar3 = pf_pci_in32(0xcfc);
      *(undefined4 *)(out + 0x14) = uVar3;
      out[0x18] = '\0';
      out[0x19] = '\0';
      out[0x1a] = '\0';
      out[0x1b] = '\0';
      pf_pci_out32(0xcf8,uVar4 | 0x80000018);
      out[0x18] = '\0';
      out[0x19] = '\0';
      out[0x1a] = '\0';
      out[0x1b] = '\0';
      uVar3 = pf_pci_in32(0xcfc);
      *(undefined4 *)(out + 0x18) = uVar3;
      out[0x1c] = '\0';
      out[0x1d] = '\0';
      out[0x1e] = '\0';
      out[0x1f] = '\0';
      pf_pci_out32(0xcf8,uVar4 | 0x8000001c);
      out[0x1c] = '\0';
      out[0x1d] = '\0';
      out[0x1e] = '\0';
      out[0x1f] = '\0';
      uVar3 = pf_pci_in32(0xcfc);
      *(undefined4 *)(out + 0x1c) = uVar3;
      out[0x20] = '\0';
      out[0x21] = '\0';
      out[0x22] = '\0';
      out[0x23] = '\0';
      pf_pci_out32(0xcf8,uVar4 | 0x80000020);
      out[0x20] = '\0';
      out[0x21] = '\0';
      out[0x22] = '\0';
      out[0x23] = '\0';
      uVar3 = pf_pci_in32(0xcfc);
      *(undefined4 *)(out + 0x20) = uVar3;
      out[0x24] = '\0';
      out[0x25] = '\0';
      out[0x26] = '\0';
      out[0x27] = '\0';
      pf_pci_out32(0xcf8,uVar4 | 0x80000024);
      out[0x24] = '\0';
      out[0x25] = '\0';
      out[0x26] = '\0';
      out[0x27] = '\0';
      uVar3 = pf_pci_in32(0xcfc);
      *(undefined4 *)(out + 0x24) = uVar3;
      uVar1 = CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return uVar1;
}

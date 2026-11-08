#!/usr/bin/env python3
"""Compare native ARM64 WFE5 disk-index, pointer, media-ID, and extent lookup.

Pooka's Free Software License. No firmware or device code is called.
"""
import argparse,json,struct,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect
from unicorn import Uc,UC_ARCH_ARM64,UC_MODE_ARM
from unicorn.arm64_const import *
def run(binary,mapping=None):
 m,memory=inspect(binary);cpu=Uc(UC_ARCH_ARM64,UC_MODE_ARM);cpu.mem_map(0,0x5000000);cpu.mem_map(0x82000000,0x8000000);cpu.mem_write(m['base'],memory)
 context,out1,out2=0x3100000,0x3110000,0x3110010;c=bytearray(0x2150);struct.pack_into('<III',c,0,0x33454657,5,len(c));struct.pack_into('<I',c,0x1530,2)
 pointers=[0x123456789abc,0x23456789abcd];media=[7,13];sectors=[4096,8192];bases=[0,37]
 for i in range(2):
  struct.pack_into('<I',c,0x1538+i*4,pointers[i]&0xffffffff);struct.pack_into('<Q',c,0x1738+i*8,pointers[i]);struct.pack_into('<I',c,0x1b38+i*4,media[i]);struct.pack_into('<I',c,0x1d38+i*4,sectors[i]);struct.pack_into('<I',c,0x1f38+i*4,bases[i])
 cpu.mem_write(context,bytes(c));cpu.mem_write(0x825420b8,struct.pack('<Q',context))
 def call(address,*args):
  for reg,value in zip([UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2],args):cpu.reg_write(reg,value)
  cpu.reg_write(UC_ARM64_REG_SP,0x4fe0000);cpu.reg_write(UC_ARM64_REG_X30,0x4ff0000);target=address if mapping is None else mapping.get('_recovered_%x'%address,mapping.get('recovered_%x'%address));cpu.emu_start(target,0x4ff0000,count=100000);assert cpu.reg_read(UC_ARM64_REG_PC)==0x4ff0000;return cpu.reg_read(UC_ARM64_REG_X0)
 results=[]
 for i in range(2):
  drive=0x80+i;cpu.mem_write(out1,b'\xff'*4);indexed=call(0x8240abb0,drive,out1);index=int.from_bytes(cpu.mem_read(out1,4),'little');pointer=call(0x82405ad0,drive);medium=call(0x8240ae44,drive);extent=call(0x8240ad80,drive,out1,out2);base=int.from_bytes(cpu.mem_read(out1,4),'little');size=int.from_bytes(cpu.mem_read(out2,4),'little');result=(indexed,index,pointer,medium,extent,base,size);assert result==(1,i,pointers[i],media[i],1,bases[i],sectors[i]),result;results.append(result)
 for drive in [0x7f,0x82,0xff]:assert call(0x8240abb0,drive,out1)==0
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);a=p.parse_args();assert run(a.reference.read_bytes())==run(a.source.read_bytes(),json.loads(a.map.read_text()));print('ARM64 EFI disks: native indexed 64-bit pointers, media IDs, extents, and invalid indices passed.')

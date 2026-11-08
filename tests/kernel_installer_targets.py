#!/usr/bin/env python3
"""Compare native ARM64 installer target-list argument transport.

Pooka's Free Software License. Disk probes and console output are intercepted.
"""
import argparse,json,struct,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect
from unicorn import Uc,UC_ARCH_ARM64,UC_MODE_ARM,UC_HOOK_CODE
from unicorn.arm64_const import *

def run(binary,mapping=None,entry=0x8245de88):
 metadata,memory=inspect(binary);cpu=Uc(UC_ARCH_ARM64,UC_MODE_ARM)
 cpu.mem_map(0,0x5000000);cpu.mem_map(0x82000000,0x8000000);cpu.mem_write(metadata['base'],memory)
 def address(native):return native if mapping is None else mapping.get('_recovered_%x'%native,mapping.get('recovered_%x'%native))
 def finish(value=1):cpu.reg_write(UC_ARM64_REG_X0,value);cpu.reg_write(UC_ARM64_REG_PC,cpu.reg_read(UC_ARM64_REG_X30))
 def string(pointer):return bytes(cpu.mem_read(pointer,512)).split(b'\0')[0].decode()
 def argument(c,a,z,u):
  assert c.reg_read(UC_ARM64_REG_X4)==0
  c.mem_write(c.reg_read(UC_ARM64_REG_X5),struct.pack('<Q',0x3100000));finish()
 def skip(c,a,z,u):finish()
 rows=[]
 def log(c,a,z,u):
  fmt=string(c.reg_read(UC_ARM64_REG_X0));assert fmt=='INSTALLER DEVICE %d DRIVE $%02X %s %s %s',fmt
  device,drive,kind,label,size=struct.unpack('<5Q',c.mem_read(c.reg_read(UC_ARM64_REG_SP),40))
  rows.append((device,drive,string(size),string(label),string(kind)));finish()
 for native,callback in [(0x82459e30,argument),(0x82459dd4,skip),(0x824217c8,skip),(0x82466e54,skip),(0x8241dfec,skip),(0x824234a4,log)]:
  hook=address(native);cpu.hook_add(UC_HOOK_CODE,callback,begin=hook,end=hook)
 cpu.mem_write(0x3100000,b'list\0');cpu.mem_write(0x3101000,b'installer\0');cpu.mem_write(0x8266ed80,bytes(8))
 records=bytearray(104*3)
 for i,drive in enumerate([0x80,0x81,0x82]):
  struct.pack_into('<I',records,i*104,7+i);records[i*104+4]=drive;struct.pack_into('<I',records,i*104+12,1048576*(i+1))
 records[2*104+72:2*104+76]=b'WORK'
 cpu.mem_write(0x82558008,bytes(records));cpu.mem_write(0x8266ed28,struct.pack('<Q',3))
 cpu.reg_write(UC_ARM64_REG_SP,0x4fe0000);cpu.reg_write(UC_ARM64_REG_X30,0x4ff0000)
 for reg,value in zip([UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4],[0,0x3101000,0x3102000,1,0x3103000]):cpu.reg_write(reg,value)
 cpu.emu_start(address(entry),0x4ff0000,count=2000000)
 assert cpu.reg_read(UC_ARM64_REG_PC)==0x4ff0000
 assert [row[:2]for row in rows]==[(8,0x81),(9,0x82)],rows
 return rows

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);a=p.parse_args()
 for entry in [0x8245de88,0x8245378c]:
  expected=run(a.reference.read_bytes(),entry=entry);actual=run(a.source.read_bytes(),json.loads(a.map.read_text()),entry);assert expected==actual,(expected,actual)
 print('ARM64 installer target list: native IDs, drive numbers, sizes, labels, and partition kinds passed.')

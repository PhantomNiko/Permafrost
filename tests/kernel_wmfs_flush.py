#!/usr/bin/env python3
"""Compare ARM64 WMFS32 rewrites, including every file's read-back contents.

Pooka's Free Software License. All allocation and block I/O are emulated.
"""
import argparse,json,struct,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect
from wmfs import Image,make_image
from unicorn import Uc,UC_ARCH_ARM64,UC_MODE_ARM,UC_HOOK_CODE
from unicorn.arm64_const import *

def run(binary,mapping=None,lazy=False,repeat=False):
 metadata,memory=inspect(binary);cpu=Uc(UC_ARCH_ARM64,UC_MODE_ARM)
 cpu.mem_map(0,0x5000000);cpu.mem_map(0x82000000,0x8000000);cpu.mem_write(metadata['base'],memory)
 def target(entry):return entry if mapping is None else mapping.get('_recovered_%x'%entry,mapping.get('recovered_%x'%entry))
 def finish(value=1):cpu.reg_write(UC_ARM64_REG_X0,value);cpu.reg_write(UC_ARM64_REG_PC,cpu.reg_read(UC_ARM64_REG_X30))
 allocated=0x3400000;writes=[]
 def allocate(c,a,z,u):
  nonlocal allocated
  size=c.reg_read(UC_ARM64_REG_X0);assert size<0x1000000
  pointer=allocated;allocated=(allocated+max(size,1)+15)&-16;c.mem_write(pointer,bytes(max(size,1)));finish(pointer)
 def release(c,a,z,u):finish()
 def write(c,a,z,u):
  drive,lba,pointer,size=[c.reg_read(r)for r in [UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3]]
  assert drive==0x81 and lba==2048
  writes.append(bytes(c.mem_read(pointer,size)));finish()
 for entry,callback in [(0x82400744,allocate),(0x82400748,release),(0x824393dc,write)]:
  address=target(entry);cpu.hook_add(UC_HOOK_CODE,callback,begin=address,end=address)
 files={'alpha.bin':bytes(i%251 for i in range(5000)),'Permafrost':b'\xca\xfe\xba\xbe'+bytes((i*7)%251 for i in range(10000)),'empty':b''}
 boot=bytes(510)+b'\x55\xaa';original=make_image(boot,bytes(64*512),files,sectors=4096+65);filesystem=Image(original);volume=original[65*512:]
 def read(c,a,z,u):
  drive,lba,pointer,size=[c.reg_read(r)for r in [UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3]]
  assert drive==0x81 and lba>=2048
  offset=(lba-2048)*512;assert offset+size<=len(volume)
  c.mem_write(pointer,volume[offset:offset+size]);finish()
 address=target(0x8243843c);cpu.hook_add(UC_HOOK_CODE,read,begin=address,end=address)
 entries=list(filesystem.entries())
 records=bytearray(0x118*len(files))
 for i,(name,data)in enumerate(files.items()):
  offset=i*0x118;records[offset:offset+len(name)]=name.encode();pointer=0x3200000+i*0x10000
  cpu.mem_write(pointer,data or b'\0');struct.pack_into('<Q',records,offset+0xf8,pointer);struct.pack_into('<I',records,offset+0x100,len(data));records[offset+0x114]=1
 if lazy:
  for i,(name,cluster,size)in enumerate(entries):
   struct.pack_into('<Q',records,i*0x118+0xf8,0);struct.pack_into('<I',records,i*0x118+0x10c,cluster);records[i*0x118+0x114]=0
 cpu.mem_write(0x3100000,bytes(records))
 for address,value,size in [(0x8266f188,0x3100000,8),(0x8266f190,len(files),8),(0x8266f1b4,0x81,1),(0x8266f1b8,512,4),(0x8266f1bc,8,4),(0x8266f1c0,4096,4),(0x8266f1c4,2048,4),(0x8266f1c8,65536,4),(0x8266f1d4,1,4),(0x8266f26c,1,1)]:cpu.mem_write(address,value.to_bytes(size,'little'))
 for address,value in [(0x8266f1d8,filesystem.fat_sector),(0x8266f1dc,filesystem.fat_sectors),(0x8266f1e0,filesystem.data_sector),(0x8266f1f8,filesystem.cluster_count+2)]:cpu.mem_write(address,struct.pack('<I',value))
 cpu.reg_write(UC_ARM64_REG_SP,0x4fe0000);cpu.reg_write(UC_ARM64_REG_X30,0x4ff0000)
 cpu.emu_start(target(0x8242d680),0x4ff0000,count=5000000)
 assert cpu.reg_read(UC_ARM64_REG_PC)==0x4ff0000 and cpu.reg_read(UC_ARM64_REG_X0)&1
 assert len(writes)==1
 image=bytes(65*512)+writes[0];assert Image(image).files()==files,'WMFS rewrite changed file contents'
 if repeat:
  volume=writes[0]+bytes(len(volume)-len(writes[0]))
  for i in range(len(files)):
   cpu.mem_write(0x3100000+i*0x118+0xf8,bytes(8));cpu.mem_write(0x3100000+i*0x118+0x114,b'\0')
  cpu.reg_write(UC_ARM64_REG_SP,0x4fe0000);cpu.reg_write(UC_ARM64_REG_X30,0x4ff0000)
  cpu.emu_start(target(0x8242d680),0x4ff0000,count=5000000)
  assert cpu.reg_read(UC_ARM64_REG_PC)==0x4ff0000 and cpu.reg_read(UC_ARM64_REG_X0)&1
  assert len(writes)==2
  assert Image(bytes(65*512)+writes[-1]).files()==files,'reloading after compaction changed file contents'
 return writes[0]

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);a=p.parse_args()
 for lazy in [False,True]:
  expected=run(a.reference.read_bytes(),lazy=lazy);actual=run(a.source.read_bytes(),json.loads(a.map.read_text()),lazy);assert expected==actual
 run(a.source.read_bytes(),json.loads(a.map.read_text()),lazy=True,repeat=True)
 print('ARM64 WMFS32 flush: native metadata, cluster chains, file contents, and repeated lazy reload passed.')

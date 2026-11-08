#!/usr/bin/env python3
"""Compare ARM64 rescan preservation of mounted volumes and current device IDs.

Pooka's Free Software License. Disk probes are emulated; no hardware is accessed.
"""
import argparse,json,struct,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect
from unicorn import Uc,UC_ARCH_ARM64,UC_MODE_ARM,UC_HOOK_CODE
from unicorn.arm64_const import *

def run(binary,mapping=None):
 metadata,memory=inspect(binary);assert metadata['cpu']==0x100000c
 cpu=Uc(UC_ARCH_ARM64,UC_MODE_ARM);cpu.mem_map(0,0x5000000);cpu.mem_map(0x82000000,0x8000000);cpu.mem_write(metadata['base'],memory)
 def target(address):return address if mapping is None else mapping.get('_recovered_%x'%address,mapping.get('recovered_%x'%address))
 count,records,current=0x8266ed28,0x82558008,0x8248ab10
 def finish(value=0):cpu.reg_write(UC_ARM64_REG_X0,value);cpu.reg_write(UC_ARM64_REG_PC,cpu.reg_read(UC_ARM64_REG_X30))
 def geometry(c,a,z,u):
  drive=c.reg_read(UC_ARM64_REG_X0)&255;out=c.reg_read(UC_ARM64_REG_X1)
  if drive in drives:c.mem_write(out,struct.pack('<I',100000));finish(1)
  else:finish(0)
 def probe(c,a,z,u):
  drive=c.reg_read(UC_ARM64_REG_X0)&255;assert drive in drives
  i=drives.index(drive);record=bytearray(old[i]);struct.pack_into('<I',record,0,20+i);struct.pack_into('<I',record,96,0)
  n=int.from_bytes(c.mem_read(count,8),'little');c.mem_write(records+n*104,bytes(record));c.mem_write(count,struct.pack('<Q',n+1));finish()
 for address,callback in [(0x8246c934,geometry),(0x8246c9c0,probe)]:
  a=target(address);cpu.hook_add(UC_HOOK_CODE,callback,begin=a,end=a)
 results=[]
 for drives in [[0x80],[0x80,0x81],[0x80,0xff]]:
  old=[]
  for i,drive in enumerate(drives):
   record=bytearray(104);struct.pack_into('<I',record,0,7+i);record[4]=drive;struct.pack_into('<II',record,8,2048+i*4096,4096);struct.pack_into('<I',record,28,i+1);record[33]=i;struct.pack_into('<I',record,88,3);struct.pack_into('<I',record,96,5-i);old.append(bytes(record))
  cpu.mem_write(records,b''.join(old)+bytes(0x6800-len(old)*104));cpu.mem_write(count,struct.pack('<Q',len(old)));cpu.mem_write(current,struct.pack('<I',7));cpu.mem_write(0x8266ed80,bytes(8));cpu.mem_write(0x8266f100,bytes(0x100));cpu.mem_write(0x825f84f0,bytes(0x8c0));cpu.mem_write(0x82670070,bytes(800))
  cpu.reg_write(UC_ARM64_REG_SP,0x4fe0000);cpu.reg_write(UC_ARM64_REG_X30,0x4ff0000);cpu.emu_start(target(0x824217c8),0x4ff0000,count=3000000)
  assert cpu.reg_read(UC_ARM64_REG_PC)==0x4ff0000
  n=int.from_bytes(cpu.mem_read(count,8),'little');data=bytes(cpu.mem_read(records,n*104));selected=int.from_bytes(cpu.mem_read(current,4),'little');volumes=[struct.unpack_from('<I',data,i*104+96)[0]for i in range(n)]
  results.append((cpu.reg_read(UC_ARM64_REG_X0)&255,n,data,selected))
  assert volumes==[5-i for i in range(len(drives))],('mounted filesystem was lost',drives,volumes)
  assert selected==20,('current device ID was not remapped',selected)
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);a=p.parse_args();expected=run(a.reference.read_bytes());actual=run(a.source.read_bytes(),json.loads(a.map.read_text()));assert expected==actual;print('ARM64 storage rescan: three native mounted-volume and device-ID preservation comparisons passed.')

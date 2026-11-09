#!/usr/bin/env python3
"""Compare ARM64 WBPT names and installer swap-table updates with native code.

Pooka's Free Software License. Block I/O is an in-memory test device only.
"""
import argparse,json,struct,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect
from unicorn import Uc,UC_ARCH_ARM64,UC_MODE_ARM,UC_HOOK_CODE
from unicorn.arm64_const import *

def run(binary,mapping=None):
 metadata,memory=inspect(binary);cpu=Uc(UC_ARCH_ARM64,UC_MODE_ARM)
 cpu.mem_map(0,0x5000000);cpu.mem_map(0x82000000,0x8000000);cpu.mem_write(metadata['base'],memory)
 def target(native):return native if mapping is None else mapping.get('_recovered_%x'%native,mapping.get('recovered_%x'%native))
 def finish(value=1):cpu.reg_write(UC_ARM64_REG_X0,value);cpu.reg_write(UC_ARM64_REG_PC,cpu.reg_read(UC_ARM64_REG_X30))
 def call(entry,*args):
  cpu.reg_write(UC_ARM64_REG_SP,0x4fe0000);cpu.reg_write(UC_ARM64_REG_X30,0x4ff0000)
  for reg,arg in zip([UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4],args):cpu.reg_write(reg,arg)
  cpu.emu_start(target(entry),0x4ff0000,count=2000000);assert cpu.reg_read(UC_ARM64_REG_PC)==0x4ff0000
  return cpu.reg_read(UC_ARM64_REG_X0)&255
 def text(pointer):return bytes(cpu.mem_read(pointer,512)).split(b'\0')[0]
 names=[]
 for stored in [b'user data',b'userdata',b'firmware',b'WinterSwap',b'USER DATA',b'other']:
  cpu.mem_write(0x3100000,bytes(16)+stored.ljust(16,b'\0'));cpu.mem_write(0x3101000,b'user data\0')
  names.append(call(0x8246949c,0x3100000,0x3101000))
 assert names==[1,0,0,0,1,0],names
 events=[];header=bytearray(512);base=0
 def read(c,a,z,u):
  assert c.reg_read(UC_ARM64_REG_X0)==0x81 and c.reg_read(UC_ARM64_REG_X1)==base+65 and c.reg_read(UC_ARM64_REG_X3)==512
  c.mem_write(c.reg_read(UC_ARM64_REG_X2),bytes(header));finish()
 def write(c,a,z,u):
  assert c.reg_read(UC_ARM64_REG_X0)==0x81 and c.reg_read(UC_ARM64_REG_X1)==base+65 and c.reg_read(UC_ARM64_REG_X3)==512
  header[:]=c.mem_read(c.reg_read(UC_ARM64_REG_X2),512);events.append(('write',));finish()
 def invalidate(c,a,z,u):events.append(('invalidate',c.reg_read(UC_ARM64_REG_X0),c.reg_read(UC_ARM64_REG_X1),c.reg_read(UC_ARM64_REG_X2)));finish()
 def zero(c,a,z,u):events.append(('zero',c.reg_read(UC_ARM64_REG_X0),c.reg_read(UC_ARM64_REG_X1),c.reg_read(UC_ARM64_REG_X2)));finish()
 def log(c,a,z,u):events.append(('log',text(c.reg_read(UC_ARM64_REG_X0))));finish()
 for entry,callback in [(0x8243843c,read),(0x824393dc,write),(0x8244960c,invalidate),(0x82467c50,zero),(0x8242d468,log),(0x824234a4,log)]:
  a=target(entry);cpu.hook_add(UC_HOOK_CODE,callback,begin=a,end=a)
 results=[]
 for base in [0,73728]:
  for swap in [0,4096,200000]:
   header[:]=bytes(512);struct.pack_into('<4sHH',header,0,b'WBPT',1,4)
   for i,(kind,start,size,label)in enumerate([(1,66,8192,b'firmware'),(1,8258,8192,b'recovery'),(5,16450,73550,b'user data'),(0x50575357,90000,10000,b'WinterSwap')]):
    struct.pack_into('<4I16s',header,32+i*32,kind,start,size,0,label)
   events.clear();cpu.mem_write(0x3102000,bytes(256));status=call(0x82468aa0,0x81,base,100000,swap,0x3102000)
   results.append((status,bytes(header),tuple(events),text(0x3102000)))
   assert status==(swap!=200000),(base,swap,status,events,text(0x3102000))
 return names,results

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);a=p.parse_args()
 expected=run(a.reference.read_bytes());actual=run(a.source.read_bytes(),json.loads(a.map.read_text()));assert expected==actual
 print('ARM64 WBPT: six native name checks and six in-memory installer swap updates passed.')

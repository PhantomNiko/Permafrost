#!/usr/bin/env python3
"""Compare ARM32 desktop owned-file service arguments and output guards.

Pooka's Free Software License. The extended WMAP service is a fixture.
"""
import argparse,struct,tempfile
from pathlib import Path
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args();results=[]
with tempfile.TemporaryDirectory(prefix='permafrost-owned-file-')as temporary:
 for source,path in enumerate([a.reference,a.source]):
  b=bytearray(path.read_bytes());struct.pack_into('<I',b,12,6);tmp=Path(temporary)/str(source);tmp.write_bytes(b);m,_=inspect(b);lib=DLL(tmp,api_base=0x40010800);c=lib.cpu;names={n:lib.base+x-m['base']for x,n in m['symbols']};lib.exports['entry']=names['_recovered_100186a0']if source else lib.base+0x186a0
  c.mem_write(0x40010808,struct.pack('<I',0x264));c.mem_write(0x40010a1c,struct.pack('<I',0x10030));c.mem_write(0x10030,struct.pack('<I',0xe12fff1e));status=[0];events=[]
  def copied(cpu,pc,size,data):
   device,path,out=[cpu.reg_read(r)for r in [UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2]];assert out==0x3002000,('incorrect output pointer',source,hex(out));events.append((device,bytes(cpu.mem_read(path,128)).split(b'\0')[0],out));cpu.mem_write(out,struct.pack('<3I',0x3004000,19,0x574d));cpu.reg_write(UC_ARM_REG_R0,status[0])
  c.hook_add(UC_HOOK_CODE,copied,begin=0x10030,end=0x10030);outputs=[]
  for device in [0,2,0xffffffff]:
   for path in [b'\\Applications\\Test.app\\Contents\\Info.plist',b'\\missing']:
    for value in [0,1]:
     status[0]=value;events.clear();c.mem_write(0x3001000,path+b'\0');c.mem_write(0x3001ff0,b'\xa5'*44);result=lib.call('entry',device,0x3001000,0x3002000,result_bits=32);out=bytes(c.mem_read(0x3001ff0,44));assert out[:16]==out[-16:]==b'\xa5'*16;assert result==value;assert events==[(device,path,0x3002000)];outputs.append((result,out,list(events)))
  events.clear();assert lib.call('entry',2,0x3001000,0,result_bits=32)==0 and not events;results.append(outputs)
assert results[0]==results[1]
print('ARM32 owned-file call: twelve argument/result/output-guard cases and null output match.')

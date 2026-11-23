#!/usr/bin/env python3
"""Compare desktop owned-file service arguments and output guards.

Pooka's Free Software License. The extended WMAP service is a fixture.
"""
import argparse,struct,tempfile
from pathlib import Path
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *
p=argparse.ArgumentParser(description=__doc__);p.add_argument('architecture',choices=['i386','x86_64','armv7','arm64']);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args();results=[];api,entry={'i386':(0x280800,0x152a0),'x86_64':(0x280800,0x147d0),'armv7':(0x40010800,0x186a0),'arm64':(0x82010800,0xb464)}[a.architecture];wide=a.architecture in ['x86_64','arm64'];arm=a.architecture.startswith('arm')
with tempfile.TemporaryDirectory(prefix='permafrost-owned-file-')as temporary:
 for source,path in enumerate([a.reference,a.source]):
  b=bytearray(path.read_bytes());struct.pack_into('<I',b,12,6);tmp=Path(temporary)/str(source);tmp.write_bytes(b);m,_=inspect(b);lib=DLL(tmp,api_base=api);c=lib.cpu;names={n:lib.base+x-m['base']for x,n in m['symbols']};lib.exports['entry']=names['_recovered_%x'%(0x10000000+entry)]if source else lib.base+entry
  c.mem_write(api+8,struct.pack('<I',0x260));c.mem_write(api+0x21c,struct.pack('<I',0x10030));c.mem_write(0x10030,struct.pack('<I',0xd65f03c0 if wide else 0xe12fff1e)if arm else b'\xc3');status=[0];events=[]
  def copied(cpu,pc,size,data):
   device,path,out=(struct.unpack('<3I',cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4,12))if a.architecture=='i386'else[cpu.reg_read(r)for r in ([UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2]if arm and wide else[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2]if arm else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX])]);device&=0xffffffff;assert out==0x3002000,('incorrect output pointer',source,hex(out));events.append((device,bytes(cpu.mem_read(path,128)).split(b'\0')[0],out));cpu.mem_write(out,struct.pack('<3I',0x3004000,19,0x574d));cpu.reg_write(lib.result,status[0])
  c.hook_add(UC_HOOK_CODE,copied,begin=0x10030,end=0x10030);outputs=[]
  def call(device,path,out):
   if a.architecture=='i386'and not source:c.reg_write(UC_X86_REG_ECX,device);c.reg_write(UC_X86_REG_EDX,path);return lib.call('entry',out,result_bits=32)
   return lib.call('entry',device,path,out,result_bits=32)
  for device in [0,2,0xffffffff]:
   for path in [b'\\Applications\\Test.app\\Contents\\Info.plist',b'\\missing']:
    for value in [0,1]:
     status[0]=value;events.clear();c.mem_write(0x3001000,path+b'\0');c.mem_write(0x3001ff0,b'\xa5'*44);result=call(device,0x3001000,0x3002000);out=bytes(c.mem_read(0x3001ff0,44));assert out[:16]==out[-16:]==b'\xa5'*16;assert result==value;assert events==[(device,path,0x3002000)];outputs.append((result,out,list(events)))
  events.clear();assert call(2,0x3001000,0)==0 and not events;results.append(outputs)
assert results[0]==results[1]
print(a.architecture,'owned-file call: twelve argument/result/output-guard cases and null output match.')

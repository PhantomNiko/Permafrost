#!/usr/bin/env python3
"""Compare IA32 variadic boot progress and storage-error entry points.

Pooka's Free Software License. Native kernels are external inputs.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_EIP,UC_X86_REG_EAX,UC_X86_REG_ECX,UC_X86_REG_EDX
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();mapping=json.loads(a.map.read_text());results=[]
formats=[(b'starting driver %s',[0x3006000]),(b'value %08x/%llu',[0xabcdef01,0x89abcdef,0x12345678]),(b'%.3s %d',[0x3006000,0xffffffff]),(b'line\r\n%s\n',[0x3006000]),(b'%s',[0x3007000])]
for native in [True,False]:
 address=lambda x:x if native else mapping['recovered_%x'%x]
 lib=Kernel((a.reference if native else a.source).read_bytes(),{'boot':address(0x20b24a0),'storage':address(0x21052c0),'_ws_errorf':0x4fe0000});c=lib.cpu;events=[];output=[]
 def leave():
  sp=c.reg_read(UC_X86_REG_ESP);pc=int.from_bytes(c.mem_read(sp,4),'little');c.reg_write(UC_X86_REG_ESP,sp+4);c.reg_write(UC_X86_REG_EIP,pc);c.reg_write(UC_X86_REG_EAX,0)
 def line(cpu,pc,size,user):
  sp=c.reg_read(UC_X86_REG_ESP)
  if native:pointer=c.reg_read(UC_X86_REG_ECX);length=c.reg_read(UC_X86_REG_EDX)
  else:pointer,length=struct.unpack('<II',c.mem_read(sp+4,8))
  assert length<1024;events.append(bytes(c.mem_read(pointer,length)));leave()
 pc=address(0x20ecd70);c.hook_add(UC_HOOK_CODE,line,begin=pc,end=pc)
 pc=address(0x2086400);c.hook_add(UC_HOOK_CODE,lambda *args:leave(),begin=pc,end=pc)
 c.mem_write(0x3006000,b'storage~fixture.kext\0');c.mem_write(0x3007000,b'A'*600+b'\0')
 for format,values in formats:
  c.mem_write(0x3000000,format+b'\0')
  for gate in [0,1]:
   events.clear();c.mem_write(0x24a0f88,bytes([gate]));lib.call('boot',0x3000000,*values);output.append(tuple(events))
  for capacity in [0,1,2,8,32,128]:
   c.mem_write(0x3001000,b'\xa5'*160);lib.call('storage',0x3001000,capacity,0x3000000,*values);data=bytes(c.mem_read(0x3001000,160));assert data[max(capacity,1):]==b'\xa5'*(160-max(capacity,1));output.append(data)
  lib.call('storage',0,128,0x3000000,*values)
 results.append(output)
assert results[0]==results[1],[(i,e,s)for i,(e,s)in enumerate(zip(*results))if e!=s][:4]
print('IA32 diagnostics: %d native/source variadic gate, driver-name, integer, truncation, multiline and buffer comparisons passed.'%len(results[0]))

#!/usr/bin/env python3
"""Compare IA32 dependency names, architecture and policy forwarding.

Pooka's Free Software License. Dependency loading is an isolated callback.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ECX,UC_X86_REG_EDX,UC_X86_REG_ESP,UC_X86_REG_EAX,UC_X86_REG_EIP
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args()
mapping=json.loads(a.map.read_text());results=[]
for native in [True,False]:
 address=lambda x:x if native else mapping['recovered_%x'%x]
 lib=Kernel((a.reference if native else a.source).read_bytes(),{'load':address(0x20de8d0),'_ws_errorf':0x4fe0000},native);c=lib.cpu;events=[];answer=[1]
 def resolve(cpu,pc,size,user):
  sp=c.reg_read(UC_X86_REG_ESP)
  args=[c.reg_read(UC_X86_REG_ECX),c.reg_read(UC_X86_REG_EDX)]+list(struct.unpack('<3I',c.mem_read(sp+4,12))) if native else list(struct.unpack('<5I',c.mem_read(sp+4,20)))
  name=bytes(c.mem_read(args[0],241)).split(b'\0')[0];events.append((name,args[1:]))
  c.reg_write(UC_X86_REG_EAX,answer[0]);c.reg_write(UC_X86_REG_EIP,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
 target=address(0x20df8f0);c.hook_add(UC_HOOK_CODE,resolve,begin=target,end=target)
 cases=[]
 for path in [b'Library\\Native\\Fixture.dylib',b'/lib/Fixture.dylib']:
  for cpu in [7,0x1000007,12]:
   for policy in [0,1]:
    for optional in [0,1]:
     for success in [0,1]:
      c.mem_write(0x3000000,bytes(0x26c));c.mem_write(0x300025c,struct.pack('<III',0x3100000,0x3101000,1));c.mem_write(0x3100000,path+b'\0');c.mem_write(0x3101000,bytes([optional]));answer[0]=success
      before=len(events);status=lib.call('load',0x3000000,cpu,policy,0,0,result_bits=8)
      assert len(events)==before+1 and events[-1]==(path,[cpu,policy,0,0])
      assert status==int(bool(success or optional))
      cases.append((status,events[-1]))
 results.append(cases)
assert results[0]==results[1]
print('48 native/source dependency architecture, policy and optional-load cases passed.')

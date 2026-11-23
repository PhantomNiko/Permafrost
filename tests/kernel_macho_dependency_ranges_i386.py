#!/usr/bin/env python3
"""Compare IA32 application dependency-range ownership and context forwarding.

Pooka's Free Software License. Collection and allocation are isolated callbacks.
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
 lib=Kernel((a.reference if native else a.source).read_bytes(),{'ranges':address(0x20df6f0),'_ws_errorf':0x4fe0000},native);c=lib.cpu;events=[];state={}
 def leave(value):
  sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(UC_X86_REG_EAX,value);c.reg_write(UC_X86_REG_EIP,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
 def collect(cpu,pc,size,user):
  sp=c.reg_read(UC_X86_REG_ESP)
  args=[c.reg_read(UC_X86_REG_ECX),c.reg_read(UC_X86_REG_EDX)]+list(struct.unpack('<4I',c.mem_read(sp+4,16))) if native else list(struct.unpack('<6I',c.mem_read(sp+4,24)))
  context,buffer,capacity,count,error,error_size=args;assert context==0x3000000 and error==0 and error_size==0
  state['calls']+=1;events.append(('collect',context,buffer,capacity))
  if state['fail']==state['calls']:leave(0);return
  c.mem_write(count,struct.pack('<I',state['count']))
  if buffer:
   assert capacity==state['count'];c.mem_write(buffer,b'RANGE-RECORD!'*capacity)
  leave(1)
 def allocate(cpu,pc,size,user):
  sp=c.reg_read(UC_X86_REG_ESP);count=int.from_bytes(c.mem_read(sp+4,4),'little');events.append(('allocate',count));leave(0x3400000 if state['allocate'] else 0)
 def release(cpu,pc,size,user):
  sp=c.reg_read(UC_X86_REG_ESP);events.append(('free',int.from_bytes(c.mem_read(sp+4,4),'little')));leave(0)
 for original,callback in [(0x20e1f60,collect),(0x2001430,allocate),(0x2001490,release)]:
  target=address(original);c.hook_add(UC_HOOK_CODE,callback,begin=target,end=target)
 cases=[]
 for count in [0,1,3]:
  for failure in [0,1,2]:
   for allocation in [0,1]:
    state.update(count=count,fail=failure,allocate=allocation,calls=0);events.clear();c.mem_write(0x3100000,b'\xa5'*32);c.mem_write(0x3400000,bytes(64))
    status=lib.call('ranges',0x3000000,0x3100000,0x3100004,0,0,result_bits=8)
    assert bytes(c.mem_read(0x3100008,24))==b'\xa5'*24
    cases.append((status,tuple(events),bytes(c.mem_read(0x3100000,32)),bytes(c.mem_read(0x3400000,64))))
 results.append(cases)
assert results[0]==results[1]
print('18 native/source dependency-range context, allocation, failure and guard cases passed.')

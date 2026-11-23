#!/usr/bin/env python3
"""Check IA32 public graphics startup result and lock release against native code.

Pooka's Free Software License. Platform startup is an isolated callback.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_EAX,UC_X86_REG_EIP,UC_X86_REG_ESP
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();mapping=json.loads(a.map.read_text());results=[]
for native in [True,False]:
 address=lambda x:x if native else mapping['recovered_%x'%x]
 lib=Kernel((a.reference if native else a.source).read_bytes(),{'entry':address(0x20a9680),'_ws_errorf':0x4fe0000});c=lib.cpu;events=[];state={}
 def leave(value):
  sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(UC_X86_REG_EAX,value);c.reg_write(UC_X86_REG_EIP,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
 def checkpoint(cpu,pc,size,user):events.append('checkpoint');leave(0)
 def startup(cpu,pc,size,user):
  assert bytes(c.mem_read(0x2464afc,8))==struct.pack('<II',1,1);events.append('startup');leave(state['value'])
 for original,callback in [(0x2083a40,checkpoint),(0x20a9730,startup)]:
  target=address(original);c.hook_add(UC_HOOK_CODE,callback,begin=target,end=target)
 cases=[]
 for value in [0,1,0x12345678,0xffffffff]:
  state['value']=value;events.clear();c.mem_write(0x2464af8,b'PRE!'+bytes(8)+b'POST');status=lib.call('entry',result_bits=32);guard=bytes(c.mem_read(0x2464af8,16));assert guard==b'PRE!'+bytes(8)+b'POST';cases.append((status,tuple(events),guard))
 results.append(cases)
assert results[0]==results[1];assert [v[0]for v in results[1]]==[0,1,0x12345678,0xffffffff]
print('4 native/source graphics startup results, checkpoint order, held locks and released-lock guards match.')

#!/usr/bin/env python3
"""Compare IA32 executable-probe input forwarding with the native kernel.

Pooka's Free Software License. Parsing is an isolated callback.
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
 lib=Kernel((a.reference if native else a.source).read_bytes(),{'probe':address(0x20d8ef0),'load':address(0x20d99f0),'_ws_errorf':0x4fe0000},native);c=lib.cpu;events=[]
 def parse(cpu,pc,size,user):
  sp=c.reg_read(UC_X86_REG_ESP)
  args=[c.reg_read(UC_X86_REG_ECX),c.reg_read(UC_X86_REG_EDX)]+list(struct.unpack('<6I',c.mem_read(sp+4,24))) if native else list(struct.unpack('<8I',c.mem_read(sp+4,32)))
  events.append((args[:4],bytes(c.mem_read(args[4],0x26c)),args[6:]))
  c.reg_write(UC_X86_REG_EAX,0);c.reg_write(UC_X86_REG_EIP,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
 target=address(0x20dad90);c.hook_add(UC_HOOK_CODE,parse,begin=target,end=target)
 cases=[]
 for entry in ['probe','load']:
  for data,size in [(0x3000000,32),(0x3008000,0x12345),(0,0)]:
   for cpu in [7,0x1000007]:
    for flags in [0,1,0xff]:
     before=len(events);args=(0x3100000,0x3101000,0x3102000,0,0) if entry=='probe' else (0x8000000,0x3100000,0x3101000,0x3102000,0x3103000,0x3104000,0x3105000,0,0)
     status=lib.call(entry,data,size,cpu,flags,*args,result_bits=8)
     assert not status and len(events)==before+1
     observed=events[-1];assert observed[0]==[data,size,cpu,flags] and observed[1]==bytes(0x26c) and observed[2]==[0,0]
     cases.append((status,observed))
 results.append(cases)
assert results[0]==results[1]
print('36 native/source executable probe/load argument and zeroed-context cases passed.')

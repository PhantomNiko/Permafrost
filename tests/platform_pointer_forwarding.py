#!/usr/bin/env python3
"""Compare private platform-driver pointer forwarding with the reference.

Pooka's Free Software License. Kernel callbacks are intercepted.
"""
import argparse,struct
from pathlib import Path
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_RDI
from unicorn.arm_const import UC_ARM_REG_R0
from unicorn.arm64_const import UC_ARM64_REG_X0


def exercise(path,function,global_address,state_offset,native):
 lib=DLL(path);c=lib.cpu;metadata,_=inspect(path.read_bytes());symbols={n:a for a,n in metadata['symbols']+metadata['data_symbols']}
 if native:entry=int(function.rsplit('_',1)[1],16)-0x10000000;state=global_address
 else:entry=symbols['_'+function];state=symbols['_pf_module_state']+state_offset
 lib.exports['forward']=lib.base+entry;state+=lib.base;api=0x2e0000;out=0x2f0000;callback=0x18000;events=[];reply=[0]
 def kernel(c,address,size,user):
  pointer=int.from_bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,4),'little')if lib.cpu_type==7 else c.reg_read(UC_ARM_REG_R0 if lib.cpu_type==12 else UC_ARM64_REG_X0 if lib.cpu_type==0x100000c else UC_X86_REG_RDI)
  assert pointer==out,('forwarded pointer',native,hex(pointer),hex(out));events.append(pointer);c.mem_write(pointer,struct.pack('<8I',1,3,100,200,0,0,32767,32767));c.reg_write(lib.result,reply[0])
 c.mem_write(callback,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in[12,0x100000c]else b'\xc3');c.hook_add(UC_HOOK_CODE,kernel,begin=callback,end=callback)
 results=[]
 for bound in [False,True]:
  for available in [False,True]:
   for output in [False,True]:
    for value in [0,0x12345678]:
     reply[0]=value;events.clear();c.mem_write(state,(api if bound else 0).to_bytes(8 if lib.wide else 4,'little'));c.mem_write(api,bytes(208));c.mem_write(api+36,struct.pack('<I',callback if available else 0));c.mem_write(out,b'\xa5'*40);status=lib.call('forward',out if output else 0,result_bits=32);results.append((status,list(events),bytes(c.mem_read(out,40))))
 return results


if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--function',required=True);p.add_argument('--global-address',required=True,type=lambda s:int(s,0));p.add_argument('--state-offset',required=True,type=lambda s:int(s,0));a=p.parse_args();e=exercise(a.reference,a.function,a.global_address,a.state_offset,True);s=exercise(a.source,a.function,a.global_address,a.state_offset,False);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y][:3];print('Platform pointer forwarding:',len(e),'native binding, output, callback, status and guard comparisons passed.')

#!/usr/bin/env python3
"""Compare i386 program heap sizes, metadata, ownership and allocation failures.

Pooka's Free Software License. The underlying allocation is intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
def exercise(path,addresses,native):
 results=[]
 for symbol in ['_program_heap_malloc','_wm_kernel_program_malloc']:
  for size in [0,1,16,4096,65536,0xffffffeb,0xffffffec,0xffffffff]:
   for fail in [False,True]:
    l=Kernel(path.read_bytes(),addresses,native);c=l.cpu;events=[];c.mem_write(0x214b320,bytes(72));c.mem_write(0x215bc5c,bytes(4))
    def alloc(c,a,z,u):
     sp=c.reg_read(UC_X86_REG_ESP);events.append(int.from_bytes(c.mem_read(sp+4,4),'little'));c.mem_write(0x3200000,b'\xa5'*64);c.reg_write(l.result,0 if fail else 0x3200000);c.reg_write(l.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
    a=addresses['_wm_probe_heap_alloc'];c.hook_add(UC_HOOK_CODE,alloc,begin=a,end=a)
    # The exported kernel service uses cdecl; its private helper uses ECX.
    value=DLL.call(l,symbol,size,result_bits=32)if symbol=='_wm_kernel_program_malloc'else l.call(symbol,size,result_bits=32)
    results.append((value,events,bytes(c.mem_read(0x3200000,64)),bytes(c.mem_read(0x215bc5c,4))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());n={name:p for p,name in m['symbols']};abi=json.loads(a.abi.read_text());mp=json.loads(a.map.read_text());s={v['original']:mp.get('_'+v['symbol'],mp.get(v['symbol']))for v in abi.values()};e=exercise(a.reference,n,True);actual=exercise(a.source,s,False);assert e==actual,[(i,x,y)for i,(x,y)in enumerate(zip(e,actual))if x!=y][:3];print('Program heap:',len(e),'native public/private ABI, sizes, overflow, failures and metadata comparisons passed.')

#!/usr/bin/env python3
"""Compare the public i386 shell launch ABI and inactive-runtime diagnostics.

Pooka's Free Software License. Scheduler preemption is intercepted.
"""
import argparse,json,struct,itertools
from pathlib import Path
from kernel_scalars import Kernel
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
def exercise(path,addresses,native):
 results=[]
 for line,capacity,out in itertools.product([None,b'',b'snowflake --version'],[0,1,8,128],[0,0x3001000]):
  l=Kernel(path.read_bytes(),addresses,native);c=l.cpu;c.mem_write(0x20d9d48,bytes(4));c.mem_write(0x3000000,(line or b'')+b'\0');c.mem_write(0x3001000,b'\xa5'*256)
  def initialize(c,a,z,u):
   sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(l.result,0);c.reg_write(l.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
  a=addresses['_scheduler_preempt_checkpoint'];c.hook_add(UC_HOOK_CODE,initialize,begin=a,end=a)
  status=DLL.call(l,'_wm_kernel_tayga_launch',0x3000000 if line is not None else 0,out,capacity,result_bits=8);results.append((status,bytes(c.mem_read(0x3001000,256))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());n={name:p for p,name in m['symbols']};abi=json.loads(a.abi.read_text());mp=json.loads(a.map.read_text());s={v['original']:mp.get('_'+v['symbol'],mp.get(v['symbol']))for v in abi.values()};e=exercise(a.reference,n,True);actual=exercise(a.source,s,False);assert e==actual,[(i,x,y)for i,(x,y)in enumerate(zip(e,actual))if x!=y][:2];print('Tayga launch:',len(e),'native public ABI, null arguments, capacities, diagnostics and guard comparisons passed.')

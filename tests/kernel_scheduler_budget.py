#!/usr/bin/env python3
"""Compare an idle i386 scheduler's recovered budget and lock behavior.

Pooka's Free Software License. No tasks or hardware are dispatched.
"""
import argparse,json
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_EAX

def exercise(binary,addresses,native):
 lib=Kernel(binary,addresses,native)
 def cpu_index(c,a,z,u):
  sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(UC_X86_REG_EAX,0);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
 lib.cpu.hook_add(UC_HOOK_CODE,cpu_index,begin=addresses['_wm_platform_smp_current_cpu_index'],end=addresses['_wm_platform_smp_current_cpu_index']);results=[]
 for budget in [0,1,32,1000]:
  for busy in [0,1]:
   lib.cpu.mem_write(0x21468f8,bytes(0x6000));lib.cpu.mem_write(0x22452a8,bytes(0x40));lib.cpu.mem_write(0x22452b4,busy.to_bytes(4,'little'));result=lib.call('_scheduler_run_space_burst',budget,result_bits=32);results.append((result,bytes(lib.cpu.mem_read(0x22452b4,8))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native,True);s=exercise(a.source.read_bytes(),source,False);assert e==s,(e,s);print('i386 scheduler: eight native idle-budget and busy-lock comparisons passed.')

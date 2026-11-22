#!/usr/bin/env python3
"""Compare i386 process queue argument and error-buffer boundaries.

Pooka's Free Software License. Uses an unmounted synthetic filesystem.
"""
import argparse,json
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *

def exercise(binary,addresses,native):
 lib=Kernel(binary,addresses,native)
 def no_task(c,a,z,u):
  c.reg_write(lib.result,0);sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
 
 for name in ['_scheduler_preempt_checkpoint','_wm_kernel_tayga_launch']:
  a=addresses[name];lib.cpu.hook_add(UC_HOOK_CODE,no_task,begin=a,end=a)
 results=[]
 for path in [None,b'']:
  for error in [0,0x3001000]:
   lib.cpu.mem_write(0x3000000,(path or b'')+b'\0');lib.cpu.mem_write(0x3001000,b'\xa5'*176);lib.cpu.mem_write(0x3002000,b'\xa5'*16);
   try:status=lib.call('_scheduler_queue_macho_path_ex',0x3000000 if path is not None else 0,0xffffffff,error,0x3002000,result_bits=8)
   except Exception as exc:raise AssertionError((native,path,error,hex(lib.cpu.reg_read(lib.pc))))from exc
   results.append((status,bytes(lib.cpu.mem_read(0x3001000,176)),bytes(lib.cpu.mem_read(0x3002000,16))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native,True);s=exercise(a.source.read_bytes(),source,False);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y];print('i386 process queue: four native null/empty path, device, error-buffer, process-output, and guard comparisons passed.')

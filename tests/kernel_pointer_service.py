#!/usr/bin/env python3
"""Compare x64 public pointer delivery and cached button transitions with native code.

Pooka's Free Software License. The pointer backend and task query are intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *

def exercise(path,addresses,native):
 l=Kernel(path.read_bytes(),addresses,native);assert l.cpu_type==0x1000007;c=l.cpu;sequence=[(1,(1,0,120,240,0,0,800,600)),(1,(1,1,120,240,0,0,800,600)),(0,(0,)*8),(1,(1,0,120,240,0,0,800,600)),(0,(0,)*8),(1,(1,1,200,200,0,0,800,600)),(1,(1,0,200,200,0,0,800,600))];current=[None];events=[];results=[]
 def finish(value):
  sp=c.reg_read(UC_X86_REG_RSP);c.reg_write(l.result,value);c.reg_write(l.pc,int.from_bytes(c.mem_read(sp,8),'little'));c.reg_write(UC_X86_REG_RSP,sp+8)
 def backend(c,a,z,u):
  pointer=c.reg_read(UC_X86_REG_RDI);status,packet=current[0];c.mem_write(pointer,struct.pack('<8I',*packet));events.append(status);finish(status)
 a=addresses['_kernel_driver_pointer_state'];c.hook_add(UC_HOOK_CODE,backend,begin=a,end=a)
 for item in sequence:
  current[0]=item;out=0x3000000;c.mem_write(out,b'\xa5'*48);status=l.call('_wm_kernel_program_pointer_state',out,result_bits=8);results.append((status,bytes(c.mem_read(out,48))))
 return results,events

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference,native,True);s=exercise(a.source,source,False);assert e==s,(e,s);print('Pointer service:',len(e[0]),'native public packet, cached position, press/release and guard comparisons passed.')

#!/usr/bin/env python3
"""Compare i386 task cleanup, allocation ownership, and process references.

Pooka's Free Software License. Allocation and process release are intercepted.
"""
from pathlib import Path
import sys,json,struct,argparse
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
def run(path,addresses,native):
 results=[]
 for owning in [0,1]:
  for active in [0,1]:
   for refs in [0,1,2]:
    l=Kernel(path.read_bytes(),addresses,native);c=l.cpu;task=0x3100000;process=0x3110000;record=bytearray(184);record[0]=1;record[2]=1;record[4]=owning;struct.pack_into('<I',record,16,3);struct.pack_into('<I',record,100,0x3200000);struct.pack_into('<I',record,116,process);c.mem_write(task,bytes(record));p=bytearray(128);p[0]=active;struct.pack_into('<I',p,32,refs);c.mem_write(process,bytes(p));events=[]
    def callback(name):
     def fn(c,a,z,u):
      sp=c.reg_read(UC_X86_REG_ESP);arg=c.reg_read(UC_X86_REG_ECX)if name=='process'and native else int.from_bytes(c.mem_read(sp+4,4),'little');events.append((name,arg));c.reg_write(l.result,0);c.reg_write(l.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
     return fn
    for name,symbol in [('free','_free'),('process','_scheduler_release_address_space')]:
     a=addresses[symbol];c.hook_add(UC_HOOK_CODE,callback(name),begin=a,end=a)
    l.call('_scheduler_release_task',task,result_bits=32);results.append((events,bytes(c.mem_read(task,184)),bytes(c.mem_read(process,128))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args()
 m,_=inspect(a.reference.read_bytes());n={name:p for p,name in m['symbols']};abi=json.loads(a.abi.read_text());mp=json.loads(a.map.read_text());s={v['original']:mp.get('_'+v['symbol'],mp.get(v['symbol']))for v in abi.values()};e=run(a.reference,n,True);actual=run(a.source,s,False);assert e==actual,[(i,x,y)for i,(x,y)in enumerate(zip(e,actual))if x!=y][:2];print('Task release:',len(e),'native task ownership, memory release and process reference comparisons passed.')

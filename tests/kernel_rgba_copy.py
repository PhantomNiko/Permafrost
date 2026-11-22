#!/usr/bin/env python3
"""Compare i386 RGBA copy register arguments, dimensions and allocation failures.

Pooka's Free Software License. The allocator is intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
SYMBOL='__ZN12_GLOBAL__N_122copyRgbaToProgramImageEPKhjjmP27WmBaremetalProgramImageInfo'

def exercise(path,addresses,native):
 results=[]
 cases=[(1,1,4),(3,2,24),(4,7,112),(0,2,0),(2,0,0),(1,1,0),(1,1,3),(1,1,5),(0x40000000,1,0),(0xffffffff,1,0xfffffffc),(0x20000000,2,0)]
 for width,height,size in cases:
  for fail in [False,True]:
   for missing in ['', 'pixels','out']:
    lib=Kernel(path.read_bytes(),addresses,native);c=lib.cpu;events=[];src=0x3000000;out=0x3002000;allocated=0x3100000;data=bytes((i*37+13)&255 for i in range(256));c.mem_write(src,data);c.mem_write(out,b'\xa5'*40);c.mem_write(allocated,b'\xcc'*256)
    def alloc(c,a,z,u):
     sp=c.reg_read(UC_X86_REG_ESP);count=int.from_bytes(c.mem_read(sp+4,4),'little');events.append(count);assert count<=256,count;c.reg_write(lib.result,0 if fail else allocated);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
    a=addresses['_malloc'];c.hook_add(UC_HOOK_CODE,alloc,begin=a,end=a)
    value=lib.call(SYMBOL,0 if missing=='pixels'else src,width,height,size,0 if missing=='out'else out,result_bits=8)
    results.append((value,events,bytes(c.mem_read(out,40)),bytes(c.mem_read(allocated,256))))
 return results

if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference,native,True);s=exercise(a.source,source,False);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y][:3];print('RGBA copy:',len(e),'native register, dimension, overflow, payload, guard and allocation-failure comparisons passed.')

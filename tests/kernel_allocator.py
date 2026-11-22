#!/usr/bin/env python3
"""Compare i386 allocator growth, splitting, coalescing, and payload preservation.

Pooka's Free Software License. The heap is synthetic guest memory.
"""
import argparse,json,random,struct
from pathlib import Path
from kernel_scalars import Kernel
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
def exercise(binary,addresses,native):
 lib=Kernel(binary,addresses,native);c=lib.cpu;heap=0x3000000;length=0x400000
 c.mem_write(heap,struct.pack('<4I',length-16,0,0,1)+bytes(length-16));c.mem_write(0x20df004,struct.pack('<2I',heap,heap))
 def init(c,a,z,u):
  sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
 a=addresses['_wm_probe_heap_init'];c.hook_add(UC_HOOK_CODE,init,begin=a,end=a)
 def call(name,*args):return DLL.call(lib,name,*args,result_bits=32)
 results=[];live={};rng=random.Random(1041)
 operations=[('alloc',0,32),('realloc',0,256),('realloc',0,16),('alloc',1,64),('free',0,0),('realloc',1,8192),('free',1,0)]
 for i in range(800):
  slot=rng.randrange(32);op='free'if rng.randrange(4)==0 else'realloc';size=rng.choice([1,15,16,17,31,32,64,241,272,512,8704,17408,65536]);operations.append((op,slot,size))
 for op,slot,size in operations:
  old,oldsize=live.get(slot,(0,0));pattern=bytes([slot+1])*oldsize
  if old:assert bytes(c.mem_read(old,oldsize))==pattern,('payload',op,slot,oldsize)
  if op=='free':call('_free',old);live.pop(slot,None);pointer=0
  else:
   pointer=call('_malloc',size)if op=='alloc'else call('_realloc',old,size)
   if pointer:
    block_size=int.from_bytes(c.mem_read(pointer-16,4),'little');assert block_size>=size,('undersized block',op,size,block_size)
    if old:assert bytes(c.mem_read(pointer,min(oldsize,size)))==pattern[:min(oldsize,size)],('realloc payload',size)
    c.mem_write(pointer,bytes([slot+1])*size);live[slot]=(pointer,size)
  headers=[];node=heap
  while node:
   assert heap<=node<heap+length and len(headers)<2000,('invalid heap link',hex(node))
   values=struct.unpack('<4I',bytes(c.mem_read(node,16)));headers.append((node,*values));node=values[1]
  results.append((pointer,tuple(headers),bytes(c.mem_read(0x20df004,8))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native,True);s=exercise(a.source.read_bytes(),source,False);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y][:3];print('Allocator:',len(e),'native allocation, in-place growth, relocation, splitting, coalescing, and payload comparisons passed.')

#!/usr/bin/env python3
"""Compare IA32 Mach-O parsing, segment mapping and real module rebases.

Pooka's Free Software License. Binding is isolated; modules are external inputs.
"""
from pathlib import Path
import sys,json,struct,argparse
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import slices
from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);p.add_argument('--module',required=True,type=Path);a=p.parse_args()
ref=a.reference.read_bytes();src=a.source.read_bytes();mapping=json.loads(a.map.read_text());module=slices(a.module.read_bytes())[7];results=[]
for native in [True,False]:
 addr=lambda x:x if native else mapping['recovered_%x'%x]
 lib=Kernel(ref if native else src,{n:addr(x) for n,x in [('parse',0x20dad90),('load',0x20de540),('fix',0x20dea10)]}|{'_ws_errorf':0x4fe0000},native);c=lib.cpu;lib.instruction_limit=100000000
 arena=[0x3800000]
 def leave(v):
  sp=c.reg_read(UC_X86_REG_ESP);ret=int.from_bytes(c.mem_read(sp,4),'little');c.reg_write(UC_X86_REG_ESP,sp+4);c.reg_write(UC_X86_REG_EAX,v);c.reg_write(UC_X86_REG_EIP,ret)
 def malloc(cpu,pc,size,u):
  sp=c.reg_read(UC_X86_REG_ESP);n=int.from_bytes(c.mem_read(sp+4,4),'little');p=arena[0];arena[0]=(p+n+15)&-16;assert arena[0]<0x4000000;(c.mem_write(p,bytes(n)));leave(p)
 for x,hook in [(0x2001430,malloc),(0x2001490,lambda *args:leave(0))]:c.hook_add(UC_HOOK_CODE,hook,begin=addr(x),end=addr(x))
 c.mem_write(0x3000000,module);c.mem_write(0x3200000,bytes(0x300));c.mem_write(0x3300000,bytes(512))
 status=lib.call('parse',0x3000000,len(module),7,0,0x3200000,0x3201000,0x3300000,256);assert status==1,('parse',native)
 ctx=bytes(c.mem_read(0x3200000,0x26c));assert ctx[0xc]==0
 status=lib.call('load',0x3200000,0,0x4000000,0x3300000,256);assert status==1,('load',native)
 pc=addr(0x20e0950);c.hook_add(UC_HOOK_CODE,lambda *args:leave(1),begin=pc,end=pc)

 status=lib.call('fix',0x3200000,0x3300000,256);assert status==1,('fixups',native)
 results.append((bytes(c.mem_read(0x3200000,0x26c)),bytes(c.mem_read(0x3800000,arena[0]-0x3800000)),bytes(c.mem_read(0x4000000,0x200000))))
assert results[0]==results[1],"native/source image mapping or relocations differ"
print('IA32 Mach-O: native/source module context, segment records, loaded bytes and real relocations match.')

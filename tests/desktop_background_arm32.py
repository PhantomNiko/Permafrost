#!/usr/bin/env python3
"""Compare 1.1 ARM32 desktop background scaling and pixel guards.

Pooka's Free Software License. Images and memory services are fixtures.
"""
from pathlib import Path
import struct,sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'));from native import inspect
from dylib import inspect as dynamic
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
import argparse,tempfile
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args()
temporary=tempfile.TemporaryDirectory(prefix='permafrost-desktop-background-');results=[]
for index,path in enumerate([a.reference,a.source]):
 b=bytearray(path.read_bytes());struct.pack_into('<I',b,12,6);tmp=Path(temporary.name)/str(index);tmp.write_bytes(b);meta,_=inspect(b);lib=DLL(tmp,api_base=0x40010800,instruction_limit=300000000);c=lib.cpu;symbols={n:lib.base+a-meta['base']for a,n in meta['symbols']}
 for stub in dynamic(b)['stubs']:
  if stub['name']not in ['_memcmp','_memcpy','_memset','___bzero']:continue
  pc=lib.base+stub['address']-meta['base']
  def memory(cpu,pc,size,name):
   d,s,n=[cpu.reg_read(r)for r in [UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2]];result=d
   if name=='_memcmp':result=(bytes(cpu.mem_read(d,n))>bytes(cpu.mem_read(s,n)))-(bytes(cpu.mem_read(d,n))<bytes(cpu.mem_read(s,n)))
   elif name=='_memcpy':cpu.mem_write(d,bytes(cpu.mem_read(s,n)))
   else:cpu.mem_write(d,bytes([s&255])*n if name=='_memset'else bytes(s))
   cpu.reg_write(UC_ARM_REG_R0,result&0xffffffff)
  c.mem_write(pc,struct.pack('<I',0xe12fff1e));c.hook_add(UC_HOOK_CODE,memory,stub['name'],begin=pc,end=pc)
 if index:lib.exports['initialize']=symbols['_pf_app_initialize'];lib.call('initialize');state=lib.base+next(a for a,n in meta['data_symbols']if n=='_pf_module_state')-meta['base'];end=0x4db60
 else:state=lib.base;end=0
 def get(a,n):return bytes(c.mem_read(state+a-end,n))
 lib.exports['prepare']=symbols['_recovered_1001da24']if index else lib.base+0x1da24
 outputs=[]
 def write(a,data):c.mem_write(state+a-end,data)
 for w,h,iw,ih in [(32,24,17,11),(32,24,11,17),(80,25,17,11),(31,23,31,23),(32,24,171,117),(32,24,111,171),(80,25,170,110),(128,80,1008,630),(128,80,126,79)]:
  picture=bytes(v for y in range(ih)for x in range(iw)for v in [x*7%256,y*13%256,(x+y)*3%256,255])
  c.mem_write(0x3020000,picture);write(0x68890,struct.pack('<Q4I',0x3020000,len(picture),iw,ih,iw*4));write(0x50080,struct.pack('<II',w,h));write(0x53178,struct.pack('<III',w,h,0x3010000));c.mem_write(0x300fff0,b'\xa5'*16+bytes(w*h*4)+b'\xa5'*16)
  lib.call('prepare');pixels=bytes(c.mem_read(0x300fff0,w*h*4+32));assert pixels[:16]==pixels[-16:]==b'\xa5'*16;outputs.append(pixels);
  assert any(pixels[16:-16]),('empty background raster',index,w,h,iw,ih)
 results.append(outputs)
assert results[0]==results[1],next(index for index,(n,s)in enumerate(zip(*results))if n!=s)
temporary.cleanup()
print('Desktop ARM32 background: nine guarded scaling and crop rasters match, including 630-pixel image height.')

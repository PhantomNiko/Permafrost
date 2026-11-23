#!/usr/bin/env python3
"""Compare IA32 desktop text coordinates and clipped TrueType pixels.

Pooka's Free Software License. Font and memory services are fixtures.
"""
from pathlib import Path
import struct,sys,argparse,tempfile
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'));from native import inspect
from dylib import inspect as dynamic
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args();temporary=tempfile.TemporaryDirectory(prefix='permafrost-ia32-text-');results=[]
for index,path in enumerate([a.reference,a.source]):
 b=bytearray(path.read_bytes());struct.pack_into('<I',b,12,6);tmp=Path(temporary.name)/str(index);tmp.write_bytes(b);m,_=inspect(b);lib=DLL(tmp,api_base=0x280800);c=lib.cpu;names={n:lib.base+a-m['base']for a,n in m['symbols']}
 for stub in dynamic(b)['stubs']:
  if stub['name']not in ['_memset','___bzero']:continue
  pc=lib.base+stub['address']-m['base']
  def memory(cpu,pc,size,name):
   d,s,n=struct.unpack('<3I',cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4,12));cpu.mem_write(d,bytes([s&255])*n if name=='_memset'else bytes(s));cpu.reg_write(UC_X86_REG_EAX,d)
  c.mem_write(pc,b'\xc3');c.hook_add(UC_HOOK_CODE,memory,stub['name'],begin=pc,end=pc)
 if index:lib.exports['initialize']=names['_pf_app_initialize'];lib.call('initialize');state=lib.base+next(a for a,n in m['data_symbols']if n=='_pf_module_state')-m['base'];end=0x46a95
 else:state=lib.base;end=0
 def write(offset,data):c.mem_write(state+offset-end,data)
 write(0x635f8,struct.pack('<II',0x3002000,0));write(0x49234,struct.pack('<II',100,80));write(0x4c320,struct.pack('<III',100,80,0x3010000));requests=[]
 def ttf(cpu,pc,size,data):
  args=struct.unpack('<7I',cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4,28));font,text,r,g,b,alpha,out=args;text=bytes(cpu.mem_read(text,256)).split(b'\0')[0];requests.append((font,text,r,g,b,alpha));w=len(text)*6;h=8;ptr=0x3100000;lib.allocs[ptr]=w*h*4;cpu.mem_write(ptr,bytes([r,g,b,alpha])*w*h);cpu.mem_write(out,struct.pack('<Q4I',ptr,w*h*4,w,h,w*4));cpu.reg_write(UC_X86_REG_EAX,1)
 c.mem_write(0x280874,struct.pack('<I',0x10030));c.mem_write(0x10030,b'\xc3');c.hook_add(UC_HOOK_CODE,ttf,begin=0x10030,end=0x10030);lib.exports['draw']=names['_recovered_1001eb50']if index else lib.base+0x1eb50;outputs=[]
 for text,x,y,limit in [(b'ABC',30,20,3),(b'ABC',0,0,3),(b'ABC',95,76,3),(b'ABC',10,10,2)]:
  requests.clear();c.mem_write(0x3001000,text+b'\0');c.mem_write(0x300fff0,b'\xa5'*16+bytes(100*80*4)+b'\xa5'*16)
  if index:lib.call('draw',x,y,0x3001000,limit,0x112233,1)
  else:c.reg_write(UC_X86_REG_ECX,x);c.reg_write(UC_X86_REG_EDX,y);lib.call('draw',0x3001000,limit,0x112233,1)
  pixels=bytes(c.mem_read(0x300fff0,100*80*4+32));assert pixels[:16]==pixels[-16:]==b'\xa5'*16;assert any(pixels[16:-16]);outputs.append((pixels,list(requests)))
 results.append(outputs)
assert results[0]==results[1],[(i,sum(a!=b for a,b in zip(n[0],s[0])))for i,(n,s)in enumerate(zip(*results))if n!=s]
temporary.cleanup()
print('IA32 text: four TTF calls, register coordinates, clipping and guarded rasters match')

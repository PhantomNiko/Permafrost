#!/usr/bin/env python3
"""Compare candidate desktop allocation, font calls and synthetic text pixels.

Pooka's Free Software License. WMAP services and glyphs are controlled fixtures.
"""
import argparse,struct,sys,tempfile
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect
from dylib import inspect as dynamic
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args()

def exercise(path,source,folder):
 blob=bytearray(path.read_bytes());struct.pack_into('<I',blob,12,6);normalized=folder/('source'if source else'reference');normalized.write_bytes(blob)
 meta,_=inspect(blob);assert meta['cpu']==0x1000007;lib=DLL(normalized,api_base=0x280800);c=lib.cpu
 functions={n:lib.base+address-meta['base']for address,n in meta['symbols']}
 for stub in dynamic(blob)['stubs']:
  if stub['name']not in ['_memset','___bzero']:continue
  pc=lib.base+stub['address']-meta['base']
  def zero_or_fill(cpu,pc,size,name):
   pointer=cpu.reg_read(UC_X86_REG_RDI);count=cpu.reg_read(UC_X86_REG_RSI if name=='___bzero'else UC_X86_REG_RDX);value=0 if name=='___bzero'else cpu.reg_read(UC_X86_REG_RSI)&255
   assert count<0x1000000;c.mem_write(pointer,bytes([value])*count);cpu.reg_write(UC_X86_REG_RAX,pointer)
  c.mem_write(pc,b'\xc3');c.hook_add(UC_HOOK_CODE,zero_or_fill,stub['name'],begin=pc,end=pc)
 if source:
  state=lib.base+next(address for address,name in meta['data_symbols']if name=='_pf_module_state')-meta['base'];end=0x4562c
  lib.exports['initialize']=functions['_pf_app_initialize'];lib.call('initialize')
 else:state=lib.base;end=0
 def write(offset,data):c.mem_write(state+offset-end,data)
 def entry(name,address):lib.exports[name]=functions['_recovered_%x'%address]if source else lib.base+address-0x10000000
 entry('resize',0x1000f550);entry('font',0x10008ce0);entry('draw',0x1001db70)
 outputs=[]
 for w,h in [(1280,800),(800,600),(0,20),(1,1),(64,48)]:
  status=lib.call('resize',w,h,result_bits=8);width,height,pointer=struct.unpack('<IIQ',c.mem_read(state+0x4c1a0-end,16));outputs.append((status,width,height,lib.allocs.get(pointer),len(lib.allocs)))
 opened=[]
 def open_font(cpu,pc,size,on_device):
  device=cpu.reg_read(UC_X86_REG_RDI)if on_device else 0xffffffff;pointer=cpu.reg_read(UC_X86_REG_RSI if on_device else UC_X86_REG_RDI);bits=cpu.reg_read(UC_X86_REG_XMM0)&0xffffffff
  opened.append((device,bytes(cpu.mem_read(pointer,64)).split(b'\0')[0],bits));cpu.reg_write(UC_X86_REG_RAX,0x3002000)
 for offset,pc,on_device in [(0xe4,0x10030,True),(0x68,0x10040,False)]:
  c.mem_write(0x280800+offset,struct.pack('<I',pc));c.mem_write(pc,b'\xc3');c.hook_add(UC_HOOK_CODE,open_font,on_device,begin=pc,end=pc)
 for size in [412,0xa0]:
  c.mem_write(0x280808,struct.pack('<I',size))
  for text in [b'Test.ttf',b'Test.otf',b'TEST.TTF']:
   write(0x63730,bytes(16));c.mem_write(0x3001000,text+b'\0');lib.call('font',0x3001000,7)
 assert len(opened)==6 and all(request[-1]==0x41800000 for request in opened),opened
 outputs.append(opened);c.mem_write(0x280808,struct.pack('<I',412))
 write(0x63730,bytes(8));write(0x63738,struct.pack('<QQHBBBB',0x3002000,0x3002000,96,8,8,1,32));c.mem_write(0x3002000,bytes([0x81,0x42,0x24,0x18,0x18,0x24,0x42,0x81])*96)
 write(0x490a0,struct.pack('<II',100,80));write(0x4c1a0,struct.pack('<IIQ',100,80,0x3010000))
 for text,x,y,limit,scale in [(b'ABC',30,20,3,1),(b'A\tB\nC',5,3,0xffffffff,1),(b'ABC',0,0,2,2),(b'ABC',95,76,3,1),(b'ABC',10,10,0,1),(b'ABC',10,10,3,0)]:
  c.mem_write(0x3001000,text+b'\0');c.mem_write(0x300fff0,b'\xa5'*16+bytes(100*80*4)+b'\xa5'*16);lib.call('draw',x,y,0x3001000,limit,0x112233,scale)
  pixels=bytes(c.mem_read(0x300fff0,100*80*4+32));assert pixels[:16]==pixels[-16:]==b'\xa5'*16;outputs.append(pixels)
 return outputs
with tempfile.TemporaryDirectory(prefix='permafrost-desktop-')as folder:
 native=exercise(a.reference,False,Path(folder));source=exercise(a.source,True,Path(folder))
assert native==source,next(index for index,(n,s)in enumerate(zip(native,source))if n!=s)
print('Desktop x64: 5 framebuffer allocations, 6 float font calls and 6 guarded text rasters match.')

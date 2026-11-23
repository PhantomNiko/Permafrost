#!/usr/bin/env python3
"""Compare kernel TrueType rendering, cache reuse, colors and heap boundaries.

Pooka's Free Software License. Generated fixtures contain no external font data.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from ttf_library import fixture,floating
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_RSP,UC_X86_REG_RIP,UC_X86_REG_RAX,UC_X86_REG_RDI,UC_X86_REG_RSI
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_PC,UC_ARM_REG_LR
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_PC,UC_ARM64_REG_LR

class FontKernel:
 def __init__(self,binary,mapping=None,names=None):
  metadata,_=inspect(binary);assert metadata['cpu']in(12,0x1000007,0x100000c)
  self.arm32=metadata['cpu']==12;self.arm64=metadata['cpu']==0x100000c;self.arm=self.arm32 or self.arm64
  names=names or {name:address for address,name in metadata['symbols']}
  def address(name):return names[name] if mapping is None else mapping[('_'if self.arm else'')+'recovered_%x'%names[name]]
  exports={name:address(name) for name in ['__Z23wm_ttf_font_load_memoryPKvmf','__Z18wm_ttf_font_renderPvPKciiid','__Z16wm_ttf_font_freePv','__Z19wm_ttf_font_metricsPvPKcP16WmTtfTextMetrics','__Z18wm_ttf_font_resizePvf']}
  self.library=Kernel(binary,dict(exports,_ws_errorf=0x4fe0000));self.library.instruction_limit=1000000000 if self.arm else 100000000
  self.cpu=self.library.cpu;self.arena=0x3800000;self.allocations={}
  self.argument0=UC_ARM_REG_R0 if self.arm32 else UC_ARM64_REG_X0 if self.arm64 else UC_X86_REG_RDI
  self.argument1=UC_ARM_REG_R1 if self.arm32 else UC_ARM64_REG_X1 if self.arm64 else UC_X86_REG_RSI
  for name,hook in [('_malloc',self.malloc),('_free',self.free),('_realloc',self.realloc)]:
   pc=address(name);self.cpu.hook_add(UC_HOOK_CODE,hook,begin=pc,end=pc)
 def leave(self,value=0):
  if self.arm:
   c=self.cpu;c.reg_write(UC_ARM64_REG_PC if self.arm64 else UC_ARM_REG_PC,c.reg_read(UC_ARM64_REG_LR if self.arm64 else UC_ARM_REG_LR));c.reg_write(self.argument0,value);return
  c=self.cpu;sp=c.reg_read(UC_X86_REG_RSP);c.reg_write(UC_X86_REG_RIP,int.from_bytes(c.mem_read(sp,8),'little'));c.reg_write(UC_X86_REG_RSP,sp+8);c.reg_write(UC_X86_REG_RAX,value)
 def verify(self):
  for pointer,length in self.allocations.items():assert bytes(self.cpu.mem_read(pointer+length,32))==b'\xa5'*32,('allocation canary',hex(pointer),length)
 def allocate(self,length):
  pointer=self.arena;self.arena=(pointer+max(length,1)+47)&-16
  assert self.arena<0x4f00000,('allocation size',length)
  self.cpu.mem_write(pointer,bytes(length)+b'\xa5'*32);self.allocations[pointer]=length;return pointer
 def malloc(self,c,pc,size,user):self.verify();self.leave(self.allocate(c.reg_read(self.argument0)))
 def free(self,c,pc,size,user):
  self.verify();pointer=c.reg_read(self.argument0)
  if pointer:assert pointer in self.allocations,('invalid free',hex(pointer));del self.allocations[pointer]
  self.leave()
 def realloc(self,c,pc,size,user):
  self.verify();pointer,length=c.reg_read(self.argument0),c.reg_read(self.argument1);result=self.allocate(length)
  if pointer:
   assert pointer in self.allocations,('invalid realloc',hex(pointer))
   c.mem_write(result,bytes(c.mem_read(pointer,min(self.allocations.pop(pointer),length))))
  self.leave(result)
 def load(self,font,size):
  self.cpu.mem_write(0x3000000,font);bits=floating(self.library,size)
  handle=self.library.call('__Z23wm_ttf_font_load_memoryPKvmf',0x3000000,len(font),*((bits,)if self.arm32 else()),result_bits=32 if self.arm32 else 64);assert handle
  self.verify();return handle
 def render(self,handle,text,colors,opacity):
  self.cpu.mem_write(0x3001000,text+b'\0');bits=floating(self.library,opacity,True)
  bitmap=self.library.call('__Z18wm_ttf_font_renderPvPKciiid',handle,0x3001000,*colors,*((bits&0xffffffff,bits>>32)if self.arm32 else()),result_bits=32 if self.arm32 else 64);self.verify();assert bitmap
  width,height,pointer=struct.unpack('<III'if self.arm32 else'<IIQ',bytes(self.cpu.mem_read(bitmap,12 if self.arm32 else 16)));assert width*height<1024*1024
  return width,height,bytes(self.cpu.mem_read(pointer,width*height*4))
 def resize(self,handle,size):
  bits=floating(self.library,size)
  self.library.call('__Z18wm_ttf_font_resizePvf',handle,*((bits,)if self.arm32 else()))
  self.verify()
 def metrics(self,handle,text):
  self.cpu.mem_write(0x3001000,text+b'\0');self.cpu.mem_write(0x3002000,b'\xa5'*64)
  status=self.library.call('__Z19wm_ttf_font_metricsPvPKcP16WmTtfTextMetrics',handle,0x3001000,0x3002010)
  self.verify();assert bytes(self.cpu.mem_read(0x3002000,16))==b'\xa5'*16
  assert bytes(self.cpu.mem_read(0x3002030,16))==b'\xa5'*16
  return status,bytes(self.cpu.mem_read(0x3002010,32))

def main():
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',required=True,type=Path);p.add_argument('--font',type=Path);p.add_argument('--text',action='append',default=[])
 a=p.parse_args();reference=a.reference.read_bytes();source=a.source.read_bytes();m=json.loads(a.map.read_text());metadata,_=inspect(reference)
 # Source kernels retain original symbol addresses in their compatibility table.
 names={n:x for x,n in metadata['symbols']}
 count=0
 fonts=[fixture(False),fixture(True)]+([a.font.read_bytes()] if a.font else [])
 for font in fonts:
  for size in [12,24,40]:
   libraries=[FontKernel(reference),FontKernel(source,m,names)];handles=[lib.load(font,size)for lib in libraries]
   for text in [b'A',b'AAAA',b'ABCD',b'A\nA',b'',b'?',b'A']+[text.encode('utf-8')for text in a.text]:
    metrics=[lib.metrics(handle,text)for lib,handle in zip(libraries,handles)]
    assert metrics[0]==metrics[1],('font metrics',size,text,[struct.unpack('<8i',x[1])for x in metrics])
    for colors,opacity in [((0,0,0),255),((21,82,173),192)]:
     results=[lib.render(handle,text,colors,opacity)for lib,handle in zip(libraries,handles)]
     assert results[0]==results[1],('font raster',count,size,text,colors,opacity,[r[:2]for r in results])
     count+=1
   for lib,handle in zip(libraries,handles):lib.library.call('__Z16wm_ttf_font_freePv',handle);lib.verify()
 # Rotate through more sizes than the font's cache slots, then tear down the
 # populated handle. This exercises the same lifetime as a desktop session.
 libraries=[FontKernel(reference),FontKernel(source,m,names)]
 handles=[lib.load(fonts[-1],12)for lib in libraries]
 for size in [12,16,20,24,40,16]:
  for lib,handle in zip(libraries,handles):lib.resize(handle,size)
  results=[lib.render(handle,b'ABCD',(21,82,173),192)for lib,handle in zip(libraries,handles)]
  assert results[0]==results[1],('font cache rotation',size)
 for lib,handle in zip(libraries,handles):lib.library.call('__Z16wm_ttf_font_freePv',handle);lib.verify()
 print('Kernel TrueType: %d native/source RGBA rasters and %d metric records, cache rotation, teardown and heap canaries match.'%(count,count//2))

if __name__=='__main__':main()

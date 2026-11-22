#!/usr/bin/env python3
"""Compare NVMe register transport and DMA queue allocation against native code.

Pooka's Free Software License. All hardware and allocation services are intercepted.
"""
import argparse,struct
from pathlib import Path
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *
NAMES=['_nvme_reg_read32','_nvme_reg_write32','_nvme_queue_alloc']
def run(path,native_addresses,native):
 lib=DLL(path);c=lib.cpu;m,_=inspect(path.read_bytes());symbols={n:p+lib.base for p,n in m['symbols']};events=[];results=[];word=8 if lib.wide else 4
 for name,a in native_addresses.items():lib.exports[name]=symbols.get(name,symbols.get('_recovered_%x'%(0x10000000+a)))
 def args(n):
  if lib.cpu_type==7:return list(struct.unpack('<'+'I'*n,bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,4*n))))
  regs=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8];values=[c.reg_read(r)for r in regs[:n]]
  if n>len(regs):values+=list(struct.unpack('<'+'I'*(n-len(regs)),bytes(c.mem_read(c.reg_read(UC_ARM_REG_SP),4*(n-len(regs))))))
  return values
 def call(name,*values):
  if not(native and lib.cpu_type==7):return lib.call(name,*values,result_bits=32)
  sp=0x4fe0000;c.reg_write(UC_X86_REG_ECX,values[0]);c.reg_write(UC_X86_REG_EDX,values[1]);c.reg_write(UC_X86_REG_ESP,sp);c.mem_write(sp,struct.pack('<'+'I'*(len(values)-1),lib.stop,*values[2:]));c.emu_start(lib.exports[name],lib.stop,count=lib.instruction_limit);assert c.reg_read(lib.pc)==lib.stop;return c.reg_read(lib.result)
 mode={'alloc':True,'dma':True}
 def hook(slot):
  def callback(c,a,z,u):
   if slot==13:
    values=args(1);events.append((slot,tuple(values)));value=0x2f2103 if mode['alloc']else 0
   elif slot==28:
    values=args(5 if lib.cpu_type==7 else 4);events.append((slot,tuple(values)));value=int(mode['dma']);out=values[3]
    if value and 0x2f0000<=out<0x2f2000:
     if lib.cpu_type!=7:c.mem_write(out,struct.pack('<Q',0x112345000))
     else:c.mem_write(out,struct.pack('<I',0x12345000));c.mem_write(values[4],struct.pack('<I',1))
   else:
    values=args(3);events.append((slot,tuple(values)));value=1
    if slot in [26,47]and 0x2f0000<=values[2]<0x2f2000:c.mem_write(values[2],struct.pack('<I',0x89abcdef))
   c.reg_write(lib.result,value)
  return callback
 for slot in [13,26,27,28,47,48]:
  a=0x18000+slot*16;c.mem_write(a,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in[12,0x100000c]else b'\xc3');c.hook_add(UC_HOOK_CODE,hook(slot),begin=a,end=a)
 api,controller,out=0x2e0000,0x2f0000,0x2f1000
 for size in [0,107,108,192,196,216]:
  for wide_services in [False,True]:
   for base in ([0,0x100000,0x100100000]if lib.wide else[0,0x100000,0xfffff000]):
    for offset in [0,0x14,0xffffffff]:
     for write in [False,True]:
      c.mem_write(api,struct.pack('<3I',0x54584b57,1000000,size)+bytes(216-12));c.mem_write(controller,bytes(64));c.mem_write(controller+word,base.to_bytes(word,'little'));c.mem_write(out,b'\xa5'*32)
      for slot in [26,27]+([47,48]if wide_services else[]):c.mem_write(api+slot*4,struct.pack('<I',0x18000+slot*16))
      events.clear();status=call('_nvme_reg_write32'if write else'_nvme_reg_read32',api,controller,offset,0x12345678 if write else out);results.append((None if write else status,tuple(events),bytes(c.mem_read(out,32))))
 for allocate,dma in [(False,True),(True,False),(True,True)]:
  mode.update(alloc=allocate,dma=dma);c.mem_write(api,struct.pack('<3I',0x54584b57,1000000,216)+bytes(216-12))
  for slot in [13,28]:c.mem_write(api+slot*4,struct.pack('<I',0x18000+slot*16))
  c.mem_write(controller,b'\x5a'*80);c.mem_write(0x2f3000,b'\xa5'*2048);events.clear();status=call('_nvme_queue_alloc',api,controller,16,64,0x110000);results.append((status,tuple(events),bytes(c.mem_read(controller,80)),bytes(c.mem_read(0x2f3000,2048))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());addresses={n:p for p,n in m['symbols']if n in NAMES};assert len(addresses)==3;e=run(a.reference,addresses,True);s=run(a.source,addresses,False);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y][:8];print('NVMe transport:',len(e),'native register, API fallback, offset, queue, DMA, failure, and guard comparisons passed.')

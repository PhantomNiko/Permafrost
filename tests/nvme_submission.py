#!/usr/bin/env python3
"""Compare NVMe doorbells, completion IDs, phase changes and DMA boundaries.

Pooka's Free Software License. Hardware services are intercepted.
"""
import argparse,struct
from pathlib import Path
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *

def run(path,address,native):
 lib=DLL(path);c=lib.cpu;meta,_=inspect(path.read_bytes());symbols={n:a+lib.base for a,n in meta['symbols']};lib.exports['_nvme_submit_and_wait']=symbols.get('_nvme_submit_and_wait',symbols.get('_recovered_%x'%(0x10000000+address)));events=[];results=[];wide=lib.wide;word=8 if wide else 4
 def args(n):
  if lib.cpu_type==7:return list(struct.unpack('<'+'I'*n,c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,4*n)))
  regs=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX];return[c.reg_read(r)for r in regs[:n]]
 def hook(slot):
  def callback(c,a,z,u):events.append((slot,tuple(args(0 if slot==30 else 1 if slot==12 else 3))));c.reg_write(lib.result,1)
  return callback
 for slot in [12,27,29,30,48]:
  a=0x18000+slot*16;c.mem_write(a,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in[12,0x100000c]else b'\xc3');c.hook_add(UC_HOOK_CODE,hook(slot),begin=a,end=a)
 api,sq,cq,ring=0x2e0000,0x2f0000,0x2f1000,0x2f2000
 for size in [16,120,124,196,216]:
  for head in [0,1]:
   for status,mismatch in [(0,False),(1,False),(0,True)]:
    c.mem_write(api,struct.pack('<3I',0x54584b57,1000000,size)+bytes(216-12))
    for slot in [12,27,29,30,48]:c.mem_write(api+slot*4,struct.pack('<I',0x18000+slot*16))
    for p,entry_size,doorbell in [(sq,64,0x110000),(cq,16,0x110004)]:
     record=bytearray(b'\xa5'*80);record[:word]=ring.to_bytes(word,'little')
     if wide:struct.pack_into('<5I',record,16,2,entry_size,head,head,1);struct.pack_into('<Q',record,40,doorbell)
     else:struct.pack_into('<6I',record,12,2,entry_size,head,head,1,doorbell)
     c.mem_write(p,bytes(record))
    c.mem_write(ring,b'\xa5'*64);struct.pack_into('<I',temp:=bytearray(4),0,(1<<16)|(status<<17)|(6 if mismatch else 7));c.mem_write(ring+head*16+12,bytes(temp))
    if mismatch:c.mem_write(ring+(1-head)*16+12,struct.pack('<I',((0 if head else 1)<<16)|7))
    events.clear()
    if native and lib.cpu_type==7:
     sp=0x4fe0000;c.reg_write(UC_X86_REG_ECX,api);c.reg_write(UC_X86_REG_EDX,sq);c.reg_write(UC_X86_REG_ESP,sp);c.mem_write(sp,struct.pack('<3I',lib.stop,cq,7));c.emu_start(lib.exports['_nvme_submit_and_wait'],lib.stop,count=lib.instruction_limit);assert c.reg_read(lib.pc)==lib.stop;value=c.reg_read(lib.result)&255
    else:value=lib.call('_nvme_submit_and_wait',api,sq,cq,7,result_bits=8)
    results.append((value,tuple(events),bytes(c.mem_read(sq,80)),bytes(c.mem_read(cq,80)),bytes(c.mem_read(ring,64))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());address=next(p for p,n in m['symbols']if n=='_nvme_submit_and_wait');e=run(a.reference,address,True);s=run(a.source,address,False);assert e==s,[(i,x[:2],y[:2])for i,(x,y)in enumerate(zip(e,s))if x!=y][:4];print('NVMe submission:',len(e),'native completion, command-ID, error, ring-wrap, doorbell, DMA and guard comparisons passed.')

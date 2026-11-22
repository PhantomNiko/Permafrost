#!/usr/bin/env python3
"""Compare Snowflake variadic output through its fwrite boundary.

Pooka's Free Software License. Guest file writes are intercepted in memory.
"""
import argparse,struct
from pathlib import Path
from desktop_calendar import load
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *

def exercise(reference,source,library,folder):
 metadata,memory=inspect(reference.read_bytes());native={n:a for a,n in metadata['symbols']};sm,_=inspect(source.read_bytes());symbols={n:a for a,n in sm['symbols']};libs=load(reference,source,folder,library);events=[]
 for index,lib in enumerate(libs):
  if not index and lib.cpu_type==12:lib.cpu.mem_write(0x1000,memory[0x1000:])
  if index:lib.exports['initialize']=lib.base+symbols['_pf_app_initialize'];lib.call('initialize')
  def mapped(name):return lib.base+(symbols['_recovered_%x'%(native[name]-metadata['base']+0x10000000)]if index else native[name])
  for name in ['printf','fprintf']:lib.exports[name]=mapped('_'+name)
  calls=[];events.append(calls)
  def write(c,a,z,u,lib=lib,calls=calls):
   if lib.cpu_type==7:pointer,size,count,stream=struct.unpack('<4I',bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,16)))
   else:
    registers=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX];pointer,size,count,stream=[c.reg_read(r)for r in registers]
   assert size*count<=4096;calls.append((bytes(c.mem_read(pointer,size*count)),stream==0x2e0000));c.reg_write(lib.result,count)
   if lib.cpu_type in [12,0x100000c]:c.reg_write(lib.pc,c.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30))
   else:
    spreg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP;word=8 if lib.wide else 4;sp=c.reg_read(spreg);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,word),'little'));c.reg_write(spreg,sp+word)
  addresses=[mapped('_fwrite')]
  if not index and lib.cpu_type in [7,12]:addresses.append(native['_fwrite'])
  for address in addresses:lib.cpu.hook_add(UC_HOOK_CODE,write,begin=address,end=address)
 cases=[(b'hello\n',()),(b'%s %d %x\n',(0x2e2000,(-17)&0xffffffff,0xbeef)),(b'%08x|%u|%c',(42,0xffffffff,65)),(b'%.3s:%5d',(0x2e2000,7))]
 for name in ['printf','fprintf']:
  for fmt,values in cases:
   results=[]
   for lib,calls in zip(libs,events):
    calls.clear();lib.cpu.mem_write(0x2e1000,fmt+b'\0');lib.cpu.mem_write(0x2e2000,b'world\0');fixed=[0x2e1000]if name=='printf'else[0x2e0000,0x2e1000]
    if lib.cpu_type==0x100000c:
     # Darwin ARM64 packs variadic values on the stack, after fixed registers.
     lib.cpu.mem_write(0x4fe0000,struct.pack('<'+'Q'*len(values),*values));status=lib.call(name,*fixed,result_bits=32)
    else:status=lib.call(name,*fixed,*values,result_bits=32)
    results.append((status,tuple(calls)))
   assert results[0]==results[1],(name,fmt,results)
 print('Snowflake stdio: eight native printf/fprintf formatting and fwrite comparisons passed.')
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
